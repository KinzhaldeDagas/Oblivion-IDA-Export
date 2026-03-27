void __usercall sub_5B4E10(
        double a1@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  Tile *OpenMenuTile; // eax
  Tile *v9; // ebx
  void *ParentMenu; // eax
  char *v11; // esi
  _BYTE *v12; // edi
  unsigned __int8 *v13; // eax
  Tile *v14; // ecx
  Tile **v15; // edi
  const char *v16; // eax
  int v17; // eax
  ExtraDataList *v18; // ecx
  BSExtraData *ExtraData; // eax
  char *v20; // eax
  int v21; // eax
  const char *v22; // edi
  const char *v23; // eax
  char *v24; // edi
  _DWORD *v25; // ecx
  double v26; // st7
  Tile *v27; // ecx
  double v28; // st7
  void *v29; // eax
  Tile *v30; // ecx
  Tile **v31; // edi
  int v32; // ebx
  int v33; // eax
  Tile **v34; // edi
  int v35; // ebx
  const char *v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  char **v41; // eax
  Tile *v42; // ecx
  double v43; // st7
  _DWORD *v44; // ecx
  double v45; // st7
  Tile *v46; // ecx
  int v47; // eax
  char *v48; // eax
  Tile *v49; // ecx
  Tile **v50; // edi
  const char *v51; // edi
  const char **v52; // eax
  const char *v53; // eax
  unsigned __int8 *v54; // edi
  _DWORD *v55; // ecx
  double Float; // st7
  Tile *v57; // ecx
  double v58; // st7
  Tile *v59; // ecx
  char **v60; // eax
  char *v61; // eax
  BSExtraDataVtbl *v62; // eax
  bool (__thiscall **p_CompareTo)(BSExtraData *, BSExtraData *); // edi
  Tile **v64; // ebx
  const char *v65; // eax
  BSExtraDataVtbl *v66; // eax
  int v67; // eax
  char **DisplayText; // eax
  Tile *v69; // ecx
  Tile **v70; // edi
  int v71; // ebx
  Tile *v72; // ecx
  Tile *v73; // edi
  _DWORD *v74; // ecx
  double v75; // st7
  Tile *v76; // ecx
  double v77; // st7
  char *v78; // [esp+0h] [ebp-278h]
  float a2a; // [esp+18h] [ebp-260h]
  float a2b; // [esp+18h] [ebp-260h]
  float a2c; // [esp+18h] [ebp-260h]
  _DWORD *a2d; // [esp+18h] [ebp-260h]
  _DWORD *a2; // [esp+18h] [ebp-260h]
  float a2e; // [esp+18h] [ebp-260h]
  float a2f; // [esp+18h] [ebp-260h]
  float a2g; // [esp+18h] [ebp-260h]
  char *a2h; // [esp+18h] [ebp-260h]
  float a2i; // [esp+18h] [ebp-260h]
  _DWORD *v89; // [esp+1Ch] [ebp-25Ch]
  _DWORD *v90; // [esp+1Ch] [ebp-25Ch]
  _DWORD *v91; // [esp+20h] [ebp-258h]
  double v92; // [esp+24h] [ebp-254h]
  Tile *v93; // [esp+2Ch] [ebp-24Ch]
  unsigned __int8 *a3; // [esp+30h] [ebp-248h]
  int a3a; // [esp+30h] [ebp-248h]
  int a3b; // [esp+30h] [ebp-248h]
  unsigned __int8 *v97[2]; // [esp+34h] [ebp-244h] BYREF
  double v98; // [esp+3Ch] [ebp-23Ch]
  Tile *v99; // [esp+44h] [ebp-234h]
  double v100; // [esp+48h] [ebp-230h] BYREF
  int v101[2]; // [esp+50h] [ebp-228h] BYREF
  int v102; // [esp+58h] [ebp-220h] BYREF
  int v103; // [esp+5Ch] [ebp-21Ch]
  int v104[65]; // [esp+60h] [ebp-218h] BYREF
  char v105[248]; // [esp+164h] [ebp-114h] BYREF
  unsigned int v106; // [esp+25Ch] [ebp-1Ch]
  float v107; // [esp+268h] [ebp-10h]
  float v108; // [esp+26Ch] [ebp-Ch]
  float v109; // [esp+270h] [ebp-8h]
  int v110; // [esp+274h] [ebp-4h]

  LODWORD(v98) = a4;
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x400);
  v9 = OpenMenuTile;
  v99 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    if ( a4 )
    {
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
      v11 = (char *)OblivionDynamicCast(
                      ParentMenu,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                      &MagicPopupMenu `RTTI Type Descriptor',
                      0);
      if ( v11 )
      {
        v12 = *(_BYTE **)(a4 + 8);
        switch ( v12[4] )
        {
          case 0x14:
            v48 = (char *)OblivionDynamicCast(
                            v12,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESObjectARMO `RTTI Type Descriptor',
                            0);
            v49 = *((Tile **)v11 + 0xB);
            a2e = fConstant_2;
            LODWORD(v100) = v48;
            *((_DWORD *)v11 + 0x16) = 1;
            Tile_SetFloat(v49, (_DWORD *)0xFA1, a2e);
            v50 = (Tile **)(v11 + 0x30);
            LODWORD(v98) = 7;
            do
            {
              Tile_SetFloat(*v50++, (_DWORD *)0xFA1, 1.0);
              --LODWORD(v98);
            }
            while ( LODWORD(v98) );
            _sprintf((char *)v104, "%s\\%s", "Icons", "icon_small_armor.dds");
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAF, (char *)v104);
            Tile_SetFloat(*((Tile **)v11 + 0xB), (_DWORD *)0xFB0, flt_A2FE7C);
            v97[0] = 0;
            v97[1] = 0;
            v51 = (const char *)dword_B38BE8;
            v110 = 4;
            v52 = *(const char ***)(4 * (unsigned __int8)TESObjectARMO_ISHeavyArmor((_BYTE *)LODWORD(v100)) + 0xB084E8);
            if ( v52 )
              v53 = *v52;
            else
              v53 = 0;
            BSStringT_Static_Format((BSStringT *)v97, "%s %s", v53, v51);
            v54 = v97[0];
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAE, (char *)v97[0]);
            Tile_SetFloat(v9, (_DWORD *)0xFAE, a6);
            Tile_SetFloat(v9, (_DWORD *)0xFAF, a7);
            Tile_SetFloat(v9, (_DWORD *)0xFB1, a8);
            v55 = *((_DWORD **)v11 + 0xA);
            *((float *)v11 + 0x14) = a5;
            v100 = a5;
            Float = Tile_GetFloat(v55, 0xFCB);
            v57 = *((Tile **)v11 + 0xA);
            *(float *)&v100 = v100 - Float;
            v58 = *(float *)&v100;
            *((float *)v11 + 0x15) = *(float *)&v100;
            a2f = v58;
            Tile_SetFloat(v57, (_DWORD *)0xFAD, a2f);
            st7_0 = 1.0;
            Tile_SetFloat(*((Tile **)v11 + 0x13), (_DWORD *)0xFA1, 1.0);
            v110 = 0xFFFFFFFF;
            FormHeapFree((unsigned int)v54);
            break;
          case 0x21:
            v59 = *((Tile **)v11 + 0xB);
            a2g = fConstant_2;
            *((_DWORD *)v11 + 0x16) = 1;
            Tile_SetFloat(v59, (_DWORD *)0xFA1, a2g);
            _sprintf(v105, "%s\\%s", "Icons", "icon_small_damage.dds");
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAF, v105);
            Tile_SetFloat(*((Tile **)v11 + 0xB), (_DWORD *)0xFB0, flt_A2FE7C);
            v60 = *(char ***)(4 * (char)v12[0x90] + 0xB39A44);
            if ( v60 )
              v61 = *v60;
            else
              v61 = 0;
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAE, v61);
            a3b = 1;
            v62 = sub_484DF0((ExtraDataList ***)LODWORD(v98));
            if ( !v62 )
              goto LABEL_59;
            p_CompareTo = &v62[6].CompareTo;
            if ( v62 == (BSExtraDataVtbl *)0xFFFFFFCC )
              goto LABEL_59;
            v64 = (Tile **)(v11 + 0x30);
            do
            {
              if ( !*p_CompareTo )
                break;
              if ( a3b >= 8 )
                goto LABEL_61;
              v65 = *(const char **)(*((_DWORD *)*p_CompareTo + 7) + 0x48);
              if ( !v65 )
                v65 = EmptyString;
              _sprintf(v105, "%s\\%s", "Icons", v65);
              Tile_SetFloat(*v64, (_DWORD *)0xFA1, fConstant_2);
              Tile_SetString(*v64, (_DWORD *)0xFAF, v105);
              v66 = sub_484DF0((ExtraDataList ***)LODWORD(v98));
              v67 = v66 ? (int)&v66[4].CompareTo : 0;
              DisplayText = (char **)EffectItem_GetDisplayText((int)&v102, v67, 1.0);
              v69 = *v64;
              a2h = *DisplayText;
              v110 = 5;
              Tile_SetString(v69, (_DWORD *)0xFAE, a2h);
              v110 = 0xFFFFFFFF;
              FormHeapFree(v102);
              ++a3b;
              v102 = 0;
              v103 = 0;
              p_CompareTo = (bool (__thiscall **)(BSExtraData *, BSExtraData *))p_CompareTo[1];
              ++v64;
            }
            while ( p_CompareTo );
            if ( a3b < 8 )
            {
LABEL_59:
              v70 = (Tile **)&v11[4 * a3b + 0x2C];
              v71 = 8 - a3b;
              do
              {
                v72 = *v70++;
                Tile_SetFloat(v72, (_DWORD *)0xFA1, 1.0);
                --v71;
              }
              while ( v71 );
            }
