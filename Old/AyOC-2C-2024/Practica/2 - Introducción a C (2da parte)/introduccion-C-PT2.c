// Definamos el molde
/*
struct Estudiante{
    char nombre[50];
    int edad;
    float promedio;
};

int main{
    //Declaramos una variable de ese tipo
    struct Estudiante alumno1;

    // Accedemos a los capos con el punto (.)
    alumno1.edad = 21;
    alumno1.promedio = 8.5;

    // alumno1.nombre = "Juan"; // ¡Error! No se puede asignar a un array de esta manera
}
*/

/*
typedef struct {
    int x;
    int y;
} Punto;

int main(){
 Punto p1 = {10, 20}; // Inicialización directa
 printf("Coordena X: %d\n", p1.x);
 printf("Coordena Y: %d\n", p1.y);
}

*/

/*
#define NAME_LEN 50

typedef struct {
    int elo;
    char name[NAME_LEN + 1];
    int ranking;
} player_t;

player_t player1 = {2800, "Magnus Carlsen", 1};
player_t player2 = {2700, "Fabiano Caruana", 2};
player_t player3 = {.name = "Hikaru Nakamura", .ranking = 3, .elo = 2600};//Forma alternativa


// OPERACIONES:
int main() {
    player_t magnus = {2800, "Magnus Carlsen", 1};
    player_t faustino;

    printf("Elo: %d\n", magnus.elo);
    printf("Name: %s\n", magnus.name);
    printf("Ranking: %d\n", magnus.ranking);

    magnus.elo = 2700;
    magnus.ranking--;

    faustino = magnus; // copia de estructura
    
    return 0;
}


//Como argumentos y valores de retorno
player_t get_player(void){
    player_t player = {3000, "Bobby Fischer", 1};
    return player;
}

void print_player(player_t player){
    printf("Elo: %d\n", player.elo);
    printf("Name: %s\n", player.name); 
    printf("Ranking: %d\n", player.ranking);
}
*/

/*
// Array de estructuras
typedef struct {
    char* pais;
    int code;
} dials_code_t;

dials_code_t country_codes[] = {
    {"Argentina", 54},
    {"Brasil", 55},
    {"Chile", 56},
    {"Uruguay", 598}
};

printf("Codigos para Argentina: %d\n", country_codes[0].code);

dials_code country_codes[100] = {
    [0] = {"Argentina", 54},
    [1] = {"Brasil", 55},
    [2] = {"Chile", 56},
    [3].pais = "Uruguay", [3].code = 598,
    // ... el resto se inicializa en 0
};
*/

/*
struct alumno{
    char* nombre;  //8
    char comision; //1
    int dni;       // 4
};

struct alumno2{
    char comision;  //1
    char* nombre;   //8
    int dni;        //4 
};

struct alumno3{
   char* nombre;   //8
   int dni;        //4
   char comision;  //1
} __atributte__((packed));
*/
/*
// MEMORIA DINAMICA
//
#include <stdint.h>
uint16_t *secuencia(uint16_t n){
    uint16_t arr* = malloc(n* sizeof(uint16_t));
    for(uint16_t i = 0; i<n; i++){
        arr[i] = i;
    }
    return arr;
}

int main(){
    uint16_t n = 10;
    uint16_t *arr = secuencia(n);
    for(uint16_t i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    free(arr);
}
*/
/*
// type.h
typedef enum e_type {
 TypeFAT32 = 0,
 TypeEXT4 = 1,
 TypeNTFS = 2
} type_t;

fat32_t* new_fat32();
ext4_t* new_ext4();
ntfs_t* new_ntfs();
fat32_t* copy_fat32(fat32_t* file);
ext4_t* copy_ext4(ext4_t* file);
ntfs_t* copy_ntfs(ntfs_t* file);
void rm_fat32(fat32_t* file);
void rm_ext4(ext4_t* file);
void rm_ntfs(ntfs_t* file);
*/