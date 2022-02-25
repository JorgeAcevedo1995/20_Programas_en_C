#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  
#include <conio.h>
#include <math.h>

using namespace std;


	void calculadora(int a){
		
	int numero1=0,numero2=0,suma=0,resta=0,multi=0,div=0;	
	
	cout<<"SUMA \n";

                cout<<"Ingrese primer numero: \n";
                cin>>numero1;
              	cout<<"Ingrese segundo numero:  \n";
                cin>>numero2;
                suma=numero1+numero2;
                cout<<"La suma es:"<<suma;
                cout<<"\n \n";

	cout<<"RESTA \n";

                cout<<"Ingrese primer numero: \n";
                cin>>numero1;
              	cout<<"Ingrese segundo numero: \n";
                cin>>numero2;
                resta=numero1-numero2;
                cout<<"La resta es:"<<resta;
                cout<<"\n \n";

    cout<<"MULTIPLICACION \n";

                cout<<"Ingrese primer numero: \n";
                cin>>numero1;
              	cout<<"Ingrese segundo numero: \n";
                cin>>numero2;
                multi=numero1*numero2;
                cout<<"La multiplicacion es:"<<multi;
				cout<<"\n \n";

   cout<<"DIVISION \n";

                cout<<"Ingrese primer numero: \n";
                cin>>numero1;
              	cout<<"Ingrese segundo numero:  \n";
                cin>>numero2;
                div=numero1/numero2;
                cout<<"La division es:"<<div;
        		cout<<"\n \n";

	}

	void par (int a){
		
		int numero;

    	cout<<"\nIngrese un numero:";
    	cin>>numero;

    	if ( numero % 2 == 0 )
        cout<<"\n   El numero es par";
    	else
        cout<<"\n   El numero es impar";
	}
	
	void medidas(int a){
		
		double milla,cv,cv1,cv2,cv3,cv4,cv5,km,mt,pulg,lb,kg;
		cout<<"Ingrese cantidad en millas:";
		cin>>milla;
		cv= milla*1609;
		cout<<"La conversion es:"<<cv<<" km \n";
		cout<<"Ingrese cantidad en KM:";
		cin>>km;
		cv1= km/1609;
		cout<<"La conversion es:"<<cv1<<" millas \n";
		cout<<"Ingrese cantidad en metros:";
		cin>>mt;
		cv2= mt*39.37;
		cout<<"La conversion es:"<<cv2<<" pulgadas \n";
		cout<<"Ingrese cantidad en pulgadas:";
		cin>>pulg;
		cv3= pulg/39.37;
		cout<<"La conversion es:"<<cv3<<" metros \n";
		cout<<"Ingrese cantidad en libras:";
		cin>>lb;
		cv2= lb/2.205;
		cout<<"La conversion es:"<<cv4<<" kilos \n";
		cout<<"Ingrese cantidad en kilos:";
		cin>>kg;
		cv3= kg*2.205;
		cout<<"La conversion es:"<<cv5<<" libras \n";
	}
	
	void palindromo (int a){
		
		string texto;
    	int aux = 0, igual = 0;
    
    	cout << "Ingrese la palabra para validar: ";
    	getline(cin >> ws, texto);
    
   		for(int ind = texto.length() - 1; ind >= 0; ind--) {
        	if(texto[ind] == texto[aux]) {
            igual++;
        	}
        aux++;
    	}
    
    	if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo" << endl;
    	}else {
        cout << "La palabra ingresada no es palindromo" << endl;
    	}
    }
    
    void romanos (int a){
    	
		int numero,unidades,decenas,centenas,millares;
		
		cout <<"\nIngrese un numero arabigo: ";
		cin >> numero;
		
		unidades = numero%10; numero /= 10;
		decenas = numero%10; numero /= 10;
		centenas = numero%10; numero /= 10;
		millares = numero%10; numero /= 10;
		
		cout<<"\nNumero en Romano: ";
		
		switch(millares){
			case 1: cout << "M"; break;
		}
		
		switch(centenas){
			case 1: cout << "C"; break;
			case 2: cout << "CC"; break;
			case 3: cout << "CCC"; break;
			case 4: cout << "CD"; break;
			case 5: cout << "D"; break;
			case 6: cout << "DC"; break;
			case 7: cout << "DCC"; break;
			case 8: cout << "DCCC"; break;
			case 9: cout << "CM"; break;
		}
		
		switch(decenas){
			case 1: cout << "X"; break;
			case 2: cout << "XX"; break;
			case 3: cout << "XXX"; break;
			case 4: cout << "XL"; break;
			case 5: cout << "L"; break;
			case 6: cout << "LX"; break;
			case 7: cout << "LXX"; break;
			case 8: cout << "LXXX"; break;
			case 9: cout << "XC"; break;
		}
		
		switch(unidades){
			case 1: cout << "I"; break;
			case 2: cout << "II"; break;
			case 3: cout << "III"; break;
			case 4: cout << "IV"; break;
			case 5: cout << "V"; break;
			case 6: cout << "VI"; break;
			case 7: cout << "VII"; break;
			case 8: cout << "VIII"; break;
			case 9: cout << "IX"; break;
		}
	}
	
	void letras (int a){
	
	int x;
    cout<<"Ingrese un numero"<<endl;
    cin>>x;
		if((x<1)||(x>999)) cout<<"Por favor ingrese un numero del 1 al 999\n";
		else{
        	if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       		else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       		else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       		else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       		else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       		else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       		else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       		else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       		else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       		else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       		else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       		else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       		else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       		else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       		else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       		else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
        if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       		else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       		else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       		else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       		else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       		else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    	cout<<endl;
		cin.ignore();
	}
	
	void decimales (int a){
		
		int miles,cientos,unidades,decimales;
		double valor;


		char numeros[100][20] = {
		{""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
		{"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
		{"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
		{"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
		{"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
		{"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
		{"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
		{"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
		{"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
		{"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
		};

 		char centenas[10][20] = {
  		{""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 		};
 
 		std::cout << "Introduzca numero a transcribir: ";
 		std::cin >> valor;

 		miles = ((int)valor)/1000;
 		cientos = (((int)valor)%1000)/100;
 		unidades = ((int)valor)%100;
 		decimales = ((int) (valor*100.0))%100 ;

		if (miles)
		  std::cout << numeros[miles] << " mil ";
		 
		if (cientos)
		  std::cout << centenas[cientos] << " ";
		 
		if (unidades) 
		  std::cout << numeros[unidades];
		 
		if (decimales){
		if(miles || cientos || unidades)
		  {
		   std::cout << " con ";
		  }
		 
		  std::cout << numeros[decimales] << " centimos.";
		}
		
		std::cout << std::endl;
		
		
		 system("pause");
	}
	
	void tabla (int a){
		int numero;
		do{
		cout<<"Ingrese la tabla que desea ver: ";
		cin>>numero;
		
		}while((numero<1) || (numero>10));
	
		for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
		}
	}
	
	void grafica (int a){
		cout<<"			  45\n";
		cout<<"			X 32\n";
		cout<<"			-----\n";
		cout<<"			  90\n";
		cout<<"			135\n";
		cout<<"		      ------\n";
		cout<<"			1440\n";
	}
	
	void binario (int a){
			int v[50], x, i=0;
			cout<<"Ingrese un numero en decimal: ";
			cin>>x;
			do{
				v[i]=x%2;
				x=x/2;
				i++;
			}while(x!=0);
				for (int t=i;t<50;t++){
				v[t]=9;
				}
				for (i=49;i>=0;i--){
					if(v[i]==0)cout<<v[i];
					if(v[i]==1)cout<<v[i];
				}
	}	
	
	void hexadecimal (int a){
		
	int digitoex[20];
    int decimal, residuo, resultado, i = 0;

    cout << "Introduce un numero en decimal:  " << endl;
    cin >> decimal;

    do
    {
        residuo = decimal % 16;
        resultado = decimal / 16;
        digitoex[i] = residuo;
        decimal = resultado;
        i++;
    } while (resultado > 15);

    digitoex[i] = resultado;

    cout << "El equivalente en hexadecimal es: ";

    for (int j = i; j >= 0; j--){
        if (digitoex[j] == 10)
        {
            cout << "A";
        }
        else if (digitoex[j] == 11)
        {
            cout << "B";
        }
        else if (digitoex[j] == 12)
        {
            cout << "C";
        }
        else if (digitoex[j] == 13)
        {
            cout << "D";
        }
        else if (digitoex[j] == 14)
        {
            cout << "E";
        }
        else if (digitoex[j] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << digitoex[j];
        }   
    }
    cout << endl;
	}
	
	void figuras (int a){
		
		char mat[5][5];
		
		cout<<"Cuadrado \n \n";
		for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			if(i==0 or i==4){
				mat[i][j]='x';
			}else{
				mat[i][j]=' ';
			}
			if(j==0 or j==4){
				mat [i][j]='x';
			}
		}
		}
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			cout<<mat[i][j]<<" ";
		}
	cout<<endl;
	}
	}
	
	void gotoxy(int x,int y){
		
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 
	}
	
	void dibujar_personaje(int x, int y){
		
 	    gotoxy(x,y);
 	    char p=190;
		printf("%c",p);
	} 
	
	void cajero (int a){
		
		const string claveCorrecta = "1234";
		cout << "Bienvenido al cajero automático\n";
		cout << "Ingrese la clave: ";
		string clave = "";
		cin >> clave;
		if (clave != claveCorrecta){
    	cout << "Clave incorrecta";
		}else{
		cout << "Clave correcta\n Bienvenido Jorge Acevedo \n";
		}	
	}
	
	void hipotenusa (int a){
		float c1,c2;
		double h;

		cout<<"Ingrese cateto 1:";
		cin>>c1;
		cout<<"Ingrese cateto 2:";
		cin>>c2;
		h=sqrt(c1*c1+c2*c2);
		cout<<"La hipotenusa mide: "<<h;
		getch();
	}
	
	void primo (int a){
		
		int divisor = 1, divisores = 0, num = 0;
		cout<<"Ingrese numero: ";
		cin>>num;
		do{
			if(num % divisor == 0){
			divisores++;
			}	
			divisor++;
		}while(divisor <= num);
			if(divisores == 2){
			cout<<"El numero "<<num<<" es numero primo.";
			}else{
			cout<<"El numero "<<num<<" no es numero primo.";
			}
	}
	
	void mayor (int a){
		
		int x, y;

		cout<<"Escribe el primer numero:\n";
		cin>>x;
		cout<<"Escribe el segundo numero:\n";
		cin>>y;
		if (x > y)
		cout<<"El mayor es:"<<x;
		else
		if ( y > x )
		cout<<"El mayor es:"<<y;
		else
		cout<<"Son iguales";
	}
	
	void mes (int a){
		
		int mes;
   
	  	cout<<"Ingrese el numero de mes:";
		cin>>mes;
	   
	    switch(mes){
	   
	    case 1:cout<<"Es el mes de enero";
	    cout<<" y tiene 30 dias"<< endl;
	    break;
	   
	    case 2:cout<<"Es el mes de febrero";
	    cout<<" y tiene 29 dias"<< endl;
	    break;
	   
	    case 3:cout<<"Es el mes de marzo";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    case 4:cout<<"Es el mes de abril";
	    cout<<" y tiene 30 dias"<<endl;
	    break;
	   
	    case 5:cout<<"Es el mes de mayo";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    case 6:cout<<"Es el mes de junio";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    case 7:cout<<"Es el mes de julio";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    case 8:cout<<"Es el mes de agosto";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    case 9:cout<<"Es el mes de setiembre";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    case 10:cout<<"Es el mes de octubre";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    case 11:cout<<"Es el mes de noviembre";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    case 12:cout<<"Es el mes de diciembre";
	    cout<<" y tiene 31 dias"<<endl;
	    break;
	   
	    default:cout<<"Mes no existe";
	    break;
   
    	}
	}
	
	void raiz (int a){
		
		float dato,raiz;
 
		cout<<"Ingrese un numero para obtener la raiz cuadrada:";
		cin >> dato;
		 
		raiz = sqrt(dato);
		 
		cout << "La raiz cuadrada de " << dato << " es " << raiz;

	}
	
int main(){
	 
    int op,a=1,x,y;
    	while(op!=27){
		cout<<"\n \nTAREA - 20 PROGRAMAS \n";
		cout<<"Elige el numero opcion que desee utilizar el programa \n \n";
		cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros \n";
		cout<<"2. Determinar si un numero es par o impar \n";
		cout<<"3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa \n";
		cout<<"4. Determinar si una palabra o un numero es palindromo \n";
		cout<<"5. Conversion de numeros arabigos a romanos (minimo 1,000) \n";
		cout<<"6. Conversion de numeros enteros a letras \n";
		cout<<"7. Conversion de numeros enteros con decimal a letras \n";
		cout<<"8. Una tabla de multiplicar \n";
		cout<<"9. Todas las tablas de multiplicar del 1 al 10 \n";
		cout<<"10. Crear de forma grafica la multiplicacion manual \n";
		cout<<"11. Conversion de numeros decimales a binario \n";
		cout<<"12. Conversion de numeros decimales a hexadecimales \n";
		cout<<"13. Crear Figuras geometricas basicas \n";
		cout<<"14. Mover un punto en toda la pantalla \n";
		cout<<"15. Simulacion de un Cajero (Automata) \n";
		cout<<"16. Calcular la hipotenusa \n";
		cout<<"17. Determinar si el número es primo \n";
		cout<<"18. Ingrese dos numeros para saber cual es el numero de mayor valor \n";
		cout<<"19. Calcular el mes del ano: \n";
		cout<<"20. Calcular la raiz cuadrada de un numero: \n \n";
		
		cin>>op;
		if (op==1) {
			calculadora(a);
		}
		if (op==2){
			par (a);
		}
		if (op==3){
			medidas (a);
		}
		if (op==4){
			palindromo (a);
		}
		if (op==5){
			romanos (a);
		}
		if (op==6){
			letras (a);
		}
		if (op==7){
			decimales (a);
		}
		if (op==8){
			tabla (a);
		}
		
		if (op==9){
			tabla (a);
		}
		if (op==10){
			grafica (a);
		}
		if (op==11){
			binario (a);
		}
		if (op==12){
			hexadecimal (a);
		}
		if (op==13){
			figuras (a);
		}
		if (op==14){
			while(a!=27)
	  		{
		  	a=getch();
		  	system("cls");
		  	if(a=='a') x--;
		  	if(a=='d') x++;
		  	if(a=='w') y--;
		  	if(a=='s') y++;
	  	
			dibujar_personaje(x,y);
			}
		}
		if (op==15){
			cajero (a);
		}
		if (op==16){
			hipotenusa (a);
		}
		if (op==17){
			primo (a);
		}
		if (op==18){
			mayor (a);
		}	
		if (op==19){
			mes (a);
		}
		if (op==20){
			raiz (a);
		}
	}
}
	

