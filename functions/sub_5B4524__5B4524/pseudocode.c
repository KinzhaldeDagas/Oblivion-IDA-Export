// positive sp value has been detected, the output may be wrong!
void __usercall sub_5B4524(
        Tile **a1@<eax>,
        int a2@<ebx>,
        _DWORD *ebp0@<ebp>,
        int a4@<edi>,
        MagicItem *a5@<esi>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>,
        int a9,
        int a10,
        unsigned __int8 *name,
        int a12,
        int a3,
        int a14,
        EntryData *a15,
        int a16,
        int a17,
        int ArgList,
        Tile **a19,
        int a20,
        int a21,
        int a22)
{
  Tile *v22; // esi
  const char *v23; // eax
  Tile *DescendantByName; // eax
  _DWORD *v25; // ebp
  Tile **v26; // ebp
  int v27; // esi
  Tile *v28; // ecx
  int v29; // ebp
  unsigned __int16 *v30; // ebx
  int (__usercall *v31)@<eax>(unsigned __int16 *@<ecx>, double@<st0>, double@<st1>); // eax
  const char *value; // ebp
  unsigned __int16 v33; // bx
  const char *v34; // esi
  double Charge; // st7
  double v36; // st7
  int v37; // eax
  double v38; // st7
  bool (__thiscall **p_IsMagicItemUsable)(MagicCaster *, MagicItem *, float *, UInt32 *, bool); // ebx
  InterfaceManager *Singleton; // eax
  int v41; // eax
  char **v42; // eax
  _DWORD *v43; // ecx
  _DWORD *v44; // ecx
  BSStringT *v45; // eax
  _DWORD *v46; // ecx
  char *v47; // [esp-354h] [ebp-370h]
  char *v48; // [esp-354h] [ebp-370h]
  char *m_data; // [esp-354h] [ebp-370h]
  float v50; // [esp-354h] [ebp-370h]
  int v51; // [esp-348h] [ebp-364h]
  float v52; // [esp-344h] [ebp-360h]
  char *v53; // [esp-344h] [ebp-360h]
  BSStringT v54; // [esp-330h] [ebp-34Ch] BYREF
  float v55; // [esp-328h] [ebp-344h]
  MagicItem *v56; // [esp-324h] [ebp-340h]
  BSStringT v57; // [esp-320h] [ebp-33Ch] BYREF
  int v58; // [esp-318h] [ebp-334h]
  _DWORD v59[5]; // [esp-314h] [ebp-330h] BYREF
  _DWORD v60[2]; // [esp-300h] [ebp-31Ch] BYREF
  char v61; // [esp-2F8h] [ebp-314h] BYREF
  int v62; // [esp+8h] [ebp-14h]
  _DWORD *v63; // [esp+18h] [ebp-4h]

  if ( !*ebp0 ) /*0x5b4524*/
    goto LABEL_11; /*0x5b4524*/
  if ( a2 >= 8 ) /*0x5b4531*/
    goto LABEL_15; /*0x5b4531*/
  v22 = *a1; /*0x5b4537*/
  ++a2; /*0x5b4539*/
  v61 = 0; /*0x5b4543*/
  v59[3] = a2; /*0x5b4548*/
  v59[2] = a1 + 1; /*0x5b454c*/
  if ( a2 > v60[0] ) /*0x5b4550*/
  {
    Tile_SetString(v22, (_DWORD *)0xFAE, (char *)MEMORY[0xB38BD0].value); /*0x5b4607*/
    _sprintf(&v61, "%s\\Small\\Magic\\unknown_icon00.dds", "Icons"); /*0x5b461b*/
  }
  else
  {
    a6 = 0.0; /*0x5b455c*/
    a7 = ((double (__usercall *)@<st0>(_DWORD, _DWORD, double@<st0>))reference->super.super.magicCaster.vtbl->GetSpellEffectiveness)( /*0x5b4570*/
           0,
           0.0,
           a8);
    v52 = a8; /*0x5b4577*/
    v53 = *(char **)EffectItem_GetDisplayText((int)&v57, (int)v56, v52); /*0x5b4589*/
    v63 = (_DWORD *)1; /*0x5b4591*/
    Tile_SetString(v22, (_DWORD *)0xFAE, v53); /*0x5b459c*/
    v63 = (_DWORD *)0xFFFFFFFF; /*0x5b45a6*/
    FormHeapFree((unsigned int)v57.m_data); /*0x5b45b1*/
    v23 = *(const char **)(*(_DWORD *)(*ebp0 + 0x1C) + 0x48); /*0x5b45bc*/
    v57.m_data = 0; /*0x5b45c6*/
    v57.m_bufLen = 0; /*0x5b45ca*/
    v57.m_dataLen = 0; /*0x5b45cf*/
    if ( !v23 ) /*0x5b45d4*/
      v23 = EmptyString; /*0x5b45d6*/
    _sprintf((char *)v60, "%s\\%s", "Icons", v23); /*0x5b45eb*/
    a2 = v59[1]; /*0x5b45f0*/
  }
  Tile_SetString(v22, (_DWORD *)0xFAF, (char *)v60); /*0x5b462f*/
  Tile_SetFloat(v22, 0xFA1u, fConstant_2); /*0x5b4645*/
  a8 = kTerrainLODQuadRayDirectionZ; /*0x5b464a*/
  Tile_SetFloat(v22, 0xFB0u, kTerrainLODQuadRayDirectionZ); /*0x5b465b*/
  *(_DWORD *)&v54.m_dataLen = 0; /*0x5b4662*/
  v55 = 0.0; /*0x5b4666*/
  v63 = (_DWORD *)2; /*0x5b467b*/
  BSStringT_Static_Format((BSStringT *)&v54.m_dataLen, "magicpop_effect_%d_icon", a2); /*0x5b4686*/
  DescendantByName = Tile_FindDescendantByName(v22, *(const char **)&v54.m_dataLen); /*0x5b4695*/
  if ( DescendantByName ) /*0x5b469e*/
    *((_DWORD *)DescendantByName + 0xB) |= 0x10u; /*0x5b46a6*/
  v25 = (_DWORD *)ebp0[1]; /*0x5b46ad*/
  v63 = (_DWORD *)0xFFFFFFFF; /*0x5b46b1*/
  FormHeapFree(*(unsigned int *)&v54.m_dataLen); /*0x5b46bc*/
  *(_DWORD *)&v54.m_dataLen = 0; /*0x5b46c4*/
  v55 = 0.0; /*0x5b46cd*/
  a5 = v56; /*0x5b46d4*/
  if ( !v25 )
  {
LABEL_11:
    if ( a2 < 8 ) /*0x5b46e1*/
    {
      v26 = (Tile **)(a4 + 4 * a2 + 0x2C); /*0x5b46e8*/
      v27 = 8 - a2; /*0x5b46ec*/
      do /*0x5b4707*/
      {
        v28 = *v26; /*0x5b46ee*/
        a6 = 1.0; /*0x5b46f1*/
        ++v26; /*0x5b46fc*/
        Tile_SetFloat(v28, 0xFA1u, 1.0); /*0x5b46ff*/
        --v27; /*0x5b4704*/
      }
      while ( v27 ); /*0x5b4707*/
      a5 = v56; /*0x5b4709*/
    }
LABEL_15:
    v29 = v58; /*0x5b470d*/
    if ( v58 )
    {
      v30 = (unsigned __int16 *)OblivionDynamicCast( /*0x5b4730*/
                                  *(void **)(v58 + 8),
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESEnchantableForm `RTTI Type Descriptor',
                                  0);
      if ( v30 )
      {
        if ( *(_BYTE *)(*(_DWORD *)(v29 + 8) + 4) != 0x22 )
        {
          *(_DWORD *)&v54.m_dataLen = 0; /*0x5b4751*/
          v55 = 0.0; /*0x5b4755*/
          v31 = *(int (__usercall **)@<eax>(unsigned __int16 *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v30 + 0x10); /*0x5b4761*/
          v63 = (_DWORD *)3; /*0x5b4766*/
          if ( v31(v30, a8, a7) == 3 )
          {
            BSStringT_Static_Format((BSStringT *)&v54.m_dataLen, "%s", MEMORY[0xB38BD8].value); /*0x5b4789*/
          }
          else
          {
            v55 = ((double (__thiscall *)(int, _DWORD))**(_DWORD **)(*((_DWORD *)v30 + 1) + 0x24))( /*0x5b47a1*/
                    *((_DWORD *)v30 + 1) + 0x24,
                    0);
            if ( v55 <= 0.0 ) /*0x5b47b0*/
              v55 = 1.0; /*0x5b47b4*/
            value = MEMORY[0xB38BC8].value; /*0x5b47bc*/
            v33 = v30[4]; /*0x5b47c2*/
            v34 = MEMORY[0xB38BC0].value; /*0x5b47c6*/
            Charge = EquippedEntryData_GetCharge(*(EntryData **)&v57.m_dataLen); /*0x5b47cc*/
            v51 = Double_To_SInt32(Charge / v55); /*0x5b47de*/
            v36 = EquippedEntryData_GetCharge(*(EntryData **)&v57.m_dataLen); /*0x5b47e4*/
            v37 = Double_To_SInt32(v36); /*0x5b47e9*/
            BSStringT_Static_Format(&v54, "%s: %i/%i %s: %i", v34, v37, v33, value, v51);
          }
          Tile_SetString(*(_DWORD **)(a4 + 0x4C), (_DWORD *)0xFDE, *(char **)&v54.m_dataLen); /*0x5b480f*/
          v38 = fConstant_2; /*0x5b4814*/
          Tile_SetFloat(*(Tile **)(a4 + 0x4C), 0xFA1u, fConstant_2); /*0x5b4828*/
          v63 = (_DWORD *)0xFFFFFFFF; /*0x5b4831*/
          BSStringT_Clear((unsigned int *)&v54.m_dataLen); /*0x5b483c*/
          goto LABEL_36; /*0x5b4841*/
        }
      }
    }
    if ( (*(int (__usercall **)@<eax>(MagicItem *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a5 + 0x18))(a5, a8, a7) == 7 /*0x5b4864*/
      || (*(int (__thiscall **)(MagicItem *))(*(_DWORD *)a5 + 0x18))(a5) == 8 )
    {
      Tile_SetString(*(_DWORD **)(a4 + 0x4C), (_DWORD *)0xFDE, v47); /*0x5b49b9*/
    }
    else
    {
      p_IsMagicItemUsable = &reference->super.super.magicCaster.vtbl->IsMagicItemUsable; /*0x5b487b*/
      Singleton = InterfaceManager_GetSingleton(0, 0); /*0x5b487e*/
      LOBYTE(v41) = sub_57CFB0(Singleton, 0x40D); /*0x5b4888*/
      if ( !(*p_IsMagicItemUsable)(&reference->super.super.magicCaster, a5, 0, v59, v41) ) /*0x5b48a1*/
      {
        if ( v56 != (MagicItem *)3 ) /*0x5b48b2*/
        {
          Magic_CastFailureMsg(&v54, (int)v56); /*0x5b4903*/
          v44 = *(_DWORD **)(a4 + 0x4C); /*0x5b490c*/
          v62 = 5; /*0x5b4915*/
          Tile_SetString(v44, (_DWORD *)0xFDE, v54.m_data); /*0x5b4920*/
          v38 = fConstant_2; /*0x5b4925*/
          Tile_SetFloat(*(Tile **)(a4 + 0x4C), 0xFA1u, fConstant_2); /*0x5b4939*/
          v62 = 0xFFFFFFFF; /*0x5b4942*/
          BSStringT_Clear((unsigned int *)&v54); /*0x5b494d*/
LABEL_36:
          sub_58FBA0(v59[4], a6, a7, v38, 0); /*0x5b49d1*/
          return; /*0x5b4a03*/
        }
        v42 = (char **)EffectItemList_SkillReqMsg((_DWORD *)a5 + 3, &v54); /*0x5b48bc*/
        v43 = *(_DWORD **)(a4 + 0x4C); /*0x5b48c3*/
        v48 = *v42; /*0x5b48c6*/
        v62 = 4; /*0x5b48cc*/
        Tile_SetString(v43, (_DWORD *)0xFDE, v48); /*0x5b48d7*/
        v62 = 0xFFFFFFFF; /*0x5b48e0*/
        BSStringT_Clear((unsigned int *)&v54); /*0x5b48eb*/
        v38 = fConstant_2; /*0x5b48f0*/
LABEL_35:
        v50 = v38; /*0x5b49c0*/
        Tile_SetFloat(*(Tile **)(a4 + 0x4C), 0xFA1u, v50); /*0x5b49cc*/
        goto LABEL_36; /*0x5b49cc*/
      }
      if ( !(*(int (__thiscall **)(MagicItem *))(*(_DWORD *)a5 + 0x18))(a5) ) /*0x5b495b*/
      {
        v45 = EffectItemList_MagicSchoolMsg((_DWORD *)a5 + 3, &v57); /*0x5b4969*/
        v46 = *(_DWORD **)(a4 + 0x4C); /*0x5b4970*/
        m_data = v45->m_data; /*0x5b4973*/
        v62 = 6; /*0x5b4979*/
        Tile_SetString(v46, (_DWORD *)0xFDE, m_data); /*0x5b4984*/
        v62 = 0xFFFFFFFF; /*0x5b498d*/
        BSStringT_Clear((unsigned int *)&v57); /*0x5b4998*/
        v38 = fConstant_2; /*0x5b499d*/
        goto LABEL_35; /*0x5b49a3*/
      }
      Tile_SetString(*(_DWORD **)(a4 + 0x4C), (_DWORD *)0xFDE, word_A36430); /*0x5b49aa*/
    }
    v38 = 1.0; /*0x5b49be*/
    goto LABEL_35; /*0x5b49be*/
  }
  sub_5B4520( /*0x5b46d8*/
    a2,
    v25,
    a4,
    (int)v56,
    a6,
    a7,
    a9,
    a10,
    name,
    a12,
    a3,
    a14,
    (int)a15,
    a16,
    a17,
    ArgList,
    a19,
    a20,
    a21,
    a22);
}
