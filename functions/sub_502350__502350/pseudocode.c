char __cdecl sub_502350(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  int v7; // eax

  *a7 = 0.0;
  if ( a6 )
  {
    v7 = *(_DWORD *)(a6 + 0x10);
    if ( v7 )
      *a7 = *(float *)(v7 + 4);
  }
  return 1;
}
