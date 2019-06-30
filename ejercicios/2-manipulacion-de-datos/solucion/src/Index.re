let getCoworkingsWithImage = (coworking: Data.coworking) =>
  Belt.Option.isSome(coworking.imagen);

let getBigCoworkings = (coworking: Data.coworking) =>
  coworking.capacidad >= 50;

let getCoworkingName = (coworking: Data.coworking) => coworking.nombre;

let result =
  Belt.List.keep(Data.coworkings, getCoworkingsWithImage)
  ->Belt.List.keep(getBigCoworkings)
  ->Belt.List.map(getCoworkingName)
  ->Belt.List.toArray
  |> Js.Array.joinWith("/");

Js.log(result);