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

  if ( *(this + 9) != 2 ) /*0x5a027a*/
  {
    if ( Tile_GetFloat((_DWORD *)*(this + 0x11), 0xFA1) == fConstant_2 ) /*0x5a0298*/
      Float = Tile_GetFloat((_DWORD *)*(this + 0x11), 0xFB5); /*0x5a02a2*/
    else
      Float = (double)EffectItem_GetMagnitude((_DWORD *)*(this + 0x25)); /*0x5a02b8*/
    *(float *)&v38 = Float; /*0x5a02bc*/
    v3 = Double_To_SInt32(*(float *)&v38); /*0x5a02ce*/
    LODWORD(v38) = v3; /*0x5a02d0*/
    if ( *(this + 0x1F) ) /*0x5a02ca*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 0x1F) + 0x34) + 0x10))(*(_DWORD *)(*(this + 0x1F) + 0x34)) == 3 ) /*0x5a02e6*/
      {
        a2 = *(float **)(*(this + 0x25) + 0x1C); /*0x5a02fb*/
        *(float *)&v38 = a2[0x24]; /*0x5a0305*/
        v32 = a2[0x17]; /*0x5a030f*/
        SoulLevel = EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C)); /*0x5a0319*/
        v26 = Calc_ConstantEffectEnchantmentMagnitude(v32, *(float *)&v38, SoulLevel); /*0x5a0339*/
        v5 = Round_Float(v26, 1.0); /*0x5a033c*/
        v3 = Double_To_SInt32(v5); /*0x5a0349*/
        LODWORD(v38) = v3; /*0x5a034b*/
      }
    }
    if ( v3 != EffectItem_GetMagnitude((_DWORD *)*(this + 0x25)) ) /*0x5a035c*/
    {
      EffectItem_SetMagnitude(*(this + 0x25), v3); /*0x5a0365*/
      if ( (*(_DWORD *)(*(_DWORD *)(*(this + 0x25) + 0x1C) + 0x58) & 0x40000000) != 0 ) /*0x5a037c*/
      {
        v33 = (double)SLODWORD(v38) * flt_B37ED0[0x80]; /*0x5a038c*/
        Tile_SetFloat((Tile *)*(this + 0x10), 0xFB1u, v33); /*0x5a039c*/
      }
    }
    if ( Tile_GetFloat((_DWORD *)*(this + 0x16), 0xFA1) == fConstant_2 ) /*0x5a03b9*/
      Duration = Tile_GetFloat((_DWORD *)*(this + 0x16), 0xFB5); /*0x5a03c3*/
    else
      Duration = (double)EffectItem_GetDuration((_DWORD *)*(this + 0x25)); /*0x5a03d9*/
    v34 = Duration; /*0x5a03dd*/
    v7 = Double_To_SInt32(v34); /*0x5a03f0*/
    if ( v7 != EffectItem_GetDuration((_DWORD *)*(this + 0x25)) ) /*0x5a03f9*/
      EffectItem_SetDuration(*(this + 0x25), v7); /*0x5a0402*/
    if ( Tile_GetFloat((_DWORD *)*(this + 0x14), 0xFA1) == fConstant_2 ) /*0x5a041f*/
      Area = Tile_GetFloat((_DWORD *)*(this + 0x14), 0xFB5); /*0x5a0429*/
    else
      Area = (double)EffectItem_GetArea((_DWORD *)*(this + 0x25)); /*0x5a043f*/
    v35 = Area; /*0x5a0443*/
    v9 = Double_To_SInt32(v35); /*0x5a0450*/
    v36 = v9; /*0x5a0452*/
    if ( *(float *)&dword_B3B0B4[0x7A] > (double)v9 ) /*0x5a0467*/
    {
      v9 = 0; /*0x5a0469*/
      v36 = 0; /*0x5a046b*/
    }
    if ( v9 != EffectItem_GetArea((_DWORD *)*(this + 0x25)) ) /*0x5a047c*/
    {
      EffectItem_SetArea(*(this + 0x25), v9); /*0x5a0485*/
      a2a = (float)v36; /*0x5a0492*/
      Tile_SetFloat((Tile *)*(this + 0x13), 0xFAEu, a2a); /*0x5a049a*/
    }
    if ( !v9 ) /*0x5a04a1*/
      Tile_SetString((_DWORD *)*(this + 0x13), (_DWORD *)0xFAE, "-"); /*0x5a04b0*/
    if ( Tile_GetFloat((_DWORD *)*(this + 0xD), 0xFA1) != fConstant_1 ) /*0x5a04cd*/
    {
      Name = (char *)ActorValue_GetName(*(_DWORD *)(*(this + 0x25) + 0x14)); /*0x5a04d9*/
      Tile_SetString((_DWORD *)*(this + 0xD), (_DWORD *)0xFAE, Name); /*0x5a04ea*/
    }
    if ( Tile_GetFloat((_DWORD *)*(this + 0xE), 0xFA1) != fConstant_1 ) /*0x5a0507*/
    {
      v11 = (char *)ActorValue_GetName(*(_DWORD *)(*(this + 0x25) + 0x14)); /*0x5a0513*/
      Tile_SetString((_DWORD *)*(this + 0xE), (_DWORD *)0xFAE, v11); /*0x5a0524*/
    }
    if ( *(this + 0x1E) ) /*0x5a0529*/
    {
      v12 = (double (__thiscall ***)(_DWORD, PlayerCharacter *))(*(_DWORD *)(*(this + 0x1E) + 0x74) + 0x24); /*0x5a053f*/
      *(float *)&v38 = (**v12)(v12, reference); /*0x5a0549*/
      v13 = Double_To_SInt32(*(float *)&v38); /*0x5a0551*/
      _sprintf(v40, "%d", v13); /*0x5a0561*/
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, v40); /*0x5a0576*/
      v14 = Double_To_SInt32(flt_B37ED0[0x44] * *(float *)&v38); /*0x5a0585*/
      _sprintf(v40, "%d", v14); /*0x5a0595*/
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, v40); /*0x5a05aa*/
      v15 = sub_5E4420((Actor *)reference); /*0x5a05b5*/
      _sprintf(v40, "%d", v15); /*0x5a05c5*/
      Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB7, v40); /*0x5a05da*/
    }
    else
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(this + 0x1F) + 0x34) + 0x10))(*(_DWORD *)(*(this + 0x1F) + 0x34)) == 3 ) /*0x5a0601*/
      {
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, (char *)MEMORY[0xB38BD8].value); /*0x5a0616*/
        *(float *)&v38 = *(float *)(*(_DWORD *)(*(this + 0x25) + 0x1C) + 0x94) * (double)SLODWORD(v38); /*0x5a062e*/
        v16 = Double_To_SInt32(*(float *)&v38); /*0x5a0636*/
        _sprintf(v40, "%d", v16); /*0x5a0646*/
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, v40); /*0x5a065b*/
        v17 = sub_5E4420((Actor *)reference); /*0x5a0666*/
        _sprintf(v40, "%d", v17); /*0x5a0676*/
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB7, v40); /*0x5a068b*/
        v39 = *(float *)&v38; /*0x5a069a*/
        LODWORD(v38) = 2; /*0x5a06ab*/
        v18 = (double)sub_5E4420((Actor *)reference) < v39; /*0x5a06af*/
      }
      else
      {
        v19 = (double (__thiscall ***)(_DWORD, PlayerCharacter *))(*(_DWORD *)(*(this + 0x1F) + 0x28) + 0x24); /*0x5a06c4*/
        v37 = (**v19)(v19, reference); /*0x5a06ce*/
        v20 = *(float **)(4 * EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C)) /*0x5a06dd*/
                        + 0xB39530);
        if ( !v20 ) /*0x5a06e6*/
        {
          v20 = flt_B35464; /*0x5a06ea*/
          flt_B35464[0] = 0.0; /*0x5a06ef*/
        }
        v39 = *v20; /*0x5a06fd*/
        if ( (double)sub_484D70(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C)) <= v39 ) /*0x5a0717*/
        {
          v22 = (double)sub_484D70(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C)); /*0x5a074f*/
        }
        else
        {
          v21 = *(float **)(4 * EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C)) /*0x5a0724*/
                          + 0xB39530);
          if ( !v21 ) /*0x5a072d*/
          {
            v21 = flt_B35464; /*0x5a0731*/
            flt_B35464[0] = 0.0; /*0x5a0736*/
          }
          v22 = *v21; /*0x5a073c*/
        }
        *(float *)&v38 = v22; /*0x5a0753*/
        LODWORD(v39) = Double_To_SInt32(*(float *)&v38); /*0x5a0766*/
        v23 = Double_To_SInt32(v37); /*0x5a0770*/
        _sprintf(v40, "%d (%d)", v23, LODWORD(v39)); /*0x5a077d*/
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFAF, v40); /*0x5a0792*/
        v24 = Double_To_SInt32(flt_B37ED0[0x46] * v37); /*0x5a07a1*/
        _sprintf(v40, "%d", v24); /*0x5a07b1*/
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB0, v40); /*0x5a07c6*/
        v25 = sub_5E4420((Actor *)reference); /*0x5a07d1*/
        _sprintf(v40, "%d", v25); /*0x5a07e1*/
        Tile_SetString((_DWORD *)*(this + 1), (_DWORD *)0xFB7, v40); /*0x5a07f6*/
        if ( v37 < 1.0 ) /*0x5a0806*/
          LODWORD(v38) = 0xFFFFFFFF; /*0x5a081c*/
        else
          LODWORD(v38) = sub_484D70(*(ExtraDataList ****)(*(this + 0x1F) + 0x2C)) / v23; /*0x5a0816*/
        a2b = (float)SLODWORD(v38); /*0x5a082c*/
        Tile_SetFloat((Tile *)*(this + 1), 0xFB1u, a2b); /*0x5a0834*/
        LODWORD(v38) = 2; /*0x5a0841*/
        if ( (double)SLODWORD(v39) >= v37 ) /*0x5a0850*/
          LODWORD(v38) = 1; /*0x5a0852*/
        a2c = (float)SLODWORD(v38); /*0x5a0862*/
        Tile_SetFloat((Tile *)*(this + 1), 0xFB2u, a2c); /*0x5a086a*/
        v38 = flt_B37ED0[0x46] * v37; /*0x5a087f*/
        v18 = (double)sub_5E4420((Actor *)reference) < v38; /*0x5a0890*/
        LODWORD(v38) = 2; /*0x5a0894*/
      }
      if ( !v18 ) /*0x5a08a1*/
        LODWORD(v38) = 1; /*0x5a08a3*/
      a2d = (float)SLODWORD(v38); /*0x5a08b3*/
      Tile_SetFloat((Tile *)*(this + 1), 0xFB3u, a2d); /*0x5a08bb*/
    }
  }
}
