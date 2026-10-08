char __cdecl sub_4F7B90(int a1, int a2, int a3, double *a4)
{
  int v4; // eax
  TESClass *v5; // eax

  *a4 = 0.0; /*0x4f7b9e*/
  if ( a1 ) /*0x4f7ba0*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 ) /*0x4f7bb2*/
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x4f7bbe*/
      if ( v4 ) /*0x4f7bc2*/
      {
        v5 = *(TESClass **)(v4 + 0x104); /*0x4f7bc4*/
        if ( v5 ) /*0x4f7bcc*/
        {
          if ( TESClass::IsGuardClass(v5) ) /*0x4f7bd0*/
            *a4 = 1.0; /*0x4f7bdb*/
        }
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f7bdd*/
    Interface_ConsolePrint("Is Guard >> %0.2f", *a4); /*0x4f7bf3*/
  return 1; /*0x4f7bfb*/
}
