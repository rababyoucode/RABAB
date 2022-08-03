#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int choix,lait,sucre;
    float  prix ;
    char ch[10],l[10],s[10];

    do{
        printf("Bienvenu!\nveuillez choisir votre boisson\n");
        printf("*****\n");
        printf("pour choisir un cafe saisir 1\n");
        printf("pour choisir un Chocholat saisir 2\n");
        printf("pour choisir un The saisir 3\n");
        printf("pour choisir un Soda saisir 4\n");
        printf("*****\n");
        scanf("%d", &choix);

}   while (choix>4||choix<1);

        if (choix <= 3){

            do{ printf("boisson supplimentaire\n");
                printf("1 : avec lait\n0 : sans lait\n");
                scanf("%d",&lait);
            }while (lait<0||lait>1);

            switch (lait){

                     case 1 :  strcpy(l,"avec lait");
                            prix = 1;
                            break;
                     case 0 : strcpy(l,"sans lait");
                            prix = 0 ;
                            break;
                     default  : printf("votre choix est introuvable");

                     }

              do {
                        printf("dose du sucre\n");
                        printf("0 : non sucree\n1 : sucree\n2 : tres sucree\n");
                        scanf("%d",&sucre);

              }while (sucre<0||sucre>2);

              switch (sucre){

                              case 0 : strcpy(s,"non sucree");
                                       prix = prix+ 0;
                                       break;
                              case 1 : strcpy(s,"sucre");
                                       prix = prix + 0,25;
                                       break;
                              case 2 : strcpy(s,"tres sucree");
                                       prix = prix + 0,5;
                                       break;
                             default  : printf("votre choix est introuvable");

                             }

         }

        switch(choix)
{
            case 1 : strcpy(ch,"cafe");
                     prix = 2 + prix ;
                     break;
            case 2 : strcpy(ch,"the");
                     prix = prix + 2  ;
                     break;
            case 3 : strcpy(ch,"chocolat");
                     prix = prix + 2,5 ;
                     break;
            case 4 : strcpy(ch,"soda");
                     prix  = prix + 3 ;
                    break;
            default  : printf("votre choix est introuvable");

       }

       printf("votre %s est %s %s est pret\n",ch,s,l);

       printf("vous devez payer %.2f",prix);


return 0;
}
