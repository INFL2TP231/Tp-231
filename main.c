#include <stdio.h>
#include <stdlib.h>
#define max 100

int l,c;
 void saisirmat( int mat[][max]){
     int i,j;

    printf("Entrez les elements de la matrice\n\n");
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("element [%d][%d] :", i+1, j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    }

    void affmat(int mat[][max], int l, int c){
        int i,j;
    printf("matrice :\n ");
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            printf("[%d]",mat[i][j]);

        }  printf("\n");
    }
    }

void somemat(){
int mat1[max][max],  mat2[max][max],  mat3[max][max];
int k, h;
printf("Entrez la taille en ligne des matrice\n\n");
scanf("%d",&l);
printf("Entrez la taille en colone des matrice\n\n");
scanf("%d",&c);
printf("Entrez matrice 1\n\n");
saisirmat(mat1);
printf("Entrez la matrice 2\n\n"),
saisirmat(mat2);
for(k=0; k<l; k++){
        for(h=0; h<c; h++){
            mat3[k][h] = mat1[k][h] + mat2[k][h];

        }
}    affmat(mat3, l,c);}

void produitmat(){
int mat1[max][max],  mat2[max][max],  mat3[max][max];
int k, h;
printf("Entrez la taille en ligne des matrice\n\n");
scanf("%d",&l);
printf("Entrez la taille en colone des matrice\n\n");
scanf("%d",&c);
printf("Entrez matrice 1\n\n");
saisirmat(mat1);
printf("Entrez la matrice 2\n\n"),
saisirmat(mat2);
for(k=0; k<l; k++){
        for(h=0; h<c; h++){
            mat3[k][h] = mat1[k][h] * mat2[k][h];

        }
}    affmat(mat3, l,c);}

  void inverser(){
    int i,n;

    printf("entre taille\n\n");

    scanf("%d",&n);
int tab[n];
int t[n];

    printf("entre les elements du tableau\n\n");
    for(i=0; i<n; i++){
        scanf("%d",&tab[i]);

    }
    printf("affiche tableau\n");
    for(i= 0; i<n; i++){

        printf("%d", tab[i]);
    }
    printf("tableau iverser\n\n");
   int j=0;
    for(i=n-1; i>=0; i--){
        t[j] = tab[i];
        j++;
    }
   for(i= 0; i<n; i++){

        printf("%d\n", t[i]);
    }}


void triertableau()
{int min,m, j, i, temp;
int n;
int milieu1;
int med1;
     int milieu2;
     float med ;
    printf("entre la taille du tableau\n");

          scanf("%d",&n);
int t[n];
   printf("entre les valeurs dans ton tableau\n");

      for(i=0; i<n; i++){

         scanf("%d",&t[i]);
                        }

      for(i = 1; i<=n; i++){
             j = i-1;

            while ( (t[j]>t[j+1]) && (j>=0)){

                    temp = t[j+1];
                    t[j+1]= t[j];
                    t[j] = temp;
                    j--;}}
if(n%2==0){
      milieu1 = t[n/2-1];
      milieu2 = t[n/2];
      med = (milieu1+milieu2)/2.0f;
     printf(" le median de ce tableau est 1: %.2f\n",med);
}else{
int med1 = t[n/2];
printf(" le median de ce tableau est 2: %d\n",med1);
}
}
#define m 10
int w;
void saisirtab(int tab1[m],int w ){
int i;

for(i=0; i<w; i++){
    printf("element %d:",i);
    scanf("%d",&tab1[i]);}
}
void afftab(int tab[m],int w){

int i;
printf(" tableau:\n");
for(i=0; i<w; i++){
    printf("%d",tab[i]);
}printf("\n");}

