#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 int main(){

//   double Area=0.0,r=0.0,n=3.14159;
//   cin>>r;
//   Area=n*r*r;
//   cout<<"A="<<fixed<<setprecision(4)<<Area;
//   cout<<endl;
    
//     double A=0.0,B=0.0,C=0.0,Avg=0.0;
//     cin>>A>>B>>C;
//     Avg=((A*2)+(B*3)+(C*5))/10.0;
//     cout<<"MEDIA = "<<fixed<<setprecision(1)<<Avg<<endl;

// int a=0,b=0,c=0,d=0;
// cin>>a>>b>>c>>d;
// cout<<"DIFERENCA = "<<(a*b)-(c*d)<<endl;

// int empNo=0,hour=0;
// double salHour=0.0,sal=0.0;
// cin>>empNo>>hour>>salHour;
// sal=hour*salHour;
// cout<<"NUMBER = "<<empNo<<endl
// <<"SALARY = U$ "<<fixed<<setprecision(2)<<sal<<endl;


// int n=0;
// string value;
// cin>>n;
// int arr[n];
// if (n<10000)
// for (int j = 0;j<n;j++)
// {
//     cin>>arr[j];
// }

// {
// for(int i=0;i<n;i++){
//     if(arr[i]%2!=0&&arr[i]<0){
//         value ="ODD NEGATIVE";
//     }
//     else if(arr[i]%2==0&&arr[i]>0){
//         value="EVEN POSITIVE";
//     }
//     else if(arr[i]%2==0&&arr[i]<0){
//         value="EVEN NEGATIVE";
//     }
//     else if(arr[i]%2!=0&&arr[i]>0){
//         value="ODD POSITIVE";
//     }
//     else
//     {
//         value="NULL";
//     }
//     cout<<value<<endl;
// }
// }

    // int n;
    // cin>>n;
    // if(n>1&&n<1000){
    //     for (int i = 1; i <= 10; i++)
    //     {
    //         cout<<i<<" x "<<n<<" = "<<i*n<<endl;
    //     }
        
    // }

    // int num,count=0;
    // cin>>num;
    // for (int i = 1; i <= num*4; i++)
    // {
    //     count++;
    //     if(count%4==0){
    //         cout<<"PUM"<<endl;
            
    //     }
    //     else{
    //         cout<<count<<" ";
    //     }
        
    // }

    // double num=0.0;
    // cin>>num;
    
    //  if(num>=0.0&&num<=25.0)
    // {
    //     cout<<"Intervalo [0,25]"<<endl;
    // }
    // else if(num>=25.00001&&num<=50.0)
    // {
    //  cout<<"Intervalo (25,50]"<<endl;
    // }
    // else if(num>=50.00001&&num<=75.0)
    // {
    //     cout<<"Intervalo (50,75]"<<endl;
    // }
    // else if(num>=75.01&&num<=100.0)
    // {
    //     cout<<"Intervalo (75,100]"<<endl;
    // }
    // else{
    //     cout<<"Fora de intervalo"<<endl;
    // }
    
    // int pass=0.0,correctPass=2002;
    // while (true)
    // {
    //    cin>>pass;
    //    if(pass==correctPass){
    //        cout<<"Acesso Permitido"<<endl;
    //        break;
    //    }
    //    else{
    //        cout<<"Senha Invalida"<<endl;
    //        continue;
           
    //    }
    // }
    

    // int kiloMeter=0.0;
    // cin>>kiloMeter;
    // cout<<kiloMeter*2<<" minutos"<<endl;

    // double x1,x2,y1,y2;
    // cin>>x1>>y1>>x2>>y2;
    // double dis=pow(x2-x1,2)+pow(y2-y1,2);
    // double totalDis=pow(dis,0.5);
    // cout<<fixed<<setprecision(4)<<totalDis<<endl;
    
    // double x,y;
    // cin>>x>>y;
    // double avg =x/y;
    // cout<<fixed<<setprecision(3)<<avg<<" km/l"<<endl;

    // int code,noOfPro,code2,noOfPro2;
    // double priceOfPro,priceOfPro2;
    // cin>>code>>noOfPro>>priceOfPro;
    // cin>>code2>>noOfPro2>>priceOfPro2;
    // double totalPrice=(noOfPro*priceOfPro)+(noOfPro2*priceOfPro2);
    // cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<totalPrice<<endl;

	
// TRIANGULO: 7.800
// CIRCULO: 84.949
// TRAPEZIO: 18.200
// QUADRADO: 16.000
// RETANGULO: 12.000


// double a,b,c;
// cin>>a>>b>>c;
// cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<(0.5*a*c)<<endl
// <<"CIRCULO: "<<fixed<<setprecision(3)<<(3.14159*c*c)<<endl
// <<"TRAPEZIO: "<<fixed<<setprecision(3)<<((a+b)/2)*c<<endl
// <<"QUADRADO: "<<fixed<<setprecision(3)<<(b*b)<<endl
// <<"RETANGULO: "<<fixed<<setprecision(3)<<(a*b)<<endl;

// int x,count=0;
// cin>>x;

//     if (x==5||x%5==0)
//     {
//         while (x>0)
//         {
//             count++;
//        x-=5;
//         }}
//     else {
//         x++;
//         while (x>0)
//         {
//             count++;
//        x-=5;
//         }
//     }
// cout<<count<<endl;

    // double a,b,c,dis=0,x1,x2;
    // cin>>a>>b>>c;
    // dis=pow(b,2)-(4*a*c);
    // if(dis>0&&a!=0){
    //     x1=(-b-sqrt(dis))/(2*a);
    //     x2=(-b+sqrt(dis))/(2*a);
    //     cout<<"R1 = "<<fixed<<setprecision(5)<<x2<<endl
    //     <<"R2 = "<<fixed<<setprecision(5)<<x1<<endl;
    // }
    // else if (dis<0||a==0)
    // {
    //     cout<<"Impossivel calcular"<<endl;
    // }


    // double a,b,c;
    // double A,B,C;
    // cin>>a>>b>>c;
    // if (a>=b&&a>=c)
    // {
    //     A=a;
    //     B=b;
    //     C=c;
    // }
    // else if (b>=a&&b>=c)
    // {
    //     A=b;
    //     B=a; 
    //     C=c;  
    // }
    // else if(c>=b&&c>=a){
    //     A=c;
    //     B=b;
    //     C=a;

    // }
        

    // if(A>=(B+C)){
    //     cout<<"NAO FORMA TRIANGULO"<<endl;
    //    return 0;
    // }
    // if(pow(A,2)==(pow(B,2)+pow(C,2))){
    //     cout<<"TRIANGULO RETANGULO"<<endl;
    // }
    // if(pow(A,2)>(pow(B,2)+pow(C,2))){
    //     cout<<"TRIANGULO OBTUSANGULO"<<endl;
    // }
    // if(pow(A,2)<(pow(B,2)+pow(C,2))){
    //     cout<<"TRIANGULO ACUTANGULO"<<endl;
    // }
    // if(A==B && A==C &&B==C){
    //     cout<<"TRIANGULO EQUILATERO"<<endl;
    // }
    //  if((A==B&&A!=C)||(B==C &&A!=B)||(A==C&&A!=B)){
    //     cout<<"TRIANGULO ISOSCELES"<<endl;
    // }

    
    


       
  }