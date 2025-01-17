# PUSH_SWAP 42 [Arrays] // SIN TERMINAR

Algoritmo de ordenacion de datos en C

# | Primero que nada mis STRUCT |

ok te explico mi estructura para que la comprendas mejor

typedef struct s_stacks
{

	int	*content;  // Número
 
	int	index;
 
	int	post_init;
}
	t_stacks;

index = será  la posición del entero en un arreglo ordenado.

post_init = posicion inicial de los enteros que nos pasan con un orden aleatorio 

-------------------------------------------------------------------------------

typedef struct s_pile
{

	t_stacks	*st_a;  // stack o pila a
	t_stacks	*st_b; // stack o pila b
	int			ia;
	int			ib;
}	t_pile;

ia = número de elementos en el stack a.

ib = número de elementos en el stack b.


###############################################################################################

----------------
# Pasos a seguir
----------------
# 1 // CHECKER DE ARGUMENTOS // PARSEO
Lo primero que se debería hacer para empezar este proyecto, yo diría que es empezar haciendo los checkers de argumentos, ya que tenemos que tener en cuenta que los argumentos que le pasaremos a la función deben tener ciertos parametros,  los cuales son:

- Hay que comprobar que cadaa uno de los argumentos es un número
- Deberás también, comprobar que el argumento este dentro del rango de INT_MIN y INT_MAX.
- 
oooooooooooo---> void	checkargs(int argc, char **argv); <---oooooooooooooooo


###############################################################################################


- También debemos tener en cuenta que los argumentos no deben ser los mismos (esto quiere decir que no pueden haber numeros repetidos en los argumentos).

# 2 // MOVIMIENTOS PARA APLICARLOS EN EL ALGORITMO
Estos son los argumentos, que nos indican en el subject:
- sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb.

  
  ![image](https://github.com/user-attachments/assets/3145ff47-45ac-458e-9c13-36ec4531eaf5)

# 3 // ALGORITMO DE ORDENACION SENCILLO PARA HALLAR LOS INDEX
Cuando nos referimos a los "index", nos referimos a la posicion de cada valor o entero proporcionado en argumentos aleatorios en su arreglo ordenado.

# EJ:

Pos_init // Posición inicial ---------------------->  [0]  [1]  [2]

ARGUMENTOS --------------------------------------->   1 __ 7 __ 3

Index // Posicion en un arreglo ordenado -->  [0]  [2]  [1]

En este caso tienes opciones sencillas como:
# Bubble sort
Este algoritmo lo que hace es comparar el entero int[0] con el int[1], [2], [3], [...] y despues int[1] con int[2], [3], [...] y así consecutivamente...


Yo, usé:
# Insertion sort
Insertion lo que hace es mover hacia delante todos los elementos que sean mayores a el que estoy parado, ejemplo si i=3, int[i] = 4; Entonces el arreglo desordenado será:

int [5, 6, 7, 4];
Entonces lo que pasará es: guardaremos int[i] = KEY; = 4.

- [i - 1] > KEY?, si entonces int[i - 1] = 7 ---(i - 1 + 1)-> int [i] = 7.

después i = i-1;

y lo mismo:

- [i - 1] > KEY?, si entonces int[i - 1] = 6 ---(i - 1 + 1)-> int [i] = 6.

again :D

- [i - 1] > KEY?, si entonces int[i - 1] = 5 ---(i - 1 + 1)-> int [i] = 5.

y ahora por ultimo como llegamos a la primera posicion que es int [0] = 5, no podemos [i - 1]. Por lo tanto, int[0] = KEY.

QUEDARÁ ASI = [4, 5, 6, 7].

Y de esta manera podremos saber el INDEX, que es la posicion de los numeros en el arreglo ordenado y de esta manera poder aplicar el K-sort.
