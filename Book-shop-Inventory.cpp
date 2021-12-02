#include<iostream>
#include<stdlib.h>

using namespace std;



class Customer
{
   private:
   string Name,Gender;
   int Age,choice,category,a=0;

   public:
 

   void registration()
   {
       cout<<"Enter your name\n";
       cin>>Name;
       cout<<"Enter yur gender\n";
       cin>>Gender;
       cout<<"Enter your age\n";
       cin>>Age;

   }
   string getName()
   {
       return Name;
   }
   string getGender()
   {
       return Gender;
   }
   int getAge()
   {
       return Age;
   }
   void welcome()
   {
       cout<<"Welcome Sir!, What do u want to do\n";
       string arr[4]={"1- Buy a book","2- Rent a book","3- Return a book","4- Exit"};
       for(int i=0;i<4;i++)
       {
          cout<<arr[i]<<"\n";
       }
       cin>>choice;
   }
 void book()
 {
    if(choice==1)
    {
        string genre[8]={"1- Fiction","2- Non-Fiction","3- Sci-Fi","4- Horror","5- Thriller","6- Self help","7- Romance","8- Manga"};
        cout<<"Which kind of book do you want\n";
        for(int i=0;i<8;i++)
        {
            cout<<genre[i]<<"\n";
        }
        cin>>category;
    }
    else if(choice==2)
    {
        if(a==0)
        {
           {
              string genre[8]={"1- Fiction","2- Non-Fiction","3- Sci-Fi","4- Horror","5- Thriller","6- Self help","7- Romance","8- Manga"};
             cout<<"Which kind of book do you want\n";
             for(int i=0;i<8;i++)
              {
                  cout<<genre[i]<<"\n";
              }  
              cin>>category;
            } 
        }      
        else
        {
            cout<<"Sorry! You have already rented a book\n";
        }

    }
    else if(choice==3)
    {
        if(a>=1 && a<=10)
        {
            cout<<"Thank You for returning the book!\n";
        }
        else
        {
            cout<<"Sorry you don't have rented any book\n";
        }
        
    }
    else if(choice==4)
    {
        exit(0);
    }

 }
 void listofbooks()
{    
   if(category==1)
    {
        
        string novel[10]={"1- Fahrenheit 451","2- The paying guest","3- Jane Eyre","4- Watership Down","5- Lord of the Flies","6- Americanah","7- A Town Like Alice","8- The Vegeterian","9- Anne of Green Gables","10- The Alchemist"};
        for(int i=0;i<10;i++)
        {
            cout<<novel[i]<<"\n";
        }
        cin>>a;
        cout<<"Here You Go!,Thanks For Coming!\n";
    }
    else if(category==2)
    {
        string nonfiction[10]={"1- A Brief History of Time","2- In Cold Blood","3- Hiroshima","4- H Is For Hawk","5- Out Of Africa","6- Never Cry Wolf","7- The diary Of A Young Girl","8- The Beauty Myth","9- Fever Pitch","10- Night"};
         for(int i=0;i<10;i++)
        {
            cout<<nonfiction[i]<<"\n";
        }
         cin>>a;
         cout<<"Here You Go!,Thanks For Coming!\n";
    }
    else if(category==3)
    {
        string scifi[10]={"1- The Lord Of The Rings","2- The Hitchhiker's Guide To The Galaxy","3- Ender's Game","4- The Dune Chronicles","5- A Song Of Ice And Fire Series","6- 1984","7- Fahrenheit 451","8- The Foundation Trilogy","9- Brave New World","10- American Gods"};
        for(int i=0;i<10;i++)
        {
            cout<<scifi[i]<<"\n";
            cin>>a;
            cout<<"Here You Go!,Thanks For Coming!\n";
        }
    }
    else if(category==4)
    {
        string horror[10]={"1- The Haunting of Hill House","2- It","3- Let the Right One In","4- The Exorcist","5- Frankenstein or The Modern Prometheus","6- House of Leaves","7- NOS4A2","8- The Shining","9- Salem’s","10- The Turn of the Screw"};
        for(int i=0;i<10;i++)
        {
            cout<<horror[i]<<"\n";
        }
        cin>>a;
        cout<<"Here You Go!,Thanks For Coming!\n";
    }
    else if(category==5)
    {
        string thriller[10]={"1- Gone Girl","2- 11/22/63","3- The Silent Patient","4- A Time to Kill","5- And Then There Were None","6- Tinker, Tailor, Soldier, Spy","7- Before I Go to Sleep","8- The Couple Next Door","9- The Talented Mr. Ripley","10- The Black Echo"};
        for(int i=0;i<10;i++)
        {
            cout<<thriller[i]<<"\n";
        }
        cin>>a;
        cout<<"Here You Go!,Thanks For Coming!\n";
    }
    else if(category==6)
    {
        string selfhelp[10]={"1- Whatcha Gonna Do with That Duck?","2- Fooled by Randomness","3- The 48 Laws of Power","4- The 7 Habits of Highly Effective People","5- The Psychedelic Explorer’s Guide","6- Eat That Frog!","7- Think and Grow Rich","8- The Attention Revolution","9- The Paleo Manifesto","10- Mindsight"};
        for(int i=0;i<10;i++)
        {
            cout<<selfhelp[i]<<"\n";
        }
        cin>>a;
        cout<<"Here You Go!,Thanks For Coming!\n";
    }
    else if(category==7)
    {
         string selfhelp[10]={"1- Jane Eyre","2- Anna Karenina","3- Love in the Time of Cholera","4- North and South","5- Pride and Prejudice","6- Emma","7- Sense and Sensibility","8-Maurice","9- The Princess Bride","10- Tess of the D'Urbervilles"};
        for(int i=0;i<10;i++)
        {
            cout<<selfhelp[i]<<"\n";
        }
        cin>>a;
        cout<<"Here You Go!,Thanks For Coming!\n";
    }
    else if(category==8)
    {
        string manga[10]={"1- Berserk","2- One Piece","3- Vagabond","4- Monster","5- Fullmetal Alchemist","6- Grand Blue","7- Slam Dunk","8- Kingdom","9- Vinland Saga","10- A Silent Voice"};
        for(int i=0;i<10;i++)
        {
            cout<<manga[i]<<"\n";
        }
        cin>>a;
        cout<<"Here You Go!,Thanks For Coming\n";
        
    }
    else 
    {
        cout<<"Sorry! Please enter the right input\n";
    }
 }
 };

int main()
{
    Customer c1;
    for(int i=0;i<10;i++)
    {
    c1.welcome();
    c1.book();
    c1.listofbooks();
    }
    return 0;
}