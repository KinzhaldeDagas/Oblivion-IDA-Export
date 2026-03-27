void __userpurge sub_5DBBD0(int a1@<ecx>, double st6_0@<st1>, double st7_0@<st0>, double a4@<st3>, int a5, _DWORD *a6)
{
  double v8; // st5
  double v9; // st7
  unsigned int v10; // edi
  char *Icon; // eax
  char *Description; // eax
  int v13; // eax
  unsigned int v14; // edi
  const char *v15; // eax
  char *m_data; // ebp
  unsigned int m_dataLen; // eax
  char *v18; // eax
  TESRace *RaceIfNPC; // eax
  char *v20; // eax
  int v21; // eax
  char *v22; // eax
  CHAR *v23; // eax
  CHAR *v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // ebp
  const char *v27; // ecx
  CHAR *v28; // edx
  int v29; // edi
  unsigned int v30; // eax
  unsigned __int8 *v31; // ecx
  unsigned __int8 *v32; // edx
  unsigned int v33; // eax
  unsigned __int8 *v34; // ecx
  unsigned __int8 *v35; // edx
  unsigned __int8 *v36; // ecx
  unsigned __int8 *v37; // edx
  int v38; // eax
  char *v39; // eax
  char v40; // cl
  char *i; // eax
  int BaseClass; // eax
  char *v43; // eax
  Actor *v44; // ecx
  _DWORD *unk654; // edi
  CHAR *v46; // edi
  unsigned int v47; // eax
  unsigned int v48; // ebp
  const char *v49; // ecx
  CHAR *v50; // edx
  int v51; // edi
  unsigned int v52; // eax
  unsigned __int8 *v53; // ecx
  unsigned __int8 *v54; // edx
  unsigned int v55; // eax
  unsigned __int8 *v56; // ecx
  unsigned __int8 *v57; // edx
  unsigned __int8 *v58; // ecx
  unsigned __int8 *v59; // edx
  int v60; // eax
  char *v61; // eax
  char v62; // cl
  const char *v63; // edi
  TESObjectREFR *v64; // eax
  TESObjectCELL *ParentCell; // eax
  const char *v66; // eax
  int v67; // ebp
  char *TESSkillByCode; // edi
  char *v69; // eax
  unsigned int v70; // edx
  char *v71; // eax
  const char *v72; // ebx
  unsigned int SkillMasteryLevel; // eax
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
  char a3g; // [esp+28h] [ebp-44h]
  unsigned int a3h; // [esp+28h] [ebp-44h]
  int a3b; // [esp+28h] [ebp-44h]
  BSStringT v96; // [esp+2Ch] [ebp-40h] BYREF
  BSStringT v97; // [esp+34h] [ebp-38h] BYREF
  char ArgList[32]; // [esp+3Ch] [ebp-30h] BYREF
  int v99; // [esp+68h] [ebp-4h]

  if ( a5 == 0x22 || a5 == 0x18 || a5 == 0xE )
  {
    sub_57DE50(4);
    v8 = sub_588D90(a6, st7_0);
    a3c = st7_0 - dbl_A2FAA0;
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAB, a3c);
    a3d = Tile_GetFloat(a6, 0xFCB) - dbl_A49310;
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFCB, a3d);
    a3e = Tile_GetFloat(a6, 0xFCA) - dbl_A49310;
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFCA, a3e);
    a2 = sub_588C50(a6);
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAD, a2);
    v9 = sub_588CF0(a6);
    a3f = a4 + dbl_A3D0C0;
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAC, a3f);
    Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFA1, fConstant_2);
    if ( a5 == 0x18 )
    {
      Tile_GetFloat(a6, 0xFAE);
      v10 = Double_To_SInt32(v9);
      Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, fConstant_2);
      Icon = (char *)ActorValue_GetIcon(v10);
      Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, Icon);
      Description = (char *)ActorValue_GetDescription(v10);
      Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, Description);