void prodtab(){
int tabl3[m],tabl1[m], tabl2[m],k;
printf("Entrer la taille des vecteur\n\n");
scanf("%d",&w);
printf("Entrer les donnees  du vecteur 1\n\n");
saisirtab(tabl1,w);
printf("Entrer les donnees  du vecteur 2\n\n");
saisirtab(tabl2, w);
for(k =0; k<w; k++){

 tabl3[k] = tabl1[k]*tabl2[k];
}
afftab(tabl3,w);
}
int o;
void recher(){
    int trouve =0;
    int tableau[m],el, u ;
    printf("entrez la taille du tableau\n\n");
      scanf("%d",&o);
   saisirtab(tableau,o);
   printf("\n");
printf("entrer le nombre rechercher:\n\n");
       scanf("%d",&el);


    for(u=0; u<o; u++){
        if(tableau[u]==el){

            printf("%d, se trouve dans ce tableau il est a la position %d",el , u);
        }
    }
}
void testtrier(){
int table[m], taille,i, order;
saisirtab(taille,table);
printf("entre lordre: 1 pour croissant, -1 pour decroissant\n\n");
scanf("%d",&order);
if( order == -1){
for(i=0; i<taille; i++){

    if(table[i]>table[i+1] )break;
       printf("il n'est pas trier dans l'ordre croissant mais il est trier dans l'ordere decroissant\n\n");
    }
}else if(order==1){
 for(i=0; i<taille; i++){

    if(table[i]<table[i+1] )break;
    printf("il n'est pas trier dans l'ordre decroissant mais il est crier dans l'ordre croissant\n\n");
 }

}}


void matvecteur(){

int mat4[max][max], tables[max];

int k, h;
do{
printf("Entrez la taille en ligne des matrice\n\n");
scanf("%d",&l);
printf("Entrez la taille en colone des matrice\n\n");
scanf("%d",&c);
printf("Entrez matrice 1\n\n");
saisirmat(mat4);
printf("Entrer la taille des vecteur\n\n");
scanf("%d",&w);}while(l != w);


}
int main()
{int val;
void bienvenue()
    {
       char *texte1="BIENVENUE !!";
        printf("\n\n\n\n\n\t\t\t\t\t");
       while(*texte1)
    {
      printf("\033[1;35m");
      putchar(*texte1);
      fflush(stdout);
      usleep(100000);
      texte1++;
    }
    printf("\n\n\n\t\t\t\t\t");
   }

    system("clear");
    bienvenue();
    sleep(3);
    system("clear");

do{
     printf("CHOIX 1: SOMME DE MATRICE\n");
 printf("CHOIX 2:PRODUIT MATRICE\n");
  printf("CHOIX 3:RECCHERCHE DUN ELEMENT DANS UN TABLEAU\n");
   printf("CHOIX 4:VERIFIER SI UN TABLEAU EST TRIER\n");
    printf("CHOIX 5:LE MEDIAN DUN TABLEAU\n");
     printf("CHOIX 6:INVERSER UN TABLEAU\n");
      printf("CHOIX 7:PRODUIT VECTORIEL\n");
       printf("CHOIX 8:PRODUIT VECTEUR MATRICE\n");
       scanf("%d",&val);

       switch(val){

   case 1:
       system("clear");
                printf("\033[1;33m");
   {

    produitmat();

    }break;
    case 2:system("clear");
                printf("\033[1;33m");
        {

         produitmat();
    }break;
    case 3:system("clear");
                printf("\033[1;33m");
        {recher();
       } break;
        case 4:system("clear");
                printf("\033[1;33m");
                {testtrier();
                }break;
                case 5:system("clear");
                printf("\033[1;33m");
               {

                triertableau();}break;
                case 6:system("clear");
                printf("\033[1;33m");
                {inverser();
                }break;
                case 7: system("clear");
                printf("\033[1;33m");
               {

                prodtab();
                }break;
                case 8:system("clear");
                printf("\033[1;33m");
                {matvecteur();
                }break;case 9:
            	system("clear");
                printf("\033[1;36m");
                exit(0);
            default:
            	system("clear");
                printf("\033[1;32m");
            	printf("Choix invalide\n");}


    } while(1);




    return 0;
}
