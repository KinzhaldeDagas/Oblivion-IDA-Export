int __cdecl sub_558610(float *a1, float *a2, int a3)
{
  float *i; // esi

  for ( i = a1; i != a2; i += 0x10 )
    sub_557770((float *)((char *)i + a3 - (_DWORD)a1), i);
  return a3 + (((char *)a2 - (char *)a1) >> 6 << 6);
}
