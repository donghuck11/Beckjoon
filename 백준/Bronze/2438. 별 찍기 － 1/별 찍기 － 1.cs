using System;
using System.Text;
namespace std
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int a = int.Parse(Console.ReadLine());
            string star = "*";
            for(int i=1; i<=a; i++)
            {
                sb.Append(star);
                Console.WriteLine(sb.ToString());
            }
        }
    }
}