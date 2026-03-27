char __cdecl sub_4F7B90(int a1, int a2, int a3, double *a4)
{
  int v7; // eax
  TESClass *v8; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
      if ( v7 )
      {
        v8 = *(TESClass **)(v7 + 0x104);
        if ( v8 )
        {
          if ( TESClass::IsGuardClass(v8) )
            *a4 = 1.0;
        }
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Is Guard >> %0.2f", *a4);
  return 1;
}
