// Native StatsMenu mouseover/detail renderer for attributes and the fixed Oblivion skill rows.
void __userpurge StatsMenu_HandleMouseover(
        int a1@<ecx>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        double a4@<st3>,
        int a5,
        _DWORD *a6)
{
  double v7; // st5
  double v8; // st7
  unsigned int v9; // edi
  char *Icon; // eax
  char *Description; // eax
  int v12; // eax
  unsigned int v13; // edi
  const char *v14; // eax
  char *m_data; // ebp
  unsigned int m_dataLen; // eax
  char *v17; // eax
  TESRace *RaceIfNPC; // eax
  char *v19; // eax
  int v20; // eax
  char *v21; // eax
  CHAR *v22; // eax
  CHAR *v23; // edi
  unsigned int v24; // eax
  unsigned int v25; // ebp
  const char *v26; // ecx
  CHAR *v27; // edx
  int v28; // edi
  unsigned int v29; // eax
  unsigned __int8 *v30; // ecx
  unsigned __int8 *v31; // edx
  unsigned int v32; // eax
  unsigned __int8 *v33; // ecx
  unsigned __int8 *v34; // edx
  unsigned __int8 *v35; // ecx
  unsigned __int8 *v36; // edx
  int v37; // eax
  char *v38; // eax
  char v39; // cl
  char *i; // eax
  TESForm::ModReferenceList *BaseClass; // eax
  char *v42; // eax
  Actor *v43; // ecx
  TESForm::ModReferenceList *unk654; // edi
  CHAR *data; // edi
  unsigned int v46; // eax
  unsigned int v47; // ebp
  const char *v48; // ecx
  CHAR *v49; // edx
  int v50; // edi
  unsigned int v51; // eax
  unsigned __int8 *v52; // ecx
  unsigned __int8 *v53; // edx
  unsigned int v54; // eax
  unsigned __int8 *v55; // ecx
  unsigned __int8 *v56; // edx
  unsigned __int8 *v57; // ecx
  unsigned __int8 *v58; // edx
  int v59; // eax
  char *v60; // eax
  char v61; // cl
  const char *v62; // edi
  TESForm::ModReferenceList *v63; // eax
  UInt32 DwordAtOffset40; // eax
  const char *SpecializationName; // eax
  SkillActorValue v66; // ebp
  TESSkill_RecordView *TESSkillByCode; // edi
  char *v68; // eax
  unsigned int governingAttribute; // edx
  char *v70; // eax
  Actor *v71; // ecx
  const char *v72; // ebx
  SkillMasteryLevel SkillMasteryLevel; // eax
  const char *v74; // eax
  float v75; // [esp+8h] [ebp-64h]
  float v76; // [esp+8h] [ebp-64h]
  float v77; // [esp+8h] [ebp-64h]
  const char *Name; // [esp+8h] [ebp-64h]
  float Float; // [esp+8h] [ebp-64h]
  float a2; // [esp+10h] [ebp-5Ch]
  float a2a; // [esp+10h] [ebp-5Ch]
  float a2b; // [esp+10h] [ebp-5Ch]
  float a2c; // [esp+10h] [ebp-5Ch]
  const char *a2d; // [esp+10h] [ebp-5Ch]
  float a2e; // [esp+10h] [ebp-5Ch]
  float a2f; // [esp+10h] [ebp-5Ch]
  float a3c; // [esp+28h] [ebp-44h]
  float a3d; // [esp+28h] [ebp-44h]
  float a3e; // [esp+28h] [ebp-44h]
  float a3f; // [esp+28h] [ebp-44h]
  CHAR *a3; // [esp+28h] [ebp-44h]
  CHAR *a3a; // [esp+28h] [ebp-44h]
  UInt8 a3g; // [esp+28h] [ebp-44h]
  unsigned int a3h; // [esp+28h] [ebp-44h]
  int a3b; // [esp+28h] [ebp-44h]
  BSStringT v96; // [esp+2Ch] [ebp-40h] BYREF
  BSStringT v97; // [esp+34h] [ebp-38h] BYREF
  char ArgList[32]; // [esp+3Ch] [ebp-30h] BYREF
  int v99; // [esp+68h] [ebp-4h]

  if ( a5 == 0x22 || a5 == 0x18 || a5 == 0xE ) /*0x5dbc19*/
  {
    sub_57DE50(4); /*0x5dbc21*/
    v7 = sub_588D90(a6, st7_0); /*0x5dbc2b*/
    a3c = st7_0 - dbl_A2FAA0; /*0x5dbc3a*/
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAB, a3c); /*0x5dbc4a*/
    a3d = Tile_GetFloat(a6, 0xFCB) - dbl_A49310; /*0x5dbc65*/
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFCB, a3d); /*0x5dbc75*/
    a3e = Tile_GetFloat(a6, 0xFCA) - dbl_A49310; /*0x5dbc90*/
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFCA, a3e); /*0x5dbca0*/
    a2 = sub_588C50(a6); /*0x5dbcb0*/
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAD, a2); /*0x5dbcb8*/
    v8 = sub_588CF0(a6); /*0x5dbcbf*/
    a3f = a4 + dbl_A3D0C0; /*0x5dbcce*/
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAC, a3f); /*0x5dbcde*/
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFA1, fConstant_2); /*0x5dbcf5*/
    if ( a5 == 0x18 ) /*0x5dbcfd*/
    {
      Tile_GetFloat(a6, 0xFAE); /*0x5dbd06*/
      v9 = Double_To_SInt32(v8); /*0x5dbd22*/
      Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, fConstant_2); /*0x5dbd24*/
      Icon = (char *)ActorValue_GetIcon(v9); /*0x5dbd2a*/
      Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, Icon); /*0x5dbd3b*/
      Description = (char *)ActorValue_GetDescription(v9); /*0x5dbd41*/
      Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, Description); /*0x5dbd52*/
