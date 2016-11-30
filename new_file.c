using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RandomTable
{
    public partial class Random_Form : Form
    {
        public Random_Form()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            dataGridView1.Rows.Add(100);
            for (int i = 0; i < 100; i++)
            {
                int time = new Random().Next(1, 15);
                System.Threading.Thread.Sleep(1);
                int R0 = 2;
                int R1 = new Random().Next(4, 158);
                int R2 = new Random().Next(1, 6);
                int R3 = new Random().Next(1, 21);
                int R41 = new Random().Next(1, 29);
                int R42 = new Random().Next(1, 13);
                dataGridView1.Rows[i].Cells[0].Value = R0.ToString();
                dataGridView1.Rows[i].Cells[1].Value = R1.ToString();
                dataGridView1.Rows[i].Cells[2].Value = R2.ToString();
                dataGridView1.Rows[i].Cells[3].Value = R3.ToString();
                dataGridView1.Rows[i].Cells[4].Value = R41.ToString() + "." + R42.ToString() + ".2016";
            }

        }
    }
}
