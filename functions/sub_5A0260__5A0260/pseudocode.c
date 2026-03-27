void __thiscall sub_5A0260(int *this)
{
  double Float; // st7
  int v3; // edi
  int SoulLevel; // eax
  double v5; // st7
  double Duration; // st7
  int v7; // edi
  double Area; // st7
  int v9; // edi
  char *Name; // eax
  char *v11; // eax
  double (__thiscall ***v12)(_DWORD, PlayerCharacter *); // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  bool v18; // c0
  double (__thiscall ***v19)(_DWORD, PlayerCharacter *); // ecx
  float *v20; // eax
  float *v21; // eax
  double v22; // st7
  int v23; // edi
  int v24; // eax
  int v25; // eax
  float v26; // [esp+Ch] [ebp-6Ch]
  float *a2; // [esp+10h] [ebp-68h]
  float a2a; // [esp+10h] [ebp-68h]
  float a2b; // [esp+10h] [ebp-68h]
  float a2c; // [esp+10h] [ebp-68h]
  float a2d; // [esp+10h] [ebp-68h]
  float v32; // [esp+20h] [ebp-58h]
  float v33; // [esp+20h] [ebp-58h]
  float v34; // [esp+20h] [ebp-58h]
  float v35; // [esp+20h] [ebp-58h]
  int v36; // [esp+20h] [ebp-58h]
  float v37; // [esp+20h] [ebp-58h]
  double v38; // [esp+24h] [ebp-54h]
  double v39; // [esp+2Ch] [ebp-4Ch]
  char v40[64]; // [esp+34h] [ebp-44h] BYREF

  if ( *(this + 9) != 2 )
  {
    if ( Tile_GetFloat((_DWORD *)*(this + 0x11), 0xFA1) == fConstant_2 )
      Float = Tile_GetFloat((_DWORD *)*(this + 0x11), 0xFB5);
    else
      Float = (double)EffectItem_GetMagnitude((_DWORD *)*(this + 0x25));
    *(float *)&v38 = Float;
    v3 = Double_To_SInt32(*(float *)&v38);
    LODWORD(v38) = v3;
    if ( *(this + 0x1F) )
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 0x1F) + 0x34) + 0x10))(*(_DWORD *)(*(this + 0x1F) + 0x34)) == 3 )
      {
        a2 = *(float **)(*(this + 0x25) + 0x1C);
        *(float *)&v38 = a2[0x24];
        v32 = a2[0x17];
        SoulLevel = EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C));
        v26 = Calc_ConstantEffectEnchantmentMagnitude(v32, *(float *)&v38, SoulLevel);
        v5 = Round_Float(v26, 1.0);
        v3 = Double_To_SInt32(v5);
        LODWORD(v38) = v3;
      }
    }
    if ( v3 != EffectItem_GetMagnitude((_DWORD *)*(this + 0x25)) )
    {
      EffectItem_SetMagnitude(*(this + 0x25), v3);
      if ( (*(_DWORD *)(*(_DWORD *)(*(this + 0x25) + 0x1C) + 0x58) & 0x40000000) != 0 )
      {
        v33 = (double)SLODWORD(v38) * fMagicLevelMagnitudeMult;
        Tile_SetFloat((Tile *)*(this + 0x10), (_DWORD *)0xFB1, v33);
      }
    }
    if ( Tile_GetFloat((_DWORD *)*(this + 0x16), 0xFA1) == fConstant_2 )
      Duration = Tile_GetFloat((_DWORD *)*(this + 0x16), 0xFB5);
    else
      Duration = (double)EffectItem_GetDuration((_DWORD *)*(this + 0x25));
    v34 = Duration;
    v7 = Double_To_SInt32(v34);
    if ( v7 != EffectItem_GetDuration((_DWORD *)*(this + 0x25)) )
      EffectItem_SetDuration(*(this + 0x25), v7);
    if ( Tile_GetFloat((_DWORD *)*(this + 0x14), 0xFA1) == fConstant_2 )
      Area = Tile_GetFloat((_DWORD *)*(this + 0x14), 0xFB5);
    else
      Area = (double)EffectItem_GetArea((_DWORD *)*(this + 0x25));
    v35 = Area;
    v9 = Double_To_SInt32(v35);
    v36 = v9;
    if ( flt_B3B29C > (double)v9 )
    {
      v9 = 0;
      v36 = 0;
    }
    if ( v9 != EffectItem_GetArea((_DWORD *)*(this + 0x25)) )
    {
      EffectItem_SetArea(*(this + 0x25), v9);
      a2a = (float)v36;
      Tile_SetFloat((Tile *)*(this + 0x13), (_DWORD *)0xFAE, a2a);
    }
    if ( !v9 )
      Tile_SetString((_DWORD *)*(this + 0x13), (_DWORD *)0xFAE, "-");
    if ( Tile_GetFloat((_DWORD *)*(this + 0xD), 0xFA1) != fConstant_1 )
    {
      Name = (char *)ActorValue_GetName(*(_DWORD *)(*(this + 0x25) + 0x14));
      Tile_SetString((_DWORD *)*(this + 0xD), (_DWORD *)0xFAE, Name);
    }
    if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFA1) != fConstant_1 )
    {
      v11 = (char *)ActorValue_GetName(*(_DWORD *)(*(this + 0x25) + 0x14));
      Tile_SetString((_DWORD *)*(this + 0xE), (_DWORD *)0xFAE, v11);
    }
    if ( *(this + 0x1E) )
    {
      v12 = (double (__thiscall ***)(_DWORD, PlayerCharacter *))(*(_DWORD *)(*(this + 0x1E) + 0x74) + 0x24);
      *(float *)&v38 = (**v12)(v12, TESDataHandler_g_PlayerRef);
      v13 = Double_To_SInt32(*(float *)&v38);
      _sprintf(v40, "%d", v13);
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, v40);
      v14 = Double_To_SInt32(fSpellmakingGoldMult * *(float *)&v38);
      _sprintf(v40, "%d", v14);
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, v40);
      v15 = sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
      _sprintf(v40, "%d", v15);
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB7, v40);
    }
    else
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 0x1F) + 0x34) + 0x10))(*(_DWORD *)(*(this + 0x1F) + 0x34)) == 3 )
      {
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, *(char **)sMiscConstantEffect);
        *(float *)&v38 = *(float *)(*(_DWORD *)(*(this + 0x25) + 0x1C) + 0x94) * (double)SLODWORD(v38);
        v16 = Double_To_SInt32(*(float *)&v38);
        _sprintf(v40, "%d", v16);
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, v40);
        v17 = sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
        _sprintf(v40, "%d", v17);
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB7, v40);
        v39 = *(float *)&v38;
        LODWORD(v38) = 2;
        v18 = (double)sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < v39;
      }
      else
      {
        v19 = (double (__thiscall ***)(_DWORD, PlayerCharacter *))(*(_DWORD *)(*(this + 0x1F) + 0x28) + 0x24);
        v37 = (**v19)(v19, TESDataHandler_g_PlayerRef);
        v20 = *(float **)(4 * EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C))
                        + 0xB39530);
        if ( !v20 )
        {
          v20 = (float *)&dword_B35464;
          *(float *)&dword_B35464 = 0.0;
        }
        v39 = *v20;
        if ( (double)sub_484D70(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C)) <= v39 )
        {
          v22 = (double)sub_484D70(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C));
        }
        else
        {
          v21 = *(float **)(4 * EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C))
                          + 0xB39530);
          if ( !v21 )
          {
            v21 = (float *)&dword_B35464;
            *(float *)&dword_B35464 = 0.0;
          }
          v22 = *v21;
        }
        *(float *)&v38 = v22;
        LODWORD(v39) = Double_To_SInt32(*(float *)&v38);
        v23 = Double_To_SInt32(v37);
        _sprintf(v40, "%d (%d)", v23, LODWORD(v39));
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, v40);
        v24 = Double_To_SInt32(fEnchantmentGoldMult * v37);
        _sprintf(v40, "%d", v24);
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, v40);
        v25 = sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
        _sprintf(v40, "%d", v25);
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB7, v40);
        if ( v37 < 1.0 )
          LODWORD(v38) = 0xFFFFFFFF;
        else
          LODWORD(v38) = sub_484D70(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C)) / v23;
        a2b = (float)SLODWORD(v38);
        Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB1, a2b);
        LODWORD(v38) = 2;
        if ( (double)SLODWORD(v39) >= v37 )
          LODWORD(v38) = 1;
        a2c = (float)SLODWORD(v38);
        Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB2, a2c);
        v38 = fEnchantmentGoldMult * v37;
        v18 = (double)sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) < v38;
        LODWORD(v38) = 2;
      }
      if ( !v18 )
        LODWORD(v38) = 1;
      a2d = (float)SLODWORD(v38);
      Tile_SetFloat((Tile *)*(this + 1), (_DWORD *)0xFB3, a2d);
    }
  }
}
