// Attribute-row toggle logic for LevelUpMenu. It displays base plus the oldest bucket's derived bonus, enforces the native cap of 100, and permits at most three selected attributes.
void __userpurge LevelUpMenu_HandleClick_::StatItemClicked(
        int a1@<eax>,
        int ebp0@<ebp>,
        int a3@<ebx>,
        int a4@<edi>,
        int a5,
        int a6,
        Tile *a7)
{
  double Float; // st7
  char v8; // al
  int AVFromGroupOffset; // ebx
  int BaseCalcAVi; // edi
  signed int AttributeLevelingBonus; // eax
  double v12; // st7
  char v13; // al
  int v14; // edi
  _DWORD *v15; // edi
  Tile *v16; // esi
  double v17; // st7
  char v18; // al
  int v19; // eax
  int v20; // eax
  Tile *v21; // ecx
  double v22; // st7
  bool v23; // c3
  _DWORD *v24; // [esp+4h] [ebp-Ch]
  float v25; // [esp+4h] [ebp-Ch]
  float v26; // [esp+4h] [ebp-Ch]
  float v27; // [esp+4h] [ebp-Ch]
  float v28; // [esp+4h] [ebp-Ch]
  int v29; // [esp+18h] [ebp+8h]
  int v30; // [esp+18h] [ebp+8h]

  if ( a1 == 3 ) /*0x5ac7d2*/
  {
    if ( Tile_GetFloat(a7, 0xFAE) == fConstant_1 ) /*0x5ac7f7*/
    {
      v24 = (_DWORD *)a3; /*0x5ac7fd*/
      Float = Tile_GetFloat(a7, 0xFAA); /*0x5ac803*/
      v8 = Double_To_SInt32(Float); /*0x5ac808*/
      AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(0, v8); /*0x5ac828*/
      Tile_SetFloat(a7, (_DWORD *)0xFAE, fConstant_2); /*0x5ac82a*/
      BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, AVFromGroupOffset, a4, (int)a7, AVFromGroupOffset); /*0x5ac842*/
      AttributeLevelingBonus = Player_GetAttributeLevelingBonus(reference, AVFromGroupOffset); /*0x5ac844*/
      a3 = (int)v24;                            // Store min(base attribute + derived level-up multiplier, 100) as the selected row's result. /*0x5ac84e*/
      v29 = AttributeLevelingBonus + BaseCalcAVi;// Selected row displays min(base attribute + derived level-up multiplier, 100). /*0x5ac84f*/
      if ( AttributeLevelingBonus + BaseCalcAVi > 0x64 ) /*0x5ac853*/
        v29 = 0x64; /*0x5ac855*/
      v25 = (float)v29; /*0x5ac864*/
      Tile_SetFloat(a7, (_DWORD *)0xFB1, v25); /*0x5ac86c*/
      sub_57DE50(0x14); /*0x5ac873*/
      --*(_DWORD *)(ebp0 + 0x2C); /*0x5ac87b*/
    }
    else
    {
      v12 = Tile_GetFloat(a7, 0xFAA); /*0x5ac886*/
      v13 = Double_To_SInt32(v12); /*0x5ac88b*/
      v14 = ActorValue_GetAVFromGroupOffset(0, v13);// Level-up stat click maps the selected tile's group 0 offset back to an Oblivion attribute actor value. /*0x5ac8a7*/
      Tile_SetFloat(a7, (_DWORD *)0xFAE, 1.0); /*0x5ac8a9*/
      v26 = (float)Actor_GetBaseCalcAVi((int *)reference, a3, v14, (int)a7, v14); /*0x5ac8c5*/
      Tile_SetFloat(a7, (_DWORD *)0xFB1, v26); /*0x5ac8cd*/
      sub_57DE50(0x15); /*0x5ac8d4*/
      ++*(_DWORD *)(ebp0 + 0x2C); /*0x5ac8dc*/
    }
    v30 = 2 - (*(_DWORD *)(ebp0 + 0x2C) != 0); /*0x5ac8ea*/
    v27 = (float)v30; /*0x5ac8f6*/
    Tile_SetFloat(*(Tile **)(ebp0 + 4), (_DWORD *)0xFAF, v27); /*0x5ac8fe*/
    v15 = *(_DWORD **)(*(_DWORD *)(ebp0 + 0x28) + 0x34); /*0x5ac906*/
    while ( v15 ) /*0x5ac90b*/
    {
      v16 = (Tile *)v15[2]; /*0x5ac914*/
      v15 = (_DWORD *)*v15; /*0x5ac91a*/
      if ( *(int *)(ebp0 + 0x2C) <= 0 ) /*0x5ac91e*/
      {
        v23 = fConstant_2 == Tile_GetFloat(v16, 0xFAE); /*0x5ac966*/
        v21 = v16; /*0x5ac969*/
        v22 = fConstant_2; /*0x5ac96d*/
        if ( !v23 ) /*0x5ac972*/
LABEL_12:
          v22 = 1.0; /*0x5ac976*/
      }
      else
      {
        v17 = Tile_GetFloat(v16, 0xFAA); /*0x5ac925*/
        v18 = Double_To_SInt32(v17); /*0x5ac92a*/
        v19 = ActorValue_GetAVFromGroupOffset(0, v18);// Level-up stat click maps each attribute tile's group 0 offset back to an Oblivion attribute actor value before checking current base. /*0x5ac932*/
        v20 = Actor_GetBaseCalcAVi((int *)reference, a3, (int)v15, (int)v16, v19); /*0x5ac941*/
        v21 = v16;                              // Disable selection for attribute rows whose current base is already 100. /*0x5ac94a*/
        if ( v20 >= 0x64 ) /*0x5ac94c*/
          goto LABEL_12; /*0x5ac94c*/
        v22 = fConstant_2; /*0x5ac94e*/
      }
      v28 = v22; /*0x5ac978*/
      Tile_SetFloat(v21, (_DWORD *)0xFB4, v28); /*0x5ac980*/
    }
    LevelUpMenu_HandleClick_::Done_(a5, v30); /*0x5ac987*/
  }
  else
  {
    LevelUpMenu_HandleClick_::Done(a5, a6); /*0x5ac7d2*/
  }
}
