// positive sp value has been detected, the output may be wrong!
void __usercall sub_5A2520(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double Float@<st0>)
{
  _DWORD *v6; // edi
  float v7; // ebx
  void (__thiscall ***v8)(_DWORD); // ecx
  void (__thiscall *v9)(_DWORD); // edx
  int v10; // eax
  char *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  int *ItemByIndex2; // ebp
  int v15; // ecx
  int v16; // eax
  float v17; // ecx
  int SoulLevel; // eax
  int v19; // eax
  unsigned int *TileFromTemplate; // eax
  Tile *v21; // edi
  double v22; // st7
  double v23; // st7
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  const char *v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // ebp
  _DWORD *v31; // ecx
  ExtraDataList ***v32; // eax
  int v33; // edi
  unsigned __int16 v34; // cx
  int v35; // eax
  double v36; // st7
  int v37; // eax
  Tile *v38; // ecx
  int v39; // eax
  Tile *v40; // ecx
  double v41; // st7
  ExtraDataList ***v42; // ecx
  CHAR *v43; // eax
  char *v44; // eax
  ExtraDataList ***v45; // ecx
  CHAR *v46; // eax
  char *v47; // eax
  int v48; // eax
  Tile *v49; // ecx
  double v50; // st7
  int v51; // edi
  Tile *v52; // ecx
  float *v53; // eax
  float *v54; // ebp
  int v55; // eax
  ExtraDataList ***v56; // ecx
  double v57; // st7
  float *v58; // eax
  bool v59; // al
  Tile *v60; // ecx
  int v61; // eax
  Tile *v62; // ecx
  double v63; // st7
  float v64; // [esp-10h] [ebp-178h] BYREF
  float v65; // [esp-Ch] [ebp-174h]
  int v66; // [esp-8h] [ebp-170h]
  int v67; // [esp-4h] [ebp-16Ch]
  int v68; // [esp+0h] [ebp-168h]
  int v69; // [esp+4h] [ebp-164h]
  int v70; // [esp+8h] [ebp-160h]
  TileWindow *v71; // [esp+Ch] [ebp-15Ch]
  int v72; // [esp+10h] [ebp-158h]
  _DWORD *a2; // [esp+14h] [ebp-154h]
  BSStringT v74; // [esp+18h] [ebp-150h] BYREF
  unsigned int v75; // [esp+20h] [ebp-148h] BYREF
  __int16 v76; // [esp+24h] [ebp-144h]
  __int16 v77; // [esp+26h] [ebp-142h]
  int v78; // [esp+28h] [ebp-140h]
  int v79; // [esp+2Ch] [ebp-13Ch]
  float v80; // [esp+30h] [ebp-138h]
  float v81; // [esp+34h] [ebp-134h]
  BSStringT v82; // [esp+38h] [ebp-130h]
  _DWORD *v83; // [esp+4Ch] [ebp-11Ch]
  _DWORD *v84; // [esp+54h] [ebp-114h] BYREF
  int v85; // [esp+140h] [ebp-28h]

  v6 = *(_DWORD **)(*(_DWORD *)(a1 + 0x58) + 0x34);
  v7 = 0.0;
  v72 = *(_DWORD *)(a1 + 0x58);
  while ( v6 )
  {
    v8 = (void (__thiscall ***)(_DWORD))v6[2];
    v6 = (_DWORD *)*v6;
    if ( v8 )
    {
      v9 = **v8;
      v66 = 1;
      v9(v8);
    }
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(a1 + 0x58) + 0x30));
  v74.m_data = 0;
  *(_DWORD *)&v74.m_dataLen = 0;
  BSStringT_Set(&v74, "added_effect_template", 0);
  v10 = *(_DWORD *)(a1 + 0x28);
  v85 = 0;
  if ( v10 )
  {
    v11 = (char *)(v10 + 0x24);
    v78 = v10 + 0x24;
    if ( v10 == 0xFFFFFFDC )
    {
      v72 = 0;
    }
    else
    {
      v12 = (_DWORD *)(v10 + 0x28);
      v13 = 0;
      if ( v11 != (char *)0xFFFFFFFC )
      {
        do
        {
          if ( *v12 )
            v13 = (_DWORD *)((char *)v13 + 1);
          v12 = (_DWORD *)v12[1];
        }
        while ( v12 );
      }
      v72 = (int)v13;
    }
    if ( v72 )
    {
      while ( 1 )
      {
        ItemByIndex2 = (int *)EffectItemList_GetItemByIndex2(v11, SLODWORD(v7));
        if ( *(_DWORD *)(a1 + 0x2C) )
        {
          v15 = *(_DWORD *)(a1 + 0x34);
          if ( v15 )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x10))(v15) == 3 )
            {
              v16 = ItemByIndex2[7];
              LODWORD(v65) = *(unsigned __int16 *)(*(_DWORD *)(a1 + 0x34) + 8);
              LODWORD(v17) = LOWORD(v65);
              v79 = *(int *)(v16 + 0x90);
              a2 = *(_DWORD **)(v16 + 0x5C);
              v65 = 1.0;
              v64 = v17;
              SoulLevel = EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(a1 + 0x2C));
              v64 = Calc_ConstantEffectEnchantmentMagnitude(*(float *)&a2, *(float *)&v79, SoulLevel);
              Float = Round_Float(v64, v65);
              v19 = Double_To_SInt32(Float);
              EffectItem_SetMagnitude((int)ItemByIndex2, v19);
            }
          }
        }
        TileFromTemplate = Menu_CreateTileFromTemplate((_DWORD *)a1, st5_0, a3, Float, v71, v74.m_data, 0);
        v21 = (Tile *)TileFromTemplate;
        if ( TileFromTemplate )
        {
          if ( ItemByIndex2 )
          {
            *(float *)&a2 = v7;
            v22 = (double)SLODWORD(v7);
            if ( v7 < 0.0 )
              v22 = v22 + flt_A2FC78;
            v65 = v22;
            Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, v65);
            a2 = (_DWORD *)(LODWORD(v7) + 0xBB8);
            v23 = (double)(LODWORD(v7) + 0xBB8);
            if ( LODWORD(v7) + 0xBB8 < 0 )
              v23 = v23 + flt_A2FC78;
            v65 = v23;
            Tile_SetFloat(v21, (_DWORD *)0xFA8, v65);
            v24 = *(_DWORD *)(a1 + 0x28);
            if ( v24 )
              v25 = v24 + 0x18;
            else
              v25 = 0;
            v65 = *(float *)EffectItem_GetDisplayText((int)&v75, v25, 1.0);
            LOBYTE(v85) = 1;
            Tile_SetString(v21, (_DWORD *)0xFB0, (char *)LODWORD(v65));
            LOBYTE(v85) = 0;
            FormHeapFree(v75);
            *(float *)&a2 = COERCE_FLOAT(&v64);
            v75 = 0;
            v77 = 0;
            v76 = 0;
            EffectItem_GetName(ItemByIndex2, (int)&v64, v26, SLODWORD(v65), v66, v67, v68, v69, v70, (int)v71, v72);
            sub_58A020((BSStringT *)v21, (char *)a2, (int)v74.m_data);
            v27 = *(const char **)(ItemByIndex2[7] + 0x48);
            if ( !v27 )
              v27 = EmptyString;
            _sprintf((char *)&v84, "%s\\%s", "Icons", v27);
            Tile_SetString(v21, (_DWORD *)0xFAF, (char *)&v84);
            v82.m_data = (char *)*ItemByIndex2;
            *(float *)&v74.m_data = (float)(int)v82.m_data;
            Tile_SetFloat(v21, (_DWORD *)0xFB2, *(float *)&v74.m_data);
            Tile_SetFloat(v21, (_DWORD *)0xFB4, flt_A6BC94);
            Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x68), 0xFB5);
            *(float *)&v74.m_data = Float;
            Tile_SetFloat(v21, (_DWORD *)0xFB6, *(float *)&v74.m_data);
          }
        }
        if ( ++LODWORD(v7) >= LODWORD(v81) )
          break;
        v11 = (char *)v83;
      }
    }
    v28 = *(_DWORD *)(a1 + 0x34);
    if ( v28 && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0x10))(v28) == 3 )
    {
      Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFAE, 0.0);
      Tile_SetString(*(_DWORD **)(a1 + 0x50), (_DWORD *)0xFAE, *(char **)sMiscConstantEffect);
      Tile_SetFloat(*(Tile **)(a1 + 0x44), (_DWORD *)0xFA1, 1.0);
      Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFAF, 1.0);
      v29 = *(_DWORD *)(a1 + 0x28);
      *(_BYTE *)(a1 + 0x9D) = 0;
      *(_DWORD *)(a1 + 0x38) = 0;
      if ( v29 )
      {
        v30 = v29 + 0x24;
        if ( v29 != 0xFFFFFFDC )
        {
          do
          {
            v31 = *(_DWORD **)(v30 + 4);
            if ( !v31 )
              break;
            v32 = *(ExtraDataList ****)(a1 + 0x2C);
            if ( !v32 )
              break;
            v33 = v31[7];
            if ( (*(_DWORD *)(v33 + 0x58) & 0x100) != 0 )
            {
              v34 = *(_WORD *)(*(_DWORD *)(a1 + 0x34) + 8);
              v80 = *(float *)(v33 + 0x90);
              v82.m_data = *(char **)(v33 + 0x5C);
              v74.m_data = (char *)v34;
              v35 = EnchantmentMenu_SoulGemInfo_GetSoulLevel(v32);
              v36 = Calc_ConstantEffectEnchantmentMagnitude(*(float *)&v82.m_data, v80, v35);
            }
            else
            {
              v80 = COERCE_FLOAT(EffectItem_GetMagnitude(v31));
              v36 = (double)SLODWORD(v80);
            }
            v81 = v36;
            v80 = *(float *)(v33 + 0x94);
            *(_DWORD *)(a1 + 0x38) = Double_To_SInt32(v81 * v80 + (double)*(int *)(a1 + 0x38));
            v37 = *(_DWORD *)(v30 + 8);
            if ( !v37 )
              break;
            v30 = v37 - 4;
          }
          while ( v37 != 4 );
        }
      }
    }
    else
    {
      v50 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)(a1 + 0x28) + 0x24))(
              *(_DWORD *)(a1 + 0x28) + 0x24,
              0);
      *(float *)&v51 = COERCE_FLOAT(Double_To_SInt32(v50));
      v79 = v51;
      if ( *(float *)&v51 == 0.0 )
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x44), (_DWORD *)0xFA1, 1.0);
        v62 = *(Tile **)(a1 + 0x50);
        *(float *)&a2 = 1.0;
        v72 = 0xFA1;
      }
      else
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFA1, fConstant_2);
        v52 = *(Tile **)(a1 + 0x50);
        *(float *)&a2 = (float)v79;
        Tile_SetFloat(v52, (_DWORD *)0xFAE, *(float *)&a2);
        v53 = *(float **)(4 * EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(a1 + 0x2C)) + 0xB39530);
        if ( v53 )
        {
          v54 = v53;
        }
        else
        {
          v54 = (float *)&dword_B35464;
          *(float *)&dword_B35464 = 0.0;
        }
        *(float *)&v55 = COERCE_FLOAT(sub_484D70(*(ExtraDataList ****)(a1 + 0x2C)));
        v56 = *(ExtraDataList ****)(a1 + 0x2C);
        v79 = v55;
        a3 = *v54;
        if ( a3 <= (double)v55 )
        {
          v58 = *(float **)(4 * EnchantmentMenu_SoulGemInfo_GetSoulLevel(v56) + 0xB39530);
          if ( !v58 )
          {
            v58 = (float *)&dword_B35464;
            *(float *)&dword_B35464 = 0.0;
          }
          v57 = *v58;
        }
        else
        {
          *(float *)&v79 = COERCE_FLOAT(sub_484D70(v56));
          v57 = (double)v79;
        }
        v80 = v57;
        v59 = v51 > Double_To_SInt32(v80);
        *(_BYTE *)(a1 + 0x9D) = v59;
        v79 = v59 + 1;
        v60 = *(Tile **)(a1 + 0x50);
        *(float *)&a2 = (float)v79;
        Tile_SetFloat(v60, (_DWORD *)0xFAF, *(float *)&a2);
        Tile_SetFloat(*(Tile **)(a1 + 0x44), (_DWORD *)0xFA1, fConstant_2);
        v61 = sub_484D70(*(ExtraDataList ****)(a1 + 0x2C));
        v62 = *(Tile **)(a1 + 0x44);
        v79 = v61 / v51;
        *(float *)&a2 = (float)(v61 / v51);
        v72 = 0xFAE;
      }
      Tile_SetFloat(v62, (_DWORD *)v72, *(float *)&a2);
      v63 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)(a1 + 0x28) + 0x24))(
              *(_DWORD *)(a1 + 0x28) + 0x24,
              0);
      *(_DWORD *)(a1 + 0x38) = Double_To_SInt32(v63 * fEnchantmentGoldMult);
    }
    _sprintf((char *)&v84, "%d", *(_DWORD *)(a1 + 0x38));
    Tile_SetString(*(_DWORD **)(a1 + 0x48), (_DWORD *)0xFDE, (char *)&v84);
    LODWORD(v80) = (*(_DWORD *)(a1 + 0x38) > sub_5E4420((Actor *)TESDataHandler_g_PlayerRef)) + 1;
    v38 = *(Tile **)(a1 + 0x48);
    *(float *)&v74.m_data = (float)SLODWORD(v80);
    Tile_SetFloat(v38, (_DWORD *)0xFAE, *(float *)&v74.m_data);
    v39 = sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
    _sprintf((char *)&v84, "%d", v39);
    Tile_SetString(*(_DWORD **)(a1 + 0x4C), (_DWORD *)0xFDE, (char *)&v84);
    LODWORD(v80) = (*(_DWORD *)(a1 + 0x38) > sub_5E4420((Actor *)TESDataHandler_g_PlayerRef)) + 1;
    v40 = *(Tile **)(a1 + 0x4C);
    v41 = (double)SLODWORD(v80);
    *(float *)&v74.m_data = v41;
    Tile_SetFloat(v40, (_DWORD *)0xFAE, *(float *)&v74.m_data);
    v42 = *(ExtraDataList ****)(a1 + 0x30);
    if ( v42 )
    {
      v43 = sub_4851B0(v42, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
      _sprintf((char *)&v84, "%s\\%s", "Icons", v43);
      v44 = sub_488DF0(*(EntryData **)(a1 + 0x30));
      Tile_SetString(*(_DWORD **)(a1 + 0x80), (_DWORD *)0xFAE, v44);
      Tile_SetString(*(_DWORD **)(a1 + 0x80), (_DWORD *)0xFAF, (char *)&v84);
      Tile_SetString(*(_DWORD **)(a1 + 0x8C), (_DWORD *)0xFE6, (char *)&v84);
      sub_58FBA0(*(_DWORD *)(a1 + 0x80), st5_0, a3, v41, 0);
    }
    v45 = *(ExtraDataList ****)(a1 + 0x2C);
    if ( v45 )
    {
      v46 = sub_4851B0(v45, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
      _sprintf((char *)&v84, "%s\\%s", "Icons", v46);
      v47 = sub_488DF0(*(EntryData **)(a1 + 0x2C));
      Tile_SetString(*(_DWORD **)(a1 + 0x84), (_DWORD *)0xFAE, v47);
      *(float *)&v48 = COERCE_FLOAT(sub_484D70(*(ExtraDataList ****)(a1 + 0x2C)));
      v49 = *(Tile **)(a1 + 0x84);
      v80 = *(float *)&v48;
      *(float *)&v74.m_data = (float)v48;
      Tile_SetFloat(v49, (_DWORD *)0xFAF, *(float *)&v74.m_data);
      Tile_SetString(*(_DWORD **)(a1 + 0x88), (_DWORD *)0xFE6, (char *)&v84);
    }
  }
  Tile_SetFloat(*(Tile **)(a1 + 0x6C), (_DWORD *)0xFB7, flt_A6BC04);
  Tile_SetFloat(*(Tile **)(a1 + 0x6C), (_DWORD *)0xFB7, 0.0);
  FormHeapFree(*(unsigned int *)&v82.m_dataLen);
}
