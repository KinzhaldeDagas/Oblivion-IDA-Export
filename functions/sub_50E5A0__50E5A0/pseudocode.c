char __cdecl sub_50E5A0(int a1, int a2, int a3, int a4, int a5, int a6, double *a7)
{
  int v7; // esi

  v7 = TESDataHandler + 0x84;
  if ( TESDataHandler != 0xFFFFFF7C )
  {
    do
    {
      if ( !*(_DWORD *)(v7 + 4) && !*(_DWORD *)v7 )
        break;
      sub_529820(*(_BYTE **)v7, 1);
      v7 = *(_DWORD *)(v7 + 4);
    }
    while ( v7 );
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("All Quests Enabled.", *a7);
  return 1;
}
