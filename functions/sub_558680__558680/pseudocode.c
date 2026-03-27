int __cdecl sub_558680(float *a1, float *a2, int a3)
{
  float *i; // esi

  for ( i = a2; i != a1; sub_557770((float *)((char *)i + a3 - (_DWORD)a2), i) )
    i += 0xFFFFFFF0;
  return a3 - (((char *)a2 - (char *)a1) >> 6 << 6);
}
