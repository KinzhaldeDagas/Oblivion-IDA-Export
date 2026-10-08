// Verified registration as the TestLocalMap script command. This script handler shares DebugRender_GetOrCreateVertexColorProperty and the local-map/FOW debug visualization path; retain the script parameters as recovered until its remaining data flow is fully labeled.
void __cdecl ScriptCommand_TestLocalMap(
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
  float x; // edx
  float y; // eax
  TESObjectREFR *v22; // ecx
  bool v23; // al
  TESObjectREFR *v24; // ecx
  ExtraDataList *DwordAtOffset40; // ebx
  int v26; // eax
  int v27; // edi
  int v28; // esi
  NiTexture *v29; // eax
  Ni2DBuffer *v30; // esi
  LONG v31; // eax
  TESWorldSpace *WorldSpace; // eax
  int v33; // edi
  TESObjectCELL *CellAtCellCoord; // eax
  TESObjectCELL *v35; // esi
  NiTexture *v36; // eax
  NiPoint3 *v37; // edi
  NiColorAlpha *v38; // eax
  int v39; // edx
  float *v40; // ecx
  int v41; // eax
  double v42; // st7
  int v43; // ebx
  UInt16 *v44; // esi
  double v45; // st6
  int v46; // ecx
  NiPoint3 *v47; // eax
  float v48; // edx
  double v49; // st6
  float v50; // ebp
  NiPoint3 *v51; // edx
  char *v52; // ecx
  double v53; // st7
  NiColorAlpha *v54; // eax
  NiColorAlpha *v55; // ebp
  float *v56; // ebx
  NiPoint3 *v57; // edi
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
  UInt16 v71; // cx
  int v72; // eax
  UInt16 v73; // bx
  int v74; // eax
  int v75; // eax
  int v76; // eax
  NiAVObject *v77; // eax
  NiAVObject *v78; // esi
  void (__thiscall *AddObject)(NiNode, NiAVObject *, UInt8); // eax
  double v80; // st6
  NiTexture *v81; // ebp
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
  ExtraDataList *v94; // eax
  double v95; // st7
  double v96; // st5
  NiAVObject *v97; // eax
  float v98; // ecx
  NiAVObject *v99; // ebp
  float v100; // eax
  NiPoint3 *p_rot; // esi
  ExtraDataList *v102; // eax
  BSShaderProperty *VertexColorProperty; // eax
  float *v104; // [esp+4h] [ebp-148h]
  UInt16 v105[2]; // [esp+24h] [ebp-128h] BYREF
  int angleZ; // [esp+28h] [ebp-124h]
  NiPoint3 *normals; // [esp+2Ch] [ebp-120h]
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
  float z; // [esp+60h] [ebp-ECh]
  int v119; // [esp+64h] [ebp-E8h]
  int i; // [esp+68h] [ebp-E4h]
  int v121; // [esp+6Ch] [ebp-E0h] BYREF
  float v122; // [esp+70h] [ebp-DCh]
  float v123; // [esp+74h] [ebp-D8h]
  int v124; // [esp+78h] [ebp-D4h] BYREF
  float v125; // [esp+7Ch] [ebp-D0h]
  float v126; // [esp+80h] [ebp-CCh]
  unsigned int v127; // [esp+84h] [ebp-C8h]
  NiTexture *texture; // [esp+88h] [ebp-C4h]
  float v129; // [esp+8Ch] [ebp-C0h]
  float v130; // [esp+90h] [ebp-BCh]
  float v131; // [esp+94h] [ebp-B8h]
  NiColorAlpha *colors; // [esp+98h] [ebp-B4h]
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
  void *textureCoordinates; // [esp+D8h] [ebp-74h]
  int v148; // [esp+DCh] [ebp-70h]
  NiMatrix33 v149; // [esp+E0h] [ebp-6Ch] BYREF
  char *v150; // [esp+104h] [ebp-48h]
  int v151; // [esp+108h] [ebp-44h]
  NiPoint3 *vertices; // [esp+10Ch] [ebp-40h]
  float v153; // [esp+110h] [ebp-3Ch]
  float v154; // [esp+114h] [ebp-38h]
  unsigned __int64 v155; // [esp+118h] [ebp-34h]
  float v156; // [esp+120h] [ebp-2Ch]
  Ni2DBuffer *v157; // [esp+124h] [ebp-28h] BYREF
  NiColorAlpha *v158; // [esp+128h] [ebp-24h]
  Ni2DBuffer *v159; // [esp+12Ch] [ebp-20h] BYREF
  unsigned __int64 v160; // [esp+130h] [ebp-1Ch]
  float v161; // [esp+138h] [ebp-14h]
  float v162; // [esp+13Ch] [ebp-10h]
  int v163; // [esp+148h] [ebp-4h]

  *(_DWORD *)v105 = 0; /*0x50effc*/
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v105) ) /*0x50f000*/
  {
    *(float *)&v8 = COERCE_FLOAT(FormHeapAlloc(0xDCu)); /*0x50f015*/
    angleZ = (int)v8; /*0x50f01d*/
    v163 = 0; /*0x50f023*/
    if ( *(float *)&v8 == 0.0 ) /*0x50f02a*/
    {
      v9 = 0; /*0x50f03c*/
      v114 = 0; /*0x50f03e*/
    }
    else
    {
      v9 = NiNode::NiNode(v8, 0); /*0x50f034*/
      v114 = v9; /*0x50f036*/
    }
    v10 = reference; /*0x50f042*/
    GetPos = reference->vtbl->super.super.super.GetPos; /*0x50f04a*/
    v163 = 0xFFFFFFFF; /*0x50f050*/
    v12 = (int)GetPos((TESObjectREFR *)v10); /*0x50f05b*/
    v13 = uGridsToLoad; /*0x50f05f*/
    v110 = *(int *)v12; /*0x50f065*/
    v111 = *(float *)(v12 + 4); /*0x50f06e*/
    v112 = *(float *)(v12 + 8); /*0x50f078*/
    v14 = v112 + dbl_A3F3E8; /*0x50f085*/
    v151 = v13; /*0x50f08b*/
    angleZ = v13 * v13; /*0x50f092*/
    normals = (NiPoint3 *)(v13 << 6); /*0x50f096*/
    v112 = v14; /*0x50f09a*/
    v15 = sub_411F00(); /*0x50f09e*/
    v16 = 0; /*0x50f0a3*/
    v162 = v15; /*0x50f0a7*/
    v113 = 0; /*0x50f0b0*/
    if ( v13 * v13 > 0 ) /*0x50f0b4*/
    {
      v136 = 0.0; /*0x50f0ba*/
      v129 = 0.0; /*0x50f0c1*/
      v130 = 0.0; /*0x50f0c5*/
      v131 = 1.0; /*0x50f0ce*/
      v137 = (double)(int)normals * dbl_A2FAA0; /*0x50f0df*/
      v116 = 0.0; /*0x50f0e6*/
      while ( 1 ) /*0x50f0f9*/
      {
        v18 = v16 % uGridsToLoad; /*0x50f0f9*/
        v17 = v16 / uGridsToLoad; /*0x50f0f9*/
        texture = 0; /*0x50f0ff*/
        v19 = v18; /*0x50f107*/
        v119 = v18; /*0x50f109*/
        v127 = v17; /*0x50f10d*/
        x = g_zeroNiPoint3.x; /*0x50f117*/
        y = g_zeroNiPoint3.y; /*0x50f11d*/
        z = g_zeroNiPoint3.z; /*0x50f122*/
        v22 = (TESObjectREFR *)reference; /*0x50f126*/
        v163 = 1; /*0x50f12c*/
        v117 = __PAIR64__(LODWORD(y), LODWORD(x)); /*0x50f137*/
        v23 = sub_4D8B90(v22); /*0x50f13f*/
        v24 = (TESObjectREFR *)reference; /*0x50f146*/
        if ( v23 ) /*0x50f14c*/
        {
          DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v24); /*0x50f157*/
          if ( DwordAtOffset40 ) /*0x50f15b*/
          {
            v121 = v110; /*0x50f16d*/
            v122 = v111; /*0x50f177*/
            v123 = v112; /*0x50f180*/
            sub_4CCE20(DwordAtOffset40, (float *)&v110, &v121, COERCE_FLOAT(1)); /*0x50f187*/
            v143 = (int)*(float *)&v121; /*0x50f190*/
            v145 = (int)v122; /*0x50f1aa*/
            v26 = ((v143 - 0x800) >> 0xC) - (v13 >> 1); /*0x50f1cb*/
            v27 = v127 + ((v145 - 0x800) >> 0xC) - (v13 >> 1); /*0x50f1cd*/
            v28 = v19 + v26; /*0x50f1d1*/
            normals = (NiPoint3 *)(((v19 + v26) << 0xC) + 0x800); /*0x50f1de*/
            *(float *)&v155 = (float)(int)normals; /*0x50f1f1*/
            normals = (NiPoint3 *)((v27 << 0xC) + 0x800); /*0x50f1ff*/
            *((float *)&v155 + 1) = (float)(int)normals; /*0x50f20b*/
            v156 = 0.0; /*0x50f21f*/
            v117 = v155; /*0x50f22f*/
            z = 0.0; /*0x50f233*/
            sub_4CCEE0(DwordAtOffset40, v19 + v26, v27, 0); /*0x50f237*/
            v29 = (NiTexture *)*sub_4D4250((TESObjectCELL *)DwordAtOffset40, &v157, v28, (BSRenderedTexture *)v27); /*0x50f24d*/
            if ( v29 ) /*0x50f251*/
            {
              texture = v29; /*0x50f253*/
              InterlockedIncrement((volatile LONG *)&v29->members); /*0x50f25b*/
            }
            v30 = v157; /*0x50f261*/
            LOBYTE(v163) = 1; /*0x50f26a*/
            if ( v157 ) /*0x50f272*/
            {
              v31 = InterlockedDecrement((volatile LONG *)&v157->members); /*0x50f27c*/
              goto LABEL_20; /*0x50f27c*/
            }
          }
        }
        else
        {
          WorldSpace = TESObjectREFR_GetWorldSpace(v24); /*0x50f281*/
          v148 = (int)*(float *)&v110; /*0x50f28a*/
          v146 = (int)v111; /*0x50f29f*/
          v33 = v13 >> 1; /*0x50f2ad*/
          normals = (NiPoint3 *)((v19 + (v148 >> 0xC) - v33) << 0xC); /*0x50f2c1*/
          *(float *)&v160 = (float)(int)normals; /*0x50f2d0*/
          normals = (NiPoint3 *)((v127 + (v146 >> 0xC) - v33) << 0xC); /*0x50f2d7*/
          *((float *)&v160 + 1) = (float)(int)normals; /*0x50f2ea*/
          v117 = v160; /*0x50f2fa*/
          v161 = 0.0; /*0x50f2fe*/
          z = 0.0; /*0x50f30c*/
          if ( WorldSpace ) /*0x50f310*/
          {
            CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord( /*0x50f316*/
                                WorldSpace,
                                v19 + ((int)*(float *)&v110 >> 0xC) - v33,
                                v127 + ((int)v111 >> 0xC) - v33);
            v35 = CellAtCellCoord; /*0x50f31b*/
            if ( CellAtCellCoord ) /*0x50f31f*/
            {
              sub_4CCED0((ExtraDataList *)CellAtCellCoord); /*0x50f323*/
              v36 = (NiTexture *)*sub_4D41A0(v35, &v159); /*0x50f337*/
              if ( v36 ) /*0x50f33b*/
              {
                texture = v36; /*0x50f33d*/
                InterlockedIncrement((volatile LONG *)&v36->members); /*0x50f345*/
              }
              v30 = v159; /*0x50f34b*/
              LOBYTE(v163) = 1; /*0x50f354*/
              if ( v159 ) /*0x50f35c*/
              {
                v31 = InterlockedDecrement((volatile LONG *)&v159->members); /*0x50f362*/
LABEL_20:
                if ( !v31 ) /*0x50f36a*/
                {
                  if ( v30 ) /*0x50f36e*/
                    (*(void (__thiscall **)(Ni2DBuffer *, int))v30->__vftable)(v30, 1); /*0x50f378*/
                }
              }
            }
          }
        }
        v37 = (NiPoint3 *)FormHeapAlloc(0xD8Cu); /*0x50f37a*/
        vertices = v37; /*0x50f3a8*/
        normals = (NiPoint3 *)FormHeapAlloc(0xD8Cu); /*0x50f3b9*/
        textureCoordinates = (void *)FormHeapAlloc(0x908u); /*0x50f3d8*/
        v38 = (NiColorAlpha *)FormHeapAlloc(0x1210u); /*0x50f3f5*/
        if ( v38 ) /*0x50f3ff*/
        {
          v39 = 0x120; /*0x50f403*/
          v40 = (float *)((char *)v38 + 8); /*0x50f408*/
          do /*0x50f41d*/
          {
            v40[0xFFFFFFFE] = 0.0; /*0x50f40b*/
            v40 += 4; /*0x50f40e*/
            --v39; /*0x50f411*/
            v40[0xFFFFFFFB] = 0.0; /*0x50f414*/
            v40[0xFFFFFFFC] = 0.0; /*0x50f417*/
            v40[0xFFFFFFFD] = 0.0; /*0x50f41a*/
          }
          while ( v39 >= 0 ); /*0x50f41d*/
          colors = v38; /*0x50f421*/
        }
        else
        {
          colors = 0; /*0x50f42a*/
        }
        v41 = FormHeapAlloc(0xC00u); /*0x50f44b*/
        v42 = dbl_A46970; /*0x50f450*/
        v43 = 0; /*0x50f459*/
        v44 = (UInt16 *)v41; /*0x50f45b*/
        v109 = 0; /*0x50f45d*/
        do /*0x50f4c0*/
        {
          v45 = (double)v109; /*0x50f461*/
          v46 = 0; /*0x50f465*/
          v47 = v37; /*0x50f467*/
          v109 = 0; /*0x50f469*/
          v37 += 0x11; /*0x50f46f*/
          v135 = v45 - v42; /*0x50f475*/
          v48 = v135; /*0x50f47c*/
          do /*0x50f4b4*/
          {
            v46 += 4; /*0x50f487*/
            ++v47; /*0x50f48a*/
            v49 = (double)v109 - v42; /*0x50f490*/
            v109 = v46; /*0x50f492*/
            v134 = v49; /*0x50f496*/
            v47[0xFFFFFFFF].x = v134; /*0x50f4a4*/
            v50 = v136; /*0x50f4a7*/
            v47[0xFFFFFFFF].y = v48; /*0x50f4ae*/
            v47[0xFFFFFFFF].z = v50; /*0x50f4b1*/
          }
          while ( v46 < 0x44 ); /*0x50f4b4*/
          v43 += 4; /*0x50f4b6*/
          v109 = v43; /*0x50f4bc*/
        }
        while ( v43 < 0x44 ); /*0x50f4c0*/
        v51 = normals; /*0x50f4c2*/
        v52 = (char *)textureCoordinates; /*0x50f4c8*/
        v53 = dbl_A492E0; /*0x50f4cf*/
        v54 = colors; /*0x50f4d5*/
        i = 0; /*0x50f4dc*/
        while ( 1 ) /*0x50f4ff*/
        {
          v55 = v54; /*0x50f4ff*/
          v56 = (float *)v52; /*0x50f501*/
          v144 = (float)i; /*0x50f508*/
          v57 = v51; /*0x50f51c*/
          v109 = 0; /*0x50f526*/
          v158 = (NiColorAlpha *)((char *)v54 + 0x110); /*0x50f52e*/
          v150 = v52 + 0x88; /*0x50f535*/
          v133 = (int)&v51[0x11]; /*0x50f53c*/
          v154 = 1.0 - v144 / v53; /*0x50f547*/
          do /*0x50f696*/
          {
            v58 = v130; /*0x50f556*/
            v59 = v131; /*0x50f55d*/
            v108 = (float)v109; /*0x50f564*/
            v57->x = v129; /*0x50f568*/
            v60 = v108; /*0x50f56a*/
            v57->y = v58; /*0x50f56e*/
            v61 = v154; /*0x50f573*/
            v57->z = v59; /*0x50f57c*/
            v56[1] = v61; /*0x50f57f*/
            v153 = v60 / v53; /*0x50f582*/
            *v56 = v153; /*0x50f590*/
            if ( *(_DWORD *)v105 ) /*0x50f597*/
            {
              *(float *)&v124 = v60 * v162; /*0x50f5b1*/
              v125 = v162 * v144; /*0x50f5bc*/
              *(float *)&v124 = *(float *)&v124 + *(float *)&v117; /*0x50f5c8*/
              v125 = *((float *)&v117 + 1) + v125; /*0x50f5d4*/
              v126 = z + dbl_A2FC68; /*0x50f5e2*/
              v108 = (float)sub_4D2D00((float *)&v124); /*0x50f5f6*/
              v108 = v108 * dbl_A3C770; /*0x50f604*/
              v139 = v108; /*0x50f60c*/
              v140 = v108; /*0x50f61a*/
              v62 = v108; /*0x50f621*/
              v141 = v108; /*0x50f628*/
              v63 = v108; /*0x50f62f*/
              *(float *)v55 = v108; /*0x50f638*/
              v142 = 0.0; /*0x50f63b*/
              *((float *)v55 + 1) = v62; /*0x50f642*/
              v64 = v142; /*0x50f645*/
              v53 = dbl_A492E0; /*0x50f64c*/
              *((float *)v55 + 2) = v63; /*0x50f652*/
              *((float *)v55 + 3) = v64; /*0x50f655*/
            }
            else
            {
              *(_DWORD *)v55 = dword_B25AE0; /*0x50f662*/
              *((_DWORD *)v55 + 1) = dword_B25AE4; /*0x50f66b*/
              *((_DWORD *)v55 + 2) = dword_B25AE8; /*0x50f673*/
              *((_DWORD *)v55 + 3) = dword_B25AEC; /*0x50f67c*/
            }
            ++v57; /*0x50f686*/
            v56 += 2; /*0x50f689*/
            v55 = (NiColorAlpha *)((char *)v55 + 0x10); /*0x50f68c*/
            ++v109; /*0x50f692*/
          }
          while ( v109 < 0x11 ); /*0x50f696*/
          if ( ++i >= 0x11 ) /*0x50f6aa*/
            break; /*0x50f6aa*/
          v51 = (NiPoint3 *)v133; /*0x50f4e6*/
          v52 = v150; /*0x50f4ed*/
          v54 = v158; /*0x50f4f4*/
        }
        v65 = 0; /*0x50f6b0*/
        v66 = 0; /*0x50f6b4*/
        for ( i = 0; i < 0x10; ++i ) /*0x50f6b6*/
        {
          v67 = 0; /*0x50f6bc*/
          v68 = v66 % 2; /*0x50f6ca*/
          v69 = 0x11 * v66; /*0x50f6d3*/
          LODWORD(v108) = v66 % 2; /*0x50f6dd*/
          v70 = 0x11 * ((unsigned __int16)v66 + 1); /*0x50f6e1*/
          while ( 1 ) /*0x50f705*/
          {
            if ( v68 != v67 % 2 ) /*0x50f703*/
            {
              v71 = v70 + v67; /*0x50f70a*/
              v44[v65] = v70 + v67; /*0x50f70d*/
              v72 = v65 + 1; /*0x50f711*/
              v44[v72] = v69 + v67; /*0x50f716*/
              v73 = v69 + v67 + 1; /*0x50f71a*/
              ++v72; /*0x50f71d*/
              v44[v72++] = v73; /*0x50f720*/
              v44[v72] = v73; /*0x50f727*/
              v74 = v72 + 1; /*0x50f72b*/
              v44[v74] = v70 + v67 + 1; /*0x50f731*/
            }
            else
            {
              v44[v65] = v70 + v67 + 1; /*0x50f73e*/
              v75 = v65 + 1; /*0x50f742*/
              v133 = v70 + (unsigned __int16)v67 + 1; /*0x50f745*/
              v44[v75++] = v70 + v67; /*0x50f74f*/
              v44[v75++] = v69 + v67; /*0x50f758*/
              v44[v75] = v69 + v67; /*0x50f75f*/
              v74 = v75 + 1; /*0x50f763*/
              v44[v74] = v69 + v67 + 1; /*0x50f769*/
              v71 = v133; /*0x50f76d*/
            }
            v76 = v74 + 1; /*0x50f775*/
            v44[v76] = v71; /*0x50f778*/
            ++v67; /*0x50f77c*/
            v65 = v76 + 1; /*0x50f77f*/
            if ( v67 >= 0x10 ) /*0x50f785*/
              break; /*0x50f785*/
            v68 = LODWORD(v108); /*0x50f6f0*/
          }
          v66 = i + 1; /*0x50f78f*/
        }
        *(float *)&v77 = COERCE_FLOAT(FormHeapAlloc(0xC0u)); /*0x50f7a4*/
        v108 = *(float *)&v77; /*0x50f7ac*/
        LOBYTE(v163) = 4; /*0x50f7b2*/
        if ( *(float *)&v77 == 0.0 ) /*0x50f7ba*/
          v78 = 0; /*0x50f7f3*/
        else
          v78 = NiTriShape_ctorWithGeometryData( /*0x50f7ef*/
                  v77,
                  0x121u,
                  vertices,
                  normals,
                  colors,
                  textureCoordinates,
                  1,
                  0,
                  0x200u,
                  v44);
        v9 = v114; /*0x50f7f5*/
        AddObject = v114->vtbl->AddObject; /*0x50f7fb*/
        LOBYTE(v163) = 1; /*0x50f806*/
        ((void (__thiscall *)(NiNode *, NiAVObject *, int))AddObject)(v114, v78, 1); /*0x50f80e*/
        v119 <<= 6; /*0x50f817*/
        v80 = dbl_A46970; /*0x50f81f*/
        v81 = texture; /*0x50f829*/
        v82 = (double)v119 + v80; /*0x50f82d*/
        v83 = texture == 0; /*0x50f832*/
        v119 = v127 << 6; /*0x50f83b*/
        v84 = v116; /*0x50f83f*/
        v85 = v82 - v137; /*0x50f845*/
        v86 = v137; /*0x50f845*/
        *(float *)&v115 = v85; /*0x50f847*/
        v78->members.m_localTransform.pos.x = *(float *)&v115; /*0x50f84f*/
        *((float *)&v115 + 1) = v80 + (double)v119 - v86; /*0x50f858*/
        v78->members.m_localTransform.pos.y = *((float *)&v115 + 1); /*0x50f860*/
        v78->members.m_localTransform.pos.z = v84; /*0x50f863*/
        if ( !v83 ) /*0x50f866*/
        {
          v87 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x50f86a*/
          v119 = (int)v87; /*0x50f872*/
          LOBYTE(v163) = 5; /*0x50f878*/
          if ( v87 ) /*0x50f880*/
            v88 = NiTexturingProperty::NiTexturingProperty(v87); /*0x50f889*/
          else
            v88 = 0; /*0x50f88d*/
          LOBYTE(v163) = 1; /*0x50f892*/
          OB_NiTexturingProperty_SetBaseTexture_010201A0(v88, v81); /*0x50f89a*/
          OB_NiTexturingProperty_SetClampMode_010201A0(v88, 0); /*0x50f8a3*/
          v88->unk018 = v88->unk018 & 0xFFF1 | 4; /*0x50f8b5*/
          sub_405680((NiNode *)v78, (BSShaderProperty *)v88); /*0x50f8bc*/
          if ( !InterlockedDecrement((volatile LONG *)&v81->members) ) /*0x50f8c5*/
            v81->__vftable->super.super.Destructor((NiRefObject *)v81, 1); /*0x50f8d8*/
          v81 = 0; /*0x50f8da*/
        }
        v163 = 0xFFFFFFFF; /*0x50f8de*/
        if ( v81 ) /*0x50f8e9*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v81->members) ) /*0x50f8ef*/
            v81->__vftable->super.super.Destructor((NiRefObject *)v81, 1); /*0x50f902*/
        }
        v16 = ++v113; /*0x50f908*/
        if ( v113 >= angleZ ) /*0x50f913*/
          break; /*0x50f913*/
        v13 = v151; /*0x50f0f0*/
      }
    }
    v89 = (int *)reference->vtbl->super.super.super.GetPos(reference); /*0x50f91d*/
    v90 = *v89; /*0x50f92d*/
    v91 = *((float *)v89 + 1); /*0x50f92f*/
    v92 = v89[2]; /*0x50f932*/
    v121 = v90; /*0x50f935*/
    v93 = (TESObjectREFR *)reference; /*0x50f939*/
    v122 = v91; /*0x50f93f*/
    v123 = *(float *)&v92; /*0x50f943*/
    if ( sub_4D8B90(v93) ) /*0x50f947*/
    {
      v104 = reference->vtbl->super.super.super.GetPos(reference); /*0x50f971*/
      v94 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x50f972*/
      sub_4CCE20(v94, v104, &v124, COERCE_FLOAT(1)); /*0x50f979*/
      v113 = (int)*(float *)&v124; /*0x50f982*/
      v114 = (NiNode *)(int)v125; /*0x50f98a*/
      angleZ = (((v113 - 0x800) >> 0xC) + 1) << 0xC; /*0x50f9ae*/
      *(float *)&v115 = (float)angleZ; /*0x50f9bc*/
      angleZ = (((int)&v114[0xFFFFFFF6].members.super.m_propertyList >> 0xC) + 1) << 0xC; /*0x50f9c4*/
      *((float *)&v115 + 1) = (float)angleZ; /*0x50f9d7*/
      v95 = 0.0; /*0x50f9df*/
      v137 = v115; /*0x50f9e1*/
      v116 = 0.0; /*0x50f9ec*/
      v138 = 0.0; /*0x50f9f4*/
      v121 = v124; /*0x50f9ff*/
      v122 = v125; /*0x50fa03*/
      v123 = v126; /*0x50fa07*/
    }
    else
    {
      angleZ = *(int *)reference->vtbl->super.super.super.GetPos(reference); /*0x50fa22*/
      v113 = (int)*(float *)&angleZ; /*0x50fa2a*/
      angleZ = *((int *)reference->vtbl->super.super.super.GetPos(reference) + 1); /*0x50fa41*/
      v114 = (NiNode *)(int)*(float *)&angleZ; /*0x50fa49*/
      angleZ = (v113 >> 0xC << 0xC) + 0x800; /*0x50fa63*/
      *(float *)&v115 = (float)angleZ; /*0x50fa74*/
      angleZ = ((int)v114 >> 0xC << 0xC) + 0x800; /*0x50fa7c*/
      *((float *)&v115 + 1) = (float)angleZ; /*0x50fa8b*/
      v95 = 0.0; /*0x50fa93*/
      v137 = v115; /*0x50fa95*/
      v116 = 0.0; /*0x50fa9c*/
      v138 = 0.0; /*0x50faa4*/
    }
    *(float *)&v117 = *(float *)&v121 - *(float *)&v137; /*0x50fac3*/
    *((float *)&v117 + 1) = v122 - *((float *)&v137 + 1); /*0x50fad5*/
    v96 = dbl_A40358; /*0x50fadd*/
    *(float *)&v117 = *(float *)&v117 * v96; /*0x50fae7*/
    *((float *)&v117 + 1) = v96 * *((float *)&v117 + 1); /*0x50faef*/
    z = v95; /*0x50faf3*/
    v134 = v95; /*0x50faf7*/
    v135 = flt_A35AA4; /*0x50fb04*/
    v136 = 1.0; /*0x50fb0d*/
    v129 = kHeadBodyNormalMatchRadius; /*0x50fb1a*/
    v130 = flt_A45E4C; /*0x50fb27*/
    *(float *)&v115 = v130; /*0x50fb2e*/
    *((float *)&v115 + 1) = v130; /*0x50fb36*/
    v131 = 1.0; /*0x50fb43*/
    v116 = 1.0; /*0x50fb51*/
    v139 = 1.0; /*0x50fb59*/
    v140 = v95; /*0x50fb6a*/
    v141 = v95; /*0x50fb73*/
    v142 = v95; /*0x50fb7c*/
    v97 = sub_47EEF0( /*0x50fbb2*/
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
    v98 = z; /*0x50fbbb*/
    v99 = v97; /*0x50fbbf*/
    v100 = *((float *)&v117 + 1); /*0x50fbc1*/
    LODWORD(v99->members.m_localTransform.pos.x) = v117; /*0x50fbc5*/
    v99->members.m_localTransform.pos.y = v100; /*0x50fbc8*/
    v99->members.m_localTransform.pos.z = v98; /*0x50fbcb*/
    qmemcpy(&v149, &stru_B26AF0[0xA].unk2C, sizeof(v149)); /*0x50fbdf*/
    p_rot = &reference->super.super.super.super.rot; /*0x50fbea*/
    v102 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x50fbed*/
    *(float *)&angleZ = sub_4CCE00(v102) + p_rot->z; /*0x50fc04*/
    NiMatrix33_InitRotationZ(&v149, *(float *)&angleZ); /*0x50fc0f*/
    qmemcpy(&v99->members.m_localTransform, &v149, 0x24u); /*0x50fc23*/
    ((void (__thiscall *)(NiNode *, NiAVObject *, int))v9->vtbl->AddObject)(v9, v99, 1); /*0x50fc32*/
    VertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty();// Verified TestLocalMap command handler also requests DebugRender_GetOrCreateVertexColorProperty. Its table row at B0C050 points to TestLocalMap (A50890) with description "Simulates the local map. (1 or 0 for FOW on or off)" (A50858). /*0x50fc34*/
    sub_405680(v9, VertexColorProperty); /*0x50fc3c*/
    v9->members.super.m_localTransform.pos.x = *(float *)&v110; /*0x50fc47*/
    v9->members.super.m_localTransform.pos.y = v111; /*0x50fc4e*/
    v9->members.super.m_localTransform.pos.z = v112; /*0x50fc5d*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v9, 0.0, 1); /*0x50fc60*/
    NiAVObject_InitializePropertyState((NiAVObject *)v9); /*0x50fc67*/
    sub_440E60(MEMORY[0xB333A0], (int)v9, flt_A37CC8); /*0x50fc7d*/
  }
}
