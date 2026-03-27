char __cdecl sub_4F81A0(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 0x34) & 0x10) != 0 )
      *a4 = 1.0;
  }
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a4 )
    Interface_ConsolePrint("PC did not steal from faction or member.");
  else
    Interface_ConsolePrint("PC stole from faction or member.");
  return 1;
}
