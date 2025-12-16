#include <iostream>

using namespace std;

void EnterAge(int &age)
{
    cout << "Enter your age: ";
    cin >> age;
}

void EnterBounty(int &bounty)
{
    cout << "Enter your bounty: ";
    cin >> bounty;
}

void EnterHeight(int &height)
{
    cout << "Enter your height: ";
    cin >> height;
}

void DisPlayCharacter(string name)
{
    cout << "Your character = " << name << endl;
}

int main()
{
    int age, bounty, height;
    EnterAge(age);

    if (age <= 25)
    {
        EnterHeight(height);
        if (height < 100)
        {
            DisPlayCharacter("Chopper");
        }
        else if (height < 180)
        {
            DisPlayCharacter("Usopp");
        }
        else
        {
            EnterBounty(bounty);
            if (bounty > 1100000000)
            {
                DisPlayCharacter("Zoro");
            }
            else
            {
                DisPlayCharacter("Sanji");
            }
        }
    }
    else
    {
        if (age <= 60)
        {
            EnterBounty(bounty);
            if (bounty > 500000000)
            {
                DisPlayCharacter("Jinbe");
            }
            else
            {
                DisPlayCharacter("Franky");
            }
        }
        else
        {
            DisPlayCharacter("Brook");
        }
    }

    return 0;
}

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
