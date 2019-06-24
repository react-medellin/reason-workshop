type estado =
  | Abierto
  | Cerrado;

type coworking = {
  id: string,
  nombre: string,
  direccion: string,
  capacidad: int,
  caracteristicas: list(string),
  imagen: option(string),
  estado,
};

let factoria = {
  id: "fc22b208-9613-11e9-bc42-526af7764f64",
  nombre: "Factoria | CoWorking & Hacker Center",
  direccion: "Cl. 7D # 43C-134",
  capacidad: 50,
  caracteristicas: ["buen espacio", {js|baños|js}, "tv", "wifi"],
  imagen:
    Some(
      "https://factoria.space/wp-content/uploads/2017/10/Coworking-16-640x640.jpg",
    ),
  estado: Abierto,
};

let seedspace = {
  id: "fcbb3f0ec-961c-11e9-bc42-526af7764f64",
  nombre: {js|Seedspace Medellín|js},
  direccion: "Cl. 8 #43a - 49",
  capacidad: 40,
  caracteristicas: [
    {js|buena ubicación|js},
    {js|video beam 🙏|js},
    "wifi",
  ],
  imagen: None,
  estado: Cerrado,
};

let coworkings = [factoria, seedspace];