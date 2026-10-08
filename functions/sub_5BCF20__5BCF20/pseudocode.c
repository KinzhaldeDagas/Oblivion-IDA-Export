void __usercall sub_5BCF20(int a1@<ecx>, double a2@<st0>)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  CHAR *v6; // eax
  CHAR *v7; // eax
  CHAR *v8; // [esp-4h] [ebp-140h]
  CHAR *v9; // [esp-4h] [ebp-140h]
  char v10[300]; // [esp+Ch] [ebp-130h] BYREF

  sub_597CA0(unk_B3B410); /*0x5bcf3f*/
  Player_GetActorBarterFactor_(*(_DWORD **)(a1 + 0x50)); /*0x5bcf51*/
  v3 = Double_To_SInt32(a2); /*0x5bcf6b*/
  calculateItemMultiplicationFromDisposition((TESObjectREFR *)reference, *(Actor **)(a1 + 0x50)); /*0x5bcf6d*/
  v4 = Double_To_SInt32(a2 * fCostant_100); /*0x5bcf7d*/
  v5 = unk_B3B410; /*0x5bcf7f*/
  if ( unk_B3B410 ) /*0x5bcf7f*/
  {
    v3 -= v5; /*0x5bcf88*/
    v4 += v5; /*0x5bcf8a*/
  }
  if ( v3 < 0x64 ) /*0x5bcf8f*/
    v3 = 0x64; /*0x5bcf91*/
  if ( v4 > 0x64 ) /*0x5bcf99*/
    v4 = 0x64; /*0x5bcf9b*/
  v8 = sub_588C10(*(_DWORD **)(a1 + 0x40), 0xFB0); /*0x5bcfb0*/
  v6 = sub_588C10(*(_DWORD **)(a1 + 0x40), 0xFAF); /*0x5bcfb7*/
  _sprintf(v10, "%s %i %s", v6, v3, v8); /*0x5bcfc7*/
  Tile_SetString(*(_DWORD **)(a1 + 0x40), (_DWORD *)0xFDE, v10); /*0x5bcfdc*/
  v9 = sub_588C10(*(_DWORD **)(a1 + 0x44), 0xFB0); /*0x5bcff1*/
  v7 = sub_588C10(*(_DWORD **)(a1 + 0x44), 0xFAF); /*0x5bcff8*/
  _sprintf(v10, "%s %i %s", v7, v4, v9); /*0x5bd008*/
  Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, v10); /*0x5bd01d*/
}
