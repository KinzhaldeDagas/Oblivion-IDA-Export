char __userpurge sub_5BC180@<al>(int a1@<ecx>, char a2@<bpl>, double a3@<st1>, double a4@<st0>, int a5, float a6)
{
  _DWORD *v9; // ecx
  double v10; // st5
  _DWORD *v11; // ecx
  double v12; // st5
  _DWORD *v13; // ecx
  double v14; // st5
  UInt32 unk630; // edx
  UInt32 unk634; // eax
  _DWORD *v17; // ecx
  double v18; // st5
  _DWORD *v19; // ecx
  double v20; // st5
  _DWORD *v21; // ecx
  double v22; // st5
  float *v23; // eax
  double Float; // [esp+4h] [ebp-Ch] BYREF
  UInt32 v25; // [esp+Ch] [ebp-4h]

  if ( a5 == 0xD )
  {
    if ( a6 >= 1.0 && sub_578FE0() == 1 && !sub_5790E0(0x3E9, 0xB) )
    {
      sub_5A5F60(1.0, a3, a2, a4);
      return 1;
    }
    return 0;
  }
  if ( a5 == 0xE )
  {
    if ( a6 >= 1.0 && sub_578FE0() == 1 && !sub_5790E0(0x3E9, 0xB) )
    {
      sub_5A5E80(1.0, a3, a2, a4);
      return 1;
    }
    return 0;
  }
  if ( a5 != 0xB || a6 < 1.0 || sub_578FE0() != 1 )
    return 0;
  if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAE) != fConstant_2 )
  {
    if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAE) == fConstant_1 )
    {
      v17 = *(_DWORD **)(a1 + 0x70);
      *(_BYTE *)(a1 + 0xDC) = 1;
      Float = Tile_GetFloat(v17, 0xFAD);
      v18 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x60), 0xFAD);
      v19 = *(_DWORD **)(a1 + 0x70);
      *(float *)(a1 + 0xD4) = Float - v18;
      v20 = Tile_GetFloat(v19, 0xFAC);
      v21 = *(_DWORD **)(a1 + 0x60);
      Float = v20;
      v22 = v20 - Tile_GetFloat(v21, 0xFAC);
      *(float *)(a1 + 0xD8) = v22;
      v23 = (float *)sub_5A5790(TESDataHandler_g_PlayerRef, &Float);
      if ( sub_8AA350(v23, &Vector3_InitValue_) )
      {
        ShowUIMessageBox(
          (char *)MessageButtonTextYes,
          a2,
          v22,
          a3,
          a4,
          (const char *)dword_B38C68,
          (int)sub_5BB350,
          1,
          (const char *)MessageButtonTextYes,
          MessageButtonTextNo);
        return 0;
      }
      ShowUIMessageBox(
        (char *)dword_B38C80,
        a2,
        v22,
        a3,
        a4,
        (const char *)dword_B38C70,
        (int)sub_5BB350,
        1,
        (const char *)dword_B38C78,
        dword_B38C80);
    }
    return 0;
  }
  v9 = *(_DWORD **)(a1 + 0x6C);
  *(_BYTE *)(a1 + 0xDC) = 0;
  Float = Tile_GetFloat(v9, 0xFAD);
  v10 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAD);
  v11 = *(_DWORD **)(a1 + 0x6C);
  *(float *)(a1 + 0xD4) = Float - v10;
  v12 = Tile_GetFloat(v11, 0xFAC);
  v13 = *(_DWORD **)(a1 + 0x58);
  Float = v12;
  v14 = v12 - Tile_GetFloat(v13, 0xFAC);
  *(float *)(a1 + 0xD8) = v14;
  unk630 = TESDataHandler_g_PlayerRef->unk630;
  unk634 = TESDataHandler_g_PlayerRef->unk634;
  LODWORD(Float) = TESDataHandler_g_PlayerRef->unk62C;
  HIDWORD(Float) = unk630;
  v25 = unk634;
  if ( sub_8AA350((float *)&Float, &Vector3_InitValue_) )
    ShowUIMessageBox(
      (char *)MessageButtonTextNo,
      a2,
      v14,
      a3,
      a4,
      (const char *)dword_B38C68,
      (int)sub_5BB350,
      1,
      (const char *)MessageButtonTextYes,
      MessageButtonTextNo);
  else
    ShowUIMessageBox(
      (char *)dword_B38C70,
      a2,
      v14,
      a3,
      a4,
      (const char *)dword_B38C70,
      (int)sub_5BB350,
      1,
      (const char *)dword_B38C78,
      dword_B38C80);
  return 0;
}
