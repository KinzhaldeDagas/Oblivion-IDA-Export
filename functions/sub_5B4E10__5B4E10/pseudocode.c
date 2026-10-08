// AchievementsNative evidence: MagicPopupMenu builder for armor/soul/sigil/simple item popups. Same position semantics as 0x5B4230 where observed: root user0/source Y, user1/bottom margin, user3/depth, exposed-X-driven background slide.
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

  LODWORD(v98) = a4; /*0x5b4e57*/
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x400); /*0x5b4e5b*/
  v9 = OpenMenuTile; /*0x5b4e60*/
  v99 = OpenMenuTile; /*0x5b4e69*/
  if ( OpenMenuTile )
  {
    if ( a4 )
    {
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5b4e89*/
      v11 = (char *)OblivionDynamicCast( /*0x5b4e94*/
                      ParentMenu,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                      &MagicPopupMenu `RTTI Type Descriptor',
                      0);
      if ( v11 )
      {
        v12 = *(_BYTE **)(a4 + 8); /*0x5b4ea1*/
        switch ( v12[4] )
        {
          case 0x14:
            v48 = (char *)OblivionDynamicCast( /*0x5b5399*/
                            v12,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                            &TESObjectARMO `RTTI Type Descriptor',
                            0);
            v49 = *((Tile **)v11 + 0xB); /*0x5b53a4*/
            a2e = fConstant_2; /*0x5b53a7*/
            LODWORD(v100) = v48; /*0x5b53b3*/
            *((_DWORD *)v11 + 0x16) = 1; /*0x5b53b7*/
            Tile_SetFloat(v49, (_DWORD *)0xFA1, a2e); /*0x5b53be*/
            v50 = (Tile **)(v11 + 0x30); /*0x5b53c3*/
            LODWORD(v98) = 7; /*0x5b53c6*/
            do /*0x5b53e8*/
            {
              Tile_SetFloat(*v50++, (_DWORD *)0xFA1, 1.0); /*0x5b53db*/
              --LODWORD(v98); /*0x5b53e3*/
            }
            while ( LODWORD(v98) ); /*0x5b53e8*/
            _sprintf((char *)v104, "%s\\%s", "Icons", "icon_small_armor.dds"); /*0x5b53fe*/
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAF, (char *)v104); /*0x5b5413*/
            Tile_SetFloat(*((Tile **)v11 + 0xB), (_DWORD *)0xFB0, flt_A2FE7C); /*0x5b542a*/
            v97[0] = 0; /*0x5b542f*/
            v97[1] = 0; /*0x5b5433*/
            v51 = (const char *)stru_B38BE8; /*0x5b5441*/
            v110 = 4; /*0x5b5447*/
            v52 = *(const char ***)(4 * (unsigned __int8)TESObjectARMO_ISHeavyArmor((_BYTE *)LODWORD(v100)) + 0xB084E8);// Medium Armor MagicPopup decode: simple-armor label path calls TESObjectARMO_IsHeavyArmor here; plugin captures armor context but preserves native boolean. /*0x5b545a*/
            if ( v52 ) /*0x5b5463*/
              v53 = *v52; /*0x5b5465*/
            else
              v53 = 0; /*0x5b5469*/
            BSStringT_Static_Format((BSStringT *)v97, "%s %s", v53, v51); /*0x5b5477*/
            v54 = v97[0]; /*0x5b547c*/
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAE, (char *)v97[0]);// Medium Armor MagicPopup decode: final simple-armor Tile_SetString label write; replace Light/Heavy text with Medium only for effective Medium classification. /*0x5b548c*/
            Tile_SetFloat(v9, (_DWORD *)0xFAE, a6); /*0x5b54a3*/
            Tile_SetFloat(v9, (_DWORD *)0xFAF, a7); /*0x5b54ba*/
            Tile_SetFloat(v9, (_DWORD *)0xFB1, a8); /*0x5b54d1*/
            v55 = *((_DWORD **)v11 + 0xA); /*0x5b54dd*/
            *((float *)v11 + 0x14) = a5; /*0x5b54e0*/
            v100 = a5; /*0x5b54e8*/
            Float = Tile_GetFloat(v55, 0xFCB); /*0x5b54ec*/
            v57 = *((Tile **)v11 + 0xA); /*0x5b54f6*/
            *(float *)&v100 = v100 - Float; /*0x5b54f9*/
            v58 = *(float *)&v100; /*0x5b54fd*/
            *((float *)v11 + 0x15) = *(float *)&v100; /*0x5b5501*/
            a2f = v58; /*0x5b5504*/
            Tile_SetFloat(v57, (_DWORD *)0xFAD, a2f); /*0x5b550c*/
            st7_0 = 1.0; /*0x5b5511*/
            Tile_SetFloat(*((Tile **)v11 + 0x13), (_DWORD *)0xFA1, 1.0); /*0x5b5521*/
            v110 = 0xFFFFFFFF; /*0x5b5527*/
            FormHeapFree((unsigned int)v54); /*0x5b5532*/
            break; /*0x5b553a*/
          case 0x21:
            v59 = *((Tile **)v11 + 0xB); /*0x5b553f*/
            a2g = fConstant_2; /*0x5b5549*/
            *((_DWORD *)v11 + 0x16) = 1; /*0x5b5556*/
            Tile_SetFloat(v59, (_DWORD *)0xFA1, a2g); /*0x5b5559*/
            _sprintf(v105, "%s\\%s", "Icons", "icon_small_damage.dds"); /*0x5b5575*/
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAF, v105); /*0x5b558d*/
            Tile_SetFloat(*((Tile **)v11 + 0xB), (_DWORD *)0xFB0, flt_A2FE7C); /*0x5b55a4*/
            v60 = *(char ***)(4 * (char)v12[0x90] + 0xB39A44); /*0x5b55b0*/
            if ( v60 ) /*0x5b55b9*/
              v61 = *v60; /*0x5b55bb*/
            else
              v61 = 0; /*0x5b55bf*/
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAE, v61); /*0x5b55ca*/
            a3b = 1; /*0x5b55d3*/
            v62 = EquippedEntryData_GetPoison((ExtraDataList ***)LODWORD(v98)); /*0x5b55d7*/
            if ( !v62 ) /*0x5b55de*/
              goto LABEL_59; /*0x5b55de*/
            p_CompareTo = &v62[6].CompareTo; /*0x5b55e4*/
            if ( v62 == (BSExtraDataVtbl *)0xFFFFFFCC ) /*0x5b55e9*/
              goto LABEL_59; /*0x5b55e9*/
            v64 = (Tile **)(v11 + 0x30); /*0x5b55ef*/
            do
            {
              if ( !*p_CompareTo ) /*0x5b55f2*/
                break; /*0x5b55f6*/
              if ( a3b >= 8 ) /*0x5b5601*/
                goto LABEL_61; /*0x5b5601*/
              v65 = *(const char **)(*((_DWORD *)*p_CompareTo + 7) + 0x48); /*0x5b560a*/
              if ( !v65 ) /*0x5b560f*/
                v65 = EmptyString; /*0x5b5611*/
              _sprintf(v105, "%s\\%s", "Icons", v65); /*0x5b5629*/
              Tile_SetFloat(*v64, (_DWORD *)0xFA1, fConstant_2); /*0x5b5642*/
              Tile_SetString(*v64, (_DWORD *)0xFAF, v105); /*0x5b5656*/
              v66 = EquippedEntryData_GetPoison((ExtraDataList ***)LODWORD(v98)); /*0x5b565f*/
              v67 = v66 ? (int)&v66[4].CompareTo : 0;
              DisplayText = (char **)EffectItem_GetDisplayText((int)&v102, v67, 1.0); /*0x5b567d*/
              v69 = *v64; /*0x5b5684*/
              a2h = *DisplayText; /*0x5b5686*/
              v110 = 5; /*0x5b568c*/
              Tile_SetString(v69, (_DWORD *)0xFAE, a2h); /*0x5b5697*/
              v110 = 0xFFFFFFFF; /*0x5b56a1*/
              FormHeapFree(v102); /*0x5b56ac*/
              ++a3b; /*0x5b56b1*/
              v102 = 0; /*0x5b56b6*/
              v103 = 0; /*0x5b56bf*/
              p_CompareTo = (bool (__thiscall **)(BSExtraData *, BSExtraData *))p_CompareTo[1]; /*0x5b56c4*/
              ++v64; /*0x5b56ca*/
            }
            while ( p_CompareTo );
            if ( a3b < 8 ) /*0x5b56da*/
            {
LABEL_59:
              v70 = (Tile **)&v11[4 * a3b + 0x2C]; /*0x5b56e5*/
              v71 = 8 - a3b; /*0x5b56e9*/
              do /*0x5b5703*/
              {
                v72 = *v70++; /*0x5b56eb*/
                Tile_SetFloat(v72, (_DWORD *)0xFA1, 1.0); /*0x5b56fb*/
                --v71; /*0x5b5700*/
              }
              while ( v71 ); /*0x5b5703*/
            }
