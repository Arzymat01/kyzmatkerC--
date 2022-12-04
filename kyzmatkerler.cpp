#include<iostream>

#include<conio.h>

#include<windows.h>

using namespace std;

struct kyzmatker{

	string aty,id,adres;

	int emgekaky,nomer;

};

int a=0;

kyzmatker k[100];

void empdata(){

	int koldonuuchu=0;

	cout<<"Kancha kyzmatker kirgizgin kelet ? "<<endl;git

	cin>>koldonuuchu;

	for(int i=a;i<a+koldonuuchu;i++){

		cout<<"Kyzmatkerdin maalymatyn kirgiz "<<i+1<<endl<<endl;

		cout<<"Kyzmatkerdin atyn kirgiz: ";

		cin>>k[i].aty;

		cout<<"ID kirgiz : ";

		cin>>k[i].id;

		cout<<"Adres kirgiz: ";

		cin>>k[i].adres;

		cout<<" Nomer kirgiz: ";

		cin>>k[i].nomer;

		cout<<"Emgek aky kirgiz: ";

		cin>>k[i].emgekaky;

	}

	a=a+koldonuuchu;

}

void show(){

	if(a!=0){

	for(int i=0;i<a;i++){

		cout<<"Kyzmatkrlerdin maalymattary "<<i+1<<endl;

		cout<<"Aty: "<<k[i].aty<<endl;

		cout<<"ID: "<<k[i].id<<endl;

		cout<<"Adres: "<<k[i].adres<<endl;

		cout<<"Nomer: "<<k[i].nomer<<endl;

		cout<<"Emgekaky: "<<k[i].emgekaky<<endl;

	}

    }

    else{

    	cout<<"Ech kandai maalymat jok"<<endl;

	}

}

void search(){

	if(a!=0){

	string id;

	cout<<"Izdeginiz kelgen kyzmatkerdin IDsin kirgiz"<<endl;

	cin>>id;

	for(int i=0;i<a;i++){

		if(k[i].id==id){

		cout<<"Kyzmatker maalymattary"<<i+1<<endl;

		cout<<"Aty: "<<k[i].aty<<endl;

		cout<<"ID: "<<k[i].id<<endl;

		cout<<"Adres: "<<k[i].adres<<endl;

		cout<<"Nomer: "<<k[i].nomer<<endl;

		cout<<"Emgekaky: "<<k[i].emgekaky<<endl;

		break;

		}

		if(i==a-1){

			cout<<"Maalymat tuura emes"<<endl;

		}

	}

}else{

	cout<<"Ech kandai maalymat jok"<<endl;

}

}

void update(){

	if(a!=0){

	string id;

	cout<<"Ozgortkun kelgen kyzmatkerdin IDsin kirgiz"<<endl;

	cin>>id;

	for(int i=0;i<a;i++){

		if(k[i].id==id){

		cout<<"Kyzmatkerdin eski maalymattary"<<i+1<<endl;

		cout<<"Aty: "<<k[i].aty<<endl;

		cout<<"ID: "<<k[i].id<<endl;

		cout<<"Adres: "<<k[i].adres<<endl;

		cout<<"nomer: "<<k[i].nomer<<endl;

		cout<<"emgekaky: "<<k[i].emgekaky<<endl;

		cout<<"Jany maalymat kirgiz"<<endl;

		cout<<"Kyzmatkerdin atyn kirgiz: ";

		cin>>k[i].aty;

		cout<<"ID kirgiz: ";

		cin>>k[i].id;

		cout<<"Adres kirgiz: ";

		cin>>k[i].adres;

		cout<<"Nomer kirgiz: ";

		cin>>k[i].nomer;

		cout<<"Emgekaky: ";

		cin>>k[i].emgekaky;

		break;

		}

		if(i==a-1){

			cout<<"Ech kandai maalymat jok"<<endl;

		}

	}

}else{

	cout<<"Maalymat tuura emes"<<endl;

}

}

void del(){

	if(a!=0){

	int press;

	cout<<"Belgiluu bir maalymattu ochuruu uchun 1 bas"<<endl;

	cout<<"Baaryn ochuruu uchun 2 bas"<<endl;

	cin>>press;

	if(press==1){

		string id;

		cout<<"Ocuruunu kaalagan kyzmatkerdin IDsin kirgiz "<<endl;

		cin>>id;

		for(int i=0;i<a;i++){

			if(k[i].id==id){

				k[i].aty=k[i+1].aty;

				k[i].id=k[i+1].id;

				k[i].adres=k[i+1].adres;

				k[i].nomer=k[i+1].nomer;

				k[i].emgekaky=k[i+1].emgekaky;

				a--;

				cout<<"Siz kaalagan maalymat ochuruldu"<<endl;

				break;

			}

			if(i==a-1){

			cout<<"Maalymat tuura emes"<<endl;

		}

		}

	}

	else if(press==2){

		a=0;

		cout<<"Bardyk maalymat jok kylynat"<<endl;

	}

	else{

		cout<<"Tuura emes kirgizildi"<<endl;

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

main(){

	cout<<"Kyzmatkerlrdi bashkaruu sistemasy"<<endl;

	  string koldonuuchu,syrsoz;

    cout<<"\n\n\n\t\t******Kattalyy******"<<endl;

	cout<<"\t\tJany koldonuuchu atyn kirgiz: ";

	cin>>koldonuuchu;

	cout<<"\t\t Jany syrsoz kirgiz: ";

	cin>>syrsoz;

	cout<<"\t\tKyto turunuz";

	for(int i=0;i<6;i++)

	{

		cout<<".";

		Sleep(500);

	}

	cout<<"\n\t\tIygiliktuu tuzuldu";

	Sleep(2000);

	start:

	system("CLS");

	string kd,sz;

	cout<<"\n\n\t\tKyzmatkerlerdi bashkaryy sistemasy"<<endl;

	cout<<"\n\n\n\t\t   Koldonuuchu"<<endl;

	cout<<"\t\tKoldonuuchunun atyn kirgiz: ";

	cin>>kd;

	cout<<"\t\tSyrsoz jaz: ";

	cin>>sz;

	if(kd==koldonuuchu&&syrsoz==sz)

	{

	system("CLS");

	char ch;

	while(1){

	cout<<"\n\nMaalymatty kirgizuu uchun 1 bas "<<endl; 

	cout<<"Korsotuu uchun 2 bas"<<endl;

	cout<<"Izdoo uchun 3 bas"<<endl;

	cout<<"Maalymatty januloo uchun 4 bas"<<endl;

	cout<<"Maalymatty ochuruu uchun 5 bas"<<endl;

	cout<<"Chygyy uchun 6 bas"<<endl;

	cout<<"Chuguu uchun 7 bas"<<endl;

	ch=getch();

	system("CLS");

	switch(ch){

		case '1':

			empdata();

			break;

		case '2':

			show();

			break;

		case '3':

			search();

			break;

		case '4':

			update();

			break;

		case '5':

			del();

			break;

		case '6':

			goto start;

			break;

		case '7':

			exit(0);

			break;

		default:

			cout<<"\tTuura emes kirgizildi"<<endl;

			break;

	}

}

}

  else if(kd!=koldonuuchu)

  {

  	cout<<"\t\t\aKoldonuuchu aty tuura emes";

  	Sleep(3000);

  	goto start;

  }

  else if(sz!=syrsoz)

  {

  	cout<<"\t\t\aTuura emes syrsoz";

  	Sleep(3000);

  	goto start;

  }

  else{

  	cout<<"\t\t\aTuura emes kirgizuu";

  	Sleep(3000);

  	goto start;

  }

}
