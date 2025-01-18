// Ecrire un programme C complet (donc avec un main) qui lit une chaîne de caractères sur l'entrée standard (avec scanf), et affiche "Bonjour <string>" sur la sortie standard, <string> représentant la string lue.
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);
    printf("Bonjour %s\n",str);
    
    
    return 0;
}

//Complétez la fonction pour qu'elle mette dans la chaîne dest une version tout en majuscules de la chaîne  src.
void upper(char* dest, char* src){
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        if (src[i] >= 'a' && src[i] <= 'z') {
            dest[i] = src[i] - ('a' - 'A');
        } else {
            dest[i] = src[i];
        }
    }
    dest[i] = '\0';
    
}

//Comparaison de tailles de chaînes
int strlencmp(char* a, char* b){
    int taille_a = strlen(a);
    int taille_b = strlen(b);

    if (taille_a < taille_b) {
        return -1;
    } else if (taille_a > taille_b) {
        return 1;
    } else {
        return 0;   // Les deux chaînes ont la même longueur
    }
}

//Inversion de chaine
void reverse(char* str){
    int taille = strlen(str);
 
    for (int i = 0, a = taille - 1; i < a; i++, a--){
        char ch = str[i];
        str[i] = str[a];
        str[a] = ch;
    }
}

//Multiplication de chaîne
void strmult(char* dest, char* src, int N){

    strcpy(dest,"\0");
    for (int i=0; i<N ;i++){
        strcat(dest,src);
    }
    
}

//Complétez la fonction pour qu'elle retourne 1 si le premier mot passé en paramètre est avant le second mot passé en paramètre dans le dictionnaire, et 0 sinon.
int isBefore(char* s1, char* s2){
   int a= strcasecmp(s1,s2);
   if(a<0){
       return 1;
   }else{
      return 0; 
   }
   } 

//Complétez la fonction pour qu'elle retourne le nombre de mots contenu dans src.
int wordcount(char* src){
    char str[100]= " ";  // copie 
    char delim[] = " ";
    strcpy(str, src);
    int compteur = 0;
    
    char* seul = strtok(str, delim);

    while (seul!= NULL) {
        compteur++;
        seul = strtok(NULL, delim);
    }

    return compteur;
}

//Complétez la fonction pour qu'elle capitalise sur place la chaine passée en paramètre.
void capitalize(char* str){
if (str[0] != '\0') {
        if (islower(str[0])) {
            str[0] = toupper(str[0]);
        }
    // pour tous les autres char 
    for (int i = 1; str[i] != '\0'; ++i) {
        if (isupper(str[i])&& isalpha(str[i - 1])) {
           str[i] = tolower(str[i]);
        } else if (islower(str[i]) && !isalpha(str[i - 1])) { //isalpha verifie caractere = lettre  
            str[i] = toupper(str[i]);
        }
    }
}
}

//Ecrire un programme qui lit deux chaines de caractères sur l'entrée standard, correspondant à un prénom et un nom.
#include <ctype.h> //pour tolower
#include <string.h> // pour strlen
int main() {
    char prenom[11];
    char nom[11];
    scanf("%s", prenom);
    scanf("%s", nom);
     // verifier le prenom
    for (int i = 0; prenom[i] != '\0'; i++) {
        if (!isalpha(prenom[i])) {
            printf("\"%s\" is not a valid firstname\n",prenom);
            break;
        }
    }
     // verifier le nom
    for (int i = 0; nom[i] != '\0'; i++) {
        if (!isalpha(nom[i])) {
            printf("\"%s\" is not a valid lastname\n",nom);
            break;
        }
    }
    for (int i = 0; nom[i] != '\0'; i++) {
        nom[i] = tolower(nom[i]);
    }
    printf("%.7s%c\n", nom, tolower(prenom[0]));
}
