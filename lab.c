#include <stdio.h> //เป็นคำสั่งที่ใช้ในการเรียกไฟล์จากภายนอก โดยทำการเรียกค่าโปรแกรมหรือข้อความในไฟล์ปลายทาง 
int factorial(int x); //เป็นการประกาศให้ค่าของ X เป็นเลขจำนวนเต็ม
int main() //เป็นคำสั่งเพื่อเป็นจุดเริ่มต้นของการทำงานในโปรแกรม 
{
    int y = factorial(6); //ประกาศตัวแปรแบบ int กำหนดให้ตัวแปร Y เท่ากับ 8!
    printf("6! = %d", y); //ใช้พิมพ์ข้อมูลออกทางหน้าจอ
    return 0; //คืนค่า 0 เพื่อระบุว่าโปรแกรมจบการทำงานโดยไม่มีข้อผิดพลาด
}

int factorial(int x)
{
    if (x <= 1) //ถ้าเงื่อนไขที่กำหนดไว้เป็นจริงให้ประมวลผลตามคำสั่งที่ต้องการหลังคำสั่ง if
        return 1; 
    else //หากเงื่อนไขที่ได้เป็นเท็จก็ให้ประมวลผลหลังคำสั่ง else
        return x * factorial (x-1); //ก็จะส่งค่ากลับคืนไปยังตัวที่มันเรียกใช้
}
