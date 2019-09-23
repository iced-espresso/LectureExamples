using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 숫자야구
{
    class NumBaseBall
    {
        string referNums;
        int numOfNums = 4;
        public void Start(int n)
        {
            referNums = GetNewBaseNumber(n);
            numOfNums = n;
        }
        public string Check(string objectNums)
        {
            int strike=0, ball=0, oout=4;
            if (objectNums.Length != numOfNums)
            {
                MessageBox.Show("숫자를" + numOfNums.ToString() + "자리 입력하세요.");
                return "오류";
            }
            
            for(int i=0;i< numOfNums;i++)
            {
                for(int j=0;j<numOfNums;j++)
                {
                    if (objectNums[i] == referNums[j])
                    {
                        if (i == j)
                            strike++;
                        else
                            ball++;
                    }
                }
            }
            oout = 4 - strike - ball;
            if (strike != 4)
                return ("strike:" + strike.ToString() + "\nball: " + ball.ToString() + "\nout: " + oout.ToString());
            else
                return "맞췄습니다.";
        }
        string GetNewBaseNumber(int n)
        {
            List<string> strList = GetNewNumList();
            Random rnd = new Random();
            string strs = "";
            for (int i = 0; i < n; i++)
            {
                int rndNum = rnd.Next(strList.Count);
                strs += strList[rndNum];
                strList.RemoveAt(rndNum);
            }
            return strs;

        }
        List<string> GetNewNumList()
        {
            List<string> list = new List<string>();
            for (int i = 0; i < 10; i++)
                list.Add(i.ToString());
            return list;
        }
    }
}
