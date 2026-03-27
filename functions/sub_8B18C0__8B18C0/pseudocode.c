__int16 __usercall sub_8B18C0@<ax>(int a1@<ebx>, char *a2, char a3, unsigned int a4)
{
  int v4; // eax

  LOBYTE(a1) = a3;
  BYTE1(a1) = a3;
  v4 = a1 << 0x10;
  LOWORD(v4) = a1;
  memset32(a2, v4, a4 >> 2);
  memset(&a2[4 * (a4 >> 2)], a3, a4 & 3);
  return v4;
}
