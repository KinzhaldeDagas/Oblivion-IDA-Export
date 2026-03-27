char __cdecl sub_4F83D0(int a1, int a2, int a3, double *a4)
{
  int DefaultClass; // eax
  int v8; // ecx

  *a4 = 0.0;
  DefaultClass = Actor_GetDefaultClass(TESDataHandler_g_PlayerRef);
  v8 = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 4) == 5 )
      v8 = a2;
  }
  if ( DefaultClass == v8 )
    *a4 = 1.0;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsClass >> %0.2f", *a4);
  return 1;
}
