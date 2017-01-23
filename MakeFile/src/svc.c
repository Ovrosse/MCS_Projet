//
//  svc.c
//  
//
//  Created by Fouquemberg François on 05/12/2016.
//
//EN parallele lance :      netstat -f inet -anp TCP



#include "soc_cst.h"



void deroute(int sig){
    switch(sig){
            int status;
        case SIGCHLD:
            wait(&status);
            break;
            
    }
}

void dialogueCLT(){pause();}


int main(){
    
    int se,sd; //socket ecoute et socket de dialogue
    struct sockaddr_in moi,clt; //spécialisation de la structure générique struct sockaddr
    int clt_len,pid;
    
    
    struct sigaction new;
    new.sa_handler = deroute;
    new.sa_flags = SA_RESTART;
    CHECK(sigemptyset(&new.sa_mask),"___");
    CHECK(sigaction(SIGCHLD,&new,NULL),"");
    
    
    
    //création de socket écoute
    //CHECK(se=socket(AF_INET,SOCK_STREAM,TCP),"PB"); //TCP = 0
    CHECK(se=socket(AF_INET,SOCK_STREAM,0),"PB");
    
    //Préparation adr du svc (serveur)
    moi.sin_family = AF_INET;
    moi.sin_addr.s_addr = inet_addr(ADDR_IP); //INADDR_ANY
    moi.sin_port = htons(SVC_PORT);
    memset(&moi.sin_zero,0,8);
    
    //association se <-> addr
    CHECK(bind(se,(struct sockaddr*)&moi,(socklen_t) sizeof(moi)),"PB");
    
    CHECK(listen(se,5),"PB");
    
    
    while(1){
        clt_len = sizeof(clt);
        CHECK(sd=accept(se,(struct sockaddr*)&clt,(socklen_t *)&clt_len),"Erreur de l'acceptation");
        CHECK(pid=fork(),"PB");
        if(pid==0){
            //FILS : donc Processus de service
            close(se);
            dialogueCLT();
            close(sd);
            exit(0);
        }
        close(sd);
    }
    close(se);
    exit(0);
    
    
    //pause();
    //return 0;
    
    
}























