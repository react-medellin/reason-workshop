[@react.component]
let make = () => {
  let coworkings =
    Belt.List.map(Data.coworkings, coworking =>
      <li key={coworking.id}> {React.string(coworking.nombre)} </li>
    )
    ->Belt.List.toArray
    ->React.array;

  <ul> coworkings </ul>;
};