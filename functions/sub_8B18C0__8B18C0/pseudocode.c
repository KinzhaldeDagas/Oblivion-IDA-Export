__int16 __usercall sub_8B18C0@<ax>(int a1@<ebx>, char *a2, char a3, unsigned int a4)
{
  int v4; // eax

  LOBYTE(a1) = a3; /*0x8b18c9*/
  BYTE1(a1) = a3; /*0x8b18cb*/
  v4 = a1 << 0x10; /*0x8b18d9*/
  LOWORD(v4) = a1; /*0x8b18dc*/
  memset32(a2, v4, a4 >> 2); /*0x8b18df*/
  memset(&a2[4 * (a4 >> 2)], a3, a4 & 3); /*0x8b18e6*/
  return v4; /*0x8b18e8*/
}
