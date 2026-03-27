// positive sp value has been detected, the output may be wrong!
void __usercall sub_5B4524(
        Tile **a1@<eax>,
        int a2@<ebx>,
        _DWORD *ebp0@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        double a6@<st2>,
        double a7@<st1>,
        int a8,
        int a9,
        unsigned __int8 *a10,
        int a11,
        int a3,
        int a13,
        int a14,
        int a15,
        int a16,
        int ArgList,
        int a18,
        int a19,
        int a20,
        int a21)
{
  Tile *v21; // esi
  const char *v22; // eax
  int v23; // eax
  int v24; // ebp
  Tile **v25; // ebp
  int v26; // esi
  Tile *v27; // ecx
  int v28; // ebp
  unsigned __int16 *v29; // ebx
  int (__thiscall *v30)(unsigned __int16 *); // eax
  const char *v31; // ebp
  unsigned __int16 v32; // bx
  const char *v33; // esi
  double v34; // st7
  double v35; // st7
  int v36; // eax
  double v37; // st7
  bool (__thiscall **p_IsMagicItemUsable)(MagicCaster *, MagicItem *, float *, UInt32 *, bool); // ebx
  InterfaceManager *Singleton; // eax
  int v40; // eax
  char **v41; // eax
  _DWORD *v42; // ecx
  _DWORD *v43; // ecx
  BSStringT *v44; // eax
  _DWORD *v45; // ecx
  char *v46; // [esp-354h] [ebp-370h]
  char *v47; // [esp-354h] [ebp-370h]
  char *m_data; // [esp-354h] [ebp-370h]
  float v49; // [esp-354h] [ebp-370h]
  int v50; // [esp-348h] [ebp-364h]
  float v51; // [esp-344h] [ebp-360h]
  char *v52; // [esp-344h] [ebp-360h]
  BSStringT v53; // [esp-330h] [ebp-34Ch] BYREF
  float v54; // [esp-328h] [ebp-344h]
  int v55; // [esp-324h] [ebp-340h]
  BSStringT v56; // [esp-320h] [ebp-33Ch] BYREF
  int v57; // [esp-318h] [ebp-334h]
  _DWORD v58[5]; // [esp-314h] [ebp-330h] BYREF
  _DWORD v59[2]; // [esp-300h] [ebp-31Ch] BYREF
  char v60; // [esp-2F8h] [ebp-314h] BYREF
  int v61; // [esp+8h] [ebp-14h]
  _DWORD *v62; // [esp+18h] [ebp-4h]

  if ( !*ebp0 )
    goto LABEL_11;
  if ( a2 >= 8 )
    goto LABEL_15;
  v21 = *a1;
  ++a2;
  v60 = 0;
  v58[3] = a2;
  v58[2] = a1 + 1;
  if ( a2 > v59[0] )
  {
    Tile_SetString(v21, (_DWORD *)0xFAE, (char *)sMiscUnknownEffect);
    _sprintf(&v60, "%s\\Small\\Magic\\unknown_icon00.dds", "Icons");
  }
  else
  {
    v51 = ((double (__cdecl *)(_DWORD, _DWORD))TESDataHandler_g_PlayerRef->super.super.magicCaster.vtbl->GetSpellEffectiveness)(
            0,
            0.0);
    v52 = *(char **)EffectItem_GetDisplayText((int)&v56, v55, v51);
    v62 = (_DWORD *)1;
    Tile_SetString(v21, (_DWORD *)0xFAE, v52);
    v62 = (_DWORD *)0xFFFFFFFF;
    FormHeapFree((unsigned int)v56.m_data);
    v22 = *(const char **)(*(_DWORD *)(*ebp0 + 0x1C) + 0x48);
    v56.m_data = 0;
    v56.m_bufLen = 0;
    v56.m_dataLen = 0;
    if ( !v22 )
      v22 = EmptyString;
    _sprintf((char *)v59, "%s\\%s", "Icons", v22);
    a2 = v58[1];
  }
  Tile_SetString(v21, (_DWORD *)0xFAF, (char *)v59);
  Tile_SetFloat(v21, (_DWORD *)0xFA1, fConstant_2);
  Tile_SetFloat(v21, (_DWORD *)0xFB0, flt_A30634);
  *(_DWORD *)&v53.m_dataLen = 0;
  v54 = 0.0;
  v62 = (_DWORD *)2;
  BSStringT_Static_Format((BSStringT *)&v53.m_dataLen, "magicpop_effect_%d_icon", a2);
  v23 = sub_589930(v21, *(unsigned __int8 **)&v53.m_dataLen);
  if ( v23 )
    *(_DWORD *)(v23 + 0x2C) |= 0x10u;
  v24 = ebp0[1];
  v62 = (_DWORD *)0xFFFFFFFF;
  FormHeapFree(*(unsigned int *)&v53.m_dataLen);
  *(_DWORD *)&v53.m_dataLen = 0;
  v54 = 0.0;
  a5 = v55;
  if ( !v24 )
  {
LABEL_11:
    if ( a2 < 8 )
    {
      v25 = (Tile **)(a4 + 4 * a2 + 0x2C);
      v26 = 8 - a2;
      do
      {
        v27 = *v25++;
        Tile_SetFloat(v27, (_DWORD *)0xFA1, 1.0);
        --v26;
      }
      while ( v26 );
      a5 = v55;
    }
LABEL_15:
    v28 = v57;
    if ( v57 )
    {
      v29 = (unsigned __int16 *)OblivionDynamicCast(
                                  *(void **)(v57 + 8),
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESEnchantableForm `RTTI Type Descriptor',
                                  0);
      if ( v29 )
      {
        if ( *(_BYTE *)(*(_DWORD *)(v28 + 8) + 4) != 0x22 )
        {
          *(_DWORD *)&v53.m_dataLen = 0;
          v54 = 0.0;
          v30 = *(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)v29 + 0x10);
          v62 = (_DWORD *)3;
          if ( v30(v29) == 3 )
          {
            BSStringT_Static_Format((BSStringT *)&v53.m_dataLen, "%s", *(const char **)sMiscConstantEffect);
          }
          else
          {
            v54 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*((_DWORD *)v29 + 1) + 0x24))(
                    *((_DWORD *)v29 + 1) + 0x24,
                    0);
            if ( v54 <= 0.0 )
              v54 = 1.0;
            v31 = (const char *)sMiscUses;
            v32 = v29[4];
            v33 = *(const char **)sMiscCharge;
            v34 = sub_4849C0(*(void ***)&v56.m_dataLen);
            v50 = Double_To_SInt32(v34 / v54);
            v35 = sub_4849C0(*(void ***)&v56.m_dataLen);
            v36 = Double_To_SInt32(v35);
            BSStringT_Static_Format(&v53, "%s: %i/%i %s: %i", v33, v36, v32, v31, v50);
          }
          Tile_SetString(*(_DWORD **)(a4 + 0x4C), (_DWORD *)0xFDE, *(char **)&v53.m_dataLen);
          v37 = fConstant_2;
          Tile_SetFloat(*(Tile **)(a4 + 0x4C), (_DWORD *)0xFA1, fConstant_2);
          v62 = (_DWORD *)0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v53.m_dataLen);
          goto LABEL_36;
        }
      }
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x18))(a5) == 7
      || (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x18))(a5) == 8 )
    {
      Tile_SetString(*(_DWORD **)(a4 + 0x4C), (_DWORD *)0xFDE, v46);
    }
    else
    {
      p_IsMagicItemUsable = &TESDataHandler_g_PlayerRef->super.super.magicCaster.vtbl->IsMagicItemUsable;
      Singleton = InterfaceManager_GetSingleton(0, 0);
      LOBYTE(v40) = sub_57CFB0(Singleton, 0x40D);
      if ( !(*p_IsMagicItemUsable)(&TESDataHandler_g_PlayerRef->super.super.magicCaster, (MagicItem *)a5, 0, v58, v40) )
      {
        if ( v55 != 3 )
        {
          Magic_CastFailureMsg(&v53, v55);
          v43 = *(_DWORD **)(a4 + 0x4C);
          v61 = 5;
          Tile_SetString(v43, (_DWORD *)0xFDE, v53.m_data);
          v37 = fConstant_2;
          Tile_SetFloat(*(Tile **)(a4 + 0x4C), (_DWORD *)0xFA1, fConstant_2);
          v61 = 0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v53);
LABEL_36:
          sub_58FBA0(v58[4], a6, a7, v37, 0);
          return;
        }
        v41 = (char **)EffectItemList_SkillReqMsg((void *)(a5 + 0xC), &v53);
        v42 = *(_DWORD **)(a4 + 0x4C);
        v47 = *v41;
        v61 = 4;
        Tile_SetString(v42, (_DWORD *)0xFDE, v47);
        v61 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v53);
        v37 = fConstant_2;
LABEL_35:
        v49 = v37;
        Tile_SetFloat(*(Tile **)(a4 + 0x4C), (_DWORD *)0xFA1, v49);
        goto LABEL_36;
      }
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 0x18))(a5) )
      {
        v44 = EffectItemList_MagicSchoolMsg(&v56);
        v45 = *(_DWORD **)(a4 + 0x4C);
        m_data = v44->m_data;
        v61 = 6;
        Tile_SetString(v45, (_DWORD *)0xFDE, m_data);
        v61 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v56);
        v37 = fConstant_2;
        goto LABEL_35;
      }
      Tile_SetString(*(_DWORD **)(a4 + 0x4C), (_DWORD *)0xFDE, word_A36430);
    }
    v37 = 1.0;
    goto LABEL_35;
  }
  sub_5B4520(a8, a9, (int)a10, a11, a3, a13, a14, a15, a16, ArgList, a18, a19, a20, a21);
}