LABEL_87:
      a2f = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAF);
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAE);
      sub_589980(*(_DWORD **)(a1 + 0x58), 0xFAE, Float, 1.0, a2f);
      return;
    }
    if ( a5 != 0xE )
    {
      Tile_GetFloat(a6, 0xFB4);
      v67 = Double_To_SInt32(v9);
      a3g = ActorValue_GetGroupOffsetFromAV(2, v67);
      TESSkillByCode = TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, a3g);
      if ( TESSkillByCode )
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, fConstant_2);
        v69 = *((char **)TESSkillByCode + 9);
        if ( !v69 )
          v69 = EmptyString;
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, v69);
        v97.m_data = 0;
        v97.m_dataLen = 0;
        v97.m_bufLen = 0;
        v70 = *((_DWORD *)TESSkillByCode + 0xC);
        v71 = (char *)dword_B383C8;
        v72 = (const char *)dword_B383D0;
        v99 = 7;
        a3h = v70;
        v96.m_data = v71;
        SkillMasteryLevel = Actor_GetSkillMasteryLevel(v67);
        a2d = (const char *)ActorValue_GetMasteryName(SkillMasteryLevel);
        Name = (const char *)ActorValue_GetName(a3h);
        v74 = (const char *)(*(int (__thiscall **)(char *, _DWORD, int))(*((_DWORD *)TESSkillByCode + 6) + 0x10))(
                              TESSkillByCode + 0x18,
                              0,
                              0x43534544);
        BSStringT_Static_Format(&v97, "%s\n\n%s%s\n\n%s%s", v74, v96.m_data, Name, v72, a2d);
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, v97.m_data);
        if ( v67 == 0x11 )
          a3b = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_D3)(TESDataHandler_g_PlayerRef);
        else
          a3b = 0xFFFFFFFF;
        a2e = (float)a3b;
        Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB3, a2e);
        v99 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v97);
      }
      goto LABEL_87;
    }
    Tile_GetFloat(a6, 0xFAE);
    v13 = Double_To_SInt32(v9);
    if ( v13 >= 4 )
    {
      v14 = v13 + 4;
      v15 = (const char *)ActorValue_GetDescription(v13 + 4);
      v96.m_data = 0;
      v96.m_dataLen = 0;
      v96.m_bufLen = 0;
      BSStringT_Set(&v96, v15, 0);
      m_data = v96.m_data;
      v99 = 0;
      if ( v96.m_dataLen == (__int16)0xFFFF )
        m_dataLen = strlen(v96.m_data);
      else
        m_dataLen = (unsigned __int16)v96.m_dataLen;
      if ( m_dataLen )
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, 1.0);
        v18 = (char *)ActorValue_GetIcon(v14);
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, v18);
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, m_data);
        a2a = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAF);
        v75 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAE);
        sub_589980(*(_DWORD **)(a1 + 0x58), 0xFAE, v75, 1.0, a2a);
      }
      FormHeapFree((unsigned int)m_data);
      return;
    }
    if ( !v13 )
    {
      RaceIfNPC = Actor::GetRaceIfNPC((Actor *)TESDataHandler_g_PlayerRef);
      v20 = (char *)RaceIfNPC->desc.vtbl->GetText(&RaceIfNPC->desc, 0, 0x43534544);
      BSStringT_constr_str(&v97, v20);
      v99 = 1;
      goto LABEL_76;
    }
    if ( v13 == 1 )
    {
      if ( !((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(TESDataHandler_g_PlayerRef) )
        return;
      v21 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(
              TESDataHandler_g_PlayerRef,
              v9,
              st6_0,
              v8);
      v22 = (char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(v21 + 0x30) + 0x10))(
                      v21 + 0x30,
                      0,
                      0x43534544);
      BSStringT_constr_str(&v97, v22);
      v99 = 2;
      if ( !BSStringT_GetLen(&v97) )
        goto LABEL_79;
      Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, fConstant_2);
      v23 = *(CHAR **)(((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_9A)(TESDataHandler_g_PlayerRef)
                     + 0x28);
      if ( v23 )
      {
        v24 = v23;
        a3 = v23;
      }
      else
      {
        v24 = EmptyString;
        a3 = EmptyString;
      }
      v25 = strlen("Menus\\BirthSign\\Birthsign_");
      v26 = v25;
      v27 = "Menus\\BirthSign\\Birthsign_";
      v28 = v24;
      if ( v25 < 4 )
      {
LABEL_25:
        if ( !v25 )
          goto LABEL_35;
      }
      else
      {
        while ( *(_DWORD *)v28 == *(_DWORD *)v27 )
        {
          v25 -= 4;
          v27 += 4;
          v28 += 4;
          if ( v25 < 4 )
            goto LABEL_25;
        }
      }
      v29 = (unsigned __int8)*v28 - *(unsigned __int8 *)v27;
      if ( v29 )
        goto LABEL_33;
      v30 = v25 - 1;
      v31 = (unsigned __int8 *)(v27 + 1);
      v32 = (unsigned __int8 *)(v28 + 1);
      if ( v30 )
      {
        v29 = *v32 - *v31;
        if ( v29
          || (v33 = v30 - 1, v34 = v31 + 1, v35 = v32 + 1, v33)
          && ((v29 = *v35 - *v34) != 0 || (v36 = v34 + 1, v37 = v35 + 1, v33 != 1) && (v29 = *v37 - *v36) != 0) )
        {
LABEL_33:
          v38 = 1;
          if ( v29 <= 0 )
            v38 = 0xFFFFFFFF;
          goto LABEL_36;
        }
      }
LABEL_35:
      v38 = 0;
LABEL_36:
      if ( !v38 )
      {
        v39 = &a3[v26];
        do
        {
          v40 = *v39;
          v39[ArgList - &a3[v26]] = *v39;
          ++v39;
        }
        while ( v40 );
        for ( i = ArgList; *i; ++i )
        {
          if ( *i == 0x20 )
            *i = 0x5F;
        }
        v96.m_data = 0;
        v96.m_dataLen = 0;
        v96.m_bufLen = 0;
        LOBYTE(v99) = 3;
        BSStringT_Static_Format(&v96, "Menus\\Stats\\small_birthsign\\small_%s", ArgList);
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, v96.m_data);
        LOBYTE(v99) = 2;
        BSStringT_Clear((unsigned int *)&v96);
      }
      goto LABEL_78;
    }
    if ( v13 != 2 )
    {
      if ( v13 != 3 )
        return;
      BSStringT_constr_str(&v97, (char *)dword_B383E0);
      v99 = 6;
LABEL_76:
      if ( BSStringT_GetLen(&v97) )
      {
        Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, 1.0);
LABEL_78:
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, v97.m_data);
        a2c = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAF);
        v77 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAE);
        sub_589980(*(_DWORD **)(a1 + 0x58), 0xFAE, v77, 1.0, a2c);
      }
