//numbers_v_5: Just paste a number to get a little information about it ^_^

#include <iostream>
#include <cmath>

int schitayu_cifri_1 (int a)
{
    int i = 1, mem = a;
    if (a <= 0)
    {
        std :: cout << "This isn't a natural intger!" << std :: endl;
        while (a <= -10)
        {
            a /= 10;
            i++;
        }
        if (i <= 1)
        {
            std :: cout << "There is " << i << " number in " << mem << std :: endl;
        }
        else
        {
            std :: cout << "There are " << i << " numbers in " << mem << std :: endl;
        }
        return 0;
    }
    else
    {
        while (a >= 10)
        {
            a /= 10;
            i++;
        }
        if (i <= 1)
        {
            std :: cout << "There is " << i << " number in " << mem << std :: endl;
        }
        else
        {
            std :: cout << "There are " << i << " numbers in " << mem << std :: endl;
        }
        return 0;
    }
}

int schitayu_cifri_serv (int a)
{
    int i = 1, mem = a;
    if (a <= 0)
    {
        while (a <= -10)
        {
            a /= 10;
            i++;
        }
        return i;
    }
    else
    {
        while (a >= 10)
        {
            a /= 10;
            i++;
        }
        return i;
    }
}

int razbivayu_po_razryadam_2 (int a)
{
    std :: cout << a << " = ";
    int mem = 0;
    int n = schitayu_cifri_serv (a);
    
    for (int i = 0; i < n; i++)
    {
        mem = a % 10;
        a = a / 10;
        if (i != 0)
        {
            std :: cout << " + ";
        }
        std :: cout << mem * pow(10, i);
    }
    std :: cout << std :: endl;
    return 0;
}

int opredelayu_chetnost_3 (int a)
{
    if (a % 2 == 0)
    {
        std :: cout << "The " << a << " is even-numbered" << std :: endl;
    }
    else
    {
        std :: cout << "The " << a << " isn't even-numbered" << std :: endl;
    }
    return 0;
}

int delu_na_vso_podryad_4 (int a)
{
    std :: cout << "The " << a << " devides by: ";
    int mem = 0;
    for (int i = 0; i < 10000000; i += 0)
    {
        mem = a;
        i++;
        mem = mem % i;
        if (mem == 0)
        {
            std :: cout << i << "; ";
        }
    }
    std :: cout << std :: endl;
    return 0;
}

int dayu_prostie_chisla_serv (int a)
{
    int ostatok = 666, prostoe = 2, mem = 0;
    prostoe = prostoe + a - 1;
    for (int i = 1; i <= prostoe; i++)
    {
        ostatok = prostoe % i;
        if (ostatok == 0)
        {
            mem++;
        }
    }
    if (mem > 2)
    {
        a++;
        dayu_prostie_chisla_serv (a);
    }
    else
    {
        return prostoe;
    }
}

int razloju_na_prostie_5 (int a)
{
    if (a < 0)
    {
        return 0;   //coming soon
    }
    int mem = a, ostatok = 0, i = 1;
    int delt = 2;
    std :: cout << "The " << a << " is ";
    if (a == 1)
    {
        std :: cout << 1;
        return 0;
    }
    while (mem != 1)
    {
        if (mem % delt == 0)
        {
            ostatok = 0;
            while (ostatok == 0)
            {
                delt = dayu_prostie_chisla_serv (i);
                ostatok = mem % delt;
                if (ostatok == 0)
                {
                    mem = mem / delt;
                    std :: cout << delt;
                    if (mem != 1)
                    {
                        std :: cout << " x ";
                    }
                }
            }
        }
        else 
        {
            i = delt;
            delt = dayu_prostie_chisla_serv (i);
        }
        
    }
    return 0;
}
int main()
{
    std :: cout<<"Enter an integer (smaller than +- 10 000 000): ";
    int A = 0;
    std :: cin >> A;
    schitayu_cifri_1 (A);
    razbivayu_po_razryadam_2 (A);
    opredelayu_chetnost_3 (A);
    delu_na_vso_podryad_4 (A);
    razloju_na_prostie_5 (A);
}
