char __cdecl sub_50A120(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  char result; // al

  *a7 = 0.0;
  if ( !a5 || a5 == 0xFFFFFFE8 )
    return 1;
  result = 1;
  if ( *(_BYTE *)(a5 + 0x29) )
    *a7 = 1.0;
  return result;
}
