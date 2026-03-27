int __userpurge LevelUpMenu_HandleClick_::StatItemClicked@<eax>(int a1@<eax>, int ebp0@<ebp>, int a3, int a4, Tile *a5)
{
  double Float; // st7
  char a2; // al
  unsigned int AVFromGroupOffset; // ebx
  int BaseCalcAVi; // edi
  double v9; // st7
  char v10; // al
  int v11; // edi
  _DWORD *v12; // edi
  Tile *v13; // esi
  double v14; // st7
  char v15; // al
  int v16; // eax
  int v17; // eax
  Tile *v18; // ecx
  double v19; // st7
  bool v20; // c3
  float v22; // [esp+4h] [ebp-Ch]
  float v23; // [esp+4h] [ebp-Ch]
  float v24; // [esp+4h] [ebp-Ch]
  float v25; // [esp+4h] [ebp-Ch]
  int v26; // [esp+18h] [ebp+8h]
  int v27; // [esp+18h] [ebp+8h]

  if ( a1 != 3 )
    return LevelUpMenu_HandleClick_::Done(a3, a4);
  if ( Tile_GetFloat(a5, 0xFAE) == fConstant_1 )
  {
    Float = Tile_GetFloat(a5, 0xFAA);
    a2 = Double_To_SInt32(Float);
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, a2);
    Tile_SetFloat(a5, (_DWORD *)0xFAE, fConstant_2);
    BaseCalcAVi = Actor_GetBaseCalcAVi(AVFromGroupOffset);
    v26 = Player_GetAttributeLevelingBonus(TESDataHandler_g_PlayerRef, AVFromGroupOffset) + BaseCalcAVi;
    if ( v26 > 0x64 )
      v26 = 0x64;
    v22 = (float)v26;
    Tile_SetFloat(a5, (_DWORD *)0xFB1, v22);
    sub_57DE50(0x14);
    --*(_DWORD *)(ebp0 + 0x2C);
  }
  else
  {
    v9 = Tile_GetFloat(a5, 0xFAA);
    v10 = Double_To_SInt32(v9);
    v11 = ActorValue_GetAVFromGroupOffset(0, v10);
    Tile_SetFloat(a5, (_DWORD *)0xFAE, 1.0);
    v23 = (float)(int)Actor_GetBaseCalcAVi(v11);
    Tile_SetFloat(a5, (_DWORD *)0xFB1, v23);
    sub_57DE50(0x15);
    ++*(_DWORD *)(ebp0 + 0x2C);
  }
  v27 = 2 - (*(_DWORD *)(ebp0 + 0x2C) != 0);
  v24 = (float)v27;
  Tile_SetFloat(*(Tile **)(ebp0 + 4), (_DWORD *)0xFAF, v24);
  v12 = *(_DWORD **)(*(_DWORD *)(ebp0 + 0x28) + 0x34);
  while ( v12 )
  {
    v13 = (Tile *)v12[2];
    v12 = (_DWORD *)*v12;
    if ( *(int *)(ebp0 + 0x2C) <= 0 )
    {
      v20 = fConstant_2 == Tile_GetFloat(v13, 0xFAE);
      v18 = v13;
      v19 = fConstant_2;
      if ( !v20 )
LABEL_12:
        v19 = 1.0;
    }
    else
    {
      v14 = Tile_GetFloat(v13, 0xFAA);
      v15 = Double_To_SInt32(v14);
      v16 = ActorValue_GetAVFromGroupOffset(0, v15);
      v17 = Actor_GetBaseCalcAVi(v16);
      v18 = v13;
      if ( v17 >= 0x64 )
        goto LABEL_12;
      v19 = fConstant_2;
    }
    v25 = v19;
    Tile_SetFloat(v18, (_DWORD *)0xFB4, v25);
  }
  return LevelUpMenu_HandleClick_::Done_(a3, v27);
}
