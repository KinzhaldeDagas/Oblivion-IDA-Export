char __cdecl sub_4F4B10(int a1, int a2, int a3, double *a4)
{
  int v7; // ecx

  *a4 = 0.0;
  if ( a1 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x190))(a1) )
      goto LABEL_8;
    v7 = a1;
  }
  else
  {
    v7 = a2;
  }
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 0x7C))(v7) )
      *a4 = 1.0;
  }
LABEL_8:
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetTalkedToPC >> %0.2f", *a4);
  return 1;
}
