using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NewED_Transporte
{
    class Garagem
    {
        private int id;
        private string local;
        private Stack<Veiculo> veiculos;

        public Garagem()
        {
            this.id = 0;
            this.local = "";
        }

        public Garagem(int id2, string local2, Stack<Veiculo> veiculos2)
        {
            id = id2;
            local = local2;
            veiculos = veiculos2;
        }

        public int Id
        {
            get { return id; }
            set { id = value; }
        }
        public string Local
        {
            get { return local; }
            set { local = value; }
        }

        public int QtdDeVeiculos(Veiculo veiculo)
        {
            return 0;
        }

        public int PotencialDeTransporte()
        {
            return 0;
        }
    }
}
