char __cdecl sub_504560(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, double *a7)
{
  bool v7; // zf
  char result; // al

  *a7 = 0.0;
  if ( !a3 || !a6 )
    return 1;
  v7 = !sub_4FB5F0(a6, 0, 0x1000);
  result = 1;
  if ( !v7 )
    *a7 = 1.0;
  return result;
}
