char __cdecl sub_4F4CE0(int a1, int a2, int a3, double *a4)
{
  int v7; // esi

  *a4 = 0.0;
  v7 = 0;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0xA4))(a2) )
      v7 = a2;
  }
  if ( a1 )
  {
    if ( v7 )
    {
      if ( (*(int (**)(void))(*(_DWORD *)a1 + 0x170))() == v7 )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsID >> %0.2f", *a4);
  return 1;
}