LABEL_61:
            v73 = v99;
            Tile_SetFloat(v99, (_DWORD *)0xFAE, a6);
            Tile_SetFloat(v99, (_DWORD *)0xFAF, a7);
            Tile_SetFloat(v99, (_DWORD *)0xFB1, a8);
            v74 = *((_DWORD **)v11 + 0xA);
            *((float *)v11 + 0x14) = a5;
            *(double *)v97 = a5;
            v75 = Tile_GetFloat(v74, 0xFCB);
            v76 = *((Tile **)v11 + 0xA);
            *(float *)&v100 = a5 - v75;
            v77 = *(float *)&v100;
            *((float *)v11 + 0x15) = *(float *)&v100;
            a2i = v77;
            Tile_SetFloat(v76, (_DWORD *)0xFAD, a2i);
            st7_0 = 1.0;
            Tile_SetFloat(*((Tile **)v11 + 0x13), (_DWORD *)0xFA1, 1.0);
            v9 = v73;
            break;
          case 0x26:
            v13 = (unsigned __int8 *)OblivionDynamicCast(
                                       v12,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                       &TESSoulGem `RTTI Type Descriptor',
                                       0);
            v14 = *((Tile **)v11 + 0xB);
            a2a = fConstant_2;
            a3 = v13;
            *((_DWORD *)v11 + 0x16) = 1;
            Tile_SetFloat(v14, (_DWORD *)0xFA1, a2a);
            v15 = (Tile **)(v11 + 0x30);
            v99 = (Tile *)7;
            do
            {
              Tile_SetFloat(*v15++, (_DWORD *)0xFA1, 1.0);
              v99 = (Tile *)((char *)v99 + 0xFFFFFFFF);
            }
            while ( v99 );
            v16 = *((const char **)a3 + 0x13);
            if ( !v16 )
              v16 = EmptyString;
            _sprintf((char *)v104, "%s\\%s", "Icons", v16);
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAF, (char *)v104);
            Tile_SetFloat(*((Tile **)v11 + 0xB), (_DWORD *)0xFB0, flt_A30634);
            v97[0] = 0;
            v97[1] = 0;
            v110 = 0;
            BSStringT_Static_Format((BSStringT *)v97, "magicpop_effect_%d_icon", 1);
            v17 = sub_589930(*((_DWORD **)v11 + 0xB), v97[0]);
            if ( v17 )
              *(_DWORD *)(v17 + 0x2C) |= 0x10u;
            if ( *(_DWORD *)LODWORD(v98) )
              v18 = **(ExtraDataList ***)LODWORD(v98);
            else
              v18 = 0;
            if ( v18 )
            {
              ExtraData = BaseExtraList_GetExtraData(v18, kExtraData_Soul);
              v20 = (char *)OblivionDynamicCast(
                              ExtraData,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                              &ExtraSoul `RTTI Type Descriptor',
                              0);
            }
            else
            {
              v20 = 0;
            }
            v100 = 0.0;
            LOBYTE(v110) = 1;
            if ( v20 )
              v21 = v20[0xC];
            else
              v21 = a3[0x70];
            v22 = *(const char **)sCurrentSoul;
            v23 = (const char *)sub_4BC020(v21);
            BSStringT_Static_Format((BSStringT *)&v100, "%s: %s", v22, v23);
            v24 = (char *)LODWORD(v100);
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAE, (char *)LODWORD(v100));
            Tile_SetFloat(v9, (_DWORD *)0xFAE, a6);
            Tile_SetFloat(v9, (_DWORD *)0xFAF, a7);
            Tile_SetFloat(v9, (_DWORD *)0xFB1, a8);
            v25 = *((_DWORD **)v11 + 0xA);
            *((float *)v11 + 0x14) = a5;
            v98 = a5;
            v26 = Tile_GetFloat(v25, 0xFCB);
            v27 = *((Tile **)v11 + 0xA);
            *(float *)&v98 = v98 - v26;
            v28 = *(float *)&v98;
            *((float *)v11 + 0x15) = *(float *)&v98;
            a2b = v28;
            Tile_SetFloat(v27, (_DWORD *)0xFAD, a2b);
            st7_0 = 1.0;
            Tile_SetFloat(*((Tile **)v11 + 0x13), (_DWORD *)0xFA1, 1.0);
            FormHeapFree((unsigned int)v24);
            v110 = 0xFFFFFFFF;
            FormHeapFree((unsigned int)v97[0]);
            break;
          case 0x2A:
            v29 = OblivionDynamicCast(
                    v12,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESSigilStone `RTTI Type Descriptor',
                    0);
            v30 = *((Tile **)v11 + 0xB);
            a2c = fConstant_2;
            LODWORD(v98) = v29;
            *((_DWORD *)v11 + 0x16) = 1;
            Tile_SetFloat(v30, (_DWORD *)0xFA1, a2c);
            v31 = (Tile **)(v11 + 0x30);
            v32 = 7;
            do
            {
              st7_0 = 1.0;
              Tile_SetFloat(*v31++, (_DWORD *)0xFA1, 1.0);
              --v32;
            }
            while ( v32 );
            if ( LODWORD(v98) )
            {
              v33 = LODWORD(v98) + 0x78;
              a3a = LODWORD(v98) + 0x78;
            }
            else
            {
              a3a = 0;
              v33 = 0;
            }
            LODWORD(v98) = 0;
            v34 = (Tile **)(v11 + 0x2C);
            while ( v33 )
            {
              v35 = *(_DWORD *)(v33 + 4);
              v36 = *(const char **)(*(_DWORD *)(v35 + 0x1C) + 0x48);
              if ( !v36 )
                v36 = EmptyString;
              _sprintf((char *)v104, "%s\\%s", "Icons", v36);
              Tile_SetString(*v34, (_DWORD *)0xFAF, (char *)v104);
              Tile_SetFloat(*v34, (_DWORD *)0xFB0, flt_A30634);
              v97[0] = 0;
              v97[1] = 0;
              v110 = 2;
              LODWORD(v100) = LODWORD(v98) + 1;
              BSStringT_Static_Format((BSStringT *)v97, "magicpop_effect_%d_icon", LODWORD(v98) + 1);
              v37 = sub_589930(*v34, v97[0]);
              if ( v37 )
                *(_DWORD *)(v37 + 0x2C) |= 0x10u;
              Tile_SetFloat(*v34, (_DWORD *)0xFA1, fConstant_2);
              v38 = *(_DWORD *)(v35 + 0x10);
              LOBYTE(v39) = v38 == 1;
              LOBYTE(v40) = v38 == 0;
              v41 = (char **)EffectItem_BuildDisplayString(
                               (int)v101,
                               6,
                               COERCE_INT(1.0),
                               v40,
                               0,
                               v39,
                               (int)v89,
                               (int)v91,
                               SLODWORD(v92),
                               SHIDWORD(v92),
                               (int)v93,
                               a3a,
                               (int)v97[0],
                               (int)v97[1],
                               SLODWORD(v98),
                               SHIDWORD(v98),
                               (int)v99,
                               SLODWORD(v100),
                               SHIDWORD(v100),
                               v101[0],
                               v101[1],
                               v102,
                               v103,
                               v104[0],
                               v104[1],
                               v104[2],
                               v104[3],
                               v104[4],
                               v104[5],
                               v104[6],
                               v104[7],
                               v104[8],
                               v104[9],
                               v104[0xA],
                               v104[0xB],
                               v104[0xC],
                               v104[0xD],
                               v104[0xE],
                               v104[0xF]);
              v42 = *v34;
              v78 = *v41;
              LOBYTE(v106) = 3;
              Tile_SetString(v42, (_DWORD *)0xFAE, v78);
              LOBYTE(v106) = 2;
              FormHeapFree((unsigned int)v97[1]);
              v9 = v93;
              v97[1] = 0;
              LODWORD(v98) = 0;
              Tile_SetFloat(v93, (_DWORD *)0xFAE, v108);
              Tile_SetFloat(v93, (_DWORD *)0xFAF, v109);
              Tile_SetFloat(v93, (_DWORD *)0xFB1, *(float *)&v110);
              v43 = v107;
              v44 = *((_DWORD **)v11 + 0xA);
              *((float *)v11 + 0x14) = v107;
              v92 = v43;
              v45 = Tile_GetFloat(v44, 0xFCB);
              v46 = *((Tile **)v11 + 0xA);
              *(float *)&v92 = v92 - v45;
              *((float *)v11 + 0x15) = *(float *)&v92;
              Tile_SetFloat(v46, (_DWORD *)0xFAD, *(float *)&v92);
              st7_0 = 1.0;
              Tile_SetFloat(*((Tile **)v11 + 0x13), (_DWORD *)0xFA1, 1.0);
              v47 = a2d[2];
              if ( v47 )
                a2 = (_DWORD *)(v47 - 4);
              else
                a2 = 0;
              v106 = 0xFFFFFFFF;
              FormHeapFree((unsigned int)v90);
              ++v34;
              v89 = 0;
              v91 = 0;
              LODWORD(v92) = a3a;
              if ( a3a >= 8 )
                goto LABEL_63;
              v33 = (int)a2;
            }
            v9 = v99;
            break;
          default:
            break;
        }
LABEL_63:
        sub_58FBA0((int)v9, a1, st6_0, st7_0, 0);
      }
    }
  }
}
