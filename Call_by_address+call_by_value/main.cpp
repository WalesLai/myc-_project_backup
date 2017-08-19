#include <cstdlib>
#include <iostream>
void pass(int *,int);
//using namespace std;
int a=1,b=2,c=3,d=4;
int main(int argc, char *argv[])
{
 	
 	std::cout<<"第一個輸出  "<<"a="<<a<<"  b="<<b<<"  c="<<c<<"  d="<<d<<std::endl;//第一輸出 
 	pass(&a,b);
 	std::cout<<"第三個輸出  "<<"a="<<a<<"  b="<<b<<"  c="<<c<<"  d="<<d<<std::endl;//第三輸出 
    system("PAUSE");
    return EXIT_SUCCESS;
}
void pass(int *a,int b)
{
 	 int c=7;
 	 *a=5;
 	 b=6;
 	 d=8;
 	 std::cout<<"第二個輸出&副函式中的  "<<"a="<<*a<<"  b="<<b<<"  c="<<c<<"  d="<<d<<std::endl;//第二輸出 
 	 }//如果有相同的參數  副函式不會去變動主函式的內容(因為指標沒回傳) 所以pass中的C=7 不影響MAIN中的C=3  所以第3輸出的C=3 
 	 //但是如果 副函式中已經更動到主函式有的(前提是 並非傳過來的參數  例如D) 如此 主函式的D會被更動 
/*------------------------------------------------------
d 4                d  4            d  4 
c 3                c  3            c  3 
b 2                b  2            b  2 
a 1                a  5            a  5 
----               ----            ----- 
c 7                c  7            c  7 
b 2                b  2            b  6 
a 65492            a  65492        a   65492 
//第10列呼叫       18列呼叫        //19列呼叫 

d 8               d  8 
c 3               c  3 
b 2               b  2 
a 5               a  5 
----        ==>  ----- 
c 7 
b 6 
a 65492 
//20列呼叫       final 
----------------------------------------------------------*/
