/*******************************/
/**
    | Number Conversion Application |
Developer:  Mohammad Zubair
                B.Sc. in CSE(Running)
Contact:    01812754700
Email:      mdzubair.cse@gmail.com
Website:    www.bdlearn24.com
Apps Version: 1.0
**/
/*******************************/

#include<stdio.h>
#include<string.h>
#include<math.h>
void home();
///Step-1: Forward
void DtoB();    ///Decimal to Binary
void DtoOct();  ///Decimal to Octal
void DtoHex();  ///Decimal to Hexadecimal
///Step-1: Reverse
void BtoD();    ///Binary to Decimal
void OcttoD();  ///Octal to Decimal
void HextoD();  ///Hexadecimal to Decimal
///Step-2: Forward
void BtoOct();  ///Binary to Octal
void BtoHex();  ///Binary to Hexadecimal
///Step-2: Reverse
void OcttoB();  ///Octal to Binary
void HextoB();  ///Hexadecimal to Binary
///Step-3: Forward
void OcttoHex();    ///Octal to Hexadecimal
///Step-3: Reverse
void HextoOct();    ///Hexadecimal to Octal

int main()
{
    home();
}
void home()
{
    char check[10];
    printf("\t+----------------------------------+\n");
    printf("\t| Number Converter    Version 1.0  |\n");
    printf("\t+----------------------------------+\n");
    printf("\t+----------------------------------+\n");
    printf("\t|  Developed By: Mohammad Zubair   |\n");
    printf("\t|          B.Sc. in CSE            |\n");
    printf("\t|     contact: 01812754700         |\n");
    printf("\t|  Email: mdzubair.cse@gmail.com   |\n");
    printf("\t+----------------------------------+\n");

    printf("\t\nPlease, read this instruction carefully : \n\n");
    printf("\t1. Press db or DB (Decimal-Binary)\n");
    printf("\t2. Press do or DO (Decimal-Octal)\n");
    printf("\t3. Press dh or DH (Decimal-Hexadecimal)\n");
    printf("\t4. Press bd or BD (Binary-Decimal)\n");
    printf("\t5. Press od or OD (Octal-Decimal)\n");
    printf("\t6. Press hd or HD (Hexadecimal-Decimal)\n");
    printf("\t7. Press bo or BO (Binary-Octal)\n");
    printf("\t8. Press bh or BH (Binary-Hexadecimal)\n");
    printf("\t9. Press ob or OB (Octal-Binary)\n");
    printf("\t10. Press hb or HB (Hexadecimal-Binary)\n");
    printf("\t11. Press oh or OH (Octal-Hexadecimal)\n");
    printf("\t12. Press ho or HO (Hexadimal-Octal)\n\n");
    while(1)
    {
        printf("\tGive Instruction : ");
        scanf("%s", &check);
        getchar();
        /// 1. Decimal to Binary
        if((check[0]=='D' || check[0]=='d')&&(check[1]=='B' || check[1]=='b'))
        {
            DtoB();
        }
        /// 2.  Decimal to Octal
        if((check[0]=='D' || check[0]=='d')&&(check[1]=='O' || check[1]=='o'))
        {
            DtoOct();
        }
        /// 3.  Decimal to Hexadecimal
        if((check[0]=='D' || check[0]=='d')&&(check[1]=='H' || check[1]=='h'))
        {
            DtoHex();
        }
        /// 4.  Binary to Decimal
        if((check[0]=='B' || check[0]=='b')&&(check[1]=='D' || check[1]=='d'))
        {
            BtoD();
        }
        /// 5.  Octal to Decimal
        if((check[0]=='O' || check[0]=='o')&&(check[1]=='D' || check[1]=='d'))
        {
            OcttoD();
        }
        /// 6.  Hexadecimal to Decimal
        if((check[0]=='H' || check[0]=='h')&&(check[1]=='D' || check[1]=='d'))
        {
            HextoD();
        }
        /// 7.  Binary to Octal
        if((check[0]=='B' || check[0]=='b')&&(check[1]=='O' || check[1]=='o'))
        {
            BtoOct();
        }
        /// 8.  Binary to Hexadecimal
        if((check[0]=='B' || check[0]=='b')&&(check[1]=='H' || check[1]=='h'))
        {
            BtoHex();
        }
        /// 9.  Octal to Binary
        if((check[0]=='O' || check[0]=='o')&&(check[1]=='B' || check[1]=='b'))
        {
            OcttoB();
        }
        /// 10. Hexadecimal to Binary
        if((check[0]=='H' || check[0]=='h')&&(check[1]=='B' || check[1]=='b'))
        {
            HextoB();
        }
        /// 11. Octal to Hexadecimal
        if((check[0]=='O' || check[0]=='o')&&(check[1]=='H' || check[1]=='h'))
        {
            OcttoHex();
        }
        /// 12. Hexadecimal to Octal
        if((check[0]=='H' || check[0]=='h')&&(check[1]=='O' || check[1]=='o'))
        {
            HextoOct();
        }
        if(check[0]=='q' || check[0]=='Q')
        {
            printf("Thanks for using my application!");
        }
    }
}

