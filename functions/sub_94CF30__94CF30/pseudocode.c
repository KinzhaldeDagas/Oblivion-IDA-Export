int __thiscall sub_94CF30(int *this, int a2)
{
  int **v3; // edi

  v3 = (int **)(this + 0x30); /*0x94cf4b*/
  sub_958610((int **)this + 0x30, (__m128 *)this + 4, (__m128 *)this + 6, 0x3E800000u, 0xFFFF0000, a2); /*0x94cf54*/
  return sub_958610(v3, (__m128 *)this + 5, (__m128 *)this + 9, 0x3E800000u, 0xFFFFFFFF, a2); /*0x94cf73*/
}
