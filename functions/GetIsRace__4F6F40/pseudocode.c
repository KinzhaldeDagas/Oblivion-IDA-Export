// GetIsRace_Eval (index 69 / opcode 0x1045): requires TESNPC BaseForm (type 0x23), then pointer-compares its actual race field at +0xE8 with the Race parameter (typeID 0x0F). Result is numeric 1 or 0.
char __cdecl GetIsRace(int a1, int a2, int a3, double *a4)
{
  int v4; // edi
  int v5; // eax

  *a4 = 0.0; /*0x4f6f47*/
  v4 = 0; /*0x4f6f4f*/
  if ( a1 ) /*0x4f6f53*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x23 ) /*0x4f6f65*/
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x4f6f73*/
  }
  v5 = 0; /*0x4f6f79*/
  if ( a2 ) /*0x4f6f7d*/
  {
    if ( *(_BYTE *)(a2 + 4) == 9 ) /*0x4f6f83*/
      v5 = a2; /*0x4f6f85*/
  }
  if ( v4 ) /*0x4f6f89*/
  {
    if ( v5 ) /*0x4f6f8d*/
    {
      if ( *(_DWORD *)(v4 + 0xE8) == v5 ) /*0x4f6f95*/
        *a4 = 1.0; /*0x4f6f99*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6f9b*/
    Interface_ConsolePrint("GetIsRace >> %0.2f", *a4); /*0x4f6fb1*/
  return 1; /*0x4f6fb9*/
}
