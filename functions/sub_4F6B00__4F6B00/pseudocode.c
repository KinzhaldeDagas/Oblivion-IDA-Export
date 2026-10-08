char __cdecl sub_4F6B00(int a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f6b0d*/
  if ( a1 ) /*0x4f6b0f*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x24 ) /*0x4f6b1f*/
      *a4 = 1.0; /*0x4f6b23*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6b25*/
    Interface_ConsolePrint("GetIsCreature >> %0.2f", *a4); /*0x4f6b3b*/
  return 1; /*0x4f6b45*/
}
