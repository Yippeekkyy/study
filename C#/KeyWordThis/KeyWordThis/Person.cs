using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KeyWordThis
{
    class Person
    {
        public string name;
        public int age;
        public Person() { name = "Неизвестно"; age = 18; }
        public Person(string name) { this.name = name; age = 18; }
        public Person(string name, int age)
        {
            this.name = name;
            this.age = age;
        }
        public void Print() => Console.WriteLine($"Имя: {name}  Возраст: {age}");
    }
}
