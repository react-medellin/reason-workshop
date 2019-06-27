# Manipulacion de datos

## Ejercicio

Mostrar utilizando [Js.log](https://reasonml.github.io/docs/en/interop#just-dumping-javascript-in-the-middle-of-your-reason-code):

- Coworkings con capacidad mayor o igual a 50 personas
- Coworkings que tengan imagen

## Flujo de trabajo

- En una terminal, correr: `npm start`.
  Esto compila ReasonML a Javascript utilizando Bucklescript (bsb)
- En otra terminal, correr: `node Index.bs.js`.
  Con este comando vamos a correr el Javascript compilado por Bucklescript

## Tips

- En nuestro ejercicio estamos usando listas, pero no todas las funciones que ejecutamos sobre arrays en JS están disponibles para las listas de ReasonML.
- **Es posible** (no necesario) que debamos convertir una Lista en un Array para poder solucionar el ejercicio
- Para manipular listas, puedes utilizar [Belt.List](https://bucklescript.github.io/bucklescript/api/Belt.List.html)
- Para manipular arrays, puedes utilizar [Js.Array](https://bucklescript.github.io/bucklescript/api/Js.Array.html)

**Taller Reason - React Medellín 2019**
