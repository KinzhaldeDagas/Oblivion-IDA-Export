char __cdecl sub_4F6E50(TESObjectREFR *a1, int a2, TESObjectREFR *a3, double *a4)
{
  TESWorldSpace *v4; // esi
  TESObjectREFR *v5; // eax

  v4 = 0; /*0x4f6e5c*/
  *a4 = 0.0; /*0x4f6e5e*/
  if ( a2 ) /*0x4f6e62*/
  {
    if ( *(_BYTE *)(a2 + 4) == 0x35 ) /*0x4f6e68*/
      v4 = (TESWorldSpace *)a2; /*0x4f6e6a*/
  }
  v5 = a3; /*0x4f6e6c*/
  if ( !a3 || (unsigned int)a3->member.super.type - 0x31 > 2 ) /*0x4f6e7e*/
    v5 = a1; /*0x4f6e80*/
  if ( v4 ) /*0x4f6e86*/
  {
    if ( TESObjectREFR_GetWorldSpace(v5) == v4 ) /*0x4f6e91*/
      *a4 = 1.0; /*0x4f6e95*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f6e97*/
    Interface_ConsolePrint("GetInWorldspace >> %0.2f", *a4); /*0x4f6ead*/
  return 1; /*0x4f6eb5*/
}
