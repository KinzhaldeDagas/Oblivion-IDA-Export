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

  sub_597CA0(dword_B3B410);
  Player_GetActorBarterFactor_(*(float *)(a1 + 0x50));
  v3 = Double_To_SInt32(a2);
  calculateItemMultiplicationFromDisposition((TESObjectREFR *)TESDataHandler_g_PlayerRef, *(Actor **)(a1 + 0x50));
  v4 = Double_To_SInt32(a2 * fCostant_100);
  v5 = dword_B3B410;
  if ( dword_B3B410 )
  {
    v3 -= v5;
    v4 += v5;
  }
  if ( v3 < 0x64 )
    v3 = 0x64;
  if ( v4 > 0x64 )
    v4 = 0x64;
  v8 = sub_588C10(*(_DWORD **)(a1 + 0x40), 0xFB0);
  v6 = sub_588C10(*(_DWORD **)(a1 + 0x40), 0xFAF);
  _sprintf(v10, "%s %i %s", v6, v3, v8);
  Tile_SetString(*(_DWORD **)(a1 + 0x40), (_DWORD *)0xFDE, v10);
  v9 = sub_588C10(*(_DWORD **)(a1 + 0x44), 0xFB0);
  v7 = sub_588C10(*(_DWORD **)(a1 + 0x44), 0xFAF);
  _sprintf(v10, "%s %i %s", v7, v4, v9);
  Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, v10);
}
