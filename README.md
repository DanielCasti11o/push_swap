# push_swap
Algoritmo de ordenacion de datos en C

# Pasos a seguir
# 1 // CHECKER DE ARGUMENTOS
Lo primero que se debería hacer para empezar este proyecto, yo diría que es empezar haciendo los checkers de argumentos, ya que tenemos que tener en cuenta que los argumentos que le pasaremos a la función deben tener ciertos parametros,  los cuales son:

- Hay que comprobar que cadaa uno de los argumentos es un número
- También debemos tener en cuenta que los argumentos no deben ser los mismos (esto quiere decir que no pueden haber numeros repetidos en los argumentos).

# 2 // MOVIMIENTOS PARA APLICARLOS EN EL ALGORITMO
Estos son los argumentos, que nos indican en el subject:
- sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb.

  
  ![image](https://github.com/user-attachments/assets/3145ff47-45ac-458e-9c13-36ec4531eaf5)

# 3 y 4 // FINDS Y ALGORITMO DE ORDENACION DE NÚMEROS

-- OK, ¿que son los "finds"?
Sencillo, los finds es lo que buscaremos para poder optimizar el trabajo del algoritmo, ¿que buscaremos?.
Buscaremos:
- El número mínimo dentro del arreglo. (MIN)
- El número máximo dentro del arreglo. (MAX)
- El número del centro del arreglo. (MEDIANA)
Pero que pasa a la hora de buscar esa "mediana", pues que es importante para encontrarla tener nuestro algoritmo de ordenación el cual escogí el Q_SORT.
# // Q_SORT \\
Ok, nosotros para poder usar el q_sort necesitaremos proporcionar:
- El arreglo a ordenar.
- El número de elementos del arreglo.
- El tamaño de cada elemento.
- Una funcion de comparación que definirá el criterio de ordenación.