LABEL_87:
      a2f = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAF); /*0x5dc4c1*/
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAE); /*0x5dc4eb*/
      sub_589980(*(_DWORD **)(a1 + 0x58), 0xFAE, Float, 1.0, a2f); /*0x5dc4f3*/
      return; /*0x5dc4f3*/
    }
    if ( a5 != 0xE ) /*0x5dbd5f*/
    {
      Tile_GetFloat(a6, 0xFB4); /*0x5dc387*/
      v66 = Double_To_SInt32(v8); /*0x5dc391*/
      a3g = ActorValue_GetGroupOffsetFromAV(2, v66); /*0x5dc39b*/
      TESSkillByCode = TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, a3g); /*0x5dc3b2*/
      if ( TESSkillByCode ) /*0x5dc3b6*/
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, fConstant_2); /*0x5dc3ce*/
        v68 = *(char **)&TESSkillByCode->formComponentsAndIcon[0x24]; /*0x5dc3d3*/
        if ( !v68 ) /*0x5dc3d8*/
          v68 = EmptyString; /*0x5dc3da*/
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, v68); /*0x5dc3e8*/
        v97.m_data = 0; /*0x5dc3ef*/
        v97.m_dataLen = 0; /*0x5dc3f3*/
        v97.m_bufLen = 0; /*0x5dc3f8*/
        governingAttribute = TESSkillByCode->data.governingAttribute; /*0x5dc3fd*/
        v70 = (char *)stru_B383C8; /*0x5dc400*/
        v71 = (Actor *)reference; /*0x5dc405*/
        v72 = (const char *)stru_B383D0; /*0x5dc40b*/
        v99 = 7; /*0x5dc412*/
        a3h = governingAttribute; /*0x5dc41a*/
        v96.m_data = v70; /*0x5dc41e*/
        SkillMasteryLevel = Actor_GetSkillMasteryLevel(v71, v66); /*0x5dc425*/
        a2d = ActorValue_GetMasteryName(SkillMasteryLevel); /*0x5dc437*/
        Name = (const char *)ActorValue_GetName(a3h); /*0x5dc446*/
        v74 = (const char *)(*(int (__thiscall **)(unsigned __int8 *, _DWORD, int))(*(_DWORD *)&TESSkillByCode->formComponentsAndIcon[0x18] /*0x5dc456*/
                                                                                  + 0x10))(
                              &TESSkillByCode->formComponentsAndIcon[0x18],
                              0,
                              0x43534544);
        BSStringT_Static_Format(&v97, "%s\n\n%s%s\n\n%s%s", v74, v96.m_data, Name, v72, a2d); /*0x5dc463*/
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, v97.m_data); /*0x5dc478*/
        if ( v66 == kSkillAV_HandToHand ) /*0x5dc483*/
          a3b = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_D3)(reference); /*0x5dc495*/
        else
          a3b = 0xFFFFFFFF; /*0x5dc49b*/
        a2e = (float)a3b; /*0x5dc4a7*/
        Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB3, a2e); /*0x5dc4af*/
        v99 = 0xFFFFFFFF; /*0x5dc4b8*/
        BSStringT_Clear((unsigned int *)&v97); /*0x5dc4bc*/
      }
      goto LABEL_87; /*0x5dc4bc*/
    }
    Tile_GetFloat(a6, 0xFAE); /*0x5dbd6c*/
    v12 = Double_To_SInt32(v8); /*0x5dbd71*/
    if ( v12 >= 4 ) /*0x5dbd79*/
    {
      v13 = v12 + 4; /*0x5dbd7f*/
      v14 = (const char *)ActorValue_GetDescription(v12 + 4); /*0x5dbd83*/
      v96.m_data = 0; /*0x5dbd93*/
      v96.m_dataLen = 0; /*0x5dbd97*/
      v96.m_bufLen = 0; /*0x5dbd9c*/
      BSStringT_Set(&v96, v14, 0); /*0x5dbda1*/
      m_data = v96.m_data; /*0x5dbdaf*/
      v99 = 0; /*0x5dbdb3*/
      if ( v96.m_dataLen == (__int16)0xFFFF ) /*0x5dbdb7*/
        m_dataLen = strlen(v96.m_data); /*0x5dbdbb*/
      else
        m_dataLen = (unsigned __int16)v96.m_dataLen; /*0x5dbdcd*/
      if ( m_dataLen ) /*0x5dbdd2*/
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, 1.0); /*0x5dbde2*/
        v17 = (char *)ActorValue_GetIcon(v13); /*0x5dbde8*/
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, v17); /*0x5dbdf9*/
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, m_data); /*0x5dbe07*/
        a2a = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAF); /*0x5dbe1f*/
        v75 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAE); /*0x5dbe36*/
        sub_589980(*(_DWORD **)(a1 + 0x58), 0xFAE, v75, 1.0, a2a); /*0x5dbe3e*/
      }
      FormHeapFree((unsigned int)m_data); /*0x5dbe44*/
      return; /*0x5dbe4c*/
    }
    if ( !v12 ) /*0x5dbe53*/
    {
      RaceIfNPC = Actor::GetRaceIfNPC((Actor *)reference); /*0x5dbe5b*/
      v19 = (char *)RaceIfNPC->desc.vtbl->GetText(&RaceIfNPC->desc, 0, 0x43534544); /*0x5dbe6f*/
      BSStringT_constr_str(&v97, v19); /*0x5dbe76*/
      v99 = 1; /*0x5dbe7b*/
      goto LABEL_76; /*0x5dbe83*/
    }
    if ( v12 == 1 ) /*0x5dbe8b*/
    {
      if ( !((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_9A)(reference) ) /*0x5dbea3*/
        return; /*0x5dbea3*/
      v20 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.Unk_9A)( /*0x5dbeb7*/
              reference,
              v8,
              st6_0,
              v7);
      v21 = (char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(v20 + 0x30) + 0x10))( /*0x5dbec9*/
                      v20 + 0x30,
                      0,
                      0x43534544);
      BSStringT_constr_str(&v97, v21); /*0x5dbed0*/
      v99 = 2; /*0x5dbed9*/
      if ( !BSStringT_GetLen(&v97) ) /*0x5dbee8*/
        goto LABEL_79; /*0x5dbee8*/
      Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, fConstant_2); /*0x5dbf00*/
      v22 = *(CHAR **)(((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.Unk_9A)(reference) + 0x28); /*0x5dbf18*/
      if ( v22 ) /*0x5dbf1d*/
      {
        v23 = v22; /*0x5dbf1f*/
        a3 = v22; /*0x5dbf21*/
      }
      else
      {
        v23 = EmptyString; /*0x5dbf27*/
        a3 = EmptyString; /*0x5dbf2c*/
      }
      v24 = strlen("Menus\\BirthSign\\Birthsign_"); /*0x5dbf30*/
      v25 = v24; /*0x5dbf43*/
      v26 = "Menus\\BirthSign\\Birthsign_"; /*0x5dbf48*/
      v27 = v23; /*0x5dbf4d*/
      if ( v24 < 4 ) /*0x5dbf4f*/
      {
LABEL_25:
        if ( !v24 ) /*0x5dbf67*/
          goto LABEL_35; /*0x5dbf67*/
      }
      else
      {
        while ( *(_DWORD *)v27 == *(_DWORD *)v26 ) /*0x5dbf55*/
        {
          v24 -= 4; /*0x5dbf57*/
          v26 += 4; /*0x5dbf5a*/
          v27 += 4; /*0x5dbf5d*/
          if ( v24 < 4 ) /*0x5dbf63*/
            goto LABEL_25; /*0x5dbf63*/
        }
      }
      v28 = (unsigned __int8)*v27 - *(unsigned __int8 *)v26; /*0x5dbf6f*/
      if ( v28 ) /*0x5dbf71*/
        goto LABEL_33; /*0x5dbf71*/
      v29 = v24 - 1; /*0x5dbf73*/
      v30 = (unsigned __int8 *)(v26 + 1); /*0x5dbf76*/
      v31 = (unsigned __int8 *)(v27 + 1); /*0x5dbf79*/
      if ( v29 ) /*0x5dbf7e*/
      {
        v28 = *v31 - *v30; /*0x5dbf86*/
        if ( v28 /*0x5dbfb6*/
          || (v32 = v29 - 1, v33 = v30 + 1, v34 = v31 + 1, v32)
          && ((v28 = *v34 - *v33) != 0 || (v35 = v33 + 1, v36 = v34 + 1, v32 != 1) && (v28 = *v36 - *v35) != 0) )
        {
LABEL_33:
          v37 = 1; /*0x5dbfba*/
          if ( v28 <= 0 ) /*0x5dbfbf*/
            v37 = 0xFFFFFFFF; /*0x5dbfc1*/
          goto LABEL_36; /*0x5dbfc4*/
        }
      }
LABEL_35:
      v37 = 0; /*0x5dbfc6*/
LABEL_36:
      if ( !v37 ) /*0x5dbfca*/
      {
        v38 = &a3[v25]; /*0x5dbfd4*/
        do /*0x5dbfea*/
        {
          v39 = *v38; /*0x5dbfe0*/
          v38[ArgList - &a3[v25]] = *v38; /*0x5dbfe2*/
          ++v38; /*0x5dbfe5*/
        }
        while ( v39 ); /*0x5dbfea*/
        for ( i = ArgList; *i; ++i ) /*0x5dbff4*/
        {
          if ( *i == 0x20 ) /*0x5dbff9*/
            *i = 0x5F; /*0x5dbffb*/
        }
        v96.m_data = 0; /*0x5dc006*/
        v96.m_dataLen = 0; /*0x5dc00e*/
        v96.m_bufLen = 0; /*0x5dc015*/
        LOBYTE(v99) = 3; /*0x5dc02b*/
        BSStringT_Static_Format(&v96, "Menus\\Stats\\small_birthsign\\small_%s", ArgList); /*0x5dc030*/
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, v96.m_data); /*0x5dc045*/
        LOBYTE(v99) = 2; /*0x5dc04e*/
        BSStringT_Clear((unsigned int *)&v96); /*0x5dc053*/
      }
      goto LABEL_78; /*0x5dc058*/
    }
    if ( v12 != 2 ) /*0x5dc060*/
    {
      if ( v12 != 3 ) /*0x5dc2da*/
        return; /*0x5dc2da*/
      BSStringT_constr_str(&v97, (char *)stru_B383E0); /*0x5dc2eb*/
      v99 = 6; /*0x5dc2f0*/
LABEL_76:
      if ( BSStringT_GetLen(&v97) ) /*0x5dc2fc*/
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, 1.0); /*0x5dc313*/
LABEL_78:
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, v97.m_data); /*0x5dc318*/
        a2c = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAF); /*0x5dc33d*/
        v77 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAE); /*0x5dc354*/
        sub_589980(*(_DWORD **)(a1 + 0x58), 0xFAE, v77, 1.0, a2c); /*0x5dc35c*/
      }
