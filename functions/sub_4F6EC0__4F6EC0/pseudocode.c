// GetIsClass_Eval (index 68 / opcode 0x1044): requires the subject BaseForm to be TESNPC (form type 0x23), then pointer-compares NPC class at +0x104 with the Class parameter (typeID 0x10). Result is numeric 1 or 0.
char __cdecl sub_4F6EC0(int a1, int a2, int a3, double *a4)
{
  int v4; // edi
  int v5; // eax

  *a4 = 0.0; /*0x4f6ec7*/
  v4 = 0; /*0x4f6ecf*/
  if ( a1 ) /*0x4f6ed3*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 ) /*0x4f6ee5*/
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x4f6ef3*/
  }
  v5 = 0; /*0x4f6ef9*/
  if ( a2 ) /*0x4f6efd*/
  {
    if ( *(_BYTE *)(a2 + 4) == 5 ) /*0x4f6f03*/
      v5 = a2; /*0x4f6f05*/
  }
  if ( v4 ) /*0x4f6f09*/
  {
    if ( v5 ) /*0x4f6f0d*/
    {
      if ( *(_DWORD *)(v4 + 0x104) == v5 ) /*0x4f6f15*/
        *a4 = 1.0; /*0x4f6f19*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6f1b*/
    Interface_ConsolePrint("GetIsClass >> %0.2f", *a4); /*0x4f6f31*/
  return 1; /*0x4f6f39*/
}
