char __cdecl sub_4F6350(int a1, int a2, int a3, double *a4)
{
  _BYTE *v4; // ebp
  _BYTE *v5; // edi
  int IsFemale; // esi

  *a4 = 0.0; /*0x4f6357*/
  v4 = 0; /*0x4f635e*/
  if ( a1 ) /*0x4f6363*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 ) /*0x4f6375*/
      v4 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x4f6383*/
  }
  v5 = 0; /*0x4f6389*/
  if ( a2 ) /*0x4f638d*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2) + 4) == 0x23 ) /*0x4f639f*/
      v5 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x170))(a2); /*0x4f63ad*/
  }
  if ( v4 ) /*0x4f63b1*/
  {
    if ( v5 ) /*0x4f63b5*/
    {
      IsFemale = TESActorBase_IsFemale(v5); /*0x4f63c0*/
      if ( TESActorBase_IsFemale(v4) == IsFemale ) /*0x4f63c9*/
        *a4 = 1.0; /*0x4f63d1*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f63d3*/
    Interface_ConsolePrint("SameSex >> %0.2f", *a4); /*0x4f63f0*/
  return 1; /*0x4f63da*/
}
