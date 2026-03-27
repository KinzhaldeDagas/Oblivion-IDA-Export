char __cdecl sub_4F6350(int a1, int a2, int a3, double *a4)
{
  _BYTE *v4; // ebp
  _BYTE *v5; // edi
  int IsFemale; // esi

  *a4 = 0.0;
  v4 = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 )
      v4 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
  }
  v5 = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2) + 4) == 0x23 )
      v5 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2);
  }
  if ( v4 )
  {
    if ( v5 )
    {
      IsFemale = TESActorBase_IsFemale(v5);
      if ( TESActorBase_IsFemale(v4) == IsFemale )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("SameSex >> %0.2f", *a4);
  return 1;
}
