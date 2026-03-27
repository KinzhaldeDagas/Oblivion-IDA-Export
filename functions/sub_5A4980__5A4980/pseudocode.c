bool __usercall sub_5A4980@<al>(
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a4,
        char a5,
        char a6)
{
  const char *v6; // esi
  TESObjectREFR *v7; // edi
  char *Name; // eax
  unsigned int v9; // eax
  unsigned int Len; // eax
  bool v11; // zf
  const char *v12; // eax
  PlayerCharacter *v13; // eax
  _DWORD *v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v19; // eax
  PlayerCharacter *v20; // ecx
  float *v21; // eax
  PlayerCharacter *v22; // eax
  TESObjectREFR *v23; // ebp
  TESObjectREFRVtbl *vtbl; // ecx
  double v25; // st7
  TESObjectREFR **TeleportExtraData; // ebp
  _DWORD *v27; // eax
  _DWORD *v28; // ebp
  int v29; // ecx
  TESObjectREFR *v30; // eax
  Tile *v31; // ebp
  TESForm *v32; // eax
  void *v33; // ebx
  int v34; // eax
  const char **v35; // eax
  const char *v36; // eax
  int v37; // eax
  _DWORD *v38; // eax
  double v39; // st7
  int v40; // eax
  tListVoid *extendData; // ecx
  tListVoid *v42; // eax
  Tile *v43; // ebp
  const char *v44; // eax
  _DWORD *v45; // ebx
  Tile *v46; // ebp
  double v47; // st7
  Tile *v48; // ebp
  double v49; // st7
  int v50; // eax
  Tile *v51; // ebp
  double v52; // st7
  int v53; // eax
  char *v54; // eax
  TESForm *v55; // eax
  double v56; // st7
  Tile *v57; // ebp
  double v58; // st6
  int v59; // eax
  Tile *v60; // ebp
  double v61; // st7
  int v62; // eax
  Tile *v63; // ebp
  double v64; // st7
  Tile *v65; // edi
  int v66; // edx
  char *a2; // [esp+0h] [ebp-60h]
  float v68; // [esp+4h] [ebp-5Ch]
  const char *v69; // [esp+4h] [ebp-5Ch]
  _DWORD *ExtraCount; // [esp+4h] [ebp-5Ch]
  float v71; // [esp+4h] [ebp-5Ch]
  float v72; // [esp+4h] [ebp-5Ch]
  float v73; // [esp+4h] [ebp-5Ch]
  float v74; // [esp+4h] [ebp-5Ch]
  float v75; // [esp+4h] [ebp-5Ch]
  float v76; // [esp+4h] [ebp-5Ch]
  float v77; // [esp+4h] [ebp-5Ch]
  _DWORD *v78; // [esp+4h] [ebp-5Ch]
  float v79; // [esp+4h] [ebp-5Ch]
  _DWORD *v80; // [esp+8h] [ebp-58h]
  _DWORD *v81; // [esp+1Ch] [ebp-44h] BYREF
  _DWORD *type; // [esp+20h] [ebp-40h]
  Tile *v83; // [esp+24h] [ebp-3Ch]
  BSStringT v84; // [esp+28h] [ebp-38h] BYREF
  char ArgList[4]; // [esp+30h] [ebp-30h] BYREF
  int v86; // [esp+34h] [ebp-2Ch]
  NiPoint3 v87; // [esp+38h] [ebp-28h] BYREF
  __int16 v88; // [esp+44h] [ebp-1Ch]
  char v89; // [esp+46h] [ebp-1Ah]
  EntryData v90; // [esp+48h] [ebp-18h] BYREF
  double v91; // [esp+58h] [ebp-8h]

  if ( !g_HUDInfoMenu )
    return 0;
  v6 = 0;
  *(_DWORD *)ArgList = 0;
  v86 = 0;
  v7 = a4;
  HIDWORD(v91) = 0;
  if ( a4 )
  {
    Name = TESObjectREFR_GetName(a4);
    BSStringT_Set((BSStringT *)ArgList, Name, 0);
    v6 = *(const char **)ArgList;
    if ( *(_DWORD *)ArgList )
    {
      if ( (_WORD)v86 == 0xFFFF )
        v9 = strlen(*(const char **)ArgList);
      else
        v9 = (unsigned __int16)v86;
      if ( v9 )
      {
        Len = BSStringT_GetLen((BSStringT *)ArgList);
        v11 = v6[Len - 1] == 0x20;
        v12 = &v6[Len - 1];
        if ( v11 )
          *v12 = 0;
      }
    }
  }
  v13 = TESDataHandler_g_PlayerRef;
  if ( !TESDataHandler_g_PlayerRef )
    goto LABEL_130;
  if ( v13->unk5C0 )
    goto LABEL_130;
  if ( a4 == (TESObjectREFR *)v13 )
    v7 = 0;
  v14 = (_DWORD *)g_HUDInfoMenu;
  v83 = *(Tile **)(g_HUDInfoMenu + 4);
  if ( !v83 )
  {
LABEL_130:
    FormHeapFree((unsigned int)v6);
    return 0;
  }
  v15 = (int)v14;
  if ( !a6 && v7 == (TESObjectREFR *)v14[0x15] )
  {
    v16 = v14[9];
    if ( v16 == 8 || v16 == 1 )
      goto LABEL_46;
  }
  if ( !v7 )
    v14[0x15] = 0;
  if ( !a6 )
  {
    v17 = v14[9];
    if ( v17 != 4 || !v7 )
    {
      if ( v17 == 8 || v17 == 1 )
        sub_584740(v14, st5_0, st6_0);
      HIDWORD(v91) = 0xFFFFFFFF;
      BSStringT_Clear((unsigned int *)ArgList);
      return !v7;
    }
  }
  v19 = sub_4DE980((PlayerCharacter *)v7);
  if ( (!v7 || v19 != 5) && v19 != 3
    || (v20 = TESDataHandler_g_PlayerRef,
        *(float *)&v81 = 0.0,
        v88 = 0,
        v89 = 0xFF,
        v21 = (float *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v20->vtbl->super.super.super.GetPos)(
                         v20,
                         st7_0,
                         st6_0,
                         st5_0),
        sub_4DBAE0(v7, v21, 1, 1, &v87, &v81)) )
  {
    if ( !a6 )
      *(_DWORD *)(v15 + 0x54) = v7;
    if ( sub_4D74D0(v7) )
    {
      v22 = (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))v7->vtbl[2].super.Unk_0E)(v7);
      v23 = (TESObjectREFR *)v22;
      if ( v22 )
      {
        if ( v22 != TESDataHandler_g_PlayerRef && !v22->vtbl->super.super.super.IsDead((TESObjectREFR *)v22, 0) )
        {
          vtbl = v23[1].vtbl;
          if ( vtbl )
          {
            if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0xDB))(vtbl) == 4 )
              v7 = v23;
          }
        }
      }
    }
    if ( (v7->member.super.flags & 0x2000) == 0 )
    {
      type = (_DWORD *)v7->vtbl->GetBaseForm(v7)->member.type;
      switch ( (unsigned int)type )
      {
        case 0x12u:
        case 0x17u:
        case 0x18u:
        case 0x23u:
        case 0x24u:
          if ( a5 )
            goto LABEL_45;
          break;
        case 0x1Au:
          if ( (*(_DWORD *)&v7->vtbl->GetBaseForm(v7)[5].member.type & 2) == 0 )
            goto LABEL_45;
          break;
        case 0x1Cu:
        case 0x1Eu:
          goto LABEL_45;
        default:
          break;
      }
      v84.m_data = 0;
      v84.m_dataLen = 0;
      v84.m_bufLen = 0;
      BYTE4(v91) = 1;
      *(float *)&v81 = COERCE_FLOAT(sub_4D7740(v7));
      if ( !v15 || !BSStringT_GetLen((BSStringT *)ArgList) )
      {
        Tile_SetString(*(_DWORD **)(v15 + 0x28), (_DWORD *)0xFDE, word_A36430);
        Tile_SetFloat(*(Tile **)(v15 + 0x28), (_DWORD *)0xFA1, 1.0);
        Tile_SetString(*(_DWORD **)(v15 + 0x48), (_DWORD *)0xFDE, word_A36430);
        Tile_SetFloat(*(Tile **)(v15 + 0x48), (_DWORD *)0xFA1, 1.0);
        goto LABEL_68;
      }
      if ( a5 )
        v25 = fConstant_2;
      else
        v25 = 1.0;
      v68 = v25;
      Tile_SetFloat(*(Tile **)(v15 + 4), (_DWORD *)0xFB2, v68);
      TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(v7);
      if ( TeleportExtraData )
      {
        BSStringT_Static_Format(&v84, "%s %s", *(const char **)ArgList, (const char *)dword_B38D18);
        Tile_SetString(*(_DWORD **)(v15 + 0x28), (_DWORD *)0xFDE, v84.m_data);
        Tile_SetFloat(*(Tile **)(v15 + 0x28), (_DWORD *)0xFA1, fConstant_2);
        sub_42B650(TeleportExtraData, &v84);
        Tile_SetString(*(_DWORD **)(v15 + 0x48), (_DWORD *)0xFDE, v84.m_data);
        Tile_SetFloat(*(Tile **)(v15 + 0x48), (_DWORD *)0xFA1, fConstant_2);
LABEL_68:
        v31 = *(Tile **)(v15 + 0x4C);
        if ( v31 )
        {
          v32 = v7->vtbl->GetBaseForm(v7);
          v33 = OblivionDynamicCast(
                  v32,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESObjectDOOR `RTTI Type Descriptor',
                  0);
          if ( *(float *)&v81 == 0.0
            || !sub_428E70(v81)
            || TESOBjectREFR_IsOwnedBy(v7, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 1)
            || v33 && sub_4B72C0(v7, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0, 1) )
          {
            v39 = 1.0;
          }
          else
          {
            sub_4D7780(v7);
            v35 = *(const char ***)(4 * GetLockLevel(v34) + 0xB03E1C);
            if ( v35 )
              v36 = *v35;
            else
              v36 = 0;
            BSStringT_Static_Format(&v84, "%s", v36);
            Tile_SetString(v31, (_DWORD *)0xFDE, v84.m_data);
            sub_4D7780(v7);
            if ( v37 )
            {
              sub_4D7780(v7);
              v81 = v38;
            }
            else
            {
              *(float *)&v81 = NAN;
            }
            v71 = (float)(int)v81;
            Tile_SetFloat(v31, (_DWORD *)0xFAF, v71);
            v39 = fConstant_2;
          }
          v72 = v39;
          Tile_SetFloat(v31, (_DWORD *)0xFA1, v72);
        }
        v40 = (int)v7->vtbl->GetBaseForm(v7);
        ContainerEntryExtraData_constr(&v90, v40, 0);
        extendData = v90.extendData;
        BYTE4(v91) = 4;
        if ( !v90.extendData )
        {
          v42 = (tListVoid *)FormHeapAlloc(8u);
          if ( v42 )
          {
            v42->node.data = 0;
            v42->node.next = 0;
          }
          else
          {
            v42 = 0;
          }
          extendData = v42;
          v90.extendData = v42;
        }
        BSSimpleList_PushFront(extendData, (int)&v7->member.baseExtraList);
        v43 = *(Tile **)(v15 + 0x2C);
        v44 = (const char *)sub_48F450(&v90, 1, 1, 0, 0.0);
        BSStringT_Set(&v84, v44, 0);
        Tile_SetString(v43, (_DWORD *)0xFDE, v84.m_data);
        v73 = sub_488E50((void **)&v90.extendData, 0, (int)TESDataHandler_g_PlayerRef, 0, *(float *)&v80);
        Tile_SetFloat(v43, (_DWORD *)0xFAF, v73);
        v45 = type;
        v46 = *(Tile **)(v15 + 0x34);
        if ( type == (_DWORD *)0x21 )
          v47 = sub_4891C0(&v90, 0, (int)TESDataHandler_g_PlayerRef, 0);
        else
          v47 = flt_A30634;
        *(float *)&v81 = v47;
        *(float *)&v81 = COERCE_FLOAT(Double_To_SInt32(*(float *)&v81));
        BSStringT_Static_Format(&v84, "%i", v81);
        Tile_SetString(v46, (_DWORD *)0xFDE, v84.m_data);
        v74 = (float)(int)v81;
        Tile_SetFloat(v46, (_DWORD *)0xFAF, v74);
        v48 = *(Tile **)(v15 + 0x38);
        if ( v45 == (_DWORD *)0x14 )
          v49 = sub_4891C0(&v90, 0, (int)TESDataHandler_g_PlayerRef, 0);
        else
          v49 = flt_A30634;
        *(float *)&v81 = v49;
        v50 = Double_To_SInt32(*(float *)&v81);
        v81 = (_DWORD *)v50;
        if ( v50 >= 0x3E8 )
        {
          if ( v50 >= 0xF4240 )
          {
            if ( v50 < 0x3B9ACA00 )
              BSStringT_Static_Format(&v84, off_A3D904, v50 / 0xF4240);
          }
          else
          {
            BSStringT_Static_Format(&v84, (char *)&off_A6BE80, v50 / 0x3E8);
          }
        }
        else
        {
          BSStringT_Static_Format(&v84, "%i", v50);
        }
        Tile_SetString(v48, (_DWORD *)0xFDE, v84.m_data);
        v75 = (float)(int)v81;
        Tile_SetFloat(v48, (_DWORD *)0xFAF, v75);
        v51 = *(Tile **)(v15 + 0x30);
        v52 = sub_485260((void **)&v90.extendData, 0, 0, 0);
        *(float *)&v81 = COERCE_FLOAT(Double_To_SInt32(v52));
        if ( v7->vtbl->GetBaseForm(v7)->member.type == kFormType_Container )
          *(float *)&v81 = NAN;
        v53 = (int)v7->vtbl->GetBaseForm(v7);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v53 + 0x78))(v53) )
          *(float *)&v81 = NAN;
        v54 = (char *)sub_48F450(&v90, 2, 1, 0, COERCE_DOUBLE((unsigned __int64)TESDataHandler_g_PlayerRef));
        Tile_SetString(v51, (_DWORD *)0xFDE, v54);
        v76 = (float)(int)v81;
        Tile_SetFloat(v51, (_DWORD *)0xFAF, v76);
        *(double *)&v87.x = TESObjectREFR_GetHealth((TESChildCELL *)v7);
        v55 = v7->vtbl->GetBaseForm(v7);
        type = (_DWORD *)TESHealthForm_GetHealthForForm(v55);
        v56 = (double)(int)type;
        if ( (int)type < 0 )
          v56 = v56 + flt_A2FC78;
        type = (_DWORD *)Double_To_SInt32(*(double *)&v87.x / v56 * fCostant_100);
        *(float *)&v81 = (float)(int)type;
        if ( TESObjectREFR_GetHealth((TESChildCELL *)v7) < *(float *)&SrcStr || v7->vtbl->IsActor(v7) )
          *(float *)&v81 = flt_A30634;
        v57 = *(Tile **)(v15 + 0x40);
        v58 = *(float *)&v81;
        if ( *(float *)&v81 < 0.0 )
        {
          Tile_SetString(v57, (_DWORD *)0xFDE, word_A36430);
        }
        else
        {
          v59 = Double_To_SInt32(*(float *)&v81);
          if ( v59 >= 0x3E8 )
          {
            if ( v59 >= 0xF4240 )
            {
              if ( v59 < 0x3B9ACA00 )
                BSStringT_Static_Format(&v84, off_A3D904, v59 / 0xF4240);
            }
            else
            {
              BSStringT_Static_Format(&v84, (char *)&off_A6BE80, v59 / 0x3E8);
            }
          }
          else
          {
            BSStringT_Static_Format(&v84, "%i", v59);
          }
          Tile_SetString(v57, (_DWORD *)0xFDE, v84.m_data);
        }
        Tile_SetFloat(v57, (_DWORD *)0xFAF, *(float *)&v81);
        v60 = *(Tile **)(v15 + 0x3C);
        if ( v45 == (_DWORD *)0x13 )
          v61 = sub_4891C0(&v90, 0, (int)TESDataHandler_g_PlayerRef, 0);
        else
          v61 = flt_A30634;
        *(float *)&v81 = v61;
        v62 = Double_To_SInt32(*(float *)&v81);
        if ( v62 >= 0x3E8 )
        {
          if ( v62 >= 0xF4240 )
          {
            if ( v62 < 0x3B9ACA00 )
              BSStringT_Static_Format(&v84, off_A3D904, v62 / 0xF4240);
          }
          else
          {
            BSStringT_Static_Format(&v84, (char *)&off_A6BE80, v62 / 0x3E8);
          }
        }
        else
        {
          BSStringT_Static_Format(&v84, "%i", v62);
        }
        Tile_SetString(v60, (_DWORD *)0xFDE, v84.m_data);
        type = (_DWORD *)sub_4D6600(v7);
        v77 = (float)(int)type;
        Tile_SetFloat(v60, (_DWORD *)0xFAF, v77);
        v63 = *(Tile **)(v15 + 0x44);
        v78 = (_DWORD *)(char)sub_4D7510(v7);
        BSStringT_Static_Format(&v84, "%i", v78);
        Tile_SetString(v63, (_DWORD *)0xFDE, v84.m_data);
        type = (_DWORD *)(char)sub_4D7510(v7);
        v79 = (float)(int)type;
        Tile_SetFloat(v63, (_DWORD *)0xFAF, v79);
        v64 = fConstant_2;
        v65 = v83;
        Tile_SetFloat(v83, (_DWORD *)0xFA1, fConstant_2);
        sub_58FBA0((int)v65, st5_0, v58, v64, 0);
        if ( !a6 )
          sub_584390(v15);
        BYTE4(v91) = 1;
        ContainerEntryExtraData_DestroyDataTable((unsigned int *)&v90, v66);
        BYTE4(v91) = 0;
        BSStringT_Clear((unsigned int *)&v84);
        goto LABEL_46;
      }
      if ( ExtraDataList_GetExtraCount(&v7->member.baseExtraList) == 1 )
      {
        if ( !v7->vtbl->IsActor(v7)
          || (v27 = OblivionDynamicCast(
                      v7,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0),
              (v28 = v27) == 0)
          || (v29 = v27[0x16]) == 0
          || !(*(int (__thiscall **)(int))(*(_DWORD *)v29 + 0x3D0))(v29) )
        {
          Tile_SetString(*(_DWORD **)(v15 + 0x28), (_DWORD *)0xFDE, *(char **)ArgList);
LABEL_66:
          Tile_SetFloat(*(Tile **)(v15 + 0x28), (_DWORD *)0xFA1, fConstant_2);
          Tile_SetString(*(_DWORD **)(v15 + 0x48), (_DWORD *)0xFDE, word_A36430);
          Tile_SetFloat(*(Tile **)(v15 + 0x48), (_DWORD *)0xFA1, 1.0);
          goto LABEL_68;
        }
        v30 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v28[0x16] + 0x3D0))(v28[0x16]);
        v87.x = 0.0;
        v87.y = 0.0;
        v69 = *(const char **)ArgList;
        BYTE4(v91) = 2;
        a2 = TESObjectREFR_GetName(v30);
        BSStringT_Static_Format((BSStringT *)&v87, "%s's %s", a2, v69);
      }
      else
      {
        v87.x = 0.0;
        v87.y = 0.0;
        BYTE4(v91) = 3;
        ExtraCount = (_DWORD *)ExtraDataList_GetExtraCount(&v7->member.baseExtraList);
        BSStringT_Static_Format((BSStringT *)&v87, "%s (%d)", *(_DWORD *)ArgList, ExtraCount);
      }
      Tile_SetString(*(_DWORD **)(v15 + 0x28), (_DWORD *)0xFDE, (char *)LODWORD(v87.x));
      BYTE4(v91) = 1;
      BSStringT_Clear((unsigned int *)&v87);
      goto LABEL_66;
    }
LABEL_45:
    sub_584740((_DWORD *)v15, st5_0, st6_0);
LABEL_46:
    HIDWORD(v91) = 0xFFFFFFFF;
    BSStringT_Clear((unsigned int *)ArgList);
    return 1;
  }
  HIDWORD(v91) = 0xFFFFFFFF;
  BSStringT_Clear((unsigned int *)ArgList);
  return 0;
}
