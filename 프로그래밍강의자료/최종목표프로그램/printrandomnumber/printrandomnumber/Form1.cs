using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace printrandomnumber
{
    public partial class Form1 : Form
    {
        List<int> list = new List<int>();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            Random rnd = new Random();
            
            for(int i=0; i<30; i++)
            {
                int rndNumb = rnd.Next(50);
                if (i % 3 == 0)
                    rndNumb = rnd.Next(100);
                textBox1.AppendText(rndNumb.ToString("00") + "  ");
                list.Add(rndNumb);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string[] spltited = textBox1.Text.Split(' ');
            list = new List<int>();
            foreach (string str in spltited)
            {
                if(str != "")
                    list.Add(Convert.ToInt32(str));
            }
            MessageBox.Show("최대값은 " + list.Max().ToString());
            
        }
    }
}
