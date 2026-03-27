char __cdecl sub_4F6FC0(int a1, int a2, int a3, double *a4)
{
  _BYTE *v7; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 )
    {
      v7 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
      if ( v7 )
      {
        if ( TESActorBase_IsFemale(v7) == a2 )
          *a4 = 1.0;
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetIsSex >> %0.2f", *a4);
  return 1;
}
