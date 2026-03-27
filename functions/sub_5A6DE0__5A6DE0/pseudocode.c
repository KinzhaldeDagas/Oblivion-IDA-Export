void __usercall sub_5A6DE0(int a1@<ecx>, double st5_0@<st2>, double st6_0@<st1>, double a4@<st0>)
{
  Tile *v5; // ecx
  bool v6; // zf
  double v7; // st4
  double v8; // st4
  Tile *v9; // ecx
  int v10; // eax
  _DWORD *v11; // ecx
  char *v12; // edx
  _DWORD *v13; // eax
  TESObjectREFR *v14; // ecx
  TESObjectCELL *ParentCell; // eax
  double v16; // st7
  int v17; // ecx
  Tile *v18; // ecx
  int v19; // eax
  TESModel **v20; // edx
  TESModel ***v21; // ecx
  TESModel **v22; // edi
  TESModel *v23; // eax
  float *v24; // eax
  TESModel *v25; // ecx
  TESModel *v26; // ecx
  const char *v27; // esi
  const char *ModelPath; // eax
  char *m_data; // esi
  double v30; // st6
  BSStringT *TileFromTemplate; // esi
  char v32; // al
  TESModel *v33; // ecx
  float *v34; // eax
  const char *v35; // eax
  double v36; // st7
  _DWORD *v37; // eax
  int v38; // ebp
  _DWORD *v39; // ecx
  int v40; // edi
  _DWORD *v41; // edx
  int v42; // eax
  float *v43; // eax
  double v44; // st4
  unsigned int *v45; // esi
  float *v46; // eax
  TESObjectCELL *v47; // eax
  double v48; // st7
  char *v49; // edi
  double v50; // st4
  TESObjectREFR *v51; // edi
  BSStringT *v52; // esi
  unsigned int *v53; // eax
  UInt32 refID; // ecx
  int v55; // eax
  _DWORD *v56; // ecx
  _DWORD *v57; // edx
  _DWORD *v58; // eax
  _DWORD *v59; // eax
  _DWORD *v60; // ecx
  _DWORD *v61; // edx
  TESObjectCELL *v62; // eax
  double v63; // st7
  double v64; // st4
  Tile *v65; // ecx
  _DWORD *v66; // esi
  Tile *v67; // eax
  unsigned int v68; // edi
  _DWORD *v69; // ebp
  unsigned int v70; // eax
  _DWORD *v71; // edi
  int i; // esi
  Tile *v73; // eax
  double v74; // st4
  _DWORD *v75; // edi
  double AVModifierf; // st4
  int v77; // ecx
  double v78; // st4
  bool v79; // c0
  bool v80; // c3
  double v81; // st4
  double v82; // st4
  int v83; // ecx
  double v84; // st4
  bool v85; // c0
  bool v86; // c3
  double v87; // st4
  double v88; // st4
  int v89; // ecx
  double v90; // st4
  bool v91; // c0
  bool v92; // c3
  double v93; // st4
  PlayerCharacter *v94; // eax
  void **v95; // eax
  int v96; // ecx
  void **v97; // esi
  PlayerCharacter *v98; // ecx
  Sky *v99; // eax
  int v100; // ecx
  _BYTE *v101; // esi
  PlayerCharacter *v102; // ecx
  MagicCasterVtbl *vtbl; // esi
  int CurrentMagicItem; // eax
  bool v105; // al
  int v106; // ecx
  Tile *v107; // ecx
  BSStringT v108; // [esp+38h] [ebp-84h] BYREF
  unsigned __int8 v109; // [esp+57h] [ebp-65h]
  _DWORD *v110; // [esp+58h] [ebp-64h]
  _DWORD *v111; // [esp+5Ch] [ebp-60h]
  _DWORD *a3; // [esp+60h] [ebp-5Ch]
  _DWORD *v113; // [esp+64h] [ebp-58h]
  _DWORD *v114; // [esp+68h] [ebp-54h]
  _DWORD *v115; // [esp+6Ch] [ebp-50h]
  _DWORD *v116; // [esp+70h] [ebp-4Ch]
  _DWORD *v117; // [esp+74h] [ebp-48h]
  BSStringT a2; // [esp+78h] [ebp-44h] BYREF
  _DWORD *v119; // [esp+80h] [ebp-3Ch] BYREF
  _DWORD *v120[2]; // [esp+84h] [ebp-38h]
  _DWORD *v121[2]; // [esp+8Ch] [ebp-30h] BYREF
  _DWORD *v122; // [esp+9Ch] [ebp-20h] BYREF
  char *v123; // [esp+A0h] [ebp-1Ch]
  _DWORD *v124; // [esp+A4h] [ebp-18h]
  _DWORD *v125; // [esp+A8h] [ebp-14h]
  int v126; // [esp+B8h] [ebp-4h]

  a3 = (_DWORD *)a1;
  if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
  {
    v5 = *(Tile **)(a1 + 0x54);
    if ( v5 )
    {
      v6 = TESDataHandler_g_PlayerRef->bCanLevelUp == 0;
      *(_DWORD *)&v108.m_dataLen = *(_DWORD *)(a1 + 0x54);
      if ( v6 )
        v7 = 1.0;
      else
        v7 = fConstant_2;
      *(float *)&v108.m_dataLen = v7;
      Tile_SetFloat(v5, (_DWORD *)0xFA1, *(float *)&v108.m_dataLen);
    }
    if ( *(_DWORD *)(a1 + 0x4C) )
    {
      if ( sub_5790E0(0x3EB, 0) || sub_5790E0(0x3EA, 0) || sub_5790E0(0x3FE, 0) || sub_5790E0(0x3FF, 0) )
        v8 = fConstant_2;
      else
        v8 = 1.0;
      v9 = *(Tile **)(a1 + 0x4C);
      *(float *)&v108.m_dataLen = v8;
      Tile_SetFloat(v9, (_DWORD *)0xFA1, *(float *)&v108.m_dataLen);
    }
    v114 = *(_DWORD **)(a1 + 0x44);
    if ( v114 )
    {
      v10 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos)(
              TESDataHandler_g_PlayerRef,
              a4,
              st6_0,
              st5_0);
      v11 = *(_DWORD **)v10;
      v12 = *(char **)(v10 + 4);
      v13 = *(_DWORD **)(v10 + 8);
      v122 = v11;
      v14 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      v123 = v12;
      v124 = v13;
      ParentCell = TESObjectREFR_GetParentCell(v14);
      *(double *)v121 = sub_4CCE00((ExtraDataList *)ParentCell);
      *(float *)&v115 = (((double (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.GetZRotation)(TESDataHandler_g_PlayerRef)
                       + *(double *)v121)
                      * dbl_A30DC8;
      v16 = *(float *)&v115;
      *(float *)&v115 = fabs(*(float *)&v115);
      st6_0 = *(float *)&v115 / dbl_A56CA0;
      v115 = (_DWORD *)(0x168 * Double_To_SInt32(v16));
      *(_DWORD *)&v108.m_dataLen = v17;
      v18 = *(Tile **)(a1 + 0x40);
      *(float *)&v115 = v16 - (double)(int)v115;
      a4 = *(float *)&v115;
      Tile_SetFloat(v18, (_DWORD *)0xFAE, *(float *)&v115);
      v19 = sub_65D260((char *)TESDataHandler_g_PlayerRef);
      v110 = *((_DWORD **)v114 + 0xD);
      v111 = (_DWORD *)1;
      v21 = (TESModel ***)v19;
      if ( v19 )
      {
        while ( 1 )
        {
          v22 = *v21;
          if ( !*v21 )
            goto LABEL_43;
          v20 = v21[1];
          v23 = v22[1];
          v6 = (*(_DWORD *)&v23->nifModel.m_dataLen & 0x800) == 0;
          v115 = v20;
          if ( v6 )
            break;
LABEL_42:
          if ( *(float *)&v115 == 0.0 )
            goto LABEL_43;
          v21 = (TESModel ***)v115;
        }
        v24 = (float *)((int (__thiscall *)(TESModel *))v23->vtbl[0xD].super.CopyFromBase)(v23);
        *(float *)&v116 = *v24 - *(float *)&v122;
        *(float *)&v113 = v24[1] - *(float *)&v123;
        *(float *)&v117 = v24[2] - *(float *)&v124;
        st5_0 = *(float *)&v116 * *(float *)&v116;
        *(float *)&v117 = *(float *)&v113 * *(float *)&v113 + st5_0 + *(float *)&v117 * *(float *)&v117;
        *(float *)&v117 = sqrt(*(float *)&v117);
        v25 = *v22;
        v109 = 0;
        *(float *)&v117 = fabs(*(float *)&v117);
        v113 = v117;
        if ( !sub_42B310(v25) && (double)dword_B37BC0 > *(float *)&v113 )
        {
          AddMapMarker(*v22, 1);
          v22[1]->vtbl[2].super.CopyFromBase((BaseFormComponent *)v22[1], (BaseFormComponent *)0x400);
          v109 = 1;
        }
        if ( sub_42B340(*v22) || (double)dword_B37BC0 <= *(float *)&v113 )
        {
          if ( !v109 )
            goto LABEL_30;
        }
        else
        {
          sub_42B350(*v22, 1);
          v22[1]->vtbl[2].super.CopyFromBase((BaseFormComponent *)v22[1], (BaseFormComponent *)0x400);
          v109 = 1;
        }
        if ( !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
        {
          a2.m_data = 0;
          *(_DWORD *)&a2.m_dataLen = 0;
          v26 = *v22;
          v27 = *(const char **)dword_B38C20;
          v126 = 0;
          ModelPath = TESModel_GetModelPath(v26);
          BSStringT_Static_Format(&a2, "%s %s.", v27, ModelPath);
          m_data = a2.m_data;
          GameUI_QueueMessage(a2.m_data, 0, 1u, flt_A31E2C);
          ++TESDataHandler_g_PlayerRef->miscStats[7];
          v121[0] = v22[1];
          LOWORD(v121[1]) = 0x100;
          sub_5A65B0((int)v121);
          v126 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)m_data);
          a2.m_data = 0;
          *(_DWORD *)&a2.m_dataLen = 0;
LABEL_33:
          a4 = *(float *)&v113;
          st6_0 = (double)dword_B37BC8;
          if ( st6_0 >= *(float *)&v113 )
          {
            if ( *(float *)&v110 == 0.0 )
            {
              TileFromTemplate = (BSStringT *)Menu_CreateTileFromTemplate(
                                                (_DWORD *)a1,
                                                st5_0,
                                                st6_0,
                                                a4,
                                                (TileWindow *)v114,
                                                "hudmain_compass_icon",
                                                0);
            }
            else
            {
              TileFromTemplate = (BSStringT *)v110[2];
              v110 = *(_DWORD **)v110;
            }
            if ( TileFromTemplate )
            {
              v32 = sub_42B310(*v22);
              v33 = v22[1];
              v109 |= v32;
              v34 = (float *)((int (__thiscall *)(TESModel *))v33->vtbl[0xD].super.CopyFromBase)(v33);
              *(float *)&v117 = sub_5A62D0((float *)&v122, v34);
              v35 = TESModel_GetModelPath(*v22);
              BSStringT_Set(TileFromTemplate + 1, v35, 0);
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, *(float *)&v117);
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, *(float *)&v113);
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB0, fConstant_2);
              *(float *)&v117 = COERCE_FLOAT(sub_42B370((unsigned __int16 *)*v22));
              *(float *)&v108.m_dataLen = (float)(int)v117;
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB3, *(float *)&v108.m_dataLen);
              if ( !sub_42B340(*v22) || (v113 = (_DWORD *)2, !v109) )
                v113 = (_DWORD *)1;
              *(float *)&v108.m_dataLen = (float)(int)v113;
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB4, *(float *)&v108.m_dataLen);
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB7, fConstant_2);
              *(float *)&v108.m_dataLen = (float)(int)v111;
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAB, *(float *)&v108.m_dataLen);
              v36 = fConstant_2;
              v111 = (_DWORD *)((char *)v111 + 1);
              *(float *)&v108.m_dataLen = v36;
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA1, *(float *)&v108.m_dataLen);
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB9, 1.0);
              a4 = 1.0;
              Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFBA, 1.0);
            }
          }
          goto LABEL_42;
        }
