using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Person
    {
        public string name;
        public int age;
        public Person()//Конструктор
        {
            Console.WriteLine("Создание объекта Person");
            name = "Tom";
            age = 37;
        }             //Конструктор
        public void Print()
        {
            Console.WriteLine($"Имя: {name})  Возраст: {age}");
        }
    }
}
