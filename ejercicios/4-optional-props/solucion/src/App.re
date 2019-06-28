let getMaybeImage = (~imagen, ~nombre) =>
  switch (imagen) {
  | None => <h2> {React.string("No hay imagen :(")} </h2>
  | Some(imagen) =>
    <img
      src=imagen
      alt=nombre
      style={ReactDOMRe.Style.make(~display="block", ~maxWidth="100px", ())}
    />
  };

[@react.component]
let make = () => {
  let coworkings =
    Belt.List.map(Data.coworkings, coworking =>
      <li key={coworking.id}>
        {React.string(coworking.nombre)}
        {getMaybeImage(~imagen=coworking.imagen, ~nombre=coworking.nombre)}
      </li>
    )
    ->Belt.List.toArray
    ->React.array;

  <ul> coworkings </ul>;
};