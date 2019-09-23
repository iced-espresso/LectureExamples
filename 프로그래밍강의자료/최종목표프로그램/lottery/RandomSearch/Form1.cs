using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RandomSearch
{
    public partial class Form1 : Form
    {
        Random random = new Random();
        int count = 0;
        int number = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if(count == 15)
            {
                random = new Random();
                count = 0;
            }
            label1.Text = random.Next(1,46).ToString();
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(timer1.Enabled)
            {
                timer1.Enabled = false;
                button1.Text = "돌리기";
                listBox1.Items.Add(label1.Text);
                number++;
                MessageBox.Show(number.ToString() + "번 숫자는 " + label1.Text + "입니다!!");
            }
            else
            {
                timer1.Enabled = true;
                button1.Text = "뽑기";
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
            timer1.Interval = (1 + 3 * (15-trackBar1.Value)) * 10;
        }
    }
}
