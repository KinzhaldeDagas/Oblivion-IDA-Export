char __cdecl sub_4F7330(int a1, int a2, int a3, double *a4)
{
  *a4 = dbl_A3D360;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 4) == 4 )
      *a4 = *(float *)(a2 + 0x24);
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetGlobalValue >> %0.2f", *a4);
  return 1;
}
