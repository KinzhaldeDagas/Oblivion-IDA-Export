// positive sp value has been detected, the output may be wrong!
void __usercall sub_5A2520(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>)
{
  _DWORD *v5; // edi
  float v6; // ebx
  void (__thiscall ***v7)(_DWORD); // ecx
  void (__thiscall *v8)(_DWORD); // edx
  int v9; // eax
  char *v10; // ecx
  _DWORD *v11; // eax
  BSStringT *v12; // edx
  int *v13; // eax
  int *v14; // ebp
  int v15; // ecx
  int v16; // eax
  float v17; // ecx
  int SoulLevel; // eax
  double v19; // st7
  int v20; // eax
  Tile *v21; // eax
  Tile *v22; // edi
  double v23; // st7
  double v24; // st7
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  const char *v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ebp
  _DWORD *v32; // ecx
  ExtraDataList ***v33; // eax
  int v34; // edi
  unsigned __int16 v35; // cx
  int v36; // eax
  double v37; // st7
  int v38; // eax
  Tile *v39; // ecx
  int v40; // eax
  Tile *v41; // ecx
  double v42; // st7
  ExtraDataList ***v43; // ecx
  CHAR *v44; // eax
  char *v45; // eax
  ExtraDataList ***v46; // ecx
  CHAR *v47; // eax
  char *v48; // eax
  int v49; // eax
  Tile *v50; // ecx
  double v51; // st7
  int v52; // edi
  Tile *v53; // ecx
  float *v54; // eax
  float *v55; // ebp
  Tile *v56; // eax
  ExtraDataList ***v57; // ecx
  double v58; // st7
  float *v59; // eax
  bool v60; // al
  Tile *v61; // ecx
  int v62; // eax
  Tile *v63; // ecx
  double v64; // st7
  float v65; // [esp-10h] [ebp-178h] BYREF
  float v66; // [esp-Ch] [ebp-174h]
  BSStringT v67; // [esp-8h] [ebp-170h]
  int v68; // [esp+0h] [ebp-168h]
  int v69; // [esp+4h] [ebp-164h]
  int v70; // [esp+8h] [ebp-160h]
  Tile *v71; // [esp+Ch] [ebp-15Ch]
  UInt32 v72; // [esp+10h] [ebp-158h]
  _DWORD *a2; // [esp+14h] [ebp-154h]
  BSStringT v74; // [esp+18h] [ebp-150h] BYREF
  unsigned int v75; // [esp+20h] [ebp-148h] BYREF
  __int16 v76; // [esp+24h] [ebp-144h]
  __int16 v77; // [esp+26h] [ebp-142h]
  int v78; // [esp+28h] [ebp-140h]
  Tile *parent; // [esp+2Ch] [ebp-13Ch]
  float v80; // [esp+30h] [ebp-138h]
  float value; // [esp+34h] [ebp-134h]
  BSStringT v82; // [esp+38h] [ebp-130h]
  _DWORD *v83; // [esp+4Ch] [ebp-11Ch]
  _DWORD *v84; // [esp+54h] [ebp-114h] BYREF
  int v85; // [esp+140h] [ebp-28h]

  v5 = *(_DWORD **)(*(_DWORD *)(a1 + 0x58) + 0x34); /*0x5a2560*/
  v6 = 0.0; /*0x5a2563*/
  v72 = *(_DWORD *)(a1 + 0x58); /*0x5a2567*/
  while ( v5 ) /*0x5a256b*/
  {
    v7 = (void (__thiscall ***)(_DWORD))v5[2]; /*0x5a2570*/
    v5 = (_DWORD *)*v5; /*0x5a2578*/
    if ( v7 ) /*0x5a257a*/
    {
      v8 = **v7; /*0x5a257e*/
      v67.m_data = (char *)1; /*0x5a2580*/
      v8(v7); /*0x5a2582*/
    }
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(a1 + 0x58) + 0x30)); /*0x5a258e*/
  v74.m_data = 0; /*0x5a259d*/
  *(_DWORD *)&v74.m_dataLen = 0; /*0x5a25a1*/
  BSStringT_Set(&v74, "added_effect_template", 0); /*0x5a25ab*/
  v9 = *(_DWORD *)(a1 + 0x28); /*0x5a25b0*/
  v85 = 0; /*0x5a25b5*/
  if ( v9 ) /*0x5a25bc*/
  {
    v10 = (char *)(v9 + 0x24); /*0x5a25c2*/
    v78 = v9 + 0x24; /*0x5a25c7*/
    if ( v9 == 0xFFFFFFDC ) /*0x5a25cb*/
    {
      v72 = 0; /*0x5a25ea*/
    }
    else
    {
      v11 = (_DWORD *)(v9 + 0x28); /*0x5a25cd*/
      v12 = 0; /*0x5a25d0*/
      if ( v10 != (char *)0xFFFFFFFC ) /*0x5a25d4*/
      {
        do /*0x5a25e2*/
        {
          if ( *v11 ) /*0x5a25d6*/
            v12 = (BSStringT *)((char *)v12 + 1); /*0x5a25da*/
          v11 = (_DWORD *)v11[1]; /*0x5a25dd*/
        }
        while ( v11 ); /*0x5a25e2*/
      }
      v72 = (UInt32)v12; /*0x5a25e4*/
    }
    if ( v72 ) /*0x5a25f2*/
    {
      while ( 1 ) /*0x5a2605*/
      {
        EffectItemList_GetItemByIndex2(v10, SLODWORD(v6)); /*0x5a2605*/
        v14 = v13; /*0x5a260e*/
        if ( *(_DWORD *)(a1 + 0x2C) ) /*0x5a260a*/
        {
          v15 = *(_DWORD *)(a1 + 0x34); /*0x5a2612*/
          if ( v15 ) /*0x5a2617*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x10))(v15) == 3 ) /*0x5a2623*/
            {
              v16 = v14[7]; /*0x5a262c*/
              LODWORD(v66) = *(unsigned __int16 *)(*(_DWORD *)(a1 + 0x34) + 8); /*0x5a262f*/
              LODWORD(v17) = LOWORD(v66); /*0x5a2630*/
              parent = *(Tile **)(v16 + 0x90); /*0x5a2639*/
              a2 = *(_DWORD **)(v16 + 0x5C); /*0x5a2640*/
              v66 = 1.0; /*0x5a2646*/
              v65 = v17; /*0x5a2649*/
              SoulLevel = EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(a1 + 0x2C)); /*0x5a264d*/
              v65 = Calc_ConstantEffectEnchantmentMagnitude(*(float *)&a2, *(float *)&parent, SoulLevel); /*0x5a266d*/
              v19 = Round_Float(v65, v66); /*0x5a2670*/
              v20 = Double_To_SInt32(v19); /*0x5a2678*/
              EffectItem_SetMagnitude((int)v14, v20); /*0x5a2680*/
            }
          }
        }
        v21 = Menu::RenderTemplate((Menu *)a1, v71, v74.m_data, 0); /*0x5a2693*/
        v22 = v21; /*0x5a2698*/
        if ( v21 ) /*0x5a269c*/
        {
          if ( v14 ) /*0x5a26a4*/
          {
            *(float *)&a2 = v6; /*0x5a26ae*/
            v23 = (double)SLODWORD(v6); /*0x5a26b2*/
            if ( v6 < 0.0 ) /*0x5a26b6*/
              v23 = v23 + flt_A2FC78; /*0x5a26b8*/
            v66 = v23; /*0x5a26bf*/
            Tile_SetFloat(v21, 0xFAEu, v66); /*0x5a26c9*/
            a2 = (_DWORD *)(LODWORD(v6) + 0xBB8); /*0x5a26d6*/
            v24 = (double)(LODWORD(v6) + 0xBB8); /*0x5a26da*/
            if ( LODWORD(v6) + 0xBB8 < 0 ) /*0x5a26de*/
              v24 = v24 + flt_A2FC78; /*0x5a26e0*/
            v66 = v24; /*0x5a26e7*/
            Tile_SetFloat(v22, 0xFA8u, v66); /*0x5a26f1*/
            v25 = *(_DWORD *)(a1 + 0x28); /*0x5a26f6*/
            if ( v25 ) /*0x5a26fb*/
              v26 = v25 + 0x18; /*0x5a26fd*/
            else
              v26 = 0; /*0x5a2702*/
            v66 = *(float *)EffectItem_GetDisplayText((int)&v75, v26, 1.0); /*0x5a2719*/
            LOBYTE(v85) = 1; /*0x5a2721*/
            Tile_SetString(v22, (_DWORD *)0xFB0, (char *)LODWORD(v66)); /*0x5a2729*/
            LOBYTE(v85) = 0; /*0x5a2733*/
            FormHeapFree(v75); /*0x5a273b*/
            *(float *)&a2 = COERCE_FLOAT(&v65); /*0x5a2745*/
            v75 = 0; /*0x5a274c*/
            v77 = 0; /*0x5a2750*/
            v76 = 0; /*0x5a2755*/
            EffectItem_GetName(v14, (int)&v65, v27, SLODWORD(v66), v67, v68, v69, v70, (int)v71, (BSStringT *)v72); /*0x5a275a*/
            sub_58A020((BSStringT *)v22, (char *)a2, (int)v74.m_data); /*0x5a2761*/
            v28 = *(const char **)(v14[7] + 0x48); /*0x5a2769*/
            if ( !v28 ) /*0x5a276e*/
              v28 = EmptyString; /*0x5a2770*/
            _sprintf((char *)&v84, "%s\\%s", "Icons", v28); /*0x5a2785*/
            Tile_SetString(v22, (_DWORD *)0xFAF, (char *)&v84); /*0x5a2799*/
            v82.m_data = (char *)*v14; /*0x5a27a1*/
            *(float *)&v74.m_data = (float)(int)v82.m_data; /*0x5a27ac*/
            Tile_SetFloat(v22, 0xFB2u, *(float *)&v74.m_data); /*0x5a27b4*/
            Tile_SetFloat(v22, 0xFB4u, flt_A6BC94); /*0x5a27ca*/
            *(float *)&v74.m_data = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x68), 0xFB5); /*0x5a27dd*/
            Tile_SetFloat(v22, 0xFB6u, *(float *)&v74.m_data); /*0x5a27e7*/
          }
        }
        if ( ++LODWORD(v6) >= LODWORD(value) ) /*0x5a27f3*/
          break; /*0x5a27f3*/
        v10 = (char *)v83; /*0x5a2600*/
      }
    }
    v29 = *(_DWORD *)(a1 + 0x34); /*0x5a27fb*/
    if ( v29 && (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 0x10))(v29) == 3 ) /*0x5a2810*/
    {
      Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFA1u, fConstant_2); /*0x5a2828*/
      Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFAEu, 0.0); /*0x5a283b*/
      Tile_SetString(*(_DWORD **)(a1 + 0x50), (_DWORD *)0xFAE, (char *)MEMORY[0xB38BD8].value); /*0x5a284e*/
      Tile_SetFloat(*(Tile **)(a1 + 0x44), 0xFA1u, 1.0); /*0x5a2861*/
      Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFAFu, 1.0); /*0x5a2874*/
      v30 = *(_DWORD *)(a1 + 0x28); /*0x5a2879*/
      *(_BYTE *)(a1 + 0x9D) = 0; /*0x5a287e*/
      *(_DWORD *)(a1 + 0x38) = 0; /*0x5a2885*/
      if ( v30 ) /*0x5a2888*/
      {
        v31 = v30 + 0x24; /*0x5a288e*/
        if ( v30 != 0xFFFFFFDC ) /*0x5a2893*/
        {
          do /*0x5a2937*/
          {
            v32 = *(_DWORD **)(v31 + 4); /*0x5a2899*/
            if ( !v32 ) /*0x5a289e*/
              break; /*0x5a289e*/
            v33 = *(ExtraDataList ****)(a1 + 0x2C); /*0x5a28a4*/
            if ( !v33 ) /*0x5a28a9*/
              break; /*0x5a28a9*/
            v34 = v32[7]; /*0x5a28af*/
            if ( (*(_DWORD *)(v34 + 0x58) & 0x100) != 0 ) /*0x5a28bb*/
            {
              v35 = *(_WORD *)(*(_DWORD *)(a1 + 0x34) + 8); /*0x5a28c6*/
              v80 = *(float *)(v34 + 0x90); /*0x5a28ca*/
              v82.m_data = *(char **)(v34 + 0x5C); /*0x5a28d4*/
              v74.m_data = (char *)v35; /*0x5a28d8*/
              v36 = EnchantmentMenu_SoulGemInfo_GetSoulLevel(v33); /*0x5a28db*/
              v37 = Calc_ConstantEffectEnchantmentMagnitude(*(float *)&v82.m_data, v80, v36); /*0x5a28f3*/
            }
            else
            {
              v80 = COERCE_FLOAT(EffectItem_GetMagnitude(v32)); /*0x5a2902*/
              v37 = (double)SLODWORD(v80); /*0x5a2906*/
            }
            value = v37; /*0x5a290a*/
            v80 = *(float *)(v34 + 0x94); /*0x5a2914*/
            *(_DWORD *)(a1 + 0x38) = Double_To_SInt32(value * v80 + (double)*(int *)(a1 + 0x38)); /*0x5a2928*/
            v38 = *(_DWORD *)(v31 + 8); /*0x5a292b*/
            if ( !v38 ) /*0x5a2930*/
              break; /*0x5a2930*/
            v31 = v38 - 4; /*0x5a2932*/
          }
          while ( v38 != 4 ); /*0x5a2937*/
        }
      }
    }
    else
    {
      v51 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)(a1 + 0x28) + 0x24))( /*0x5a2b55*/
              *(_DWORD *)(a1 + 0x28) + 0x24,
              0);
      *(float *)&v52 = COERCE_FLOAT(Double_To_SInt32(v51)); /*0x5a2b5c*/
      parent = (Tile *)v52; /*0x5a2b60*/
      if ( *(float *)&v52 == 0.0 ) /*0x5a2b64*/
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x44), 0xFA1u, 1.0); /*0x5a2c88*/
        v63 = *(Tile **)(a1 + 0x50); /*0x5a2c8f*/
        *(float *)&a2 = 1.0; /*0x5a2c93*/
        v72 = 0xFA1; /*0x5a2c96*/
      }
      else
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFA1u, fConstant_2); /*0x5a2b7c*/
        v53 = *(Tile **)(a1 + 0x50); /*0x5a2b85*/
        *(float *)&a2 = (float)(int)parent; /*0x5a2b89*/
        Tile_SetFloat(v53, 0xFAEu, *(float *)&a2); /*0x5a2b91*/
        v54 = *(float **)(4 * EnchantmentMenu_SoulGemInfo_GetSoulLevel(*(ExtraDataList ****)(a1 + 0x2C)) + 0xB39530); /*0x5a2b9e*/
        if ( v54 ) /*0x5a2ba7*/
        {
          v55 = v54; /*0x5a2ba9*/
        }
        else
        {
          v55 = flt_B35464; /*0x5a2baf*/
          flt_B35464[0] = 0.0; /*0x5a2bb4*/
        }
        *(float *)&v56 = COERCE_FLOAT(sub_484D70(*(ExtraDataList ****)(a1 + 0x2C))); /*0x5a2bbd*/
        v57 = *(ExtraDataList ****)(a1 + 0x2C); /*0x5a2bc2*/
        parent = v56; /*0x5a2bc5*/
        a3 = *v55; /*0x5a2bcd*/
        if ( a3 <= (double)(int)v56 ) /*0x5a2bd7*/
        {
          v59 = *(float **)(4 * EnchantmentMenu_SoulGemInfo_GetSoulLevel(v57) + 0xB39530); /*0x5a2bed*/
          if ( !v59 ) /*0x5a2bf6*/
          {
            v59 = flt_B35464; /*0x5a2bfa*/
            flt_B35464[0] = 0.0; /*0x5a2bff*/
          }
          v58 = *v59; /*0x5a2c05*/
        }
        else
        {
          *(float *)&parent = COERCE_FLOAT(sub_484D70(v57)); /*0x5a2bde*/
          v58 = (double)(int)parent; /*0x5a2be2*/
        }
        v80 = v58; /*0x5a2c07*/
        v60 = v52 > Double_To_SInt32(v80); /*0x5a2c16*/
        *(_BYTE *)(a1 + 0x9D) = v60; /*0x5a2c20*/
        parent = (Tile *)(v60 + 1); /*0x5a2c29*/
        v61 = *(Tile **)(a1 + 0x50); /*0x5a2c2d*/
        *(float *)&a2 = (float)(int)parent; /*0x5a2c35*/
        Tile_SetFloat(v61, 0xFAFu, *(float *)&a2); /*0x5a2c3d*/
        Tile_SetFloat(*(Tile **)(a1 + 0x44), 0xFA1u, fConstant_2); /*0x5a2c54*/
        v62 = sub_484D70(*(ExtraDataList ****)(a1 + 0x2C)); /*0x5a2c5c*/
        v63 = *(Tile **)(a1 + 0x44); /*0x5a2c64*/
        parent = (Tile *)(v62 / v52); /*0x5a2c68*/
        *(float *)&a2 = (float)(v62 / v52); /*0x5a2c70*/
        v72 = 0xFAE; /*0x5a2c73*/
      }
      Tile_SetFloat(v63, v72, *(float *)&a2); /*0x5a2c9b*/
      v64 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*(_DWORD *)(a1 + 0x28) + 0x24))( /*0x5a2cac*/
              *(_DWORD *)(a1 + 0x28) + 0x24,
              0);
      *(_DWORD *)(a1 + 0x38) = Double_To_SInt32(v64 * flt_B37ED0[0x46]); /*0x5a2cb9*/
    }
    _sprintf((char *)&v84, "%d", *(_DWORD *)(a1 + 0x38)); /*0x5a294d*/
    Tile_SetString(*(_DWORD **)(a1 + 0x48), (_DWORD *)0xFDE, (char *)&v84); /*0x5a2962*/
    LODWORD(v80) = (*(_DWORD *)(a1 + 0x38) > sub_5E4420((Actor *)reference)) + 1; /*0x5a297d*/
    v39 = *(Tile **)(a1 + 0x48); /*0x5a2981*/
    *(float *)&v74.m_data = (float)SLODWORD(v80); /*0x5a2989*/
    Tile_SetFloat(v39, 0xFAEu, *(float *)&v74.m_data); /*0x5a2991*/
    v40 = sub_5E4420((Actor *)reference); /*0x5a299c*/
    _sprintf((char *)&v84, "%d", v40); /*0x5a29ac*/
    Tile_SetString(*(_DWORD **)(a1 + 0x4C), (_DWORD *)0xFDE, (char *)&v84); /*0x5a29c1*/
    LODWORD(v80) = (*(_DWORD *)(a1 + 0x38) > sub_5E4420((Actor *)reference)) + 1; /*0x5a29dc*/
    v41 = *(Tile **)(a1 + 0x4C); /*0x5a29e0*/
    v42 = (double)SLODWORD(v80); /*0x5a29e3*/
    *(float *)&v74.m_data = v42; /*0x5a29e8*/
    Tile_SetFloat(v41, 0xFAEu, *(float *)&v74.m_data); /*0x5a29f0*/
    v43 = *(ExtraDataList ****)(a1 + 0x30); /*0x5a29f5*/
    if ( v43 ) /*0x5a29fa*/
    {
      v44 = sub_4851B0(v43, (TESObjectREFR *)reference); /*0x5a2a03*/
      _sprintf((char *)&v84, "%s\\%s", "Icons", v44); /*0x5a2a18*/
      v45 = sub_488DF0(*(EntryData **)(a1 + 0x30)); /*0x5a2a23*/
      Tile_SetString(*(_DWORD **)(a1 + 0x80), (_DWORD *)0xFAE, v45); /*0x5a2a34*/
      Tile_SetString(*(_DWORD **)(a1 + 0x80), (_DWORD *)0xFAF, (char *)&v84); /*0x5a2a49*/
      Tile_SetString(*(_DWORD **)(a1 + 0x8C), (_DWORD *)0xFE6, (char *)&v84); /*0x5a2a5e*/
      sub_58FBA0(*(_DWORD *)(a1 + 0x80), st5_0, a3, v42, 0); /*0x5a2a6a*/
    }
    v46 = *(ExtraDataList ****)(a1 + 0x2C); /*0x5a2a6f*/
    if ( v46 ) /*0x5a2a74*/
    {
      v47 = sub_4851B0(v46, (TESObjectREFR *)reference); /*0x5a2a7c*/
      _sprintf((char *)&v84, "%s\\%s", "Icons", v47); /*0x5a2a91*/
      v48 = sub_488DF0(*(EntryData **)(a1 + 0x2C)); /*0x5a2a9c*/
      Tile_SetString(*(_DWORD **)(a1 + 0x84), (_DWORD *)0xFAE, v48); /*0x5a2aad*/
      *(float *)&v49 = COERCE_FLOAT(sub_484D70(*(ExtraDataList ****)(a1 + 0x2C))); /*0x5a2ab5*/
      v50 = *(Tile **)(a1 + 0x84); /*0x5a2aba*/
      v80 = *(float *)&v49; /*0x5a2ac0*/
      *(float *)&v74.m_data = (float)v49; /*0x5a2ac9*/
      Tile_SetFloat(v50, 0xFAFu, *(float *)&v74.m_data); /*0x5a2ad1*/
      Tile_SetString(*(_DWORD **)(a1 + 0x88), (_DWORD *)0xFE6, (char *)&v84); /*0x5a2ae6*/
    }
  }
  Tile_SetFloat(*(Tile **)(a1 + 0x6C), 0xFB7u, flt_A6BC04); /*0x5a2afd*/
  Tile_SetFloat(*(Tile **)(a1 + 0x6C), 0xFB7u, 0.0); /*0x5a2b10*/
  FormHeapFree(*(unsigned int *)&v82.m_dataLen); /*0x5a2b1a*/
}
