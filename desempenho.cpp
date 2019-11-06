#include <iostream>
using namespace std;
/*inteligencia, força, charme, metas=desempenho*/

int main(int argc, char** argv) {
	float inteligencia,forca,charme,metas;
	float desempenho;
	
	cout<<"digite a inteligencia"<<endl;
	cin>>inteligencia;
	
	cout<<"digite a forca"<<endl;
	cin>>forca;
	
	cout<<"digite o charme"<<endl;
	cin>>charme;
	
	cout<<"digite a meta"<<endl;
	cin>>metas;
	
	desempenho = (inteligencia+forca+charme+metas)/4;
	
	if(desempenho>=0 && desempenho<=2){
		cout<<"\n\ndesempenho="<<desempenho<<".Situacao: creep"<<endl;
	}
	if(desempenho>2.1 && desempenho<=4){
		cout<<"\n\ndesempenho="<<desempenho<<".Situacao: treinem mais e busquem conhecimento "<<endl;
	}
	if(desempenho>4.1 && desempenho<=6){
		cout<<"\n\ndesempenho="<<desempenho<<".Situacao: normal"<<endl;
	}
	if(desempenho>6.1 && desempenho<=7.9){
		cout<<"\n\ndesempenho="<<desempenho<<".Situacao: top"<<endl;
	}
	if(desempenho>8 && desempenho<=9){
		cout<<"\n\ndesempenho="<<desempenho<<".Situacao: special"<<endl;
	}
	if(desempenho>9.1 && desempenho<=10){
		cout<<"\n\ndesempenho="<<desempenho<<".Situacao: perfect"<<endl;
	}
	
	return 0;
}
