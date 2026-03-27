char __cdecl sub_4F8140(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 0x34) & 0x40) != 0 )
      *a4 = 1.0;
  }
  if ( !IsConsoleMode )
    return 1;
  if ( 0.0 == *a4 )
    Interface_ConsolePrint("PC did not Murder a faction member.");
  else
    Interface_ConsolePrint("PC murdered a faction member.");
  return 1;
}
