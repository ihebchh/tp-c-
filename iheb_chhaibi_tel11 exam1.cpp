//////////iheb chhaibi tel 11

#include <stdio.h>
#include<string.h>
typedef struct { char nom[32];char cap[32];int sup;int pop;char monnai[32];}pays;
typedef char chaine[30]; 
/////ajout d un pays

int ajout (pays t[],int *n)
{if (*n<150)
{printf ("donner le nom du pays  " );
scanf("%s",&t[*n].nom);
printf ("donner la capitale  " );
scanf("%s",&t[*n].cap);
printf ("donner la superficie en km2" );
scanf("%d",&t[*n].sup);
printf ("donner la population  " );
scanf("%d",&t[*n].pop);
printf ("donner la monnai " );
scanf("%s",&t[*n].monnai);

}
(*n)++;
printf("ajout avec succee!!!!!\n");
printf("_____________________________\n");
}
//
void afficher(pays t[],int n)
{int i;
char nom [16];
printf("donner la capitale ");
scanf("%s",&nom);
for(i=0;i<=n;i++)
if((strcmp(t[i].cap,nom)==0) )
printf("nom:%s \t superficie:%d \t population :%d \n",t[i].nom,t[i].sup,t[i].pop);
printf("_____________________________\n");
}
void calcul(pays t[],int n)
{int s,i;
s=0;
for(i=0;i<n;i++)
s+=t[i].pop;
printf("la population totale est %d ",s);
printf("_____________________________\n");
}
void densite (pays t[],int n)
{int i;
float d;
for(i=0;i<n;i++)
d=(t[i].pop)/(t[i].sup);
printf("la densite est %f\n",d);
}
void modifier(pays t[],int n)
{int  i;
char nom[32];
printf("donner le nom du pays a modifier\n  ");
scanf("%s",&nom);
i=0;
while ((i<=n)&&(strcmp(t[i].nom,nom)==0) )
i++;
if(i<=n)
{printf("donner le nv monnai\n ");
scanf("%s",&t[i].monnai);
printf("modification terminee!!!\n");
printf("_____________________________\n");
}
else printf(" pays introuvable\n");
printf("_____________________________\n");

}
void sauvgarde(pays t[],int n)
{FILE *f;
f=fopen("devoir.bin","w");
if (f!=NULL)
{fwrite(t,sizeof(pays),n,f);
fclose(f);
}
}
	
int main ()
{pays t[150];
int n,choix;
n==0;
do
{printf("__________________________________________________________________\n");
printf("___________________________________________________________________\n\n\n");
printf("***************chhaibi iheb tel 11  ********************\n");
printf("1 pour ajouter un pays\n ");
printf("2 pour afficher les infos d un pays\n ");
printf("3 pour afficher la population totale de lafrique\n  ");
printf("4 pour afficher les densitees\n");
printf("5 pour modifier la monnai\n");
printf("6 pour sauvgarder dans un fichier \n");
printf("7 pour quitter\n");
printf("faites votre choix\n ");
printf("********************************************************************************************")
scanf("%d",&choix);
switch (choix){
	case(1):ajout(t,&n);
	break;
	case(2):afficher(t,n);
	break;
	case(3):calcul(t,n);
	break;
	case(4):densite (t,n);
	break;
	
	case(5):modifier(t,n);
	break;
	case(6):sauvgarde(t, n);
	printf("sauvgard terminee ");
	break;
		
}

}
while(choix!=7);
}

