//-----------��1����C++����-----------------
#if 0
int main() 
{
}
#endif


#if 0
// ����ע�ͣ�˫б��//��ʾ����ע��
int main()
{
}
#endif

#if 0
//C++����ִ�н���main()�ĺ���
int main() //����ǩ��
{
}
#endif

#if 0
// ����ע�ͣ� /*��ͷ��*/j��β
/* C++����ִ�н���main()�ĺ���
 ����ע�ͣ�˫б��//��ʾ����ע��
 //����ע�������Ƕ�׵���ע�ͣ�������Ƕ�׶���ע��
*/
int main() //����ǩ��
{
}
#endif

#if 0
//��䶼��; ��β��
int main() 
{
    return 0; //return����0�������߼�����ϵͳ����ʾû�д���              
}
#endif



#if 0 //#��ͷ����Ԥ����ָ��
int main()
{
                 
}
#endif

#if 0
//Ԥ����ָ��#include ����ͷ�ļ�iostream
#include <iostream>  //iostream�Ǳ�׼�������ͷ�ļ�
int main()
{
}
#endif

#if 0
//Ԥ����ָ��#include ����ͷ�ļ�iostream
#include <iostream>  //iostream�Ǳ�׼�������ͷ�ļ�
int main()
{
    std::cout << "hello world!"; //���һ���ַ���
                                 //cout�Ǳ�׼���ֿռ�std�����֣�
                                 //cout�����׼���������
                                 //"hello world!"��˫���Ű�Χ���ַ���
                                 // << ����������
    return 0;
}
#endif

#if 0
#include <iostream>
using std::cout;
int main() {
    cout << "        *" << '\n';
    cout << "      *   *" << '\n';
    cout << "    *   *   *" << '\n';
    cout << "  *   *   *   *" << '\n';
    return 0;
}
#endif


#if 0
// ����Բ��������ܳ�
#include <iostream> 
int main() {
    std::cout << 3.14 * 2.5 * 2.5 << std::endl;
    std::cout << 2 * 3.14 * 2.5 << std::endl;
    return 0;
}
#endif

#if 0
// �޸�Բ����PI�ľ���
#include <iostream> 
int main() {
    std::cout << 3.1415926 * 2.5 * 2.5 << std::endl;
    std::cout << 2 * 3.14 * 2.5 << std::endl;
    return 0;
}
#endif

#if 0
#include <iostream> 
#define PI 3.1415  //�궨��
                   //��#define�����
int main() {
    std::cout << PI * 2.5 * 2.5 << std::endl;
    std::cout << 2 * PI * 2.5 << std::endl;
    return 0;
}
#endif


#if 0
//��������һ���ڴ棬ÿ����������ȷ�������͡�
//���;����˶Ա����ܽ���ʲô���㡢����ռ�ڴ��С������ֵ��Χ
#include <iostream> 
int main() {
    int i = 3;                    //���ͱ���i��ʼ��Ϊ������3
    char ch = 'A';                //�ַ���
    double d = 3.14;              //����������
    bool ok = true;               //��������
    std::cout << i << std::endl;
    std::cout << ch << std::endl;
    std::cout << d << std::endl;
    std::cout << ok << std::endl;
    return 0;
}
#endif

#if 0
//�������������(���� / �������������㣬�����˱��ʽ
//һ����Ҳ��һ�����ʽ

#include <iostream> 
int main() {
    int x, y = 4;          //ͬ���ͱ����Ķ����ö��Ÿ���
    x = 3;                 //��ֵ�����
    z = 2 * (3 + 4)        //���������
    std::cout << z << std::endl;
}
#endif

#if 0
#include <iostream> 
#define PI 3.14159
int main() {
    double radius;
    std::cout << "������Բ�İ뾶��";   //��������<<
    std::cin >> radius;               //���������>>,
                                      //cin��׼����������
    std::cout << "Բ������ǣ�" << PI * radius * radius 
        << std::endl;
    return 0;
}
#endif

#if 0
//��ʽ�����
#include <iostream> //��������� ͷ�ļ�
#include <iomanip>  //setw()������Ҫ��ͷ�ļ�
                    //setw()����������
int main() {
    
    std::cout << "int"<<'\t'<< "double" << '\t' << "bool\n";
    std::cout << "int" << std::setw(10) << "double" 
        << std::setw(10) << "bool";
    
    return 0;
}
#endif

#if 0
/*  ����ǩ����ʽ��
��������  ������(�����б�)      */
int       main(  )
{
    
}
#endif

#if 0
/*  ���������ʽ��
��������  ������(�����б�)
{
    ��������ɵ�����
}
*/
int       main    () 
{
    int i = 3, j = 4;
    i = i + j;
    return 0;
}
#endif


