[@react.component]
let make = () => {
  let coworkings =
    Belt.List.map(
      Data.coworkings,
      coworking => {
        let maybeImage =
          switch (coworking.imagen) {
          | None => <h2> {React.string("No hay imagen :(")} </h2>
          | Some(imagen) =>
            <img
              src=imagen
              alt={coworking.nombre}
              style={ReactDOMRe.Style.make(
                ~display="block",
                ~maxWidth="100px",
                (),
              )}
            />
          };
        <li key={coworking.id}>
          {React.string(coworking.nombre)}
          maybeImage
        </li>;
      },
    )
    ->Belt.List.toArray
    ->React.array;

  <ul> coworkings </ul>;
};