void __cdecl sub_50EF90(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  NiNode *v8; // eax
  NiNode *v9; // ebx
  PlayerCharacter *v10; // ecx
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  int v12; // eax
  int v13; // edi
  double v14; // st7
  double v15; // st7
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // et2
  unsigned int v19; // ebp
  float v20; // edx
  unsigned int v21; // eax
  TESObjectREFR *v22; // ecx
  bool v23; // al
  TESObjectREFR *v24; // ecx
  TESObjectCELL *ParentCell; // ebx
  int v26; // eax
  int v27; // edi
  int v28; // esi
  Ni2DBuffer *v29; // eax
  Ni2DBuffer *v30; // esi
  LONG v31; // eax
  TESWorldSpace *WorldSpace; // eax
  int v33; // edi
  ExtraDataList *CellAtCellCoord; // eax
  TESObjectCELL *v35; // esi
  Ni2DBuffer *v36; // eax
  int v37; // edi
  int v38; // eax
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  double v42; // st7
  int v43; // ebx
  int v44; // esi
  double v45; // st6
  int v46; // ecx
  int v47; // eax
  float v48; // edx
  double v49; // st6
  float v50; // ebp
  int v51; // edx
  int v52; // ecx
  double v53; // st7
  int v54; // eax
  int v55; // ebp
  float *v56; // ebx
  float *v57; // edi
  float v58; // ecx
  float v59; // edx
  double v60; // st6
  float v61; // ecx
  float v62; // ecx
  float v63; // edx
  float v64; // eax
  int v65; // eax
  int v66; // ecx
  int v67; // ebp
  int v68; // ebx
  __int16 v69; // dx
  int v70; // edi
  __int16 v71; // cx
  int v72; // eax
  __int16 v73; // bx
  int v74; // eax
  int v75; // eax
  int v76; // eax
  NiAVObject *v77; // eax
  NiAVObject *v78; // esi
  void (__thiscall *AddObject)(NiNode, NiAVObject *, UInt8); // eax
  double v80; // st6
  NiRenderedTexture *v81; // ebp
  double v82; // st7
  bool v83; // zf
  float v84; // eax
  double v85; // st5
  double v86; // st7
  NiTexturingProperty *v87; // eax
  NiTexturingProperty *v88; // edi
  int *v89; // eax
  int v90; // ecx
  float v91; // edx
  int v92; // eax
  TESObjectREFR *v93; // ecx
  TESObjectCELL *v94; // eax
  double v95; // st7
  double v96; // st5
  NiAVObject *v97; // eax
  float v98; // ecx
  NiAVObject *v99; // ebp
  float v100; // eax
  NiPoint3 *p_rot; // esi
  TESObjectCELL *v102; // eax
  BSShaderProperty *v103; // eax
  float *v104; // [esp+4h] [ebp-148h]
  UInt16 v105[2]; // [esp+24h] [ebp-128h] BYREF
  int v106; // [esp+28h] [ebp-124h]
  int v107; // [esp+2Ch] [ebp-120h]
  float v108; // [esp+30h] [ebp-11Ch]
  int v109; // [esp+34h] [ebp-118h]
  int v110; // [esp+38h] [ebp-114h] BYREF
  float v111; // [esp+3Ch] [ebp-110h]
  float v112; // [esp+40h] [ebp-10Ch]
  int v113; // [esp+44h] [ebp-108h]
  NiNode *v114; // [esp+48h] [ebp-104h]
  double v115; // [esp+4Ch] [ebp-100h]
  float v116; // [esp+54h] [ebp-F8h]
  unsigned __int64 v117; // [esp+58h] [ebp-F4h]
  float v118; // [esp+60h] [ebp-ECh]
  int v119; // [esp+64h] [ebp-E8h]
  int i; // [esp+68h] [ebp-E4h]
  int v121; // [esp+6Ch] [ebp-E0h] BYREF
  float v122; // [esp+70h] [ebp-DCh]
  float v123; // [esp+74h] [ebp-D8h]
  int v124; // [esp+78h] [ebp-D4h] BYREF
  float v125; // [esp+7Ch] [ebp-D0h]
  float v126; // [esp+80h] [ebp-CCh]
  unsigned int v127; // [esp+84h] [ebp-C8h]
  NiRenderedTexture *v128; // [esp+88h] [ebp-C4h]
  float v129; // [esp+8Ch] [ebp-C0h]
  float v130; // [esp+90h] [ebp-BCh]
  float v131; // [esp+94h] [ebp-B8h]
  int v132; // [esp+98h] [ebp-B4h]
  int v133; // [esp+9Ch] [ebp-B0h]
  float v134; // [esp+A0h] [ebp-ACh]
  float v135; // [esp+A4h] [ebp-A8h]
  float v136; // [esp+A8h] [ebp-A4h]
  double v137; // [esp+ACh] [ebp-A0h]
  float v138; // [esp+B4h] [ebp-98h]
  float v139; // [esp+B8h] [ebp-94h] BYREF
  float v140; // [esp+BCh] [ebp-90h]
  float v141; // [esp+C0h] [ebp-8Ch]
  float v142; // [esp+C4h] [ebp-88h]
  int v143; // [esp+C8h] [ebp-84h]
  float v144; // [esp+CCh] [ebp-80h]
  int v145; // [esp+D0h] [ebp-7Ch]
  int v146; // [esp+D4h] [ebp-78h]
  int v147; // [esp+D8h] [ebp-74h]
  int v148; // [esp+DCh] [ebp-70h]
  float v149[9]; // [esp+E0h] [ebp-6Ch] BYREF
  int v150; // [esp+104h] [ebp-48h]
  int v151; // [esp+108h] [ebp-44h]
  int v152; // [esp+10Ch] [ebp-40h]
  float v153; // [esp+110h] [ebp-3Ch]
  float v154; // [esp+114h] [ebp-38h]
  unsigned __int64 v155; // [esp+118h] [ebp-34h]
  float v156; // [esp+120h] [ebp-2Ch]
  Ni2DBuffer *v157; // [esp+124h] [ebp-28h] BYREF
  int v158; // [esp+128h] [ebp-24h]
  Ni2DBuffer *v159; // [esp+12Ch] [ebp-20h] BYREF
  unsigned __int64 v160; // [esp+130h] [ebp-1Ch]
  float v161; // [esp+138h] [ebp-14h]
  float v162; // [esp+13Ch] [ebp-10h]
  int v163; // [esp+148h] [ebp-4h]

  *(_DWORD *)v105 = 0;
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v105) )
  {
    *(float *)&v8 = COERCE_FLOAT(FormHeapAlloc(0xDCu));
    v106 = (int)v8;
    v163 = 0;
    if ( *(float *)&v8 == 0.0 )
    {
      v9 = 0;
      v114 = 0;
    }
    else
    {
      v9 = NiNode::NiNode(v8, 0);
      v114 = v9;
    }
    v10 = TESDataHandler_g_PlayerRef;
    GetPos = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos;
    v163 = 0xFFFFFFFF;
    v12 = (int)GetPos((TESObjectREFR *)v10);
    v13 = uGridsToLoad;
    v110 = *(int *)v12;
    v111 = *(float *)(v12 + 4);
    v112 = *(float *)(v12 + 8);
    v14 = v112 + dbl_A3F3E8;
    v151 = v13;
    v106 = v13 * v13;
    v107 = v13 << 6;
    v112 = v14;
    v15 = sub_411F00();
    v16 = 0;
    v162 = v15;
    v113 = 0;
    if ( v13 * v13 > 0 )
    {
      v136 = 0.0;
      v129 = 0.0;
      v130 = 0.0;
      v131 = 1.0;
      v137 = (double)v107 * dbl_A2FAA0;
      v116 = 0.0;
      while ( 1 )
      {
        v18 = v16 % uGridsToLoad;
        v17 = v16 / uGridsToLoad;
        v128 = 0;
        v19 = v18;
        v119 = v18;
        v127 = v17;
        v20 = Vector3_InitValue_;
        v21 = *((_DWORD *)&Vector3_InitValue_ + 1);
        v118 = dword_B3F9B0;
        v22 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        v163 = 1;
        v117 = __PAIR64__(v21, LODWORD(v20));
        v23 = sub_4D8B90(v22);
        v24 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        if ( v23 )
        {
          ParentCell = TESObjectREFR_GetParentCell(v24);
          if ( ParentCell )
          {
            v121 = v110;
            v122 = v111;
            v123 = v112;
            sub_4CCE20((ExtraDataList *)ParentCell, (float *)&v110, &v121, COERCE_FLOAT(1));
            v143 = (int)*(float *)&v121;
            v145 = (int)v122;
            v26 = ((v143 - 0x800) >> 0xC) - (v13 >> 1);
            v27 = v127 + ((v145 - 0x800) >> 0xC) - (v13 >> 1);
            v28 = v19 + v26;
            v107 = ((v19 + v26) << 0xC) + 0x800;
            *(float *)&v155 = (float)v107;
            v107 = (v27 << 0xC) + 0x800;
            *((float *)&v155 + 1) = (float)v107;
            v156 = 0.0;
            v117 = v155;
            v118 = 0.0;
            sub_4CCEE0((ExtraDataList *)ParentCell, v19 + v26, v27, 0);
            v29 = *sub_4D4250(ParentCell, &v157, v28, (BSRenderedTexture *)v27);
            if ( v29 )
            {
              v128 = (NiRenderedTexture *)v29;
              InterlockedIncrement((volatile LONG *)&v29->members);
            }
            v30 = v157;
            LOBYTE(v163) = 1;
            if ( v157 )
            {
              v31 = InterlockedDecrement((volatile LONG *)&v157->members);
              goto LABEL_20;
            }
          }
        }
        else
        {
          WorldSpace = TESObjectREFR_GetWorldSpace(v24);
          v148 = (int)*(float *)&v110;
          v146 = (int)v111;
          v33 = v13 >> 1;
          v107 = (v19 + (v148 >> 0xC) - v33) << 0xC;
          *(float *)&v160 = (float)v107;
          v107 = (v127 + (v146 >> 0xC) - v33) << 0xC;
          *((float *)&v160 + 1) = (float)v107;
          v117 = v160;
          v161 = 0.0;
          v118 = 0.0;
          if ( WorldSpace )
          {
            CellAtCellCoord = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(
                                                 WorldSpace,
                                                 v19 + ((int)*(float *)&v110 >> 0xC) - v33,
                                                 v127 + ((int)v111 >> 0xC) - v33);
            v35 = (TESObjectCELL *)CellAtCellCoord;
            if ( CellAtCellCoord )
            {
              sub_4CCED0(CellAtCellCoord);
              v36 = *sub_4D41A0(v35, &v159);
              if ( v36 )
              {
                v128 = (NiRenderedTexture *)v36;
                InterlockedIncrement((volatile LONG *)&v36->members);
              }
              v30 = v159;
              LOBYTE(v163) = 1;
              if ( v159 )
              {
                v31 = InterlockedDecrement((volatile LONG *)&v159->members);
LABEL_20:
                if ( !v31 )
                {
                  if ( v30 )
                    (*(void (__thiscall **)(Ni2DBuffer *, int))v30->__vftable)(v30, 1);
                }
              }
            }
          }
        }
        v37 = FormHeapAlloc(0xD8Cu);
        v152 = v37;
        v107 = FormHeapAlloc(0xD8Cu);
        v147 = FormHeapAlloc(0x908u);
        v38 = FormHeapAlloc(0x1210u);
        if ( v38 )
        {
          v39 = 0x120;
          v40 = v38 + 8;
          do
          {
            *(float *)(v40 - 8) = 0.0;
            v40 += 0x10;
            --v39;
            *(float *)(v40 - 0x14) = 0.0;
            *(float *)(v40 - 0x10) = 0.0;
            *(float *)(v40 - 0xC) = 0.0;
          }
          while ( v39 >= 0 );
          v132 = v38;
        }
        else
        {
          v132 = 0;
        }
        v41 = FormHeapAlloc(0xC00u);
        v42 = dbl_A46970;
        v43 = 0;
        v44 = v41;
        v109 = 0;
        do
        {
          v45 = (double)v109;
          v46 = 0;
          v47 = v37;
          v109 = 0;
          v37 += 0xCC;
          v135 = v45 - v42;
          v48 = v135;
          do
          {
            v46 += 4;
            v47 += 0xC;
            v49 = (double)v109 - v42;
            v109 = v46;
            v134 = v49;
            *(float *)(v47 - 0xC) = v134;
            v50 = v136;
            *(float *)(v47 - 8) = v48;
            *(float *)(v47 - 4) = v50;
          }
          while ( v46 < 0x44 );
          v43 += 4;
          v109 = v43;
        }
        while ( v43 < 0x44 );
        v51 = v107;
        v52 = v147;
        v53 = dbl_A492E0;
        v54 = v132;
        i = 0;
        while ( 1 )
        {
          v55 = v54;
          v56 = (float *)v52;
          v144 = (float)i;
          v57 = (float *)v51;
          v109 = 0;
          v158 = v54 + 0x110;
          v150 = v52 + 0x88;
          v133 = v51 + 0xCC;
          v154 = 1.0 - v144 / v53;
          do
          {
            v58 = v130;
            v59 = v131;
            v108 = (float)v109;
            *v57 = v129;
            v60 = v108;
            v57[1] = v58;
            v61 = v154;
            v57[2] = v59;
            v56[1] = v61;
            v153 = v60 / v53;
            *v56 = v153;
            if ( *(_DWORD *)v105 )
            {
              *(float *)&v124 = v60 * v162;
              v125 = v162 * v144;
              *(float *)&v124 = *(float *)&v124 + *(float *)&v117;
              v125 = *((float *)&v117 + 1) + v125;
              v126 = v118 + dbl_A2FC68;
              v108 = (float)sub_4D2D00((float *)&v124);
              v108 = v108 * dbl_A3C770;
              v139 = v108;
              v140 = v108;
              v62 = v108;
              v141 = v108;
              v63 = v108;
              *(float *)v55 = v108;
              v142 = 0.0;
              *(float *)(v55 + 4) = v62;
              v64 = v142;
              v53 = dbl_A492E0;
              *(float *)(v55 + 8) = v63;
              *(float *)(v55 + 0xC) = v64;
            }
            else
            {
              *(_DWORD *)v55 = dword_B25AE0;
              *(_DWORD *)(v55 + 4) = dword_B25AE4;
              *(_DWORD *)(v55 + 8) = dword_B25AE8;
              *(_DWORD *)(v55 + 0xC) = dword_B25AEC;
            }
            v57 += 3;
            v56 += 2;
            v55 += 0x10;
            ++v109;
          }
          while ( v109 < 0x11 );
          if ( ++i >= 0x11 )
            break;
          v51 = v133;
          v52 = v150;
          v54 = v158;
        }
        v65 = 0;
        v66 = 0;
        for ( i = 0; i < 0x10; ++i )
        {
          v67 = 0;
          v68 = v66 % 2;
          v69 = 0x11 * v66;
          LODWORD(v108) = v66 % 2;
          v70 = 0x11 * ((unsigned __int16)v66 + 1);
          while ( 1 )
          {
            if ( v68 != v67 % 2 )
            {
              v71 = v70 + v67;
              *(_WORD *)(v44 + 2 * v65) = v70 + v67;
              v72 = v65 + 1;
              *(_WORD *)(v44 + 2 * v72) = v69 + v67;
              v73 = v69 + v67 + 1;
              ++v72;
              *(_WORD *)(v44 + 2 * v72++) = v73;
              *(_WORD *)(v44 + 2 * v72) = v73;
              v74 = v72 + 1;
              *(_WORD *)(v44 + 2 * v74) = v70 + v67 + 1;
            }
            else
            {
              *(_WORD *)(v44 + 2 * v65) = v70 + v67 + 1;
              v75 = v65 + 1;
              v133 = v70 + (unsigned __int16)v67 + 1;
              *(_WORD *)(v44 + 2 * v75++) = v70 + v67;
              *(_WORD *)(v44 + 2 * v75++) = v69 + v67;
              *(_WORD *)(v44 + 2 * v75) = v69 + v67;
              v74 = v75 + 1;
              *(_WORD *)(v44 + 2 * v74) = v69 + v67 + 1;
              v71 = v133;
            }
            v76 = v74 + 1;
            *(_WORD *)(v44 + 2 * v76) = v71;
            ++v67;
            v65 = v76 + 1;
            if ( v67 >= 0x10 )
              break;
            v68 = LODWORD(v108);
          }
          v66 = i + 1;
        }
        *(float *)&v77 = COERCE_FLOAT(FormHeapAlloc(0xC0u));
        v108 = *(float *)&v77;
        LOBYTE(v163) = 4;
        if ( *(float *)&v77 == 0.0 )
          v78 = 0;
        else
          v78 = sub_7174B0(v77, 0x121, v152, v107, v132, v147, 1, 0, 0x200, v44);
        v9 = v114;
        AddObject = v114->vtbl->AddObject;
        LOBYTE(v163) = 1;
        ((void (__thiscall *)(NiNode *, NiAVObject *, int))AddObject)(v114, v78, 1);
        v119 <<= 6;
        v80 = dbl_A46970;
        v81 = v128;
        v82 = (double)v119 + v80;
        v83 = v128 == 0;
        v119 = v127 << 6;
        v84 = v116;
        v85 = v82 - v137;
        v86 = v137;
        *(float *)&v115 = v85;
        v78->members.m_localTransform.pos.x = *(float *)&v115;
        *((float *)&v115 + 1) = v80 + (double)v119 - v86;
        v78->members.m_localTransform.pos.y = *((float *)&v115 + 1);
        v78->members.m_localTransform.pos.z = v84;
        if ( !v83 )
        {
          v87 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
          v119 = (int)v87;
          LOBYTE(v163) = 5;
          if ( v87 )
            v88 = NiTexturingProperty::NiTexturingProperty(v87);
          else
            v88 = 0;
          LOBYTE(v163) = 1;
          NiTexturingProperty::SetUnk08(v88, v81);
          sub_405870(v88, 0);
          v88->unk018 = v88->unk018 & 0xFFF1 | 4;
          sub_405680((NiNode *)v78, (BSShaderProperty *)v88);
          if ( !InterlockedDecrement((volatile LONG *)&v81->member) )
            v81->__vftable->super.super.super.Destructor((NiRefObject *)v81, 1);
          v81 = 0;
        }
        v163 = 0xFFFFFFFF;
        if ( v81 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v81->member) )
            v81->__vftable->super.super.super.Destructor((NiRefObject *)v81, 1);
        }
        v16 = ++v113;
        if ( v113 >= v106 )
          break;
        v13 = v151;
      }
    }
    v89 = (int *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    v90 = *v89;
    v91 = *((float *)v89 + 1);
    v92 = v89[2];
    v121 = v90;
    v93 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v122 = v91;
    v123 = *(float *)&v92;
    if ( sub_4D8B90(v93) )
    {
      v104 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      v94 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      sub_4CCE20((ExtraDataList *)v94, v104, &v124, COERCE_FLOAT(1));
      v113 = (int)*(float *)&v124;
      v114 = (NiNode *)(int)v125;
      v106 = (((v113 - 0x800) >> 0xC) + 1) << 0xC;
      *(float *)&v115 = (float)v106;
      v106 = (((int)&v114[0xFFFFFFF6].members.super.m_propertyList >> 0xC) + 1) << 0xC;
      *((float *)&v115 + 1) = (float)v106;
      v95 = 0.0;
      v137 = v115;
      v116 = 0.0;
      v138 = 0.0;
      v121 = v124;
      v122 = v125;
      v123 = v126;
    }
    else
    {
      v106 = *(int *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      v113 = (int)*(float *)&v106;
      v106 = *((int *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef) + 1);
      v114 = (NiNode *)(int)*(float *)&v106;
      v106 = (v113 >> 0xC << 0xC) + 0x800;
      *(float *)&v115 = (float)v106;
      v106 = ((int)v114 >> 0xC << 0xC) + 0x800;
      *((float *)&v115 + 1) = (float)v106;
      v95 = 0.0;
      v137 = v115;
      v116 = 0.0;
      v138 = 0.0;
    }
    *(float *)&v117 = *(float *)&v121 - *(float *)&v137;
    *((float *)&v117 + 1) = v122 - *((float *)&v137 + 1);
    v96 = dbl_A40358;
    *(float *)&v117 = *(float *)&v117 * v96;
    *((float *)&v117 + 1) = v96 * *((float *)&v117 + 1);
    v118 = v95;
    v134 = v95;
    v135 = flt_A35AA4;
    v136 = 1.0;
    v129 = flt_A3D65C;
    v130 = flt_A45E4C;
    *(float *)&v115 = v130;
    *((float *)&v115 + 1) = v130;
    v131 = 1.0;
    v116 = 1.0;
    v139 = 1.0;
    v140 = v95;
    v141 = v95;
    v142 = v95;
    v97 = sub_47EEF0(
            SLODWORD(v134),
            SLODWORD(v135),
            COERCE_INT(1.0),
            SLODWORD(v129),
            SLODWORD(v130),
            COERCE_INT(1.0),
            SLODWORD(v130),
            SLODWORD(v130),
            COERCE_INT(1.0),
            &v139);
    v98 = v118;
    v99 = v97;
    v100 = *((float *)&v117 + 1);
    LODWORD(v99->members.m_localTransform.pos.x) = v117;
    v99->members.m_localTransform.pos.y = v100;
    v99->members.m_localTransform.pos.z = v98;
    qmemcpy(v149, &stru_B26AF0[0xA].unk2C, sizeof(v149));
    p_rot = &TESDataHandler_g_PlayerRef->super.super.super.super.rot;
    v102 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    *(float *)&v106 = sub_4CCE00((ExtraDataList *)v102) + p_rot->z;
    NiMatrix33_InitRotationTransform(v149, *(float *)&v106);
    qmemcpy(&v99->members.m_localTransform, v149, 0x24u);
    ((void (__thiscall *)(NiNode *, NiAVObject *, int))v9->vtbl->AddObject)(v9, v99, 1);
    v103 = (BSShaderProperty *)sub_4E70B0();
    sub_405680(v9, v103);
    v9->members.super.m_localTransform.pos.x = *(float *)&v110;
    v9->members.super.m_localTransform.pos.y = v111;
    v9->members.super.m_localTransform.pos.z = v112;
    NiAVObject_UpdateNiAVObject((NiAVObject *)v9, 0.0, 1);
    NiAVObject_InitializePropertyState((NiAVObject *)v9);
    sub_440E60(TES, (int)v9, flt_A37CC8);
  }
}
