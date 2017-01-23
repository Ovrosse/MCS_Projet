//
//  soc_cst.h
//  
//
//  Created by Fouquemberg François on 05/12/2016.
//
//

#ifndef soc_cst_h
#define soc_cst_h


#endif /* soc_cst_h */


/*--------------------------------*/
/*------------INCLUDE--------------*/
/*--------------------------------*/
#include <unistd.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <arpa/inet.h>
#include <signal.h>
/*--------------------------------*/
/*--------------------------------*/





/*--------------------------------*/
/*------------DEFINE--------------*/
/*--------------------------------*/
#define CHECK(sts,msg) if((sts)==-1)\
        {perror(msg); exit(-1);}

#define ADDR_IP "0.0.0.0"

#define SVC_PORT 3000 //on fixe la valeur (on l'utilise mais on ne la réserve pas)
//on va modifier le fichier /etc/services (pour plus d'info faire un "more")

#define MAX_BUF 100
/*--------------------------------*/
/*--------------------------------*/




/*--------------------------------*/
/*----------STRUCTURES------------*/
/*--------------------------------*/
typedef struct requete{
   
}requete;

typedef struct reponse{
    
}reponse;

/*typedef struct sigaction{
    int sa;
}sigaction;*/
/*--------------------------------*/
/*--------------------------------*/




/*--------------------------------*/
/*----------PROTOTYPES------------*/
/*--------------------------------*/
void dialogueCLT();
void dialogueSVC();
void str2Req(char[] ,struct requete*);
void rep2Str(struct reponse,char[]);
void str2Rep(char[],struct requete*);
void req2Str(struct reponse,char[]);

int envoyerMessage(int, String,int);
int demandeCreationGroupe(int, String);
int demandeAjoutGroupe(int, int);
int demandeQuitterGroupe(int, int);

//int distribuerMessage(String, int);
void listerGroupes();
int creationGroupe(int, String, int);
int ajoutGroupe(int, int);
int quitterGroupe(int, int);
/*--------------------------------*/
/*--------------------------------*/