LABEL_79:
      v99 = 0xFFFFFFFF; /*0x5dc361*/
      BSStringT_Clear((unsigned int *)&v97); /*0x5dc36d*/
      return; /*0x5dc372*/
    }
    if ( Actor_GetBaseClass((Actor *)reference) && *TESObjectREFR_GetName((TESObjectREFR *)reference) != 0x2D ) /*0x5dc087*/
    {
      BaseClass = Actor_GetBaseClass((Actor *)reference); /*0x5dc093*/
      v42 = (char *)((int (__thiscall *)(TESForm::ModReferenceList **, _DWORD, int))BaseClass[4].next[2].data)( /*0x5dc0a8*/
                      &BaseClass[4].next,
                      0,
                      0x43534544);
      BSStringT_constr_str(&v97, v42); /*0x5dc0af*/
      v99 = 4; /*0x5dc0b8*/
      if ( !BSStringT_GetLen(&v97) ) /*0x5dc0c7*/
        goto LABEL_79; /*0x5dc0c7*/
      Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, fConstant_2); /*0x5dc0df*/
      v96.m_data = 0; /*0x5dc0e4*/
      v96.m_dataLen = 0; /*0x5dc0ec*/
      v96.m_bufLen = 0; /*0x5dc0f3*/
      v43 = (Actor *)reference; /*0x5dc0fa*/
      LOBYTE(v99) = 5; /*0x5dc100*/
      unk654 = Actor_GetBaseClass(v43); /*0x5dc117*/
      if ( unk654 == TESDataHandler_LookupTESClassByFormID((void *)LODWORD(g_GameSettingStringPointers_B36CD8[0x3EC])) ) /*0x5dc120*/
        unk654 = (TESForm::ModReferenceList *)reference->unk654; /*0x5dc128*/
      if ( !unk654 || !TESClass_IsPlayable(unk654) ) /*0x5dc138*/
      {
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, "Menus\\Stats\\small_class\\small_thief.dds"); /*0x5dc23f*/
LABEL_73:
        v62 = (const char *)stru_B383D8; /*0x5dc244*/
        v63 = Actor_GetBaseClass((Actor *)reference); /*0x5dc250*/
        DwordAtOffset40 = Shared_GetDwordAtOffset40(v63); /*0x5dc257*/
        SpecializationName = ActorValue_GetSpecializationName(DwordAtOffset40); /*0x5dc25d*/
        BSStringT_Static_Format(&v96, "%s\n\n%s%s", v97.m_data, v62, SpecializationName); /*0x5dc273*/
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, v96.m_data); /*0x5dc288*/
        a2b = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAF); /*0x5dc2a0*/
        v76 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAE); /*0x5dc2b7*/
        sub_589980(*(_DWORD **)(a1 + 0x58), 0xFAE, v76, 1.0, a2b); /*0x5dc2bf*/
        LOBYTE(v99) = 4; /*0x5dc2c8*/
        BSStringT_Clear((unsigned int *)&v96); /*0x5dc2cd*/
        goto LABEL_79; /*0x5dc2d2*/
      }
      data = (CHAR *)unk654[6].data; /*0x5dc145*/
      if ( !data ) /*0x5dc14a*/
        data = EmptyString; /*0x5dc14c*/
      a3a = data; /*0x5dc156*/
      v46 = strlen("Menus\\Level_up\\class_creation\\class_creation_"); /*0x5dc160*/
      v47 = v46; /*0x5dc16b*/
      v48 = "Menus\\Level_up\\class_creation\\class_creation_"; /*0x5dc170*/
      v49 = data; /*0x5dc175*/
      if ( v46 < 4 ) /*0x5dc177*/
      {
LABEL_57:
        if ( !v46 ) /*0x5dc196*/
          goto LABEL_67; /*0x5dc196*/
      }
      else
      {
        while ( *(_DWORD *)v49 == *(_DWORD *)v48 ) /*0x5dc184*/
        {
          v46 -= 4; /*0x5dc186*/
          v48 += 4; /*0x5dc189*/
          v49 += 4; /*0x5dc18c*/
          if ( v46 < 4 ) /*0x5dc192*/
            goto LABEL_57; /*0x5dc192*/
        }
      }
      v50 = (unsigned __int8)*v49 - *(unsigned __int8 *)v48; /*0x5dc19e*/
      if ( v50 ) /*0x5dc1a0*/
        goto LABEL_65; /*0x5dc1a0*/
      v51 = v46 - 1; /*0x5dc1a2*/
      v52 = (unsigned __int8 *)(v48 + 1); /*0x5dc1a5*/
      v53 = (unsigned __int8 *)(v49 + 1); /*0x5dc1a8*/
      if ( v51 ) /*0x5dc1ad*/
      {
        v50 = *v53 - *v52; /*0x5dc1b5*/
        if ( v50 /*0x5dc1e5*/
          || (v54 = v51 - 1, v55 = v52 + 1, v56 = v53 + 1, v54)
          && ((v50 = *v56 - *v55) != 0 || (v57 = v55 + 1, v58 = v56 + 1, v54 != 1) && (v50 = *v58 - *v57) != 0) )
        {
LABEL_65:
          v59 = 1; /*0x5dc1e9*/
          if ( v50 <= 0 ) /*0x5dc1ee*/
            v59 = 0xFFFFFFFF; /*0x5dc1f0*/
          goto LABEL_68; /*0x5dc1f3*/
        }
      }
LABEL_67:
      v59 = 0; /*0x5dc1f5*/
LABEL_68:
      if ( !v59 ) /*0x5dc1f9*/
      {
        v60 = &a3a[v47]; /*0x5dc1ff*/
        do /*0x5dc212*/
        {
          v61 = *v60; /*0x5dc208*/
          v60[ArgList - &a3a[v47]] = *v60; /*0x5dc20a*/
          ++v60; /*0x5dc20d*/
        }
        while ( v61 ); /*0x5dc212*/
        BSStringT_Static_Format(&v96, "Menus\\Stats\\small_class\\small_%s", ArgList); /*0x5dc223*/
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, v96.m_data); /*0x5dc230*/
      }
      goto LABEL_73; /*0x5dc230*/
    }
  }
}
