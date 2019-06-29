# Estructuras de datos

## Flujo de trabajo

`npm install`

## Ejercicio

- Creemos una estructura de datos para representar un espacio de coworking de la ciudad.
- Cada espacio debe tener:
  - id
  - nombre
  - direccion
  - estado (abierto, cerrado)
  - capacidad
  - caracteristicas (lista de strings)
  - imagen (opcional)
- Deben crear 2 espacios y guardarlos en la variable `coworkings`

## Tips

- Pueden usar listas, variants y optionals
- Pueden usar https://www.uuidgenerator.net/ para generar los IDs

### Tipos de datos

- int
- string
- float
- optional('a)
- char
- bool

### Optionals

```reason
type tipoValorOpcional = option(string);

let valorOpcional = Some("123");
let valorOpcionalVacio = None;
```

### List

```reason
type tipoListaDecosas = list(string);

let listaDeCosas = ["huevos", "arroz", "pollo"];
```

**Taller Reason - React Medellín 2019**
