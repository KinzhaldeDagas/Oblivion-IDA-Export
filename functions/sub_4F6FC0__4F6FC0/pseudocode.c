// GetIsSex_Eval (index 70 / opcode 0x1046): requires TESNPC BaseForm; Sex parameter (typeID 0x12) is compared with TESActorBase_IsFemale (0 male, 1 female), yielding numeric 1 or 0.
char __cdecl sub_4F6FC0(int a1, int a2, int a3, double *a4)
{
  _BYTE *v4; // eax

  *a4 = 0.0; /*0x4f6fce*/
  if ( a1 ) /*0x4f6fd0*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 ) /*0x4f6fe2*/
    {
      v4 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x4f6fee*/
      if ( v4 ) /*0x4f6ff2*/
      {
        if ( TESActorBase_IsFemale(v4) == a2 ) /*0x4f6fff*/
          *a4 = 1.0; /*0x4f7003*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f7005*/
    Interface_ConsolePrint("GetIsSex >> %0.2f", *a4); /*0x4f701b*/
  return 1; /*0x4f7023*/
}
