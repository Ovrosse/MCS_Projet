//
//  dialogue.c
//  
//
//  Created by Fouquemberg François on 05/12/2016.
//
//

#include "soc_cst.h"



void dialogueCLT(){
    /*int nb;
    char buff[MAX_BUF];
    
    struct requete req;
    struct reponse rep;
    while(1){
        CHECK(nb=read(sd,buff,MAX_BUF),"___");
        
        //si on veut crypter c'est ICI
        
        str2Req(buff,&req);
        traiter(req,&rep);
        memset(buff,0,MAX_BUF);
        rep2Str(rep,buff);
        CHECK(write(sd,buff,strlen(buff)+1),"___");
        if(FIN) break;
    }
    */
    pause();
}

void dialogueSVC(){
    /*int nb;
    char buff[MAX_BUF];
    
    struct requete req;
    struct reponse rep;
    while(1){
        CHECK(nb=read(sd,buff,MAX_BUF),"___");
        
        //si on veut crypter c'est ICI
        
        str2Rep(buff,&req);
        traiter(req,&rep);
        memset(buff,0,MAX_BUF);
        req2Str(rep,buff);
        CHECK(write(sd,buff,strlen(buff)+1),"___");
        if(FIN) break;
    }
     */
    pause();
}



void traiter(){
    switch(req.id){
        case 100 :
            traiter 100;
            break;
        case 200:
            traiter 200;
            break;
    }
}

