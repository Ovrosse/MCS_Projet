//
//  clt.c
//  
//
//  Created by Fouquemberg François on 05/12/2016.
//
//

#include "soc_cst.h"


void dialogueSVC(){pause();}


int main(int c, char** v){
    int s;
    struct sockaddr_in svc;
    
    
    
    
    if(c<3){
        printf("usage : %s ADR_IP PORT\n",v[0]);
        exit(-1);
    }
    
    svc.sin_family = AF_INET;
    svc.sin_addr.s_addr = inet_addr(v[1]);
    svc.sin_port = htons(atoi(v[2]));
    memset(&svc.sin_zero,0,8);
    CHECK(s=socket(AF_INET,SOCK_STREAM,0),"___");
    CHECK(connect(s,(struct sockaddr*)&svc,sizeof(svc)),"PB");
    dialogueSVC();
    close(s);
    exit(0);
    
    
    
}











