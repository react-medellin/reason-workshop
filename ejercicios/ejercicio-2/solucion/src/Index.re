let getBigCoworkings = (collection: list(Data.coworking)) =>
  Belt.List.keep(collection, c => c.capacidad >= 50);

let getCoworkingsWithImage = (collection: list(Data.coworking)) =>
  Belt.List.keep(collection, coworking =>
    switch (coworking.imagen) {
    | None => false
    | Some(_) => true
    }
  );

let getCoworkingsName = (collection: list(Data.coworking)) => {
  let coworkingNamesList = Belt.List.map(collection, c => c.nombre);
  let coworkingNamesArray = Belt.List.toArray(coworkingNamesList);
  let coworkingNames = Js.Array.joinWith(" / ", coworkingNamesArray);

  coworkingNames;
};

/**
  With reduce:

  Belt.List.reduce(collection, "", (acc, curr) => acc ++ " " ++ curr.nombre);

  With |> and ->
  Belt.List.map(collection, c => c.nombre)->Belt.List.toArray |> Js.Array.joinWith(" / ");
*/

let coworkingsFilteredBySize = getBigCoworkings(Data.coworkings);
let coworkingsFilteredByImage = getCoworkingsWithImage(Data.coworkings);

Js.log("Por imagen: " ++ getCoworkingsName(coworkingsFilteredByImage));
Js.log("Por capacidad: " ++ getCoworkingsName(coworkingsFilteredBySize));