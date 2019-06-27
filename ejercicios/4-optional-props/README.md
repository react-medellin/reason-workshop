# Reason React

## Instalar el proyecto

```shell
npm install
npm start # inicia bsb para compilar Reason en Javascript
npm run webpack # inicia webpack (correr en otro terminal). Nuestra app debería estar lista en localhost:8000
```

## Ejercicio

- Renderizar la imagen de cada coworking - ten en cuenta que la imagen puede no estar disponible
- Las imágenes son muy grandes, debemos agregar estilos en línea. [Documentación](https://reasonml.github.io/reason-react/docs/en/style)

### Puntos extra

- Crear un componente `Imagen`

## Tips

- Puedes utilizar el `switch`

```
switch (coworking.propiedad) {
  | None => <div />
  | Some(valor) => <div>{React.string(valor)}</div>
}
```

- [Pattern Matching - Documentación oficial](https://reasonml.github.io/docs/en/pattern-matching)
- Diviértanse :)
