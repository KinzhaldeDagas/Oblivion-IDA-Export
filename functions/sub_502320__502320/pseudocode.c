char __cdecl sub_502320(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  int v7; // eax
  bool v8; // zf
  char result; // al

  *a7 = 0.0;
  if ( !a6 )
    return 1;
  v7 = *(_DWORD *)(a6 + 0x10);
  if ( !v7 )
    return 1;
  v8 = *(_BYTE *)(v7 + 1) == 0;
  result = 1;
  if ( !v8 )
    *a7 = 1.0;
  return result;
}
