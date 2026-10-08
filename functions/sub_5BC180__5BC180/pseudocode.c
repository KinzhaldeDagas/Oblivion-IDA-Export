char __userpurge sub_5BC180@<al>(int a1@<ecx>, char a2@<bpl>, double a3@<st1>, double a4@<st0>, int a5, float a6)
{
  _DWORD *v8; // ecx
  double v9; // st5
  _DWORD *v10; // ecx
  double v11; // st5
  _DWORD *v12; // ecx
  double v13; // st5
  UInt32 unk630; // edx
  UInt32 unk634; // eax
  _DWORD *v16; // ecx
  double v17; // st5
  _DWORD *v18; // ecx
  double v19; // st5
  _DWORD *v20; // ecx
  double v21; // st5
  float *v22; // eax
  double Float; // [esp+4h] [ebp-Ch] BYREF
  UInt32 v24; // [esp+Ch] [ebp-4h]

  if ( a5 == 0xD ) /*0x5bc18d*/
  {
    if ( a6 >= 1.0 && sub_578FE0() == 1 && !InterfaceManager_IsMenuVisibleByID(0x3E9, 0xB) ) /*0x5bc1b5*/
    {
      sub_5A5F60(1.0, a3, a2, a4); /*0x5bc1c5*/
      return 1; /*0x5bc1d0*/
    }
    return 0; /*0x5bc1bf*/
  }
  if ( a5 == 0xE ) /*0x5bc1d6*/
  {
    if ( a6 >= 1.0 && sub_578FE0() == 1 && !InterfaceManager_IsMenuVisibleByID(0x3E9, 0xB) ) /*0x5bc1fe*/
    {
      sub_5A5E80(1.0, a3, a2, a4); /*0x5bc20e*/
      return 1; /*0x5bc219*/
    }
    return 0; /*0x5bc208*/
  }
  if ( a5 != 0xB || a6 < 1.0 || sub_578FE0() != 1 ) /*0x5bc23e*/
    return 0; /*0x5bc43b*/
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAE) != fConstant_2 ) /*0x5bc25c*/
  {
    if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAE) == fConstant_1 ) /*0x5bc367*/
    {
      v16 = *(_DWORD **)(a1 + 0x70); /*0x5bc36d*/
      *(_BYTE *)(a1 + 0xDC) = 1; /*0x5bc375*/
      Float = Tile_GetFloat(v16, 0xFAD); /*0x5bc381*/
      v17 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x60), 0xFAD); /*0x5bc38d*/
      v18 = *(_DWORD **)(a1 + 0x70); /*0x5bc396*/
      *(float *)(a1 + 0xD4) = Float - v17; /*0x5bc39e*/
      v19 = Tile_GetFloat(v18, 0xFAC); /*0x5bc3a4*/
      v20 = *(_DWORD **)(a1 + 0x60); /*0x5bc3a9*/
      Float = v19; /*0x5bc3ac*/
      v21 = v19 - Tile_GetFloat(v20, 0xFAC); /*0x5bc3ba*/
      *(float *)(a1 + 0xD8) = v21; /*0x5bc3c7*/
      v22 = (float *)sub_5A5790(reference, &Float); /*0x5bc3d4*/
      if ( sub_8AA350(v22, &g_zeroNiPoint3.x) ) /*0x5bc3db*/
      {
        ShowUIMessageBox( /*0x5bc401*/
          (char *)MEMORY[0xB38CF8].value,
          v21,
          a3,
          a4,
          (char *)stru_B38C68.value,
          (int)sub_5BB350,
          1,
          (char *)MEMORY[0xB38CF8].value,
          (char)MEMORY[0xB38D00].value);
        return 0; /*0x5bc40f*/
      }
      ShowUIMessageBox( /*0x5bc433*/
        (char *)stru_B38C80.value,
        v21,
        a3,
        a4,
        (char *)stru_B38C70.value,
        (int)sub_5BB350,
        1,
        (char *)stru_B38C78.value,
        (char)stru_B38C80.value);
    }
    return 0; /*0x5bc433*/
  }
  v8 = *(_DWORD **)(a1 + 0x6C); /*0x5bc262*/
  *(_BYTE *)(a1 + 0xDC) = 0; /*0x5bc26a*/
  Float = Tile_GetFloat(v8, 0xFAD); /*0x5bc276*/
  v9 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAD); /*0x5bc282*/
  v10 = *(_DWORD **)(a1 + 0x6C); /*0x5bc28b*/
  *(float *)(a1 + 0xD4) = Float - v9; /*0x5bc293*/
  v11 = Tile_GetFloat(v10, 0xFAC); /*0x5bc299*/
  v12 = *(_DWORD **)(a1 + 0x58); /*0x5bc29e*/
  Float = v11; /*0x5bc2a1*/
  v13 = v11 - Tile_GetFloat(v12, 0xFAC); /*0x5bc2af*/
  *(float *)(a1 + 0xD8) = v13; /*0x5bc2b8*/
  unk630 = reference->unk630; /*0x5bc2c9*/
  unk634 = reference->unk634; /*0x5bc2cf*/
  LODWORD(Float) = reference->unk62C; /*0x5bc2d5*/
  HIDWORD(Float) = unk630; /*0x5bc2dd*/
  v24 = unk634; /*0x5bc2e1*/
  if ( sub_8AA350((float *)&Float, &g_zeroNiPoint3.x) ) /*0x5bc2e5*/
    ShowUIMessageBox( /*0x5bc30b*/
      (char *)MEMORY[0xB38D00].value,
      v13,
      a3,
      a4,
      (char *)stru_B38C68.value,
      (int)sub_5BB350,
      1,
      (char *)MEMORY[0xB38CF8].value,
      (char)MEMORY[0xB38D00].value);
  else
    ShowUIMessageBox( /*0x5bc33e*/
      (char *)stru_B38C70.value,
      v13,
      a3,
      a4,
      (char *)stru_B38C70.value,
      (int)sub_5BB350,
      1,
      (char *)stru_B38C78.value,
      (char)stru_B38C80.value);
  return 0; /*0x5bc1cc*/
}