LABEL_79:
      v99 = 0xFFFFFFFF;
      BSStringT_Clear((unsigned int *)&v97);
      return;
    }
    if ( Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef)
      && *TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef) != 0x2D )
    {
      BaseClass = Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef);
      v43 = (char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(BaseClass + 0x24) + 0x10))(
                      BaseClass + 0x24,
                      0,
                      0x43534544);
      BSStringT_constr_str(&v97, v43);
      v99 = 4;
      if ( !BSStringT_GetLen(&v97) )
        goto LABEL_79;
      Tile_SetFloat(*(Tile **)(a1 + 0x58), (_DWORD *)0xFB2, fConstant_2);
      v96.m_data = 0;
      v96.m_dataLen = 0;
      v96.m_bufLen = 0;
      v44 = (Actor *)TESDataHandler_g_PlayerRef;
      LOBYTE(v99) = 5;
      unk654 = (_DWORD *)Actor_GetBaseClass(v44);
      if ( unk654 == TESDataHandler_LookupTESClassByFormID((void *)iPlayerCustomClass) )
        unk654 = (_DWORD *)TESDataHandler_g_PlayerRef->unk654;
      if ( !unk654 || !TESClass_IsPlayable(unk654) )
      {
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, "Menus\\Stats\\small_class\\small_thief.dds");
LABEL_73:
        v63 = (const char *)dword_B383D8;
        v64 = (TESObjectREFR *)Actor_GetBaseClass((Actor *)TESDataHandler_g_PlayerRef);
        ParentCell = TESObjectREFR_GetParentCell(v64);
        v66 = (const char *)sub_52E7E0((unsigned int)ParentCell);
        BSStringT_Static_Format(&v96, "%s\n\n%s%s", v97.m_data, v63, v66);
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB1, v96.m_data);
        a2b = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAF);
        v76 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x58), 0xFAE);
        sub_589980(*(_DWORD **)(a1 + 0x58), 0xFAE, v76, 1.0, a2b);
        LOBYTE(v99) = 4;
        BSStringT_Clear((unsigned int *)&v96);
        goto LABEL_79;
      }
      v46 = (CHAR *)unk654[0xC];
      if ( !v46 )
        v46 = EmptyString;
      a3a = v46;
      v47 = strlen("Menus\\Level_up\\class_creation\\class_creation_");
      v48 = v47;
      v49 = "Menus\\Level_up\\class_creation\\class_creation_";
      v50 = v46;
      if ( v47 < 4 )
      {
LABEL_57:
        if ( !v47 )
          goto LABEL_67;
      }
      else
      {
        while ( *(_DWORD *)v50 == *(_DWORD *)v49 )
        {
          v47 -= 4;
          v49 += 4;
          v50 += 4;
          if ( v47 < 4 )
            goto LABEL_57;
        }
      }
      v51 = (unsigned __int8)*v50 - *(unsigned __int8 *)v49;
      if ( v51 )
        goto LABEL_65;
      v52 = v47 - 1;
      v53 = (unsigned __int8 *)(v49 + 1);
      v54 = (unsigned __int8 *)(v50 + 1);
      if ( v52 )
      {
        v51 = *v54 - *v53;
        if ( v51
          || (v55 = v52 - 1, v56 = v53 + 1, v57 = v54 + 1, v55)
          && ((v51 = *v57 - *v56) != 0 || (v58 = v56 + 1, v59 = v57 + 1, v55 != 1) && (v51 = *v59 - *v58) != 0) )
        {
LABEL_65:
          v60 = 1;
          if ( v51 <= 0 )
            v60 = 0xFFFFFFFF;
          goto LABEL_68;
        }
      }
LABEL_67:
      v60 = 0;
LABEL_68:
      if ( !v60 )
      {
        v61 = &a3a[v48];
        do
        {
          v62 = *v61;
          v61[ArgList - &a3a[v48]] = *v61;
          ++v61;
        }
        while ( v62 );
        BSStringT_Static_Format(&v96, "Menus\\Stats\\small_class\\small_%s", ArgList);
        Tile_SetString(*(_DWORD **)(a1 + 0x58), (_DWORD *)0xFB0, v96.m_data);
      }
      goto LABEL_73;
    }
  }
}
