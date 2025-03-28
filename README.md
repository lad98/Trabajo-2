# Trabajo-2

En este repositorio se encuentran los códigos de C++ y Python. La función de estos códigos es que el usuario pueda ingreasar una cantidad de vertices y caras para poder construir una figura.

## Explicación de las opciones del menú

El menú consta de cuatro opciones:

1. **Entrada de los vértices:** Aqui se le pide al usuario la cantidad de vértices que desea digitar, y con el el programa hace una lista con estas coordenadas.
2. **Entrada cara de las figuras:** Aqui teniendo como referencia los vértices ingresados previamente el usuario indica como desea unirlos, guardando asi esta información en otra lista.
3. **Ver la figura:** Aqui se muestran todos los datos guardados tanto los vértices como las caras.
4. **Salida:** Con este se le da fin al programa saliendo definitivamente de la lista de opciones.
   
## Explicación del código

El código se basa en construir arreglos para hacer operaciones con estos y asi guardar información, para poder hacer esto se necesitaban en Python llamar las diversas funciones que tienen(map, list, .split, . array...etc) mientras que en C++ tocaba hacer estas funciones desde cero usando loops tales como el FOR.

La otra base estructural del código es la lista dinámica que en el caso de C++ se manejo con un loop de DO-WHILE, por su parte Python se realizó con un input que consistia en oprimir la tecla ENTER.Esto con el fin de simepre volver al menú principal al terminar cada acción.

Algo que hay que tener en cuenta para ambos lenguajes en el caso de este código es que como se tiene un menu cuyas acciones son dependientes de las otras opciones, hay que declarar las listas a usar al inicio haciendolas globales.
## Como ejecuatar el código
### C++

Para abrir el archivo en C++ se puede copiar el código a VisualStudioCode, en donde guardas el archivo como .cpp y se abre la terminal del computador, cabe aclarar que para esto se debe tener previamente instalado g++ que es el compilador de este lenguaje, entonces ya en la terminal se busca el archivo, se abre g++ y se le da el archivo y este automáticamente corre. 
### Python 

Como se trabajó en Googlecolab y se importo a este repositorio solo se le da click en la parte de arriba en abrir con Colab y desde alli se redirige a esta sitio en donde se puede ver y probar el código.
