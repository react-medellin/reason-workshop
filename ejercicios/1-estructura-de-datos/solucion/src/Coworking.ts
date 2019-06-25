enum Estado {
  Abierto = "Abierto",
  Cerrado = "Cerrado"
}

interface ICoworking {
  id: string;
  nombre: string;
  direccion: string;
  capacidad: number;
  caracteristicas: Array<string>;
  imagen: string | null;
  estado: Estado;
}

const factoria: ICoworking = {
  id: "fc22b208-9613-11e9-bc42-526af7764f64",
  nombre: "Factoria | CoWorking & Hacker Center",
  direccion: "Cl. 7D # 43C-134",
  capacidad: 50,
  caracteristicas: ["buen espacio", "baños", "tv", "wifi"],
  imagen:
    "https://factoria.space/wp-content/uploads/2017/10/Coworking-16-640x640.jpg",
  estado: Estado.Abierto
};

const seedspace: ICoworking = {
  id: "cbb3f0ec-961c-11e9-bc42-526af7764f64",
  nombre: "Seedspace",
  direccion: "Cl. 7D # 43C-134",
  capacidad: 50,
  caracteristicas: ["buena ubicación", "video beam 🙏", "wifi"],
  imagen: null,
  estado: Estado.Cerrado
};

const coworkings = [factoria, seedspace];