///Decimal to Binary
void DtoB()
{
    int n, i=0, j, mod, divide, ara[1000];
    printf("\n  Enter a decimal number : ");
    scanf("%d", &n);
    divide = n;
    while(divide>0)
    {
        if(i==0)
        {
            printf("\n\n\t 2 | %d \n", n);
            printf("\t   ---------\n");
        }
        mod = divide%2;
        divide = divide/2;
        ara[i] = mod;
        if(divide>0 && i>=0)
        {
            printf("\t 2 | %d - %d\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide==0)
        {
            printf("\t     %d - %d\n", divide, mod);
        }
        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", ara[j]);
    }
    printf(" (Binary)\n\n\n");
}


///Decimal to Octal
void DtoOct()
{
    int n, i=0, j, mod, divide, ara[1000];
    printf("\n  Enter a decimal number : ");
    scanf("%d", &n);
    divide = n;
    while(divide>0)
    {
        if(i==0)
        {
            printf("\n\n\t 8 | %d \n", n);
            printf("\t   ---------\n");
        }
        mod = divide%8;
        divide = divide/8;
        ara[i] = mod;
        if(divide>0 && i>=0)
        {
            printf("\t 8 | %d - %d\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide==0)
        {
            printf("\t     %d - %d\n", divide, mod);
        }

        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", ara[j]);
    }
    printf(" (Octal)\n\n\n");
}

///Decimal to Hexadecimal
void DtoHex()
{
    int n, i=0, j, mod, divide;
    char ara[1000];
    printf("  Enter a number : ");
    scanf("%d", &n);
    divide = n;
    while(divide>0)
    {
        if(i==0)
        {
            printf("\n\n\t 16 | %d \n", n);
            printf("\t   ---------\n");
        }
        mod = divide%16;
        divide = divide/16;
        if(mod==0)
        {
            ara[i] = '0';
        }
        else if(mod==1)
        {
            ara[i] = '1';
        }
        else if(mod==2)
        {
            ara[i] = '2';
        }
        else if(mod==3)
        {
            ara[i] = '3';
        }
        else if(mod==4)
        {
            ara[i] = '4';
        }
        else if(mod==5)
        {
            ara[i] = '5';
        }
        else if(mod==6)
        {
            ara[i] = '6';
        }
        else if(mod==7)
        {
            ara[i] = '7';
        }
        else if(mod==8)
        {
            ara[i] = '8';
        }
        else if(mod==9)
        {
            ara[i] = '9';
        }
        else if(mod==10)
        {
            ara[i] = 'A';
        }
        else if(mod==11)
        {
            ara[i] = 'B';
        }
        else if(mod==12)
        {
            ara[i] = 'C';
        }
        else if(mod==13)
        {
            ara[i] = 'D';
        }
        else if(mod==14)
        {
            ara[i] = 'E';
        }
        else
        {
            ara[i] = 'F';
        }
        if(divide>0 && i>=0 && mod<=9)
        {
            printf("\t 16 | %d - %d\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide>0 && i>=0 && mod==10)
        {
            printf("\t 16 | %d - %d(A)\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide>0 && i>=0 && mod==11)
        {
            printf("\t 16 | %d - %d(B)\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide>0 && i>=0 && mod==12)
        {
            printf("\t 16 | %d - %d(C)\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide>0 && i>=0 && mod==13)
        {
            printf("\t 16 | %d - %d(D)\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide>0 && i>=0 && mod==14)
        {
            printf("\t 16 | %d - %d(E)\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide>0 && i>=0 && mod==15)
        {
            printf("\t 16 | %d - %d(F)\n", divide, mod);
            printf("\t   ---------\n");
        }
        if(divide==0 && mod<=9)
        {
            printf("\t     %d - %d\n", divide, mod);
        }
        if(divide==0 && mod==10)
        {
            printf("\t     %d - %d(A)\n", divide, mod);
        }
        if(divide==0 && mod==11)
        {
            printf("\t     %d - %d(B)\n", divide, mod);
        }
        if(divide==0 && mod==12)
        {
            printf("\t     %d - %d(C)\n", divide, mod);
        }
        if(divide==0 && mod==13)
        {
            printf("\t     %d - %d(D)\n", divide, mod);
        }
        if(divide==0 && mod==14)
        {
            printf("\t     %d - %d(E)\n", divide, mod);
        }
        if(divide==0 && mod==15)
        {
            printf("\t     %d - %d(F)\n", divide, mod);
        }
        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%c", ara[j]);
    }
    printf(" (Hexadecimal)\n\n\n");
}

///Binary to Decimal
void BtoD()
{
    char ara[1000];
    int n[1000], i, length, r, p, sum=0;
    printf("\n  Enter a binary number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    printf("\n\n");
    for(i=0; i<length; i++)
    {
        printf("%c", ara[i]);
    }
    printf(" = ");
    for(i=0; i<length; i++)
    {
        p = pow(2, r);
        n[i] = ara[i]-'0';
        printf("%d X 2^%d ", n[i], r);
        if(r>0)
        {
            printf(" + ");
        }
        sum = sum+n[i]*p;
        r--;
    }
    printf("\n\n Answer : %d (Decimal)\n\n\n", sum);
}

///Octal to Decimal
void OcttoD()
{
    char ara[1000];
    int n[1000], i, length, r, p, sum=0;
    printf("\n  Enter a Octal number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    printf("\n\n");
    for(i=0; i<length; i++)
    {
        printf("%c", ara[i]);
    }
    printf(" = ");
    for(i=0; i<length; i++)
    {
        p = pow(8, r);
        n[i] = ara[i]-'0';
        printf("%d X 8^%d ", n[i], r);
        if(r>0)
        {
            printf(" + ");
        }
        sum = sum+n[i]*p;
        r--;
    }
    printf("\n\n Answer : %d (Decimal)\n\n\n", sum);
}
///Hexadecimal to Decimal
void HextoD()
{
    char ara[1000];
    int n[1000], i, length, r, p, sum=0;
    printf("\n  Enter a Hexadecimal number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    printf("\n\n");
    for(i=0; i<length; i++)
    {
        printf("%c", ara[i]);
    }
    printf(" = ");
    for(i=0; i<length; i++)
    {
        p = pow(16, r);
        if(ara[i]=='A')
        {
            n[i]=10;
        }
        else if(ara[i]=='B')
        {
            n[i]=11;
        }
        else if(ara[i]=='C')
        {
            n[i]=12;
        }
        else if(ara[i]=='D')
        {
            n[i]=13;
        }
        else if(ara[i]=='E')
        {
            n[i]=14;
        }
        else if(ara[i]=='F')
        {
            n[i]=15;
        }
        else
        {
            n[i] = ara[i]-'0';
        }
        printf("%d X 16^%d ", n[i], r);
        if(r>0)
        {
            printf(" + ");
        }
        sum = sum+n[i]*p;
        r--;
    }
    printf("\n\n Answer : %d (Decimal)\n\n\n", sum);
}



///Binary to Octal
void BtoOct()
{
    char ara[1000];
    int n[1000], i, j, length, divide, mod, r, p, sum=0, number;
    printf("\n  Enter a binary number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    for(i=0; i<length; i++)
    {
        p = pow(2, r);
        n[i] = ara[i]-'0';
        sum = sum+n[i]*p;
        r--;
    }
    i=j=0;
    number = sum;
    divide = number;
    while(divide>0)
    {
        mod = divide%8;
        divide = divide/8;
        ara[i] = mod;
        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", ara[j]);
    }
    printf(" (Octal)\n\n\n");

}

///Binary to Hexadecimal
void BtoHex()
{
char ara[1000];
    int n[1000], i, j=0, length, r, p, sum=0, mod, divide;;
    printf("\n  Enter a binary number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    for(i=0; i<length; i++)
    {
        p = pow(2, r);
        n[i] = ara[i]-'0';
        sum = sum+n[i]*p;
        r--;
    }
    divide = sum;
    i=0;
    while(divide>0)
    {
        mod = divide%16;
        divide = divide/16;
        if(mod==0)
        {
            ara[i] = '0';
        }
        else if(mod==1)
        {
            ara[i] = '1';
        }
        else if(mod==2)
        {
            ara[i] = '2';
        }
        else if(mod==3)
        {
            ara[i] = '3';
        }
        else if(mod==4)
        {
            ara[i] = '4';
        }
        else if(mod==5)
        {
            ara[i] = '5';
        }
        else if(mod==6)
        {
            ara[i] = '6';
        }
        else if(mod==7)
        {
            ara[i] = '7';
        }
        else if(mod==8)
        {
            ara[i] = '8';
        }
        else if(mod==9)
        {
            ara[i] = '9';
        }
        else if(mod==10)
        {
            ara[i] = 'A';
        }
        else if(mod==11)
        {
            ara[i] = 'B';
        }
        else if(mod==12)
        {
            ara[i] = 'C';
        }
        else if(mod==13)
        {
            ara[i] = 'D';
        }
        else if(mod==14)
        {
            ara[i] = 'E';
        }
        else{
            ara[i] = 'F';
        }
        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%c", ara[j]);
    }
    printf(" (Hexadicimal)\n\n");
}


///Octal to Binary

void OcttoB()
{
    char ara[1000];
    int n[1000], i, length, r, p, j, mod, divide, sum=0;
    printf("\n  Enter a Octal number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    for(i=0; i<length; i++)
    {
        p = pow(8, r);
        n[i] = ara[i]-'0';
        sum = sum+n[i]*p;
        r--;
    }
    i=0;
    divide = sum;
    while(divide>0)
    {
        mod = divide%2;
        divide = divide/2;
        ara[i] = mod;
        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", ara[j]);
    }
    printf(" (Binary)\n\n\n");
}

///Hexadecimal to Binary

void HextoB()
{
    char ara[1000];
    int n[1000], i, length, j, mod, divide, r, p, sum=0;
    printf("\n  Enter a Hexadecimal number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    for(i=0; i<length; i++)
    {
        p = pow(16, r);
        if(ara[i]=='A')
        {
            n[i]=10;
        }
        else if(ara[i]=='B')
        {
            n[i]=11;
        }
        else if(ara[i]=='C')
        {
            n[i]=12;
        }
        else if(ara[i]=='D')
        {
            n[i]=13;
        }
        else if(ara[i]=='E')
        {
            n[i]=14;
        }
        else if(ara[i]=='F')
        {
            n[i]=15;
        }
        else
        {
            n[i] = ara[i]-'0';
        }
        sum = sum+n[i]*p;
        r--;
    }
    i=0;
    divide = sum;
    while(divide>0)
    {
        mod = divide%2;
        divide = divide/2;
        ara[i] = mod;
        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", ara[j]);
    }
    printf(" (Binary)\n\n\n");
}
///Octal to Hexadecimal

void OcttoHex()
{
    char ara[1000];
    int n[1000], i, length, r, p, sum=0,j, mod, divide;
    printf("\n  Enter a Octal number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    for(i=0; i<length; i++)
    {
        p = pow(8, r);
        n[i] = ara[i]-'0';
        sum = sum+n[i]*p;
        r--;
    }
    i=0;
    divide = sum;
    while(divide>0)
    {
        mod = divide%16;
        divide = divide/16;
        if(mod==0)
        {
            ara[i] = '0';
        }
        else if(mod==1)
        {
            ara[i] = '1';
        }
        else if(mod==2)
        {
            ara[i] = '2';
        }
        else if(mod==3)
        {
            ara[i] = '3';
        }
        else if(mod==4)
        {
            ara[i] = '4';
        }
        else if(mod==5)
        {
            ara[i] = '5';
        }
        else if(mod==6)
        {
            ara[i] = '6';
        }
        else if(mod==7)
        {
            ara[i] = '7';
        }
        else if(mod==8)
        {
            ara[i] = '8';
        }
        else if(mod==9)
        {
            ara[i] = '9';
        }
        else if(mod==10)
        {
            ara[i] = 'A';
        }
        else if(mod==11)
        {
            ara[i] = 'B';
        }
        else if(mod==12)
        {
            ara[i] = 'C';
        }
        else if(mod==13)
        {
            ara[i] = 'D';
        }
        else if(mod==14)
        {
            ara[i] = 'E';
        }
        else{
            ara[i] = 'F';
        }
        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%c", ara[j]);
    }
    printf(" (Hexadecimal)\n\n\n");
}

/// Hexadecimal to Octal

void HextoOct()
{
    char ara[1000];
    int n[1000], i, length, r, p, sum=0, j, mod, divide;
    printf("\n  Enter a Hexadecimal number : ");
    scanf("%s", &ara);
    length = strlen(ara);
    r = length-1;
    for(i=0; i<length; i++)
    {
        p = pow(16, r);
        if(ara[i]=='A')
        {
            n[i]=10;
        }
        else if(ara[i]=='B')
        {
            n[i]=11;
        }
        else if(ara[i]=='C')
        {
            n[i]=12;
        }
        else if(ara[i]=='D')
        {
            n[i]=13;
        }
        else if(ara[i]=='E')
        {
            n[i]=14;
        }
        else if(ara[i]=='F')
        {
            n[i]=15;
        }
        else{
        n[i] = ara[i]-'0';
        }
        sum = sum+n[i]*p;
        r--;
    }
    i=0;
    divide = sum;
    while(divide>0)
    {
        mod = divide%8;
        divide = divide/8;
        n[i] = mod;
        i++;
    }
    printf("\n\n");
    printf("  Answer: ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", n[j]);
    }
    printf(" (Octal)\n\n\n");
}
