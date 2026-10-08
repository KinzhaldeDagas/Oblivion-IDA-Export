int __cdecl sub_558610(float *a1, float *a2, int a3)
{
  float *i; // esi

  for ( i = a1; i != a2; i += 0x10 ) /*0x55862e*/
    sub_557770((float *)((char *)i + a3 - (_DWORD)a1), i); /*0x558636*/
  return a3 + (((char *)a2 - (char *)a1) >> 6 << 6); /*0x558644*/
}
