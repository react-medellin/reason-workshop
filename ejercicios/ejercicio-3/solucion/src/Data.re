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
  capacidad: 55,
  caracteristicas: [
    {js|buena ubicación|js},
    {js|video beam 🙏|js},
    "wifi",
  ],
  imagen: None,
  estado: Cerrado,
};

let selina = {
  id: "fcbb3f0ec-45ae-11e9-bc42-526af7764f64",
  nombre: "Selina",
  direccion: "Cra. 32d # 9 - 17",
  capacidad: 100,
  caracteristicas: ["hotel", "bar", "wifi"],
  imagen:
    Some(
      "https://res.cloudinary.com/selina/image/upload/c_scale,f_auto,q_auto:good,w_2560/v1/s-cf-1/xdw7oj4u3s4v/11IJ7bLLea4K4sM8W8Sc4E/3dff728550e152da1126a595f8f77385/68._Selina_Medellin_Coffee_002.jpg",
    ),
  estado: Abierto,
};

let coworkings = [factoria, seedspace, selina];