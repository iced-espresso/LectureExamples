using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 숫자야구
{
    public partial class Form1 : Form
    {
        NumBaseBall numBase = new NumBaseBall();
        public Form1()
        {
            InitializeComponent();
            numBase.Start(4);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox2.Text = "";
            numBase.Start(4);
        }

        private void textBox1_KeyDown(object sender, KeyEventArgs e)
        {
            if(e.KeyCode == Keys.Enter)
            {
                textBox2.Text += textBox1.Text + "=>" + numBase.Check(textBox1.Text) + Environment.NewLine;
                textBox1.Text = "";
            }
        }
    }
}
