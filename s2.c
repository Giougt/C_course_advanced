//Définir une structure Point, qui contient 2 champs x et y, de type float.
typedef struct {
    float x;
    float y;
    
} Point;

//Vous avez à votre disposition une structure Point, qui contient deux champs x et y de type float.
Point p = {X, Y};

//Déclarez un Point s
float X=p1.x+p2.x;
float Y=p1.y+p2.y;

Point s = {X, Y};

//Déclarez un Point p, et initialisez ses champs x et y en les lisant successivement dans l'entrée standard.
float x;
float  y;
scanf("%f", &x);
scanf("%f", &y);

Point p = { x,  y};

//Déclarez un Point p, et initialisez ses champs x et y en les lisant successivement dans l'entrée standard.
float x;
float  y;
scanf("%f", &x);
scanf("%f", &y);
Point p = { x,  y};

//On vous fournit un tableau de Point points, de taille N.
float x;
float  y;
Point B = {x, y};

 for (int i = 0; i < N; ++i) {
        B.x =B.x + points[i].x;
        B.y = B.y+ points[i].y;
    }
    
    B.x = B.x / N;
    B.y = B.y / N;

//Ecrire une fonction opposite, qui prend en paramètre 1 Point , retourne un Point
Point opposite(Point a) {
    Point resultat;
    resultat.x = -a.x;
    resultat.y = -a.y;
    return resultat;
}

//un champ name, qui est un tableau de 50 char ,un champ price, qui est un float
typedef struct {
    char name[50];
    float price;
} Item;

//un champ name, de type char[50] ,un champ price, de type float
printf("%s (%.2f)\n", x.name, x.price);

//un champ name, de type char[50] ,un champ price, de type float
Item x;
scanf("%s", &x.name);
scanf("%f", &x.price);
