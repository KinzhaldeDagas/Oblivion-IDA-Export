char __cdecl sub_4F8720(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( (*(_DWORD *)(a1 + 8) & 0x100000) != 0 )
    *a4 = 1.0;
  return 1;
}
