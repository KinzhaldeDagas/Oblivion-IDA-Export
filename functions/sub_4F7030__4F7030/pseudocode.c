char __cdecl sub_4F7030(int a1, int a2, int a3, double *a4)
{
  int v7; // eax
  int v8; // eax
  double v9; // st5

  if ( dword_B361A4 == a1 )
  {
    *a4 = flt_B361A8;
  }
  else
  {
    *a4 = 0.0;
    if ( a1 )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 )
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
        if ( v7 )
        {
          v8 = *(_DWORD *)(v7 + 0xE8);
          if ( v8 )
          {
            if ( (*(_BYTE *)(v8 + 0x70) & 1) != 0 )
              *a4 = 1.0;
          }
        }
      }
    }
    v9 = *a4;
    dword_B361A4 = a1;
    flt_B361A8 = v9;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsPlayableRace >> %0.2f", *a4);
  return 1;
}
