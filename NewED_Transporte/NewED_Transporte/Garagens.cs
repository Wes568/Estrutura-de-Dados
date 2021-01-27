﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NewED_Transporte
{
    class Garagens
    {
        private List<Garagem> garagens = new List<Garagem>();
        private bool jornadaAtiva;

        public void Incluir(Garagem garagem)
        {
            garagens.Add(garagem);
        }

        public void Mostrar()
        {

            foreach (Garagem g in garagens)
            {
                Console.WriteLine("------------------------");
                Console.WriteLine("ID: " + g.Id);
                Console.WriteLine("LOCAL: " + g.Local);
                Console.WriteLine("------------------------");
            }
        }

        public void IniciarJornada()
        {
           jornadaAtiva = true;
        }

 /*       public List<Transporte> EncerrarJornada()
        {
            return;
        }*/


    }
}
