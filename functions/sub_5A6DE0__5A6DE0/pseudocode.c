void __usercall sub_5A6DE0(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>)
{
  Tile *v5; // ecx
  bool v6; // zf
  double v7; // st4
  double v8; // st4
  Tile *v9; // ecx
  int m_data; // esi
  int v11; // eax
  _DWORD *v12; // ecx
  char *v13; // edx
  _DWORD *v14; // eax
  PlayerCharacter *v15; // ecx
  ExtraDataList *DwordAtOffset40; // eax
  double v17; // st7
  int v18; // ecx
  Tile *v19; // ecx
  double v20; // st7
  char *v21; // eax
  _DWORD *v22; // ecx
  TESModel **v23; // edi
  TESModel *v24; // eax
  float *v25; // eax
  TESModel *v26; // ecx
  TESModel *v27; // ecx
  const char *value; // esi
  const char *ModelPath; // eax
  double v30; // st6
  char v31; // al
  TESModel *v32; // ecx
  float *v33; // eax
  const char *v34; // eax
  double v35; // st7
  _DWORD *v36; // eax
  int v37; // ebp
  _DWORD *v38; // ecx
  int v39; // edi
  _DWORD *v40; // edx
  int v41; // eax
  float *v42; // eax
  double v43; // st4
  float *v44; // eax
  ExtraDataList *v45; // eax
  double v46; // st7
  char *v47; // edi
  double v48; // st4
  PlayerCharacter *v49; // edi
  Tile *v50; // eax
  UInt32 unk63C; // ecx
  int v52; // eax
  _DWORD *v53; // ecx
  _DWORD *v54; // edx
  _DWORD *v55; // eax
  _DWORD *v56; // eax
  _DWORD *v57; // ecx
  _DWORD *v58; // edx
  ExtraDataList *v59; // eax
  double v60; // st7
  double v61; // st4
  Tile *v62; // ecx
  Tile *v63; // eax
  OblivionTileTemplateList *v64; // edi
  Menu *v65; // ebp
  unsigned int v66; // eax
  Menu *v67; // edi
  Tile *v68; // eax
  double v69; // st4
  Menu *v70; // edi
  double AVModifierf; // st4
  int *v72; // ecx
  int v73; // ecx
  double v74; // st4
  bool v75; // c0
  bool v76; // c3
  double v77; // st4
  double v78; // st4
  int *v79; // ecx
  int v80; // ecx
  double v81; // st4
  bool v82; // c0
  bool v83; // c3
  double v84; // st4
  double v85; // st4
  int *v86; // ecx
  int v87; // ecx
  double v88; // st4
  bool v89; // c0
  bool v90; // c3
  double v91; // st4
  PlayerCharacter *v92; // eax
  void **v93; // eax
  int v94; // ecx
  void **v95; // esi
  PlayerCharacter *v96; // ecx
  TESHealthForm *v97; // eax
  int v98; // ecx
  _BYTE *v99; // esi
  PlayerCharacter *v100; // ecx
  MagicCasterVtbl *vtbl; // esi
  int CurrentMagicItem; // eax
  bool v103; // al
  int v104; // ecx
  Tile *unk14; // ecx
  BSStringT v106; // [esp+38h] [ebp-84h] BYREF
  unsigned __int8 unk18; // [esp+57h] [ebp-65h]
  _DWORD *v108; // [esp+58h] [ebp-64h]
  _DWORD *v109; // [esp+5Ch] [ebp-60h]
  Menu *a3; // [esp+60h] [ebp-5Ch]
  _DWORD *v111; // [esp+64h] [ebp-58h]
  Tile *parent; // [esp+68h] [ebp-54h]
  _DWORD *v113; // [esp+6Ch] [ebp-50h]
  _DWORD *v114; // [esp+70h] [ebp-4Ch]
  _DWORD *v115; // [esp+74h] [ebp-48h]
  BSStringT a2; // [esp+78h] [ebp-44h] BYREF
  _DWORD *v117; // [esp+80h] [ebp-3Ch] BYREF
  _DWORD *v118[2]; // [esp+84h] [ebp-38h]
  _DWORD *v119[2]; // [esp+8Ch] [ebp-30h] BYREF
  _DWORD *v120; // [esp+9Ch] [ebp-20h] BYREF
  char *v121; // [esp+A0h] [ebp-1Ch]
  _DWORD *v122; // [esp+A4h] [ebp-18h]
  _DWORD *v123; // [esp+A8h] [ebp-14h]
  int v124; // [esp+B8h] [ebp-4h]

  a3 = (Menu *)a1; /*0x5a6e0f*/
  if ( Shared_GetDwordAtOffset40(reference) ) /*0x5a6e19*/
  {
    v5 = *(Tile **)(a1 + 0x54); /*0x5a6e26*/
    if ( v5 ) /*0x5a6e2d*/
    {
      v6 = reference->bCanLevelUp == 0; /*0x5a6e34*/
      *(_DWORD *)&v106.m_dataLen = *(_DWORD *)(a1 + 0x54); /*0x5a6e3a*/
      if ( v6 ) /*0x5a6e3b*/
        v7 = 1.0; /*0x5a6e45*/
      else
        v7 = fConstant_2; /*0x5a6e3d*/
      *(float *)&v106.m_dataLen = v7; /*0x5a6e47*/
      Tile_SetFloat(v5, 0xFA1u, *(float *)&v106.m_dataLen); /*0x5a6e4f*/
    }
    if ( *(_DWORD *)(a1 + 0x4C) ) /*0x5a6e54*/
    {
      if ( InterfaceManager_IsMenuVisibleByID(0x3EB, 0) /*0x5a6e95*/
        || InterfaceManager_IsMenuVisibleByID(0x3EA, 0)
        || InterfaceManager_IsMenuVisibleByID(0x3FE, 0)
        || InterfaceManager_IsMenuVisibleByID(0x3FF, 0) )
      {
        v8 = fConstant_2; /*0x5a6ea5*/
      }
      else
      {
        v8 = 1.0; /*0x5a6ea1*/
      }
      v9 = *(Tile **)(a1 + 0x4C); /*0x5a6eab*/
      *(float *)&v106.m_dataLen = v8; /*0x5a6eaf*/
      Tile_SetFloat(v9, 0xFA1u, *(float *)&v106.m_dataLen); /*0x5a6eb7*/
    }
    parent = *(Tile **)(a1 + 0x44); /*0x5a6ec1*/
    m_data = (int)parent; /*0x5a6ebc*/
    if ( parent ) /*0x5a6ec5*/
    {
      v11 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.super.super.GetPos)( /*0x5a6ed9*/
              reference,
              a4,
              st6_0,
              st5_0);
      v12 = *(_DWORD **)v11; /*0x5a6edb*/
      v13 = *(char **)(v11 + 4); /*0x5a6edd*/
      v14 = *(_DWORD **)(v11 + 8); /*0x5a6ee0*/
      v120 = v12; /*0x5a6ee3*/
      v15 = reference; /*0x5a6ee7*/
      v121 = v13; /*0x5a6eed*/
      v122 = v14; /*0x5a6ef1*/
      DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v15); /*0x5a6ef5*/
      *(double *)v119 = sub_4CCE00(DwordAtOffset40); /*0x5a6f01*/
      *(float *)&v113 = (((double (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.GetZRotation)(reference) /*0x5a6f1f*/
                       + *(double *)v119)
                      * dbl_A30DC8;
      v17 = *(float *)&v113; /*0x5a6f23*/
      *(float *)&v113 = fabs(*(float *)&v113); /*0x5a6f2b*/
      st6_0 = *(float *)&v113 / dbl_A56CA0; /*0x5a6f3b*/
      v113 = (_DWORD *)(0x168 * Double_To_SInt32(v17)); /*0x5a6f4c*/
      *(_DWORD *)&v106.m_dataLen = v18; /*0x5a6f50*/
      v19 = *(Tile **)(a1 + 0x40); /*0x5a6f51*/
      *(float *)&v113 = v17 - (double)(int)v113; /*0x5a6f58*/
      v20 = *(float *)&v113; /*0x5a6f5c*/
      Tile_SetFloat(v19, 0xFAEu, *(float *)&v113); /*0x5a6f68*/
      v21 = sub_65D260((char *)reference); /*0x5a6f73*/
      v108 = *((_DWORD **)parent + 0xD); /*0x5a6f7d*/
      v109 = (_DWORD *)1; /*0x5a6f81*/
      v22 = v21; /*0x5a6f89*/
      if ( v21 ) /*0x5a6f8b*/
      {
        while ( 1 ) /*0x5a6f97*/
        {
          v23 = (TESModel **)*v22; /*0x5a6f97*/
          if ( !*v22 ) /*0x5a6f9b*/
            goto LABEL_43; /*0x5a6f9b*/
          v24 = v23[1]; /*0x5a6fa4*/
          v6 = (*(_DWORD *)&v24->nifModel.m_dataLen & 0x800) == 0; /*0x5a6fad*/
          v113 = *((_DWORD **)v22 + 1); /*0x5a6fb0*/
          if ( v6 ) /*0x5a6fb4*/
            break; /*0x5a6fb4*/
LABEL_42:
          if ( *(float *)&v113 == 0.0 ) /*0x5a7339*/
            goto LABEL_43; /*0x5a7339*/
          v22 = v113; /*0x5a6f93*/
        }
        v25 = (float *)((int (__thiscall *)(TESModel *))v24->vtbl[0xD].super.CopyFromBase)(v24); /*0x5a6fc4*/
        *(float *)&v114 = *v25 - *(float *)&v120; /*0x5a6fcc*/
        *(float *)&v111 = v25[1] - *(float *)&v121; /*0x5a6fd7*/
        *(float *)&v115 = v25[2] - *(float *)&v122; /*0x5a6fe2*/
        st5_0 = *(float *)&v114 * *(float *)&v114; /*0x5a6ffa*/
        *(float *)&v115 = *(float *)&v111 * *(float *)&v111 + st5_0 + *(float *)&v115 * *(float *)&v115; /*0x5a7002*/
        *(float *)&v115 = sqrt(*(float *)&v115); /*0x5a700f*/
        v26 = *v23; /*0x5a7017*/
        unk18 = 0; /*0x5a701d*/
        *(float *)&v115 = fabs(*(float *)&v115); /*0x5a7027*/
        v111 = v115; /*0x5a702f*/
        if ( !sub_42B310(v26) && (double)SLODWORD(MEMORY[0xB37A58][0x5A]) > *(float *)&v111 ) /*0x5a704d*/
        {
          AddMapMarker(*v23, 1); /*0x5a7053*/
          v23[1]->vtbl[2].super.CopyFromBase((BaseFormComponent *)v23[1], (BaseFormComponent *)0x400); /*0x5a7065*/
          unk18 = 1; /*0x5a7067*/
        }
        if ( sub_42B340(*v23) || (double)SLODWORD(MEMORY[0xB37A58][0x5A]) <= *(float *)&v111 ) /*0x5a7088*/
        {
          if ( !unk18 ) /*0x5a70ad*/
            goto LABEL_30; /*0x5a70ad*/
        }
        else
        {
          sub_42B350(*v23, 1); /*0x5a708e*/
          v23[1]->vtbl[2].super.CopyFromBase((BaseFormComponent *)v23[1], (BaseFormComponent *)0x400); /*0x5a70a0*/
          unk18 = 1; /*0x5a70a2*/
        }
        if ( !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) ) /*0x5a70c2*/
        {
          a2.m_data = 0; /*0x5a70cc*/
          *(_DWORD *)&a2.m_dataLen = 0; /*0x5a70d0*/
          v27 = *v23; /*0x5a70da*/
          value = stru_B38C20.value; /*0x5a70dc*/
          v124 = 0; /*0x5a70e2*/
          ModelPath = TESModel_GetModelPath(v27); /*0x5a70e6*/
          BSStringT_Static_Format(&a2, "%s %s.", value, ModelPath); /*0x5a70f7*/
          m_data = (int)a2.m_data; /*0x5a7102*/
          GameUI_QueueMessage(a2.m_data, 0, 1u, flt_A31E2C); /*0x5a7111*/
          ++reference->miscStats[7]; /*0x5a711b*/
          v119[0] = v23[1]; /*0x5a712a*/
          LOWORD(v119[1]) = 0x100; /*0x5a712e*/
          sub_5A65B0((int)v119); /*0x5a7137*/
          v124 = 0xFFFFFFFF; /*0x5a713d*/
          FormHeapFree(m_data); /*0x5a7148*/
          a2.m_data = 0; /*0x5a7150*/
          *(_DWORD *)&a2.m_dataLen = 0; /*0x5a7159*/
LABEL_33:
          v20 = *(float *)&v111; /*0x5a71b4*/
          st6_0 = (double)SLODWORD(MEMORY[0xB37A58][0x5C]); /*0x5a71b8*/
          if ( st6_0 >= *(float *)&v111 ) /*0x5a71c5*/
          {
            if ( *(float *)&v108 == 0.0 ) /*0x5a71cf*/
            {
              m_data = (int)Menu::RenderTemplate((Menu *)a1, parent, "hudmain_compass_icon", 0); /*0x5a71f5*/
            }
            else
            {
              m_data = v108[2]; /*0x5a71d5*/
              v108 = *(_DWORD **)v108; /*0x5a71dd*/
            }
            if ( m_data ) /*0x5a71f9*/
            {
              v31 = sub_42B310(*v23); /*0x5a7201*/
              v32 = v23[1]; /*0x5a7206*/
              unk18 |= v31; /*0x5a7209*/
              v33 = (float *)((int (__thiscall *)(TESModel *))v32->vtbl[0xD].super.CopyFromBase)(v32); /*0x5a7215*/
              *(float *)&v115 = sub_5A62D0((float *)&v120, v33); /*0x5a7222*/
              v34 = TESModel_GetModelPath(*v23); /*0x5a722b*/
              BSStringT_Set((BSStringT *)(m_data + 8), v34, 0); /*0x5a7235*/
              Tile_SetFloat((Tile *)m_data, 0xFAEu, *(float *)&v115); /*0x5a7249*/
              Tile_SetFloat((Tile *)m_data, 0xFAFu, *(float *)&v111); /*0x5a725d*/
              Tile_SetFloat((Tile *)m_data, 0xFB0u, fConstant_2); /*0x5a7273*/
              *(float *)&v115 = COERCE_FLOAT(sub_42B370((unsigned __int16 *)*v23)); /*0x5a727f*/
              *(float *)&v106.m_dataLen = (float)(int)v115; /*0x5a728a*/
              Tile_SetFloat((Tile *)m_data, 0xFB3u, *(float *)&v106.m_dataLen); /*0x5a7292*/
              if ( !sub_42B340(*v23) || (v111 = (_DWORD *)2, !unk18) ) /*0x5a72ae*/
                v111 = (_DWORD *)1; /*0x5a72b0*/
              *(float *)&v106.m_dataLen = (float)(int)v111; /*0x5a72bf*/
              Tile_SetFloat((Tile *)m_data, 0xFB4u, *(float *)&v106.m_dataLen); /*0x5a72c7*/
              Tile_SetFloat((Tile *)m_data, 0xFB7u, fConstant_2); /*0x5a72dd*/
              *(float *)&v106.m_dataLen = (float)(int)v109; /*0x5a72e9*/
              Tile_SetFloat((Tile *)m_data, 0xFABu, *(float *)&v106.m_dataLen); /*0x5a72f1*/
              v35 = fConstant_2; /*0x5a72f6*/
              v109 = (_DWORD *)((char *)v109 + 1); /*0x5a72fc*/
              *(float *)&v106.m_dataLen = v35; /*0x5a7302*/
              Tile_SetFloat((Tile *)m_data, 0xFA1u, *(float *)&v106.m_dataLen); /*0x5a730c*/
              Tile_SetFloat((Tile *)m_data, 0xFB9u, 1.0); /*0x5a731e*/
              v20 = 1.0; /*0x5a7323*/
              Tile_SetFloat((Tile *)m_data, 0xFBAu, 1.0); /*0x5a7330*/
            }
          }
          goto LABEL_42; /*0x5a7330*/
        }
LABEL_30:
        if ( sub_42B340(*v23) && !reference->vtbl->super.super.super.IsDead((TESObjectREFR *)reference, 0) ) /*0x5a717a*/
        {
          v30 = (double)SLODWORD(MEMORY[0xB37A58][0x5A]); /*0x5a7187*/
          v117 = v23[1]; /*0x5a718d*/
          LOBYTE(v118[0]) = v30 > *(float *)&v111; /*0x5a719f*/
          BYTE1(v118[0]) = 0; /*0x5a71a8*/
          sub_5A65B0((int)&v117); /*0x5a71ac*/
        }
        goto LABEL_33; /*0x5a71ac*/
      }
LABEL_43:
      a4 = sub_65D830(reference, v20); /*0x5a733f*/
      v37 = 0; /*0x5a734e*/
      a3[2].members.unk14 = (unsigned int)v36; /*0x5a7352*/
      if ( v36 ) /*0x5a7355*/
      {
        while ( 1 ) /*0x5a7364*/
        {
          v38 = (_DWORD *)*v36; /*0x5a7364*/
          if ( !*v36 ) /*0x5a7364*/
            break; /*0x5a7364*/
          v39 = v38[4]; /*0x5a736e*/
          v40 = (_DWORD *)v36[1]; /*0x5a7373*/
          unk18 = 0; /*0x5a7376*/
          v113 = v40; /*0x5a737a*/
          if ( v39 ) /*0x5a737e*/
          {
            unk18 = 1; /*0x5a7380*/
          }
          else
          {
            sub_52B440(v38, 1); /*0x5a7389*/
            v39 = v41; /*0x5a738e*/
          }
          if ( v39 ) /*0x5a7392*/
          {
            v42 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 0x174))(v39); /*0x5a73a2*/
            *(float *)&v115 = *v42 - *(float *)&v120; /*0x5a73aa*/
            *(float *)&v114 = v42[1] - *(float *)&v121; /*0x5a73b5*/
            *(float *)&v111 = v42[2] - *(float *)&v122; /*0x5a73c0*/
            *(float *)&v115 = *(float *)&v115 * *(float *)&v115 /*0x5a73e0*/
                            + *(float *)&v114 * *(float *)&v114
                            + *(float *)&v111 * *(float *)&v111;
            *(float *)&v115 = sqrt(*(float *)&v115); /*0x5a73ed*/
            *(float *)&v115 = fabs(*(float *)&v115); /*0x5a73ff*/
            v43 = dbl_A3DDD8; /*0x5a741d*/
            *(float *)&v111 = *(float *)&v115 / (double)SLODWORD(MEMORY[0xB37A58][0x5A]) * v43; /*0x5a741f*/
            if ( *(float *)&v111 > v43 ) /*0x5a742e*/
              *(float *)&v111 = flt_A40098; /*0x5a7436*/
            *(float *)&v111 = v43 - *(float *)&v111 * dbl_A2FAA0; /*0x5a744a*/
            if ( *(float *)&v108 == 0.0 ) /*0x5a744e*/
            {
              m_data = (int)Menu::RenderTemplate(a3, parent, "hudmain_compass_icon", 0); /*0x5a7476*/
            }
            else
            {
              m_data = v108[2]; /*0x5a7454*/
              v108 = *(_DWORD **)v108; /*0x5a745c*/
            }
            if ( m_data ) /*0x5a747a*/
            {
              v44 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v39 + 0x174))( /*0x5a748a*/
                               v39,
                               a4,
                               st6_0,
                               st5_0);
              *(double *)v119 = sub_5A62D0((float *)&v120, v44); /*0x5a7497*/
              v45 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x5a74a4*/
              v46 = sub_4CCE00(v45) * dbl_A30DC8; /*0x5a74b0*/
              a2.m_data = 0; /*0x5a74b6*/
              *(_DWORD *)&a2.m_dataLen = 0; /*0x5a74ba*/
              a4 = v46 + *(double *)v119; /*0x5a74bf*/
              *(float *)&v115 = a4; /*0x5a74c8*/
              ++v37; /*0x5a74cc*/
              v124 = 1; /*0x5a74da*/
              BSStringT_Static_Format(&a2, "quest_%i", v37); /*0x5a74e5*/
              v47 = a2.m_data; /*0x5a74ea*/
              *(float *)&v114 = COERCE_FLOAT(&v106); /*0x5a74f3*/
              v106.m_data = 0; /*0x5a74f9*/
              *(_DWORD *)&v106.m_dataLen = 0; /*0x5a74fb*/
              BSStringT_Set(&v106, a2.m_data, 0); /*0x5a7503*/
              sub_58A020((BSStringT *)m_data, v106.m_data, *(int *)&v106.m_dataLen); /*0x5a750a*/
              Tile_SetFloat((Tile *)m_data, 0xFAEu, *(float *)&v115); /*0x5a751e*/
              Tile_SetFloat((Tile *)m_data, 0xFB3u, flt_A6BF7C); /*0x5a7534*/
              Tile_SetFloat((Tile *)m_data, 0xFB4u, 1.0); /*0x5a7546*/
              Tile_SetFloat((Tile *)m_data, 0xFB7u, 1.0); /*0x5a7558*/
              *(float *)&v106.m_dataLen = (float)(int)v109; /*0x5a7564*/
              Tile_SetFloat((Tile *)m_data, 0xFABu, *(float *)&v106.m_dataLen); /*0x5a756c*/
              v48 = fConstant_2; /*0x5a7571*/
              v109 = (_DWORD *)((char *)v109 + 1); /*0x5a7577*/
              *(float *)&v106.m_dataLen = v48; /*0x5a757d*/
              Tile_SetFloat((Tile *)m_data, 0xFA1u, *(float *)&v106.m_dataLen); /*0x5a7587*/
              Tile_SetFloat((Tile *)m_data, 0xFA7u, *(float *)&v111); /*0x5a759b*/
              v115 = (_DWORD *)((unk18 != 0) + 1); /*0x5a75af*/
              *(float *)&v106.m_dataLen = (float)(int)v115; /*0x5a75b7*/
              Tile_SetFloat((Tile *)m_data, 0xFB8u, *(float *)&v106.m_dataLen); /*0x5a75bf*/
              Tile_SetFloat((Tile *)m_data, 0xFB9u, fConstant_2); /*0x5a75d5*/
              Tile_SetFloat((Tile *)m_data, 0xFBAu, 1.0); /*0x5a75e7*/
              v124 = 0xFFFFFFFF; /*0x5a75ed*/
              FormHeapFree((unsigned int)v47); /*0x5a75f5*/
              a2.m_data = 0; /*0x5a75fd*/
              *(_DWORD *)&a2.m_dataLen = 0; /*0x5a7606*/
            }
          }
          if ( *(float *)&v113 == 0.0 ) /*0x5a760f*/
            break; /*0x5a760f*/
          v36 = v113; /*0x5a7360*/
        }
      }
      v49 = reference; /*0x5a7615*/
      if ( reference->unk638 ) /*0x5a761b*/
      {
        if ( *(float *)&v108 == 0.0 ) /*0x5a762b*/
        {
          v50 = Menu::RenderTemplate(a3, parent, "hudmain_compass_icon", 0); /*0x5a764e*/
          v49 = reference; /*0x5a7653*/
          m_data = (int)v50; /*0x5a7659*/
        }
        else
        {
          m_data = v108[2]; /*0x5a7633*/
          v108 = *(_DWORD **)v108; /*0x5a7639*/
        }
        if ( m_data ) /*0x5a765d*/
        {
          unk63C = v49->unk63C; /*0x5a7663*/
          if ( unk63C ) /*0x5a766b*/
          {
            v52 = (*(int (__usercall **)@<eax>(UInt32@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)unk63C + 0x174))( /*0x5a7675*/
                    unk63C,
                    a4,
                    st6_0,
                    st5_0);
            v53 = *(_DWORD **)v52; /*0x5a7677*/
            v54 = *(_DWORD **)(v52 + 4); /*0x5a7679*/
            v55 = *(_DWORD **)(v52 + 8); /*0x5a767c*/
            v49 = reference; /*0x5a767f*/
            v117 = v53; /*0x5a7685*/
            v118[0] = v54; /*0x5a7689*/
            v118[1] = v55; /*0x5a768d*/
          }
          else
          {
            v56 = sub_5A5790(v49, v119); /*0x5a769a*/
            v57 = (_DWORD *)v56[1]; /*0x5a76a1*/
            v117 = (_DWORD *)*v56; /*0x5a76a4*/
            v58 = (_DWORD *)v56[2]; /*0x5a76a8*/
            v118[0] = v57; /*0x5a76ab*/
            v118[1] = v58; /*0x5a76af*/
          }
          v59 = (ExtraDataList *)Shared_GetDwordAtOffset40(v49); /*0x5a76b5*/
          *(double *)v119 = sub_4CCE00(v59) * dbl_A30DC8; /*0x5a76d0*/
          v60 = sub_5A62D0((float *)&v120, (float *)&v117); /*0x5a76d5*/
          a4 = v60 + *(double *)v119; /*0x5a76da*/
          a2.m_data = 0; /*0x5a76de*/
          *(_DWORD *)&a2.m_dataLen = 0; /*0x5a76e2*/
          *(float *)&v115 = a4; /*0x5a76e7*/
          v124 = 2; /*0x5a76fe*/
          BSStringT_Static_Format(&a2, "player_target_%i", v37 + 1); /*0x5a7709*/
          *(float *)&v114 = COERCE_FLOAT(&v106); /*0x5a7717*/
          BSStringT_constr_BSStringT(&v106, (const char **)&a2.m_data); /*0x5a771c*/
          sub_58A020((BSStringT *)m_data, v106.m_data, *(int *)&v106.m_dataLen); /*0x5a7723*/
          Tile_SetFloat((Tile *)m_data, 0xFAEu, *(float *)&v115); /*0x5a7737*/
          Tile_SetFloat((Tile *)m_data, 0xFB3u, flt_A6BF7C); /*0x5a774d*/
          Tile_SetFloat((Tile *)m_data, 0xFB4u, fConstant_2); /*0x5a7763*/
          Tile_SetFloat((Tile *)m_data, 0xFB7u, 1.0); /*0x5a7775*/
          *(float *)&v106.m_dataLen = (float)(int)v109; /*0x5a7781*/
          Tile_SetFloat((Tile *)m_data, 0xFABu, *(float *)&v106.m_dataLen); /*0x5a7789*/
          v61 = fConstant_2; /*0x5a778e*/
          v109 = (_DWORD *)((char *)v109 + 1); /*0x5a7794*/
          *(float *)&v106.m_dataLen = v61; /*0x5a779a*/
          Tile_SetFloat((Tile *)m_data, 0xFA1u, *(float *)&v106.m_dataLen); /*0x5a77a4*/
          Tile_SetFloat((Tile *)m_data, 0xFB9u, 1.0); /*0x5a77b6*/
          Tile_SetFloat((Tile *)m_data, 0xFBAu, fConstant_2); /*0x5a77cc*/
          v124 = 0xFFFFFFFF; /*0x5a77d6*/
          FormHeapFree((unsigned int)a2.m_data); /*0x5a77de*/
        }
      }
      v62 = *(Tile **)&a3[1].members.ownsTemplates; /*0x5a77ee*/
      *(float *)&v106.m_dataLen = (float)(int)v109; /*0x5a77f2*/
      Tile_SetFloat(v62, 0xFAFu, *(float *)&v106.m_dataLen); /*0x5a77fa*/
      if ( *(float *)&v108 != 0.0 ) /*0x5a7803*/
      {
        m_data = (int)v108; /*0x5a7805*/
        do /*0x5a782b*/
        {
          v63 = *(Tile **)(m_data + 8); /*0x5a7815*/
          m_data = *(_DWORD *)m_data; /*0x5a7817*/
          Tile_SetFloat(v63, 0xFA1u, 1.0); /*0x5a7824*/
        }
        while ( m_data ); /*0x5a782b*/
      }
    }
    unk18 = a3[3].members.unk18; /*0x5a7839*/
    if ( unk18 ) /*0x5a783d*/
    {
      v64 = 0; /*0x5a7847*/
      if ( a3[3].members.templateNext ) /*0x5a7849*/
      {
        v65 = a3; /*0x5a7851*/
        do /*0x5a789e*/
        {
          if ( !LOBYTE(v65[3].members.unk18) ) /*0x5a7853*/
            break; /*0x5a7859*/
          if ( Tile_GetFloat((_DWORD *)**((_DWORD **)v65[3].members.tile + (_DWORD)v64), 0xFA7) == *(float *)&SrcStr ) /*0x5a7878*/
          {
            m_data = (int)&v65[3]; /*0x5a7880*/
            v66 = ((int (__thiscall *)(Menu *, OblivionTileTemplateList *))v65[3].__vftable->AttachTileByID)( /*0x5a7886*/
                    &v65[3],
                    v64);
            FormHeapFree(v66); /*0x5a7889*/
            --LOBYTE(v65[3].members.unk18); /*0x5a7891*/
          }
          v64 = (OblivionTileTemplateList *)((char *)v64 + 1); /*0x5a7895*/
        }
        while ( v64 < v65[3].members.templateNext ); /*0x5a789e*/
      }
      v67 = a3; /*0x5a78a0*/
      if ( unk18 - LOBYTE(a3[3].members.unk18) > 0 ) /*0x5a78b4*/
      {
        sub_5A56F0((unsigned int *)&a3[3]); /*0x5a78b9*/
        for ( m_data = 0; (OblivionTileTemplateList *)m_data < v67[3].members.templateNext; ++m_data ) /*0x5a78c0*/
        {
          v68 = **((Tile ***)v67[3].members.tile + m_data); /*0x5a78ce*/
          v115 = (_DWORD *)m_data; /*0x5a78d4*/
          v69 = (double)m_data; /*0x5a78d8*/
          if ( m_data < 0 ) /*0x5a78dc*/
            v69 = v69 + flt_A2FC78; /*0x5a78de*/
          *(float *)&v106.m_dataLen = v69; /*0x5a78e5*/
          Tile_SetFloat(v68, 0xFAEu, *(float *)&v106.m_dataLen); /*0x5a78ef*/
        }
      }
    }
    v70 = a3; /*0x5a78ff*/
    if ( a3[2].members.fadeState ) /*0x5a7903*/
    {
      if ( GetTickCount() >= v70[2].members.fadeState ) /*0x5a7911*/
      {
        m_data = 0; /*0x5a7917*/
        v124 = 3; /*0x5a791a*/
        *(float *)&v120 = 0.0; /*0x5a7922*/
        *(float *)&v121 = 0.0; /*0x5a7926*/
        *(float *)&v122 = 0.0; /*0x5a792a*/
        v123 = 0; /*0x5a792e*/
        sub_5A64B0((int)&v120); /*0x5a7932*/
        v124 = 0xFFFFFFFF; /*0x5a7938*/
        FormHeapFree(0); /*0x5a7943*/
      }
    }
    if ( Player_GetAVModifierf((float *)reference, 0, 8) >= dbl_A2FC68 ) /*0x5a7964*/
      AVModifierf = Player_GetAVModifierf((float *)reference, 0, 8); /*0x5a7973*/
    else
      AVModifierf = 0.0; /*0x5a7966*/
    v72 = (int *)reference; /*0x5a7978*/
    *(float *)&v108 = AVModifierf; /*0x5a797e*/
    *(float *)&v115 = COERCE_FLOAT(Actor_GetBaseCalcAVi(v72, 0, (int)v70, m_data, 8)); /*0x5a7989*/
    v74 = (double)(int)v115 + *(float *)&v108; /*0x5a7991*/
    v75 = v74 > 0.0; /*0x5a7997*/
    v76 = 0.0 == v74; /*0x5a7997*/
    v77 = 0.0; /*0x5a799b*/
    if ( v75 || v76 ) /*0x5a799d*/
    {
      *(float *)&v115 = COERCE_FLOAT(Actor_GetBaseCalcAVi((int *)reference, 0, (int)v70, m_data, 8)); /*0x5a79b1*/
      v77 = (double)(int)v115 + *(float *)&v108; /*0x5a79b9*/
    }
    *(float *)&v108 = v77; /*0x5a79bd*/
    if ( 0.0 != *(float *)&v108 ) /*0x5a79cc*/
    {
      if ( reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Health) >= 0 ) /*0x5a79e2*/
        *(float *)&v113 = COERCE_FLOAT(reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Health)); /*0x5a79fc*/
      else
        *(float *)&v113 = 0.0; /*0x5a79e4*/
      *(float *)&v108 = (double)(int)v113 / *(float *)&v108; /*0x5a7a08*/
    }
    *(_DWORD *)&v106.m_dataLen = v73; /*0x5a7a10*/
    Tile_SetFloat(v70[1].members.tile, 0xFAEu, *(float *)&v108); /*0x5a7a1c*/
    if ( Player_GetAVModifierf((float *)reference, 0, 9) >= dbl_A2FC68 ) /*0x5a7a3a*/
      v78 = Player_GetAVModifierf((float *)reference, 0, 9); /*0x5a7a49*/
    else
      v78 = 0.0; /*0x5a7a3c*/
    v79 = (int *)reference; /*0x5a7a4e*/
    *(float *)&v108 = v78; /*0x5a7a54*/
    *(float *)&v115 = COERCE_FLOAT(Actor_GetBaseCalcAVi(v79, 0, (int)v70, m_data, 9)); /*0x5a7a5f*/
    v81 = (double)(int)v115 + *(float *)&v108; /*0x5a7a67*/
    v82 = v81 > 0.0; /*0x5a7a6d*/
    v83 = 0.0 == v81; /*0x5a7a6d*/
    v84 = 0.0; /*0x5a7a71*/
    if ( v82 || v83 ) /*0x5a7a73*/
    {
      *(float *)&v115 = COERCE_FLOAT(Actor_GetBaseCalcAVi((int *)reference, 0, (int)v70, m_data, 9)); /*0x5a7a87*/
      v84 = (double)(int)v115 + *(float *)&v108; /*0x5a7a8f*/
    }
    *(float *)&v108 = v84; /*0x5a7a93*/
    if ( 0.0 != *(float *)&v108 ) /*0x5a7aa2*/
    {
      if ( reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Magicka) >= 0 ) /*0x5a7ab8*/
        *(float *)&v113 = COERCE_FLOAT(reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Magicka)); /*0x5a7ad2*/
      else
        *(float *)&v113 = 0.0; /*0x5a7aba*/
      *(float *)&v108 = (double)(int)v113 / *(float *)&v108; /*0x5a7ade*/
    }
    *(_DWORD *)&v106.m_dataLen = v80; /*0x5a7ae6*/
    Tile_SetFloat((Tile *)v70[1].members.templateHead, 0xFAEu, *(float *)&v108); /*0x5a7af2*/
    if ( Player_GetAVModifierf((float *)reference, 0, 0xA) >= dbl_A2FC68 ) /*0x5a7b10*/
      v85 = Player_GetAVModifierf((float *)reference, 0, 0xA); /*0x5a7b1f*/
    else
      v85 = 0.0; /*0x5a7b12*/
    v86 = (int *)reference; /*0x5a7b24*/
    *(float *)&v108 = v85; /*0x5a7b2a*/
    *(float *)&v115 = COERCE_FLOAT(Actor_GetBaseCalcAVi(v86, 0, (int)v70, m_data, 0xA)); /*0x5a7b35*/
    v88 = (double)(int)v115 + *(float *)&v108; /*0x5a7b3d*/
    v89 = v88 > 0.0; /*0x5a7b43*/
    v90 = 0.0 == v88; /*0x5a7b43*/
    v91 = 0.0; /*0x5a7b47*/
    if ( v89 || v90 ) /*0x5a7b49*/
    {
      *(float *)&v115 = COERCE_FLOAT(Actor_GetBaseCalcAVi((int *)reference, 0, (int)v70, m_data, 0xA)); /*0x5a7b5d*/
      v91 = (double)(int)v115 + *(float *)&v108; /*0x5a7b65*/
    }
    *(float *)&v108 = v91; /*0x5a7b69*/
    if ( 0.0 != *(float *)&v108 ) /*0x5a7b78*/
    {
      if ( reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Fatigue) >= 0 ) /*0x5a7b8e*/
        *(float *)&v113 = COERCE_FLOAT(reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Fatigue)); /*0x5a7ba8*/
      else
        *(float *)&v113 = 0.0; /*0x5a7b90*/
      *(float *)&v108 = (double)(int)v113 / *(float *)&v108; /*0x5a7bb4*/
    }
    *(_DWORD *)&v106.m_dataLen = v87; /*0x5a7bbc*/
    Tile_SetFloat((Tile *)v70[1].members.templateNext, 0xFAEu, *(float *)&v108); /*0x5a7bc8*/
    v92 = reference; /*0x5a7bd3*/
    *(float *)&v108 = flt_A2FE7C; /*0x5a7bd8*/
    v93 = (void **)((int (__usercall *)@<eax>(LowProcess *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))v92->super.super.super.process->GetEquippedWeaponData)( /*0x5a7be9*/
                     v92->super.super.super.process,
                     1,
                     a4,
                     st6_0,
                     st5_0);
    v95 = v93; /*0x5a7beb*/
    if ( v93 ) /*0x5a7bef*/
      *(float *)&v108 = ContainerEntryExtraData_GetHealth(v93, 1); /*0x5a7bfa*/
    *(_DWORD *)&v106.m_dataLen = v94; /*0x5a7c02*/
    Tile_SetFloat(v70[1].members.templateContextTile, 0xFB0u, *(float *)&v108); /*0x5a7c0e*/
    v96 = reference; /*0x5a7c15*/
    *(float *)&v108 = 0.0; /*0x5a7c1b*/
    v97 = (TESHealthForm *)v96->super.super.super.process->GetEquippedAmmoData(v96->super.super.super.process, 1); /*0x5a7c2c*/
    if ( v97 ) /*0x5a7c30*/
    {
      if ( v95 ) /*0x5a7c34*/
      {
        v99 = v95[2]; /*0x5a7c36*/
        if ( v99 ) /*0x5a7c3b*/
        {
          if ( v99[0x90] == 5 ) /*0x5a7c44*/
          {
            *(float *)&v115 = COERCE_FLOAT(TESHealthForm_GetHealth(v97)); /*0x5a7c4d*/
            *(float *)&v108 = (float)(int)v115; /*0x5a7c55*/
          }
        }
      }
    }
    *(_DWORD *)&v106.m_dataLen = v98; /*0x5a7c5d*/
    Tile_SetFloat(v70[1].members.templateContextTile, 0xFB1u, *(float *)&v108); /*0x5a7c69*/
    v100 = reference; /*0x5a7c6e*/
    vtbl = reference->super.super.magicCaster.vtbl; /*0x5a7c74*/
    *(_DWORD *)&v106.m_dataLen = 0; /*0x5a7c77*/
    v106.m_data = 0; /*0x5a7c78*/
    CurrentMagicItem = Player_GetCurrentMagicItem(v100); /*0x5a7c7d*/
    v103 = vtbl->IsMagicItemUsable( /*0x5a7c8e*/
             &reference->super.super.magicCaster,
             (MagicItem *)CurrentMagicItem,
             0,
             (UInt32 *)v106.m_data,
             *(_DWORD *)&v106.m_dataLen);
    *(_DWORD *)&v106.m_dataLen = v104; /*0x5a7c94*/
    unk14 = (Tile *)v70[1].members.unk14; /*0x5a7c95*/
    v115 = (_DWORD *)(2 - !v103); /*0x5a7c9d*/
    *(float *)&v106.m_dataLen = (float)(int)v115; /*0x5a7ca5*/
    Tile_SetFloat(unk14, 0xFB0u, *(float *)&v106.m_dataLen); /*0x5a7cad*/
  }
}