LABEL_61:
            v73 = v99; /*0x5b5705*/
            Tile_SetFloat(v99, (_DWORD *)0xFAE, a6); /*0x5b571b*/
            Tile_SetFloat(v99, (_DWORD *)0xFAF, a7); /*0x5b5732*/
            Tile_SetFloat(v99, (_DWORD *)0xFB1, a8); /*0x5b5749*/
            v74 = *((_DWORD **)v11 + 0xA); /*0x5b5755*/
            *((float *)v11 + 0x14) = a5; /*0x5b5758*/
            *(double *)v97 = a5; /*0x5b5760*/
            v75 = Tile_GetFloat(v74, 0xFCB); /*0x5b5764*/
            v76 = *((Tile **)v11 + 0xA); /*0x5b576e*/
            *(float *)&v100 = a5 - v75; /*0x5b5771*/
            v77 = *(float *)&v100; /*0x5b5775*/
            *((float *)v11 + 0x15) = *(float *)&v100; /*0x5b5779*/
            a2i = v77; /*0x5b577c*/
            Tile_SetFloat(v76, (_DWORD *)0xFAD, a2i); /*0x5b5784*/
            st7_0 = 1.0; /*0x5b5789*/
            Tile_SetFloat(*((Tile **)v11 + 0x13), (_DWORD *)0xFA1, 1.0); /*0x5b5797*/
            v9 = v73; /*0x5b579c*/
            break; /*0x5b579e*/
          case 0x26:
            v13 = (unsigned __int8 *)OblivionDynamicCast( /*0x5b4ecf*/
                                       v12,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                       &TESSoulGem `RTTI Type Descriptor',
                                       0);
            v14 = *((Tile **)v11 + 0xB); /*0x5b4eda*/
            a2a = fConstant_2; /*0x5b4edd*/
            a3 = v13; /*0x5b4ee9*/
            *((_DWORD *)v11 + 0x16) = 1; /*0x5b4eed*/
            Tile_SetFloat(v14, (_DWORD *)0xFA1, a2a); /*0x5b4ef4*/
            v15 = (Tile **)(v11 + 0x30); /*0x5b4ef9*/
            v99 = (Tile *)7; /*0x5b4efc*/
            do /*0x5b4f1e*/
            {
              Tile_SetFloat(*v15++, (_DWORD *)0xFA1, 1.0); /*0x5b4f11*/
              v99 = (Tile *)((char *)v99 + 0xFFFFFFFF); /*0x5b4f19*/
            }
            while ( v99 ); /*0x5b4f1e*/
            v16 = *((const char **)a3 + 0x13); /*0x5b4f24*/
            if ( !v16 ) /*0x5b4f29*/
              v16 = EmptyString; /*0x5b4f2b*/
            _sprintf((char *)v104, "%s\\%s", "Icons", v16); /*0x5b4f40*/
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAF, (char *)v104); /*0x5b4f55*/
            Tile_SetFloat(*((Tile **)v11 + 0xB), (_DWORD *)0xFB0, kTerrainLODQuadRayDirectionZ); /*0x5b4f6c*/
            v97[0] = 0; /*0x5b4f71*/
            v97[1] = 0; /*0x5b4f75*/
            v110 = 0; /*0x5b4f8b*/
            BSStringT_Static_Format((BSStringT *)v97, "magicpop_effect_%d_icon", 1); /*0x5b4f92*/
            v17 = Tile_FindDescendantByName(*((_DWORD **)v11 + 0xB), v97[0]); /*0x5b4fa2*/
            if ( v17 ) /*0x5b4fa9*/
              *(_DWORD *)(v17 + 0x2C) |= 0x10u; /*0x5b4fb1*/
            if ( *(_DWORD *)LODWORD(v98) ) /*0x5b4fb8*/
              v18 = **(ExtraDataList ***)LODWORD(v98); /*0x5b4fbe*/
            else
              v18 = 0; /*0x5b4fc2*/
            if ( v18 ) /*0x5b4fc6*/
            {
              ExtraData = BaseExtraList_GetExtraData(v18, kExtraData_Soul); /*0x5b4fd6*/
              v20 = (char *)OblivionDynamicCast( /*0x5b4fdc*/
                              ExtraData,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                              &ExtraSoul `RTTI Type Descriptor',
                              0);
            }
            else
            {
              v20 = 0; /*0x5b4fe6*/
            }
            v100 = 0.0; /*0x5b4fe8*/
            LOBYTE(v110) = 1; /*0x5b4ff8*/
            if ( v20 ) /*0x5b5000*/
              v21 = v20[0xC]; /*0x5b5002*/
            else
              v21 = a3[0x70]; /*0x5b5008*/
            v22 = *(const char **)MEMORY[0xB38BE0]; /*0x5b500c*/
            v23 = (const char *)sub_4BC020(v21); /*0x5b5013*/
            BSStringT_Static_Format((BSStringT *)&v100, "%s: %s", v22, v23);
            v24 = (char *)LODWORD(v100); /*0x5b5029*/
            Tile_SetString(*((_DWORD **)v11 + 0xB), (_DWORD *)0xFAE, (char *)LODWORD(v100)); /*0x5b5039*/
            Tile_SetFloat(v9, (_DWORD *)0xFAE, a6); /*0x5b5050*/
            Tile_SetFloat(v9, (_DWORD *)0xFAF, a7); /*0x5b5067*/
            Tile_SetFloat(v9, (_DWORD *)0xFB1, a8); /*0x5b507e*/
            v25 = *((_DWORD **)v11 + 0xA); /*0x5b508a*/
            *((float *)v11 + 0x14) = a5; /*0x5b508d*/
            v98 = a5; /*0x5b5095*/
            v26 = Tile_GetFloat(v25, 0xFCB); /*0x5b5099*/
            v27 = *((Tile **)v11 + 0xA); /*0x5b50a3*/
            *(float *)&v98 = v98 - v26; /*0x5b50a6*/
            v28 = *(float *)&v98; /*0x5b50aa*/
            *((float *)v11 + 0x15) = *(float *)&v98; /*0x5b50ae*/
            a2b = v28; /*0x5b50b1*/
            Tile_SetFloat(v27, (_DWORD *)0xFAD, a2b); /*0x5b50b9*/
            st7_0 = 1.0; /*0x5b50be*/
            Tile_SetFloat(*((Tile **)v11 + 0x13), (_DWORD *)0xFA1, 1.0); /*0x5b50ce*/
            FormHeapFree((unsigned int)v24); /*0x5b50d4*/
            v110 = 0xFFFFFFFF; /*0x5b50de*/
            FormHeapFree((unsigned int)v97[0]); /*0x5b50e9*/
            break; /*0x5b50f1*/
          case 0x2A:
            v29 = OblivionDynamicCast( /*0x5b5103*/
                    v12,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESSigilStone `RTTI Type Descriptor',
                    0);
            v30 = *((Tile **)v11 + 0xB); /*0x5b510e*/
            a2c = fConstant_2; /*0x5b5111*/
            LODWORD(v98) = v29; /*0x5b511d*/
            *((_DWORD *)v11 + 0x16) = 1; /*0x5b5121*/
            Tile_SetFloat(v30, (_DWORD *)0xFA1, a2c); /*0x5b5128*/
            v31 = (Tile **)(v11 + 0x30); /*0x5b512d*/
            v32 = 7; /*0x5b5130*/
            do /*0x5b514d*/
            {
              st7_0 = 1.0; /*0x5b5137*/
              Tile_SetFloat(*v31++, (_DWORD *)0xFA1, 1.0); /*0x5b5142*/
              --v32; /*0x5b514a*/
            }
            while ( v32 ); /*0x5b514d*/
            if ( LODWORD(v98) ) /*0x5b5155*/
            {
              v33 = LODWORD(v98) + 0x78; /*0x5b5157*/
              a3a = LODWORD(v98) + 0x78; /*0x5b515a*/
            }
            else
            {
              a3a = 0; /*0x5b5167*/
              v33 = 0; /*0x5b516b*/
            }
            LODWORD(v98) = 0; /*0x5b515e*/
            v34 = (Tile **)(v11 + 0x2C); /*0x5b5162*/
            while ( v33 ) /*0x5b5186*/
            {
              v35 = *(_DWORD *)(v33 + 4); /*0x5b518c*/
              v36 = *(const char **)(*(_DWORD *)(v35 + 0x1C) + 0x48); /*0x5b5192*/
              if ( !v36 ) /*0x5b5197*/
                v36 = EmptyString; /*0x5b5199*/
              _sprintf((char *)v104, "%s\\%s", "Icons", v36); /*0x5b51ae*/
              Tile_SetString(*v34, (_DWORD *)0xFAF, (char *)v104); /*0x5b51c2*/
              Tile_SetFloat(*v34, (_DWORD *)0xFB0, kTerrainLODQuadRayDirectionZ); /*0x5b51d8*/
              v97[0] = 0; /*0x5b51dd*/
              v97[1] = 0; /*0x5b51e1*/
              v110 = 2; /*0x5b51fd*/
              LODWORD(v100) = LODWORD(v98) + 1; /*0x5b5208*/
              BSStringT_Static_Format((BSStringT *)v97, "magicpop_effect_%d_icon", LODWORD(v98) + 1); /*0x5b520c*/
              v37 = Tile_FindDescendantByName(*v34, v97[0]); /*0x5b521b*/
              if ( v37 ) /*0x5b5222*/
                *(_DWORD *)(v37 + 0x2C) |= 0x10u; /*0x5b522a*/
              Tile_SetFloat(*v34, (_DWORD *)0xFA1, fConstant_2); /*0x5b523e*/
              v38 = *(_DWORD *)(v35 + 0x10); /*0x5b5245*/
              LOBYTE(v39) = v38 == 1; /*0x5b524b*/
              LOBYTE(v40) = v38 == 0; /*0x5b5250*/
              v41 = (char **)EffectItem_BuildDisplayString( /*0x5b5263*/
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
              v42 = *v34; /*0x5b526a*/
              v78 = *v41; /*0x5b526c*/
              LOBYTE(v106) = 3; /*0x5b5272*/
              Tile_SetString(v42, (_DWORD *)0xFAE, v78); /*0x5b527a*/
              LOBYTE(v106) = 2; /*0x5b5284*/
              FormHeapFree((unsigned int)v97[1]); /*0x5b528c*/
              v9 = v93; /*0x5b5298*/
              v97[1] = 0; /*0x5b52a6*/
              LODWORD(v98) = 0; /*0x5b52af*/
              Tile_SetFloat(v93, (_DWORD *)0xFAE, v108); /*0x5b52b4*/
              Tile_SetFloat(v93, (_DWORD *)0xFAF, v109); /*0x5b52cb*/
              Tile_SetFloat(v93, (_DWORD *)0xFB1, *(float *)&v110); /*0x5b52e2*/
              v43 = v107; /*0x5b52e7*/
              v44 = *((_DWORD **)v11 + 0xA); /*0x5b52ee*/
              *((float *)v11 + 0x14) = v107; /*0x5b52f1*/
              v92 = v43; /*0x5b52f9*/
              v45 = Tile_GetFloat(v44, 0xFCB); /*0x5b52fd*/
              v46 = *((Tile **)v11 + 0xA); /*0x5b5307*/
              *(float *)&v92 = v92 - v45; /*0x5b530a*/
              *((float *)v11 + 0x15) = *(float *)&v92; /*0x5b5312*/
              Tile_SetFloat(v46, (_DWORD *)0xFAD, *(float *)&v92); /*0x5b531d*/
              st7_0 = 1.0; /*0x5b5322*/
              Tile_SetFloat(*((Tile **)v11 + 0x13), (_DWORD *)0xFA1, 1.0); /*0x5b5330*/
              v47 = a2d[2]; /*0x5b5339*/
              if ( v47 ) /*0x5b533e*/
                a2 = (_DWORD *)(v47 - 4); /*0x5b5343*/
              else
                a2 = 0; /*0x5b5349*/
              v106 = 0xFFFFFFFF; /*0x5b5352*/
              FormHeapFree((unsigned int)v90); /*0x5b535d*/
              ++v34; /*0x5b5369*/
              v89 = 0; /*0x5b536f*/
              v91 = 0; /*0x5b5378*/
              LODWORD(v92) = a3a; /*0x5b537d*/
              if ( a3a >= 8 ) /*0x5b5381*/
                goto LABEL_63; /*0x5b5381*/
              v33 = (int)a2; /*0x5b5180*/
            }
            v9 = v99; /*0x5b57a0*/
            break; /*0x5b57a0*/
          default:
            break;
        }
LABEL_63:
        sub_58FBA0((int)v9, a1, st6_0, st7_0, 0); /*0x5b57a4*/
      }
    }
  }
}