#if 0
//�����п����������ĺ�����
//ͨ������������ִ�к������е����
#include <iostream> 
void hello() {
    std::cout << "hello\t";
    std::cout << "wang\n";
}

void add_34() {
    std::cout << "3+4=:" << 3 + 4 << std::endl;
}

//�������β��б���Զ������β�
double circle_area(double radius) {//��ʽ����
    return 3.14159 * radius * radius;
}

int main() {
    hello();      //����hello()����
    add_34();    //����add_34()����
    hello();     //���븴��
    std::cout<<circle_area(2.5)<<std::endl;  //�ṩ��ʵ�ʲ��������ú���
    std::cout << circle_area(3.5) << std::endl;
    std::cout << circle_area(7.5) << std::endl;
    return 0;
}
#endif

#if 0
//���ֿռ䣺��ֹ���ֳ�ͻ
#include <iostream>
namespace A {
    int a;
    double f() { return 3.14; }
    int g(int i) { return 2 * i; }
}

namespace B {
    double a;
    int f() { return 0; }
    char g;
}

using  A::a;
using  A::f;
int main() {
    int i = 2;
    a = B::f();
    B::a = f();
}
#endif


#if 0
//�����޶�:               
//  ���ֿռ���::���� 
#include <iostream>
int main() {
    double radius;
    std::cout << "������Բ�İ뾶��";  //m
    std::cin >> radius;
    std::cout << "Բ������ǣ� " << 3.14 * radius * radius;
}
#endif

#if 0
//using������  
//using ���ֿռ���::����;
#include <iostream>
using std::cout;
#include <iostream>
int main() {
    double radius;
    cout << "������Բ�İ뾶��";  //m
    std::cin >> radius;
    cout << "Բ������ǣ� " << 3.14 * radius * radius;
}
#endif

#if 0
//u�����������ֿռ� ��     
//using namespace A;
#include <iostream>
using namespace std;
#include <iostream>
int main() {
    double radius;
    cout << "������Բ�İ뾶��";  //m
    cin >> radius;
    cout << "Բ������ǣ� " << 3.14 * radius * radius;
}
#endif


#if 0
//if�������
#include <iostream>
int main() {
    double radius;
    std::cout << "������Բ�İ뾶��";  //m
    std::cin >> radius;
    if (radius > 0)
        std::cout << "Բ������ǣ� " << 3.14 * radius * radius;
}
#endif

#if 0
//if������� 
#include <iostream>
int main() {
    double radius;
    std::cout << "������Բ�İ뾶��";  //m
    std::cin >> radius;
    if (radius <= 0)
        std::cout << "Բ�뾶����С��0 ";
    else
        std::cout << "Բ������ǣ� " << 3.14 * radius * radius;
}
#endif


#if 0
//whileѭ�����
#include <iostream>
int main() {
    int i=1, sum = 0;
    while (i <= 100) {
        sum = sum + i;
        i = i + 1;
    }
    std::cout << "1��100������֮���ǣ�" << sum << std::endl;
}
#endif

#if 1
//forѭ�����
#include <iostream>
int main() {
    int sum = 0;
    for (int i = 0; i <= 100; i++){
        sum = sum + i;
    }
    std::cout << "1��100������֮���ǣ�" << sum << std::endl;
}
#endif

// ----------��ϰ--------
#if 0
//�ҳ������еĴ���
#include <iostream>
using namespace std
void main() {
    int FTemp = 0
        int CTemp = 0;
    cout >> "Enter a Farenheit temperature: ";
    cin << FTemp;   CTemp = FTemp - 32 / (9 / 5);
    cout >> "\n <<FTemp >> " in Farenheit = "  >> CTemp >> in Celsius\n";
    return 0;
}
#endif

#if 0
/* Ŀ�꣺дһ�������������� cube(������), sphere(��), cone(Բ׶).
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include<iostream>
int main() {
    float cubeSide = 5.4;    //Dimension of the cube    
    float sphereRadius = 2.33;   //Dimension of sphere 
    float coneRadius = 7.65;   //Dimensions of cone    
    float coneHeight = 14;
    float volCube, volSphere, volCone = 0;
    return 0;
}
#endif

#if 0
�Ӽ�������3��ʵ����Ȼ�󰴴�С����ĳ������
#endif

#if 0
�Ӽ�������һϵ�������������ǵ����ֵ�����
#endif


#if 0
/*���������Ӽ������룬��ӡ������µĽ�������
             *
           *   *
         *   *   *
       *   *   *   * 
*/
#endif