LABEL_30:
        if ( sub_42B340(*v22)
          && !TESDataHandler_g_PlayerRef->vtbl->super.super.super.IsDead((TESObjectREFR *)TESDataHandler_g_PlayerRef, 0) )
        {
          v30 = (double)dword_B37BC0;
          v119 = v22[1];
          LOBYTE(v120[0]) = v30 > *(float *)&v113;
          BYTE1(v120[0]) = 0;
          sub_5A65B0((int)&v119);
        }
        goto LABEL_33;
      }
LABEL_43:
      v37 = sub_65D830(TESDataHandler_g_PlayerRef, a4, (int)v20);
      v38 = 0;
      a3[0x19] = v37;
      if ( v37 )
      {
        while ( 1 )
        {
          v39 = (_DWORD *)*v37;
          if ( !*v37 )
            break;
          v40 = v39[4];
          v41 = (_DWORD *)v37[1];
          v109 = 0;
          v115 = v41;
          if ( v40 )
          {
            v109 = 1;
          }
          else
          {
            sub_52B440(v39, 1);
            v40 = v42;
          }
          if ( v40 )
          {
            v43 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 0x174))(v40);
            *(float *)&v117 = *v43 - *(float *)&v122;
            *(float *)&v116 = v43[1] - *(float *)&v123;
            *(float *)&v113 = v43[2] - *(float *)&v124;
            *(float *)&v117 = *(float *)&v117 * *(float *)&v117
                            + *(float *)&v116 * *(float *)&v116
                            + *(float *)&v113 * *(float *)&v113;
            *(float *)&v117 = sqrt(*(float *)&v117);
            *(float *)&v117 = fabs(*(float *)&v117);
            v44 = dbl_A3DDD8;
            *(float *)&v113 = *(float *)&v117 / (double)dword_B37BC0 * v44;
            if ( *(float *)&v113 > v44 )
              *(float *)&v113 = flt_A40098;
            *(float *)&v113 = v44 - *(float *)&v113 * dbl_A2FAA0;
            if ( *(float *)&v110 == 0.0 )
            {
              v45 = Menu_CreateTileFromTemplate(a3, st5_0, st6_0, a4, (TileWindow *)v114, "hudmain_compass_icon", 0);
            }
            else
            {
              v45 = (unsigned int *)v110[2];
              v110 = *(_DWORD **)v110;
            }
            if ( v45 )
            {
              v46 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)v40 + 0x174))(
                               v40,
                               a4,
                               st6_0,
                               st5_0);
              *(double *)v121 = sub_5A62D0((float *)&v122, v46);
              v47 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
              v48 = sub_4CCE00((ExtraDataList *)v47) * dbl_A30DC8;
              a2.m_data = 0;
              *(_DWORD *)&a2.m_dataLen = 0;
              a4 = v48 + *(double *)v121;
              *(float *)&v117 = a4;
              ++v38;
              v126 = 1;
              BSStringT_Static_Format(&a2, "quest_%i", v38);
              v49 = a2.m_data;
              *(float *)&v116 = COERCE_FLOAT(&v108);
              v108.m_data = 0;
              *(_DWORD *)&v108.m_dataLen = 0;
              BSStringT_Set(&v108, a2.m_data, 0);
              sub_58A020((BSStringT *)v45, v108.m_data, *(int *)&v108.m_dataLen);
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFAE, *(float *)&v117);
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFB3, flt_A6BF7C);
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFB4, 1.0);
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFB7, 1.0);
              *(float *)&v108.m_dataLen = (float)(int)v111;
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFAB, *(float *)&v108.m_dataLen);
              v50 = fConstant_2;
              v111 = (_DWORD *)((char *)v111 + 1);
              *(float *)&v108.m_dataLen = v50;
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFA1, *(float *)&v108.m_dataLen);
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFA7, *(float *)&v113);
              v117 = (_DWORD *)((v109 != 0) + 1);
              *(float *)&v108.m_dataLen = (float)(int)v117;
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFB8, *(float *)&v108.m_dataLen);
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFB9, fConstant_2);
              Tile_SetFloat((Tile *)v45, (_DWORD *)0xFBA, 1.0);
              v126 = 0xFFFFFFFF;
              FormHeapFree((unsigned int)v49);
              a2.m_data = 0;
              *(_DWORD *)&a2.m_dataLen = 0;
            }
          }
          if ( *(float *)&v115 == 0.0 )
            break;
          v37 = v115;
        }
      }
      v51 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      if ( TESDataHandler_g_PlayerRef->unk638 )
      {
        if ( *(float *)&v110 == 0.0 )
        {
          v53 = Menu_CreateTileFromTemplate(a3, st5_0, st6_0, a4, (TileWindow *)v114, "hudmain_compass_icon", 0);
          v51 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
          v52 = (BSStringT *)v53;
        }
        else
        {
          v52 = (BSStringT *)v110[2];
          v110 = *(_DWORD **)v110;
        }
        if ( v52 )
        {
          refID = v51[0x12].member.super.refID;
          if ( refID )
          {
            v55 = (*(int (__usercall **)@<eax>(UInt32@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)refID + 0x174))(
                    refID,
                    a4,
                    st6_0,
                    st5_0);
            v56 = *(_DWORD **)v55;
            v57 = *(_DWORD **)(v55 + 4);
            v58 = *(_DWORD **)(v55 + 8);
            v51 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
            v119 = v56;
            v120[0] = v57;
            v120[1] = v58;
          }
          else
          {
            v59 = sub_5A5790(v51, v121);
            v60 = (_DWORD *)v59[1];
            v119 = (_DWORD *)*v59;
            v61 = (_DWORD *)v59[2];
            v120[0] = v60;
            v120[1] = v61;
          }
          v62 = TESObjectREFR_GetParentCell(v51);
          *(double *)v121 = sub_4CCE00((ExtraDataList *)v62) * dbl_A30DC8;
          v63 = sub_5A62D0((float *)&v122, (float *)&v119);
          a4 = v63 + *(double *)v121;
          a2.m_data = 0;
          *(_DWORD *)&a2.m_dataLen = 0;
          *(float *)&v117 = a4;
          v126 = 2;
          BSStringT_Static_Format(&a2, "player_target_%i", v38 + 1);
          *(float *)&v116 = COERCE_FLOAT(&v108);
          BSStringT_constr_BSStringT(&v108, (const char **)&a2.m_data);
          sub_58A020(v52, v108.m_data, *(int *)&v108.m_dataLen);
          Tile_SetFloat((Tile *)v52, (_DWORD *)0xFAE, *(float *)&v117);
          Tile_SetFloat((Tile *)v52, (_DWORD *)0xFB3, flt_A6BF7C);
          Tile_SetFloat((Tile *)v52, (_DWORD *)0xFB4, fConstant_2);
          Tile_SetFloat((Tile *)v52, (_DWORD *)0xFB7, 1.0);
          *(float *)&v108.m_dataLen = (float)(int)v111;
          Tile_SetFloat((Tile *)v52, (_DWORD *)0xFAB, *(float *)&v108.m_dataLen);
          v64 = fConstant_2;
          v111 = (_DWORD *)((char *)v111 + 1);
          *(float *)&v108.m_dataLen = v64;
          Tile_SetFloat((Tile *)v52, (_DWORD *)0xFA1, *(float *)&v108.m_dataLen);
          Tile_SetFloat((Tile *)v52, (_DWORD *)0xFB9, 1.0);
          Tile_SetFloat((Tile *)v52, (_DWORD *)0xFBA, fConstant_2);
          v126 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)a2.m_data);
        }
      }
      v65 = (Tile *)a3[0x11];
      *(float *)&v108.m_dataLen = (float)(int)v111;
      Tile_SetFloat(v65, (_DWORD *)0xFAF, *(float *)&v108.m_dataLen);
      if ( *(float *)&v110 != 0.0 )
      {
        v66 = v110;
        do
        {
          v67 = (Tile *)v66[2];
          v66 = (_DWORD *)*v66;
          Tile_SetFloat(v67, (_DWORD *)0xFA1, 1.0);
        }
        while ( v66 );
      }
    }
    v109 = *((_BYTE *)a3 + 0x90);
    if ( v109 )
    {
      v68 = 0;
      if ( a3[0x21] )
      {
        v69 = a3;
        do
        {
          if ( !*((_BYTE *)v69 + 0x90) )
            break;
          if ( Tile_GetFloat((_DWORD *)**(_DWORD **)(v69[0x1F] + 4 * v68), 0xFA7) == *(float *)&SrcStr )
          {
            v70 = (*(int (__thiscall **)(_DWORD *, unsigned int))(v69[0x1E] + 4))(v69 + 0x1E, v68);
            FormHeapFree(v70);
            --*((_BYTE *)v69 + 0x90);
          }
          ++v68;
        }
        while ( v68 < v69[0x21] );
      }
      v71 = a3;
      if ( v109 - *((unsigned __int8 *)a3 + 0x90) > 0 )
      {
        sub_5A56F0(a3 + 0x1E);
        for ( i = 0; (unsigned int)i < v71[0x21]; ++i )
        {
          v73 = **(Tile ***)(v71[0x1F] + 4 * i);
          v117 = (_DWORD *)i;
          v74 = (double)i;
          if ( i < 0 )
            v74 = v74 + flt_A2FC78;
          *(float *)&v108.m_dataLen = v74;
          Tile_SetFloat(v73, (_DWORD *)0xFAE, *(float *)&v108.m_dataLen);
        }
      }
    }
    v75 = a3;
    if ( a3[0x1D] )
    {
      if ( GetTickCount() >= v75[0x1D] )
      {
        v126 = 3;
        *(float *)&v122 = 0.0;
        *(float *)&v123 = 0.0;
        *(float *)&v124 = 0.0;
        v125 = 0;
        sub_5A64B0((int)&v122);
        v126 = 0xFFFFFFFF;
        FormHeapFree(0);
      }
    }
    if ( Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 8) >= dbl_A2FC68 )
      AVModifierf = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 8);
    else
      AVModifierf = 0.0;
    *(float *)&v110 = AVModifierf;
    *(float *)&v117 = COERCE_FLOAT(Actor_GetBaseCalcAVi(8));
    v78 = (double)(int)v117 + *(float *)&v110;
    v79 = v78 > 0.0;
    v80 = 0.0 == v78;
    v81 = 0.0;
    if ( v79 || v80 )
    {
      *(float *)&v117 = COERCE_FLOAT(Actor_GetBaseCalcAVi(8));
      v81 = (double)(int)v117 + *(float *)&v110;
    }
    *(float *)&v110 = v81;
    if ( 0.0 != *(float *)&v110 )
    {
      if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Health) >= 0 )
        *(float *)&v115 = COERCE_FLOAT(
                            TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                              (Actor *)TESDataHandler_g_PlayerRef,
                              kActorVal_Health));
      else
        *(float *)&v115 = 0.0;
      *(float *)&v110 = (double)(int)v115 / *(float *)&v110;
    }
    *(_DWORD *)&v108.m_dataLen = v77;
    Tile_SetFloat((Tile *)v75[0xB], (_DWORD *)0xFAE, *(float *)&v110);
    if ( Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 9) >= dbl_A2FC68 )
      v82 = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 9);
    else
      v82 = 0.0;
    *(float *)&v110 = v82;
    *(float *)&v117 = COERCE_FLOAT(Actor_GetBaseCalcAVi(9));
    v84 = (double)(int)v117 + *(float *)&v110;
    v85 = v84 > 0.0;
    v86 = 0.0 == v84;
    v87 = 0.0;
    if ( v85 || v86 )
    {
      *(float *)&v117 = COERCE_FLOAT(Actor_GetBaseCalcAVi(9));
      v87 = (double)(int)v117 + *(float *)&v110;
    }
    *(float *)&v110 = v87;
    if ( 0.0 != *(float *)&v110 )
    {
      if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Magicka) >= 0 )
        *(float *)&v115 = COERCE_FLOAT(
                            TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                              (Actor *)TESDataHandler_g_PlayerRef,
                              kActorVal_Magicka));
      else
        *(float *)&v115 = 0.0;
      *(float *)&v110 = (double)(int)v115 / *(float *)&v110;
    }
    *(_DWORD *)&v108.m_dataLen = v83;
    Tile_SetFloat((Tile *)v75[0xC], (_DWORD *)0xFAE, *(float *)&v110);
    if ( Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 0xA) >= dbl_A2FC68 )
      v88 = Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 0xA);
    else
      v88 = 0.0;
    *(float *)&v110 = v88;
    *(float *)&v117 = COERCE_FLOAT(Actor_GetBaseCalcAVi(0xA));
    v90 = (double)(int)v117 + *(float *)&v110;
    v91 = v90 > 0.0;
    v92 = 0.0 == v90;
    v93 = 0.0;
    if ( v91 || v92 )
    {
      *(float *)&v117 = COERCE_FLOAT(Actor_GetBaseCalcAVi(0xA));
      v93 = (double)(int)v117 + *(float *)&v110;
    }
    *(float *)&v110 = v93;
    if ( 0.0 != *(float *)&v110 )
    {
      if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Fatigue) >= 0 )
        *(float *)&v115 = COERCE_FLOAT(
                            TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                              (Actor *)TESDataHandler_g_PlayerRef,
                              kActorVal_Fatigue));
      else
        *(float *)&v115 = 0.0;
      *(float *)&v110 = (double)(int)v115 / *(float *)&v110;
    }
    *(_DWORD *)&v108.m_dataLen = v89;
    Tile_SetFloat((Tile *)v75[0xD], (_DWORD *)0xFAE, *(float *)&v110);
    v94 = TESDataHandler_g_PlayerRef;
    *(float *)&v110 = flt_A2FE7C;
    v95 = (void **)((int (__usercall *)@<eax>(LowProcess *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))v94->super.super.super.process->GetEquippedWeaponData)(
                     v94->super.super.super.process,
                     1,
                     a4,
                     st6_0,
                     st5_0);
    v97 = v95;
    if ( v95 )
      *(float *)&v110 = ContainerEntryExtraData_GetHealth(v95, 1);
    *(_DWORD *)&v108.m_dataLen = v96;
    Tile_SetFloat((Tile *)v75[0xE], (_DWORD *)0xFB0, *(float *)&v110);
    v98 = TESDataHandler_g_PlayerRef;
    *(float *)&v110 = 0.0;
    v99 = (Sky *)v98->super.super.super.process->GetEquippedAmmoData(v98->super.super.super.process, 1);
    if ( v99 )
    {
      if ( v97 )
      {
        v101 = v97[2];
        if ( v101 )
        {
          if ( v101[0x90] == 5 )
          {
            *(float *)&v117 = COERCE_FLOAT(TESHealthForm_GetHealth(v99));
            *(float *)&v110 = (float)(int)v117;
          }
        }
      }
    }
    *(_DWORD *)&v108.m_dataLen = v100;
    Tile_SetFloat((Tile *)v75[0xE], (_DWORD *)0xFB1, *(float *)&v110);
    v102 = TESDataHandler_g_PlayerRef;
    vtbl = TESDataHandler_g_PlayerRef->super.super.magicCaster.vtbl;
    *(_DWORD *)&v108.m_dataLen = 0;
    v108.m_data = 0;
    CurrentMagicItem = Player_GetCurrentMagicItem(v102);
    v105 = vtbl->IsMagicItemUsable(
             &TESDataHandler_g_PlayerRef->super.super.magicCaster,
             (MagicItem *)CurrentMagicItem,
             0,
             (UInt32 *)v108.m_data,
             *(_DWORD *)&v108.m_dataLen);
    *(_DWORD *)&v108.m_dataLen = v106;
    v107 = (Tile *)v75[0xF];
    v117 = (_DWORD *)(2 - !v105);
    *(float *)&v108.m_dataLen = (float)(int)v117;
    Tile_SetFloat(v107, (_DWORD *)0xFB0, *(float *)&v108.m_dataLen);
  }
}
