NiNode *__stdcall sub_53DA20(NiObject *a1, int a2, char a3)
{
  NiInterpController *m_uiRefCount; // esi
  NiObject *v4; // ebp
  NiRTTI *v5; // eax
  NiObject *v6; // edi
  NiObjectVtbl *v7; // eax
  NiNodeVtbl *vftable; // edx
  NiRTTI *(__thiscall *GetType)(NiObject *); // eax
  NiRTTI *v10; // eax
  NiObjectVtbl *v11; // edi
  NiObjectVtbl *v12; // eax
  int v13; // ecx
  float **v14; // edx
  float *v15; // edx
  int v16; // esi
  float *v17; // esi
  NiRTTI *v18; // eax
  NiObjectVtbl *v19; // edi
  NiObjectVtbl *Destructor; // eax
  int v21; // ecx
  int *p_Unk_02; // edx
  int v23; // edx
  int v24; // esi
  int v25; // esi
  NiRTTI *v26; // eax
  NiRTTI *v27; // eax
  NiObject *v28; // eax
  NiNode *v29; // eax
  NiAVObject *ChildAtIndex; // eax
  NiObject *v31; // eax
  int vftable_low; // ecx
  UInt32 v33; // ebx
  int v34; // edi
  int v35; // eax
  int v36; // esi
  int v37; // eax
  NiNode *v38; // ecx
  UInt16 *v39; // ebx
  NiObject *v40; // edx
  float v41; // eax
  NiObjectVtbl *v42; // esi
  _DWORD *v43; // ecx
  NiObject *v44; // edx
  int v45; // ebp
  int v46; // eax
  bool v47; // zf
  NiTriShape *v48; // edi
  NiTriShapeData *v49; // ecx
  NiTriShapeData *v50; // eax
  NiNode *v51; // edi
  NiPoint3 *v52; // ebx
  float v53; // ebp
  int v54; // eax
  UInt16 *v55; // edi
  char *v56; // ecx
  int v57; // ebp
  int v58; // esi
  _WORD *v59; // edx
  float *p_x; // eax
  double v61; // st7
  double v62; // st5
  double v63; // st4
  double v64; // st3
  double v65; // st4
  double v66; // rt1
  double v67; // st3
  NiTriShape *v68; // esi
  NiTriShapeData *v69; // eax
  NiTriShapeData *v70; // eax
  NiNode *v71; // eax
  float *v72; // esi
  int v73; // eax
  int v74; // eax
  int (__thiscall *v75)(float *); // edx
  NiRTTI *v76; // eax
  NiRTTI *v77; // eax
  NiRTTI *v78; // eax
  NiObject *v79; // eax
  NiObject *v80; // ebx
  bool v81; // cc
  int v82; // eax
  NiObject *v83; // ebx
  NiTransform *v84; // eax
  double v85; // st7
  double z; // st5
  double v87; // rt0
  double v88; // st6
  double v89; // st6
  NiObject *v90; // ebx
  NiTransform *v91; // eax
  double v92; // st5
  NiTransform *v93; // eax
  int v94; // eax
  float *v95; // eax
  float v96; // ecx
  float v97; // edx
  double v98; // st7
  double v99; // st5
  double v100; // st6
  int v101; // ebp
  float *v102; // ebx
  NiObject *v103; // edi
  NiObject *v104; // esi
  double v105; // rt2
  NiTransform *v106; // eax
  double v107; // st7
  double v108; // st7
  float v109; // eax
  float v110; // ecx
  float v111; // edx
  double v112; // st7
  double v113; // st6
  double v114; // st7
  double v115; // st7
  int v116; // eax
  NiObject *v117; // eax
  unsigned __int16 *v118; // esi
  float *v119; // eax
  float v120; // edx
  double v121; // st7
  float v122; // edx
  float v123; // edx
  NiNode *v124; // ecx
  int v125; // esi
  BSShaderProperty *v126; // eax
  BSShaderProperty *v127; // eax
  NiNode *v128; // esi
  BSShaderProperty *NiPropertyByID; // eax
  BSShaderProperty *v130; // eax
  NiObjectVtbl *v132; // [esp+40h] [ebp-2ACh]
  float v133; // [esp+40h] [ebp-2ACh]
  float v134; // [esp+40h] [ebp-2ACh]
  float v135; // [esp+40h] [ebp-2ACh]
  float v136; // [esp+40h] [ebp-2ACh]
  float v137; // [esp+40h] [ebp-2ACh]
  float v138; // [esp+40h] [ebp-2ACh]
  float v139; // [esp+40h] [ebp-2ACh]
  float v140; // [esp+40h] [ebp-2ACh]
  float v141; // [esp+40h] [ebp-2ACh]
  float v142; // [esp+40h] [ebp-2ACh]
  float v143; // [esp+40h] [ebp-2ACh]
  float v144; // [esp+40h] [ebp-2ACh]
  float v145; // [esp+40h] [ebp-2ACh]
  float v146; // [esp+40h] [ebp-2ACh]
  float v147; // [esp+40h] [ebp-2ACh]
  double v148; // [esp+44h] [ebp-2A8h]
  NiObjectVtbl *v149; // [esp+44h] [ebp-2A8h]
  float scale; // [esp+44h] [ebp-2A8h]
  float v151; // [esp+44h] [ebp-2A8h]
  float v152; // [esp+44h] [ebp-2A8h]
  float v153; // [esp+44h] [ebp-2A8h]
  float v154; // [esp+44h] [ebp-2A8h]
  float v155; // [esp+44h] [ebp-2A8h]
  float v156; // [esp+44h] [ebp-2A8h]
  float v157; // [esp+44h] [ebp-2A8h]
  float v158; // [esp+44h] [ebp-2A8h]
  float v159; // [esp+44h] [ebp-2A8h]
  float v160; // [esp+44h] [ebp-2A8h]
  float v161; // [esp+44h] [ebp-2A8h]
  float v162; // [esp+44h] [ebp-2A8h]
  float v163; // [esp+44h] [ebp-2A8h]
  float v164; // [esp+44h] [ebp-2A8h]
  float v165; // [esp+44h] [ebp-2A8h]
  float v166; // [esp+44h] [ebp-2A8h]
  float v167; // [esp+44h] [ebp-2A8h]
  float v168; // [esp+44h] [ebp-2A8h]
  float v169; // [esp+44h] [ebp-2A8h]
  float v170; // [esp+44h] [ebp-2A8h]
  float v171; // [esp+44h] [ebp-2A8h]
  float v172; // [esp+44h] [ebp-2A8h]
  NiObjectVtbl *data; // [esp+4Ch] [ebp-2A0h]
  float datab; // [esp+4Ch] [ebp-2A0h]
  float datac; // [esp+4Ch] [ebp-2A0h]
  float datad; // [esp+4Ch] [ebp-2A0h]
  float datae; // [esp+4Ch] [ebp-2A0h]
  float dataf; // [esp+4Ch] [ebp-2A0h]
  float datag; // [esp+4Ch] [ebp-2A0h]
  float datah; // [esp+4Ch] [ebp-2A0h]
  float datai; // [esp+4Ch] [ebp-2A0h]
  float dataj; // [esp+4Ch] [ebp-2A0h]
  float datak; // [esp+4Ch] [ebp-2A0h]
  NiObjectVtbl *datal; // [esp+4Ch] [ebp-2A0h]
  UInt32 datam; // [esp+4Ch] [ebp-2A0h]
  float *dataa; // [esp+4Ch] [ebp-2A0h]
  float v187; // [esp+50h] [ebp-29Ch]
  float v188; // [esp+50h] [ebp-29Ch]
  float v189; // [esp+50h] [ebp-29Ch]
  float v190; // [esp+50h] [ebp-29Ch]
  float v191; // [esp+50h] [ebp-29Ch]
  UInt32 v192; // [esp+50h] [ebp-29Ch]
  float v193; // [esp+50h] [ebp-29Ch]
  float v194; // [esp+50h] [ebp-29Ch]
  float v195; // [esp+50h] [ebp-29Ch]
  UInt32 v196; // [esp+50h] [ebp-29Ch]
  float v197; // [esp+50h] [ebp-29Ch]
  float v198; // [esp+50h] [ebp-29Ch]
  float v199; // [esp+50h] [ebp-29Ch]
  float v200; // [esp+50h] [ebp-29Ch]
  float v201; // [esp+50h] [ebp-29Ch]
  _DWORD *v202; // [esp+54h] [ebp-298h]
  float v203; // [esp+54h] [ebp-298h]
  float v204; // [esp+54h] [ebp-298h]
  float v205; // [esp+54h] [ebp-298h]
  float v206; // [esp+54h] [ebp-298h]
  float v207; // [esp+54h] [ebp-298h]
  float v208; // [esp+54h] [ebp-298h]
  float v209; // [esp+54h] [ebp-298h]
  float v210; // [esp+54h] [ebp-298h]
  float v211; // [esp+54h] [ebp-298h]
  float v212; // [esp+54h] [ebp-298h]
  int v213; // [esp+54h] [ebp-298h]
  UInt32 v214; // [esp+58h] [ebp-294h]
  float v215; // [esp+58h] [ebp-294h]
  float v216; // [esp+58h] [ebp-294h]
  float v217; // [esp+58h] [ebp-294h]
  float v218; // [esp+58h] [ebp-294h]
  float v219; // [esp+58h] [ebp-294h]
  float v220; // [esp+58h] [ebp-294h]
  float v221; // [esp+58h] [ebp-294h]
  float v222; // [esp+58h] [ebp-294h]
  float v223; // [esp+58h] [ebp-294h]
  float v224; // [esp+58h] [ebp-294h]
  float v225; // [esp+5Ch] [ebp-290h]
  __int64 v226; // [esp+5Ch] [ebp-290h]
  float v227; // [esp+5Ch] [ebp-290h]
  float v228; // [esp+5Ch] [ebp-290h]
  float v229; // [esp+5Ch] [ebp-290h]
  float v230; // [esp+5Ch] [ebp-290h]
  float v231; // [esp+60h] [ebp-28Ch]
  float v232; // [esp+60h] [ebp-28Ch]
  float v233; // [esp+60h] [ebp-28Ch]
  float v234; // [esp+60h] [ebp-28Ch]
  float v235; // [esp+64h] [ebp-288h]
  float v236; // [esp+64h] [ebp-288h]
  float v237; // [esp+64h] [ebp-288h]
  float v238; // [esp+64h] [ebp-288h]
  float v239; // [esp+64h] [ebp-288h]
  NiPoint3 v240; // [esp+68h] [ebp-284h] BYREF
  int v241; // [esp+74h] [ebp-278h]
  NiObject *v242; // [esp+78h] [ebp-274h]
  int v243; // [esp+7Ch] [ebp-270h]
  float v244; // [esp+80h] [ebp-26Ch]
  float v245; // [esp+84h] [ebp-268h] BYREF
  float v246; // [esp+88h] [ebp-264h]
  int v247; // [esp+8Ch] [ebp-260h] BYREF
  float v248; // [esp+90h] [ebp-25Ch]
  float v249; // [esp+94h] [ebp-258h]
  int v250; // [esp+98h] [ebp-254h]
  float v251; // [esp+9Ch] [ebp-250h]
  NiNode *v252; // [esp+A0h] [ebp-24Ch]
  NiObject *v253; // [esp+A4h] [ebp-248h]
  NiTransform v254; // [esp+A8h] [ebp-244h] BYREF
  NiObject *v255; // [esp+DCh] [ebp-210h]
  float *v256; // [esp+E0h] [ebp-20Ch]
  double v257; // [esp+E4h] [ebp-208h]
  double v258; // [esp+ECh] [ebp-200h]
  NiPoint3 v259; // [esp+F4h] [ebp-1F8h] BYREF
  float v260; // [esp+100h] [ebp-1ECh]
  float v261; // [esp+104h] [ebp-1E8h]
  float v262; // [esp+108h] [ebp-1E4h]
  float v263; // [esp+10Ch] [ebp-1E0h]
  float v264; // [esp+110h] [ebp-1DCh]
  float v265; // [esp+114h] [ebp-1D8h]
  float v266; // [esp+118h] [ebp-1D4h]
  int v267; // [esp+11Ch] [ebp-1D0h]
  NiNode *v268; // [esp+120h] [ebp-1CCh]
  float v269[6]; // [esp+124h] [ebp-1C8h] BYREF
  float v270; // [esp+13Ch] [ebp-1B0h] BYREF
  float v271; // [esp+140h] [ebp-1ACh]
  float v272; // [esp+144h] [ebp-1A8h]
  float v273; // [esp+148h] [ebp-1A4h]
  float v274; // [esp+14Ch] [ebp-1A0h]
  float v275; // [esp+150h] [ebp-19Ch]
  float v276; // [esp+154h] [ebp-198h]
  NiTransform v277; // [esp+158h] [ebp-194h] BYREF
  float v278[3]; // [esp+18Ch] [ebp-160h] BYREF
  float v279; // [esp+198h] [ebp-154h]
  NiTransform parent; // [esp+19Ch] [ebp-150h] BYREF
  NiTransform v281; // [esp+1D0h] [ebp-11Ch] BYREF
  NiTransform local; // [esp+204h] [ebp-E8h] BYREF
  NiTransform out; // [esp+238h] [ebp-B4h] BYREF
  float v284[3]; // [esp+26Ch] [ebp-80h] BYREF
  NiTransform v285; // [esp+278h] [ebp-74h] BYREF
  float v286[13]; // [esp+2ACh] [ebp-40h] BYREF
  int v287; // [esp+2E8h] [ebp-4h]

  m_uiRefCount = (NiInterpController *)a1[1].members.m_uiRefCount; /*0x53da56*/
  v245 = 0.0; /*0x53da59*/
  v4 = 0; /*0x53da5d*/
  v243 = 0; /*0x53da61*/
  v242 = 0; /*0x53da65*/
  v268 = 0; /*0x53da69*/
  if ( m_uiRefCount )
  {
    while ( 1 ) /*0x53da7d*/
    {
      v5 = m_uiRefCount->vtbl->super.super.GetType((NiObject *)m_uiRefCount); /*0x53da7d*/
      if ( v5 ) /*0x53da81*/
        break; /*0x53da81*/
LABEL_5:
      m_uiRefCount = (NiInterpController *)m_uiRefCount->member.next; /*0x53da91*/
      if ( !m_uiRefCount ) /*0x53da96*/
        return 0; /*0x53da96*/
    }
    while ( v5 != &stru_B40BCC ) /*0x53da88*/
    {
      v5 = v5->parent; /*0x53da8a*/
      if ( !v5 ) /*0x53da8f*/
        goto LABEL_5; /*0x53da8f*/
    }
    *(float *)&v6 = COERCE_FLOAT(NiRTTI_Cast((BSStringT *)&stru_B40B50, *(NiObject **)&m_uiRefCount[1].member.flags)); /*0x53daab*/
    v256 = (float *)v6; /*0x53dab2*/
    v7 = sub_53D850(m_uiRefCount); /*0x53dab9*/
    (*((void (__thiscall **)(NiObjectVtbl *, _DWORD, _DWORD, float *))v7->super.Destructor + 0x17))(v7, 0.0, 0, &v245); /*0x53dad2*/
    vftable = (NiNodeVtbl *)a1->__vftable; /*0x53dadb*/
    v245 = *(float *)&v6[9].__vftable * v245; /*0x53daee*/
    GetType = vftable->super.super.GetType; /*0x53db0f*/
    v241 = (unsigned __int16)(int)v245; /*0x53db16*/
    v266 = 0.0; /*0x53db1e*/
    v10 = GetType(a1); /*0x53db25*/
    if ( v10 )
    {
      while ( v10 != &stru_B40B1C ) /*0x53db35*/
      {
        v10 = v10->parent; /*0x53db37*/
        if ( !v10 ) /*0x53db3c*/
          goto LABEL_10; /*0x53db3c*/
      }
      v19 = 0; /*0x53dba4*/
      while ( 1 ) /*0x53dbac*/
      {
LABEL_22:
        if ( v19 < a1[0x1A].__vftable && (Destructor = a1[0x19].__vftable, v21 = 0, Destructor) ) /*0x53dbb8*/
        {
          while ( 1 ) /*0x53dbc0*/
          {
            p_Unk_02 = (int *)&Destructor->Unk_02; /*0x53dbc0*/
            Destructor = (NiObjectVtbl *)Destructor->super.Destructor; /*0x53dbc3*/
            v23 = *p_Unk_02; /*0x53dbc5*/
            v24 = v21++; /*0x53dbc7*/
            if ( (NiObjectVtbl *)v24 == v19 ) /*0x53dbce*/
              break; /*0x53dbce*/
            if ( !Destructor ) /*0x53dbd2*/
              goto LABEL_26; /*0x53dbd2*/
          }
          v25 = v23; /*0x53dc00*/
        }
        else
        {
LABEL_26:
          v25 = 0; /*0x53dbd4*/
        }
        v19 = (NiObjectVtbl *)((char *)v19 + 1); /*0x53dbd6*/
        if ( !v25 ) /*0x53dbdb*/
          break; /*0x53dbdb*/
        if ( !v243 ) /*0x53dbe1*/
        {
          v26 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 4))(v25); /*0x53dbea*/
          if ( v26 ) /*0x53dbee*/
          {
            while ( v26 != &stru_B40A28 ) /*0x53dbf5*/
            {
              v26 = v26->parent; /*0x53dbf7*/
              if ( !v26 ) /*0x53dbfc*/
                goto LABEL_35; /*0x53dbfc*/
            }
            v243 = v25; /*0x53dc04*/
          }
        }
LABEL_35:
        if ( !v242 ) /*0x53dc0c*/
        {
          v27 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 4))(v25); /*0x53dc15*/
          if ( v27 ) /*0x53dc19*/
          {
            while ( v27 != &stru_B40AA4 ) /*0x53dc25*/
            {
              v27 = v27->parent; /*0x53dc27*/
              if ( !v27 ) /*0x53dc2c*/
                goto LABEL_22; /*0x53dc2c*/
            }
            v242 = (NiObject *)v25; /*0x53dc33*/
          }
        }
      }
      if ( v243 ) /*0x53dc40*/
      {
        if ( *(_WORD *)(v243 + 0x22) ) /*0x53dc46*/
          v28 = **(NiObject ***)(v243 + 0x1C); /*0x53dc4f*/
        else
          v28 = 0; /*0x53dc53*/
        v29 = (NiNode *)NiRTTI_Cast((BSStringT *)&::parent, v28); /*0x53dc5b*/
        if ( v29 ) /*0x53dc65*/
        {
          ChildAtIndex = NiNode_GetChildAtIndex(v29, 0); /*0x53dc6b*/
          v4 = NiRTTI_Cast((BSStringT *)&stru_B3FD5C, (NiObject *)ChildAtIndex); /*0x53dc7e*/
          v268 = (NiNode *)v4; /*0x53dc80*/
        }
      }
      if ( v242 ) /*0x53dc8d*/
        v266 = *(float *)&v242[3].__vftable; /*0x53dc92*/
      if ( NiRTTI_Cast((BSStringT *)&stru_B3FD04, v4) ) /*0x53dc9f*/
        return 0; /*0x53dca9*/
      v31 = NiRTTI_Cast((BSStringT *)&stru_B3FD2C, (NiObject *)v4[0x16].members.m_uiRefCount); /*0x53dcbb*/
      vftable_low = LOWORD(v31[1].__vftable); /*0x53dcc3*/
      v33 = v31[8].members.m_uiRefCount; /*0x53dcc7*/
      v202 = (_DWORD *)v31[3].members.m_uiRefCount; /*0x53dcca*/
      v132 = v31[9].__vftable; /*0x53dcd4*/
      data = v31[5].__vftable; /*0x53dcd8*/
      v34 = (unsigned __int16)vftable_low; /*0x53dce1*/
      v35 = 0xFFFF / (unsigned __int16)vftable_low; /*0x53dce5*/
      v250 = vftable_low; /*0x53dcea*/
      if ( (unsigned __int16)v241 >= (unsigned __int16)v35 ) /*0x53dcf3*/
        v241 = (unsigned __int16)v35; /*0x53dcf8*/
      v243 = (unsigned __int16)v241; /*0x53dd14*/
      v251 = COERCE_FLOAT(
               FormHeapAlloc(
                 (0xC * (unsigned __int64)((unsigned __int16)vftable_low * (unsigned int)(unsigned __int16)v241)) >> 0x20 != 0
               ? 0xFFFFFFFF
               : 0xC * (unsigned __int16)vftable_low * (unsigned __int16)v241));
      v255 = (NiObject *)FormHeapAlloc(
                           (unsigned __int64)(v34 * (unsigned int)(unsigned __int16)v241) >> 0x1D != 0
                         ? 0xFFFFFFFF
                         : 8 * v34 * (unsigned __int16)v241);
      v36 = (unsigned __int16)v33; /*0x53dd45*/
      LODWORD(v244) = (unsigned __int16)v33; /*0x53dd59*/
      *(float *)&v37 = COERCE_FLOAT(
                         FormHeapAlloc(
                           (unsigned __int64)((unsigned __int16)v33 * (unsigned int)(unsigned __int16)v241) >> 0x1F != 0
                         ? 0xFFFFFFFF
                         : 2 * (unsigned __int16)v33 * (unsigned __int16)v241));
      v38 = 0; /*0x53dd67*/
      v39 = (UInt16 *)v37; /*0x53dd6e*/
      v246 = *(float *)&v37; /*0x53dd70*/
      v252 = 0; /*0x53dd74*/
      if ( (_WORD)v241 ) /*0x53dd78*/
      {
        v40 = 0; /*0x53dd8a*/
        v267 = 0xC * v34; /*0x53dd8e*/
        v41 = v251; /*0x53dd95*/
        v242 = v255; /*0x53dd99*/
        v253 = 0; /*0x53dda1*/
        v254.scale = v251; /*0x53dda5*/
        LODWORD(v254.pos.z) = v243; /*0x53ddac*/
        do /*0x53de52*/
        {
          if ( v34 > 0 ) /*0x53ddb5*/
          {
            v42 = data; /*0x53ddb7*/
            v43 = v202; /*0x53ddbb*/
            v44 = v242; /*0x53ddbf*/
            v45 = v34; /*0x53ddc3*/
            do /*0x53ddee*/
            {
              *(_DWORD *)LODWORD(v41) = *v43; /*0x53ddc7*/
              *(_DWORD *)(LODWORD(v41) + 4) = v43[1]; /*0x53ddcc*/
              *(_DWORD *)(LODWORD(v41) + 8) = v43[2]; /*0x53ddd2*/
              v44->__vftable = (NiObjectVtbl *)v42->super.Destructor; /*0x53ddd7*/
              v44->members.m_uiRefCount = (UInt32)v42->GetType; /*0x53dddc*/
              LODWORD(v41) += 0xC; /*0x53dddf*/
              v43 += 3; /*0x53dde2*/
              ++v44; /*0x53dde5*/
              v42 = (NiObjectVtbl *)((char *)v42 + 8); /*0x53dde8*/
              --v45; /*0x53ddeb*/
            }
            while ( v45 ); /*0x53ddee*/
            v40 = v253; /*0x53ddf0*/
            v36 = LODWORD(v244); /*0x53ddf4*/
            v38 = v252; /*0x53ddf8*/
            v39 = (UInt16 *)LODWORD(v246); /*0x53ddfc*/
          }
          v46 = 0; /*0x53de00*/
          if ( v36 > 0 ) /*0x53de04*/
          {
            do /*0x53de1e*/
            {
              v39[(_DWORD)v38] = (_WORD)v40 + *((_WORD *)&v132->super.Destructor + v46++); /*0x53de12*/
              v38 = (NiNode *)((char *)v38 + 1); /*0x53de19*/
            }
            while ( v46 < v36 ); /*0x53de1e*/
            v252 = v38; /*0x53de20*/
          }
          v242 += v34; /*0x53de2b*/
          LODWORD(v41) = v267 + LODWORD(v254.scale); /*0x53de36*/
          v40 = (NiObject *)((char *)v40 + v34); /*0x53de3d*/
          v47 = LODWORD(v254.pos.z)-- == 1; /*0x53de3f*/
          v253 = v40; /*0x53de47*/
          LODWORD(v254.scale) += v267; /*0x53de4b*/
        }
        while ( !v47 ); /*0x53de52*/
      }
      v48 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x53de62*/
      v287 = 0; /*0x53de6f*/
      if ( v48 ) /*0x53de76*/
      {
        v49 = (NiTriShapeData *)FormHeapAlloc(0x5Cu); /*0x53de83*/
        LOBYTE(v287) = 1; /*0x53de8e*/
        if ( v49 ) /*0x53de96*/
        {
          v50 = sub_72AB00(v49, v250 * v241, (NiPoint3 *)LODWORD(v251), 0, 0, v255, 1, 0, v241 * (v36 / 3), v39, 0, 0); /*0x53decc*/
          LOBYTE(v287) = 0; /*0x53ded4*/
          v51 = (NiNode *)OB_NiTriShape_ctorWithData_010201A0(v48, v50); /*0x53dee1*/
        }
        else
        {
          LOBYTE(v287) = 0; /*0x53def1*/
          v51 = (NiNode *)OB_NiTriShape_ctorWithData_010201A0(v48, 0); /*0x53defd*/
        }
        v252 = v51; /*0x53dee3*/
      }
      else
      {
        v51 = 0; /*0x53df0a*/
        v252 = 0; /*0x53df0c*/
      }
    }
    else
    {
LABEL_10:
      v11 = 0; /*0x53db3e*/
      while ( 1 ) /*0x53db46*/
      {
LABEL_11:
        if ( v11 < a1[0x1A].__vftable && (v12 = a1[0x19].__vftable, v13 = 0, v12) ) /*0x53db52*/
        {
          while ( 1 ) /*0x53db54*/
          {
            v14 = (float **)&v12->Unk_02; /*0x53db54*/
            v12 = (NiObjectVtbl *)v12->super.Destructor; /*0x53db57*/
            v15 = *v14; /*0x53db59*/
            v16 = v13++; /*0x53db5b*/
            if ( (NiObjectVtbl *)v16 == v11 ) /*0x53db62*/
              break; /*0x53db62*/
            if ( !v12 ) /*0x53db6a*/
              goto LABEL_15; /*0x53db6a*/
          }
          v17 = v15; /*0x53df15*/
        }
        else
        {
LABEL_15:
          v17 = 0; /*0x53db6c*/
        }
        v11 = (NiObjectVtbl *)((char *)v11 + 1); /*0x53db6e*/
        if ( !v17 ) /*0x53db73*/
          break; /*0x53db73*/
        v18 = (NiRTTI *)(*(int (__thiscall **)(float *))(*(_DWORD *)v17 + 4))(v17); /*0x53db80*/
        if ( v18 ) /*0x53db84*/
        {
          while ( v18 != &stru_B40AA4 ) /*0x53db95*/
          {
            v18 = v18->parent; /*0x53db9b*/
            if ( !v18 ) /*0x53dba0*/
              goto LABEL_11; /*0x53dba0*/
          }
          v266 = v17[6]; /*0x53df1f*/
          break; /*0x53df1f*/
        }
      }
      v268 = (NiNode *)a1; /*0x53df26*/
      v250 = 4; /*0x53df37*/
      if ( (unsigned __int16)v241 >= 0x3FFFu ) /*0x53df3f*/
        v241 = 0x3FFF; /*0x53df41*/
      v243 = (unsigned __int16)v241; /*0x53df5f*/
      *(float *)&v52 = COERCE_FLOAT(
                         FormHeapAlloc(
                           (0xC * (unsigned __int64)(4 * (unsigned int)(unsigned __int16)v241)) >> 0x20 != 0
                         ? 0xFFFFFFFF
                         : 0x30 * (unsigned __int16)v241));
      v251 = *(float *)&v52; /*0x53df80*/
      v53 = COERCE_FLOAT(
              FormHeapAlloc(
                (unsigned __int64)(4 * (unsigned int)(unsigned __int16)v241) >> 0x1D != 0
              ? 0xFFFFFFFF
              : 0x20 * (unsigned __int16)v241));
      v246 = v53; /*0x53df9f*/
      *(float *)&v54 = COERCE_FLOAT(
                         FormHeapAlloc(
                           (unsigned __int64)(6 * (unsigned int)(unsigned __int16)v241) >> 0x1F != 0
                         ? 0xFFFFFFFF
                         : 0xC * (unsigned __int16)v241));
      v55 = (UInt16 *)v54; /*0x53dfb2*/
      v244 = *(float *)&v54; /*0x53dfb4*/
      if ( (_WORD)v241 ) /*0x53dfb8*/
      {
        v56 = (char *)(LODWORD(v53) + 0x10); /*0x53dfc0*/
        v57 = v243; /*0x53dfc3*/
        v254.pos.x = 0.0; /*0x53dfc7*/
        v58 = 0; /*0x53dfd0*/
        v254.pos.y = 1.0; /*0x53dfd2*/
        v59 = (_WORD *)(v54 + 4); /*0x53dfd9*/
        *(float *)&v257 = 1.0; /*0x53dfdc*/
        p_x = &v52[2].x; /*0x53dfe3*/
        *((float *)&v257 + 1) = 1.0; /*0x53dfe6*/
        *(float *)&v258 = 1.0; /*0x53dfed*/
        *((float *)&v258 + 1) = 0.0; /*0x53dff4*/
        v61 = dbl_A3D360; /*0x53e003*/
        do /*0x53e1ca*/
        {
          v62 = v256[0x10]; /*0x53e019*/
          v133 = v62 * v61; /*0x53e021*/
          v63 = v133; /*0x53e025*/
          datab = v133; /*0x53e029*/
          v134 = v62 * 0.0; /*0x53e031*/
          v64 = v63; /*0x53e03d*/
          v65 = v134; /*0x53e03d*/
          v203 = v64; /*0x53e03f*/
          v240.x = datab; /*0x53e047*/
          p_x[0xFFFFFFFA] = datab; /*0x53e053*/
          v240.y = v134; /*0x53e056*/
          p_x[0xFFFFFFFB] = v134; /*0x53e062*/
          v240.z = v203; /*0x53e065*/
          v66 = v64; /*0x53e06d*/
          p_x[0xFFFFFFFC] = v203; /*0x53e06f*/
          v135 = v62; /*0x53e072*/
          datac = v65; /*0x53e080*/
          v204 = v64; /*0x53e086*/
          v260 = v135; /*0x53e08e*/
          p_x[0xFFFFFFFD] = v135; /*0x53e0a0*/
          v261 = datac; /*0x53e0a3*/
          p_x[0xFFFFFFFE] = datac; /*0x53e0b5*/
          v262 = v204; /*0x53e0b8*/
          v67 = v135; /*0x53e0c6*/
          p_x[0xFFFFFFFF] = v204; /*0x53e0c8*/
          v136 = v67; /*0x53e0cb*/
          v205 = v67; /*0x53e0cf*/
          datad = v65; /*0x53e0d5*/
          v263 = v136; /*0x53e0dd*/
          *p_x = v136; /*0x53e0ef*/
          v264 = datad; /*0x53e0f1*/
          p_x[1] = datad; /*0x53e103*/
          v265 = v205; /*0x53e106*/
          p_x[2] = v205; /*0x53e116*/
          v137 = v66; /*0x53e119*/
          datae = v65; /*0x53e11d*/
          v206 = v67; /*0x53e121*/
          p_x[3] = v137; /*0x53e135*/
          p_x[4] = datae; /*0x53e144*/
          p_x[5] = v206; /*0x53e14f*/
          *((_DWORD *)v56 + 0xFFFFFFFC) = LODWORD(v254.pos.x); /*0x53e159*/
          *((_DWORD *)v56 + 0xFFFFFFFD) = LODWORD(v254.pos.y); /*0x53e163*/
          *((double *)v56 + 0xFFFFFFFF) = v257; /*0x53e16d*/
          *(double *)v56 = v258; /*0x53e181*/
          *((float *)v56 + 2) = 0.0; /*0x53e191*/
          *((float *)v56 + 3) = 0.0; /*0x53e198*/
          v59[0xFFFFFFFF] = v58 + 1; /*0x53e19e*/
          v59[0xFFFFFFFE] = v58; /*0x53e1a8*/
          v59[2] = v58; /*0x53e1ac*/
          *v59 = v58 + 2; /*0x53e1b0*/
          v59[1] = v58 + 3; /*0x53e1b3*/
          v59[3] = v58 + 2; /*0x53e1b7*/
          v58 += 4; /*0x53e1bb*/
          p_x += 0xC; /*0x53e1be*/
          v56 += 0x20; /*0x53e1c1*/
          v59 += 6; /*0x53e1c4*/
          --v57; /*0x53e1c7*/
        }
        while ( v57 ); /*0x53e1ca*/
        v55 = (UInt16 *)LODWORD(v244); /*0x53e1d0*/
        v53 = v246; /*0x53e1d6*/
        *(float *)&v52 = v251; /*0x53e1dc*/
      }
      v68 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x53e1ea*/
      v287 = 2; /*0x53e1f5*/
      if ( v68 ) /*0x53e200*/
      {
        v69 = (NiTriShapeData *)FormHeapAlloc(0x5Cu); /*0x53e204*/
        LOBYTE(v287) = 3; /*0x53e212*/
        if ( v69 ) /*0x53e21a*/
        {
          v70 = sub_72AB00(v69, 4 * v243, v52, 0, 0, (void *)LODWORD(v53), 1, 0, 2 * v243, v55, 0, 0); /*0x53e23d*/
          LOBYTE(v287) = 2; /*0x53e245*/
          v71 = (NiNode *)OB_NiTriShape_ctorWithData_010201A0(v68, v70); /*0x53e24d*/
        }
        else
        {
          LOBYTE(v287) = 2; /*0x53e259*/
          v71 = (NiNode *)OB_NiTriShape_ctorWithData_010201A0(v68, 0); /*0x53e261*/
        }
      }
      else
      {
        v71 = 0; /*0x53e268*/
      }
      v252 = v71; /*0x53e26a*/
      v51 = v71; /*0x53e26e*/
    }
    v287 = 0xFFFFFFFF; /*0x53e274*/
    if ( v51 )
    {
      v72 = v256; /*0x53e285*/
      v207 = v256[6]; /*0x53e28f*/
      dataf = v256[7]; /*0x53e296*/
      v138 = (double)rand() / dbl_A3D5A8; /*0x53e2ad*/
      v246 = (v138 - dbl_A2FAA0) * dataf + v207; /*0x53e2c3*/
      v208 = v72[8]; /*0x53e2ca*/
      datag = v72[9]; /*0x53e2d1*/
      v73 = rand(); /*0x53e2d5*/
      v139 = ((double)v73 + (double)v73) / dbl_A3D5A8 - dbl_A2F928; /*0x53e2f0*/
      v244 = v139 * datag + v208; /*0x53e300*/
      v209 = v72[0xA]; /*0x53e307*/
      datah = v72[0xB]; /*0x53e30e*/
      v74 = rand(); /*0x53e312*/
      v140 = ((double)v74 + (double)v74) / dbl_A3D5A8 - dbl_A2F928; /*0x53e32d*/
      datai = v140 * datah + v209; /*0x53e33d*/
      v141 = sin(v244); /*0x53e351*/
      v210 = v141; /*0x53e359*/
      v142 = cos(v244); /*0x53e369*/
      v244 = v142; /*0x53e371*/
      *(double *)&v254.pos.x = datai; /*0x53e379*/
      v143 = sin(datai); /*0x53e385*/
      dataj = v143; /*0x53e38d*/
      v257 = v210; /*0x53e395*/
      v144 = cos(*(long double *)&v254.pos.x); /*0x53e3a8*/
      v254.rot.data[0][0] = v144 * v210; /*0x53e3bb*/
      v254.rot.data[0][1] = v210 * dataj; /*0x53e3c3*/
      v145 = v254.rot.data[0][0] * v246; /*0x53e3d4*/
      datak = v254.rot.data[0][1] * v246; /*0x53e3e1*/
      v75 = *(int (__thiscall **)(float *))(*(_DWORD *)v72 + 4); /*0x53e3eb*/
      v211 = v246 * v244; /*0x53e3f0*/
      v242 = 0; /*0x53e3f4*/
      v253 = 0; /*0x53e3fc*/
      v259.x = v145; /*0x53e400*/
      v255 = 0; /*0x53e407*/
      v244 = 0.0; /*0x53e412*/
      v259.y = datak; /*0x53e416*/
      v259.z = v211; /*0x53e421*/
      v241 = *((int *)v72 + 0x12); /*0x53e42b*/
      v76 = (NiRTTI *)v75(v72); /*0x53e42f*/
      if ( v76 )
      {
        while ( v76 != &stru_B409EC ) /*0x53e43a*/
        {
          v76 = v76->parent; /*0x53e440*/
          if ( !v76 ) /*0x53e445*/
            goto LABEL_86; /*0x53e445*/
        }
        v83 = NiRTTI_Cast((BSStringT *)&stru_B409EC, (NiObject *)v72); /*0x53e4ce*/
        qmemcpy(&local, &v83[0xA].__vftable[1].Copy, sizeof(local)); /*0x53e4e2*/
        qmemcpy(&v281, &v83[2].__vftable[1].Copy, sizeof(v281)); /*0x53e500*/
        v242 = v83; /*0x53e50a*/
        sub_718A80((float *)&v281, &parent); /*0x53e50e*/
        qmemcpy(&v277, NiTransform_Compose(&parent, &out, &local), sizeof(v277)); /*0x53e53d*/
        v84 = sub_7101F0(&v277, &v254, &v259); /*0x53e556*/
        v247 = SLODWORD(v84->rot.data[0][0]); /*0x53e561*/
        v148 = *(float *)&v241; /*0x53e568*/
        v248 = v84->rot.data[0][1]; /*0x53e573*/
        v249 = v84->rot.data[0][2]; /*0x53e57a*/
        v85 = *(float *)&v241 * v249 + v277.pos.z; /*0x53e584*/
        if ( v277.pos.z >= v85 ) /*0x53e58d*/
          z = v85; /*0x53e593*/
        else
          z = v277.pos.z; /*0x53e58f*/
        datal = v83[0xB].__vftable; /*0x53e598*/
        v87 = dbl_A2FAA0; /*0x53e5af*/
        v225 = -(*(float *)&v83[0xA].members.m_uiRefCount * v87); /*0x53e5b3*/
        v254.rot.data[1][0] = v225; /*0x53e5bf*/
        v231 = -(*(float *)&datal * v87); /*0x53e5ca*/
        v254.rot.data[1][1] = v231; /*0x53e5d4*/
        v235 = z; /*0x53e5db*/
        v88 = v87; /*0x53e5e3*/
        v254.rot.data[1][2] = v235; /*0x53e5e5*/
        if ( v277.pos.z > v85 ) /*0x53e5f3*/
          v85 = v277.pos.z; /*0x53e5f5*/
        *(float *)&v226 = *(float *)&v83[0xA].members.m_uiRefCount * v88; /*0x53e60f*/
        v89 = v88 * *(float *)&v83[0xB].__vftable; /*0x53e613*/
      }
      else
      {
LABEL_86:
        v77 = (NiRTTI *)(*(int (__thiscall **)(float *))(*(_DWORD *)v72 + 4))(v72); /*0x53e447*/
        if ( v77 )
        {
          while ( v77 != &stru_B40968 ) /*0x53e459*/
          {
            v77 = v77->parent; /*0x53e45f*/
            if ( !v77 ) /*0x53e464*/
              goto LABEL_89; /*0x53e464*/
          }
          v90 = NiRTTI_Cast((BSStringT *)&stru_B40968, (NiObject *)v72); /*0x53e627*/
          v255 = v90; /*0x53e629*/
        }
        else
        {
LABEL_89:
          v78 = (NiRTTI *)(*(int (__thiscall **)(float *))(*(_DWORD *)v72 + 4))(v72); /*0x53e466*/
          if ( !v78 )
          {
LABEL_92:
            if ( !NiRTTI::IsObjectOfRTTIType(&stru_B408C8, (NiObject *)v72) ) /*0x53e495*/
            {
LABEL_148:
              v51->vtbl->super.super.super.Destructor((NiRefObject *)v51, 1); /*0x53f1bd*/
              return 0; /*0x53f1c5*/
            }
            *(float *)&v79 = COERCE_FLOAT(NiRTTI_Cast((BSStringT *)&stru_B408C8, (NiObject *)v72)); /*0x53e4a1*/
            v80 = v79; /*0x53e4a6*/
            v81 = LOWORD(v79[0xB].members.m_uiRefCount) == 0; /*0x53e4ab*/
            v244 = *(float *)&v79; /*0x53e4af*/
            if ( v81 ) /*0x53e4b3*/
              v82 = 0; /*0x53e79d*/
            else
              v82 = *(_DWORD *)v79[0xA].members.m_uiRefCount; /*0x53e4bc*/
            qmemcpy(&v285, (const void *)(v82 + 0x64), sizeof(v285)); /*0x53e7ae*/
            qmemcpy(v286, &a1[0xC].members, sizeof(v286)); /*0x53e7c6*/
            sub_718A80(v286, &out); /*0x53e7d7*/
            qmemcpy(&v277, NiTransform_Compose(&out, &parent, &v285), sizeof(v277)); /*0x53e806*/
            v93 = sub_7101F0(&v277, &v254, &v259); /*0x53e81f*/
            v247 = SLODWORD(v93->rot.data[0][0]); /*0x53e826*/
            v248 = v93->rot.data[0][1]; /*0x53e82d*/
            v249 = v93->rot.data[0][2]; /*0x53e834*/
            if ( LOWORD(v80[0xB].members.m_uiRefCount) ) /*0x53e838*/
              v94 = *(_DWORD *)v80[0xA].members.m_uiRefCount; /*0x53e841*/
            else
              v94 = 0; /*0x53e845*/
            v95 = *(float **)(v94 + 0xB4); /*0x53e84b*/
            v148 = *(float *)&v241; /*0x53e854*/
            v96 = v95[4]; /*0x53e85f*/
            v270 = v95[3]; /*0x53e866*/
            v97 = v95[5]; /*0x53e86d*/
            v273 = v95[6]; /*0x53e875*/
            v98 = *(float *)&v241 * v249 + v277.pos.z; /*0x53e87c*/
            v271 = v96; /*0x53e87e*/
            v272 = v97; /*0x53e885*/
            if ( v277.pos.z >= v98 ) /*0x53e893*/
              v99 = v98; /*0x53e899*/
            else
              v99 = v277.pos.z; /*0x53e895*/
            v228 = v270 - v273; /*0x53e8ad*/
            v254.rot.data[1][0] = v228; /*0x53e8bc*/
            v232 = v271 - v273; /*0x53e8c7*/
            v254.rot.data[1][1] = v232; /*0x53e8d1*/
            v238 = v99; /*0x53e8d8*/
            v100 = v273; /*0x53e8e0*/
            v254.rot.data[1][2] = v238; /*0x53e8e2*/
            if ( v277.pos.z > v98 ) /*0x53e8f0*/
              v98 = v277.pos.z; /*0x53e8f2*/
            v229 = v270 + v100; /*0x53e8fa*/
            v254.rot.data[2][0] = v229; /*0x53e902*/
            v233 = v100 + v271; /*0x53e90b*/
            v254.rot.data[2][1] = v233; /*0x53e913*/
            v239 = v98; /*0x53e91a*/
            v254.rot.data[2][2] = v239; /*0x53e922*/
LABEL_120:
            v101 = (unsigned __int16)v250 * v243; /*0x53e929*/
            v250 = (unsigned __int16)v250; /*0x53e937*/
            dataa = (float *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v101) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v101);
            v246 = v148 * v249; /*0x53e97a*/
            if ( v243 > 0 ) /*0x53e97e*/
            {
              v102 = dataa; /*0x53e98c*/
              v146 = *(float *)&v247 * v148; /*0x53e968*/
              v258 = v146; /*0x53e990*/
              v103 = v242; /*0x53e99b*/
              v212 = v248 * v148; /*0x53e972*/
              v257 = v212; /*0x53e9a2*/
              *(double *)&v254.pos.x = v246; /*0x53e9b1*/
              v267 = 0xC * v250; /*0x53e9b8*/
              v104 = v253; /*0x53e9c1*/
              v213 = v243; /*0x53e9c5*/
              do /*0x53efaf*/
              {
                if ( v103 ) /*0x53e9d2*/
                {
                  v149 = v103[0xB].__vftable; /*0x53e9db*/
                  v187 = (double)rand() / dbl_A3D5A8; /*0x53e9f2*/
                  v214 = v103[0xA].members.m_uiRefCount; /*0x53e9f9*/
                  v147 = (double)rand() / dbl_A3D5A8; /*0x53ea10*/
                  v105 = dbl_A2FAA0; /*0x53ea26*/
                  v230 = (v147 - v105) * *(float *)&v214; /*0x53ea28*/
                  v240.x = v230; /*0x53ea30*/
                  v234 = (v187 - v105) * *(float *)&v149; /*0x53ea48*/
                  v240.y = v234; /*0x53ea52*/
                  scale = v277.scale; /*0x53ea6d*/
                  v240.z = 0.0; /*0x53ea71*/
                  v106 = sub_7101F0(&v277, (NiTransform *)v284, &v240); /*0x53ea75*/
                  v107 = scale; /*0x53ea7a*/
                  v151 = v106->rot.data[0][0] * scale; /*0x53ea82*/
                  v188 = v106->rot.data[0][1] * v107; /*0x53ea8b*/
                  v215 = v107 * v106->rot.data[0][2]; /*0x53ea92*/
                  v152 = v151 + v277.pos.x; /*0x53eaa1*/
                  v189 = v188 + v277.pos.y; /*0x53eab0*/
                  v216 = v215 + v277.pos.z; /*0x53eabf*/
                  v263 = v152; /*0x53eac7*/
                  v240.x = v152; /*0x53ead9*/
                  v264 = v189; /*0x53eadd*/
                  v240.y = v189; /*0x53eaef*/
                  v265 = v216; /*0x53eaf3*/
                  v240.z = v216; /*0x53eb01*/
                  v153 = (double)rand() / dbl_A3D5A8; /*0x53eb18*/
                  v108 = v153; /*0x53eb1c*/
                  v154 = v258 * v153; /*0x53eb29*/
                  v190 = v257 * v108; /*0x53eb36*/
                  v217 = v108 * *(double *)&v254.pos.x; /*0x53eb41*/
                  v155 = v154 + v240.x; /*0x53eb4d*/
                  v191 = v190 + v240.y; /*0x53eb59*/
                  v218 = v217 + v240.z; /*0x53eb65*/
                  v260 = v155; /*0x53eb6d*/
                  v109 = v155; /*0x53eb74*/
                  v261 = v191; /*0x53eb7f*/
                  v110 = v191; /*0x53eb86*/
                  v262 = v218; /*0x53eb91*/
                  v111 = v218; /*0x53eb98*/
                }
                else if ( v104 ) /*0x53eba6*/
                {
                  v192 = v104[0xA].members.m_uiRefCount; /*0x53ebaf*/
                  v156 = (double)rand() / dbl_A3D5A8; /*0x53ebc6*/
                  v193 = v156 * *(float *)&v192; /*0x53ebd2*/
                  v157 = (double)rand() / dbl_A3D5A8; /*0x53ebe9*/
                  v158 = v157 * unk_B3F9A0; /*0x53ebf7*/
                  *(float *)&v256 = cos(v158); /*0x53ec01*/
                  v251 = sin(v158); /*0x53ec08*/
                  v240.x = *(float *)&v256 * v193; /*0x53ec19*/
                  v240.y = v193 * v251; /*0x53ec21*/
                  v159 = (double)rand() / dbl_A3D5A8; /*0x53ec4c*/
                  v240.z = (v159 - dbl_A2FAA0) * *(float *)&v104[0xB].__vftable; /*0x53ec65*/
                  v240 = *(NiPoint3 *)NiTransform_TransformPoint(&v277, v278, &v240); /*0x53ec70*/
                  v160 = (double)rand() / dbl_A3D5A8; /*0x53ec95*/
                  v112 = v160; /*0x53ec99*/
                  v161 = v258 * v160; /*0x53eca6*/
                  v194 = v257 * v112; /*0x53ecb3*/
                  v219 = v112 * *(double *)&v254.pos.x; /*0x53ecbe*/
                  v162 = v161 + v240.x; /*0x53ecca*/
                  v195 = v194 + v240.y; /*0x53ecd6*/
                  v220 = v219 + v240.z; /*0x53ece2*/
                  v274 = v162; /*0x53ecea*/
                  v109 = v162; /*0x53ecf1*/
                  v275 = v195; /*0x53ecfc*/
                  v110 = v195; /*0x53ed03*/
                  v276 = v220; /*0x53ed0e*/
                  v111 = v220; /*0x53ed15*/
                }
                else
                {
                  if ( v255 ) /*0x53ed2a*/
                  {
                    v196 = v255[0xA].members.m_uiRefCount; /*0x53ed33*/
                    v163 = (double)rand() / dbl_A3D5A8; /*0x53ed4a*/
                    v221 = v163 * *(float *)&v196; /*0x53ed56*/
                    v164 = (double)rand() / dbl_A3D5A8; /*0x53ed6d*/
                    v197 = v164 * unk_B3F9A0; /*0x53ed7b*/
                    v165 = (double)rand() / dbl_A3D5A8; /*0x53ed92*/
                    v166 = v165 * unk_B3F9A0; /*0x53eda0*/
                    v254.scale = cos(v197); /*0x53edaa*/
                    *(float *)&v241 = sin(v197); /*0x53edb1*/
                    v246 = cos(v166); /*0x53edbb*/
                    v254.pos.z = sin(v166); /*0x53edbf*/
                    v113 = v254.pos.z * v221; /*0x53edd5*/
                    v240.x = v254.scale * v113; /*0x53edf0*/
                    v240.y = v113 * *(float *)&v241; /*0x53edf8*/
                    v240.z = v221 * v246; /*0x53ee00*/
                    v240 = *(NiPoint3 *)NiTransform_TransformPoint(&v277, &v270, &v240); /*0x53ee0b*/
                    v167 = (double)rand() / dbl_A3D5A8; /*0x53ee30*/
                    v114 = v167; /*0x53ee34*/
                    v168 = v258 * v167; /*0x53ee41*/
                    v198 = v257 * v114; /*0x53ee4e*/
                    v222 = v114 * *(double *)&v254.pos.x; /*0x53ee59*/
                    v169 = v168 + v240.x; /*0x53ee65*/
                    v199 = v198 + v240.y; /*0x53ee71*/
                    v223 = v222 + v240.z; /*0x53ee7d*/
                    v269[3] = v169; /*0x53ee85*/
                    v109 = v169; /*0x53ee8c*/
                    v269[4] = v199; /*0x53ee97*/
                    v110 = v199; /*0x53ee9e*/
                    v269[5] = v223; /*0x53eea9*/
                  }
                  else
                  {
                    (*(void (__thiscall **)(float, NiPoint3 *, float *))(*(_DWORD *)LODWORD(v244) + 0x60))( /*0x53eed2*/
                      COERCE_FLOAT(LODWORD(v244)),
                      &v240,
                      v269);
                    v170 = (double)rand() / dbl_A3D5A8; /*0x53eee7*/
                    v115 = v170; /*0x53eeeb*/
                    v171 = v258 * v170; /*0x53eef8*/
                    v200 = v257 * v115; /*0x53ef05*/
                    v224 = v115 * *(double *)&v254.pos.x; /*0x53ef10*/
                    v172 = v171 + v240.x; /*0x53ef1c*/
                    v201 = v200 + v240.y; /*0x53ef28*/
                    v223 = v224 + v240.z; /*0x53ef34*/
                    v254.rot.data[0][0] = v172; /*0x53ef3c*/
                    v109 = v172; /*0x53ef40*/
                    v254.rot.data[0][1] = v201; /*0x53ef48*/
                    v110 = v201; /*0x53ef4f*/
                    v254.rot.data[0][2] = v223; /*0x53ef5a*/
                  }
                  v111 = v223; /*0x53eeb0*/
                }
                v240.z = v111; /*0x53ef6d*/
                v240.y = v110; /*0x53ef71*/
                v240.x = v109; /*0x53ef75*/
                if ( v250 > 0 ) /*0x53ef79*/
                {
                  *v102 = v109; /*0x53ef7b*/
                  v116 = v250; /*0x53ef7d*/
                  v102[1] = v110; /*0x53ef81*/
                  v102[2] = v111; /*0x53ef96*/
                  qmemcpy(v102 + 3, v102, 4 * ((unsigned int)(0xC * v116 - 0xC) >> 2)); /*0x53ef99*/
                  v104 = v253; /*0x53ef9b*/
                }
                v102 = (float *)((char *)v102 + v267); /*0x53ef9f*/
                v47 = v213-- == 1; /*0x53efa6*/
                v103 = v242; /*0x53efab*/
              }
              while ( !v47 ); /*0x53efaf*/
            }
            v117 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x53efb7*/
            v287 = 4; /*0x53efc5*/
            if ( v117 ) /*0x53efd0*/
              v118 = (unsigned __int16 *)sub_53D930(v117, v101, 1, 1); /*0x53efde*/
            else
              v118 = 0; /*0x53efe2*/
            v287 = 0xFFFFFFFF; /*0x53efeb*/
            OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(v118, 1u); /*0x53eff2*/
            OB_NiAdditionalGeometryData_SetDataBlock_010201A0(v118, 0, dataa, 0xC * v101, 1); /*0x53f00b*/
            FormHeapFree((unsigned int)dataa); /*0x53f011*/
            OB_NiAdditionalGeometryData_SetDataStream_010201A0(v118, 0, 0, 0, 3u, v101, 0xCu, 0xCu); /*0x53f028*/
            v51 = v252; /*0x53f02d*/
            sub_6C61E0(*(_DWORD **)&v252->members.children.capacity, (int)v118); /*0x53f038*/
            v119 = *(float **)&v51->members.children.capacity; /*0x53f044*/
            v120 = v119[3]; /*0x53f054*/
            v121 = (v254.rot.data[2][0] - v254.rot.data[1][0]) * dbl_A2FAA0; /*0x53f057*/
            v278[1] = v119[4]; /*0x53f064*/
            v279 = v121; /*0x53f075*/
            v278[0] = v120; /*0x53f07e*/
            v122 = v119[5]; /*0x53f085*/
            v254.rot.data[0][0] = 0.0; /*0x53f088*/
            v254.rot.data[0][1] = 0.0; /*0x53f090*/
            v278[2] = v122; /*0x53f097*/
            v254.rot.data[0][2] = 0.0; /*0x53f09e*/
            v119[3] = 0.0; /*0x53f0b3*/
            v119[4] = 0.0; /*0x53f0b6*/
            v123 = v279; /*0x53f0b9*/
            v119[5] = 0.0; /*0x53f0c0*/
            v119[6] = v123; /*0x53f0c3*/
            v124 = (NiNode *)a1[3].members.m_uiRefCount; /*0x53f0c6*/
            v125 = 1; /*0x53f0cb*/
            if ( v124 ) /*0x53f0d0*/
            {
              if ( v124->vtbl->super.super.GetType((NiObject *)v124) == &stru_B3FD4C ) /*0x53f0e3*/
                v125 = *(_BYTE *)(a1[3].members.m_uiRefCount + 0xDC) & 7; /*0x53f0f2*/
            }
            v126 = (BSShaderProperty *)FormHeapAlloc(0xACu); /*0x53f107*/
            v287 = 5; /*0x53f115*/
            if ( v126 ) /*0x53f120*/
              v127 = sub_7EFA80(v126, v243, v266, &v247, v254.rot.data[1], v254.rot.data[2], a3 != 0, v125); /*0x53f14b*/
            else
              v127 = 0; /*0x53f152*/
            v287 = 0xFFFFFFFF; /*0x53f157*/
            sub_405680(v51, v127); /*0x53f15e*/
            v128 = v268; /*0x53f163*/
            if ( NiNode_GetNiPropertyByID(v268, 6) ) /*0x53f16e*/
            {
              NiPropertyByID = (BSShaderProperty *)NiNode_GetNiPropertyByID(v128, 6); /*0x53f17b*/
              sub_405680(v51, NiPropertyByID); /*0x53f183*/
            }
            if ( NiNode_GetNiPropertyByID(v128, 0) ) /*0x53f18c*/
            {
              v130 = (BSShaderProperty *)NiNode_GetNiPropertyByID(v128, 0); /*0x53f199*/
              sub_405680(v51, v130); /*0x53f1a1*/
            }
            if ( BSShaderManager_AssignShadersRecursive((NiAVObject *)v51, 0x1Bu, 0, 1) ) /*0x53f1ad*/
              return v51; /*0x53f1bb*/
            goto LABEL_148; /*0x53f1b7*/
          }
          while ( v78 != &stru_B40944 ) /*0x53e478*/
          {
            v78 = v78->parent; /*0x53e47e*/
            if ( !v78 ) /*0x53e483*/
              goto LABEL_92; /*0x53e483*/
          }
          v90 = NiRTTI_Cast((BSStringT *)&stru_B40944, (NiObject *)v72); /*0x53e63d*/
          v253 = v90; /*0x53e63f*/
        }
        qmemcpy(&local, &v90[0xA].__vftable[1].Copy, sizeof(local)); /*0x53e658*/
        qmemcpy(&parent, &v90[2].__vftable[1].Copy, sizeof(parent)); /*0x53e676*/
        sub_718A80((float *)&parent, &v281); /*0x53e680*/
        qmemcpy(&v277, NiTransform_Compose(&v281, &out, &local), sizeof(v277)); /*0x53e6af*/
        v91 = sub_7101F0(&v277, &v254, &v259); /*0x53e6c8*/
        v247 = SLODWORD(v91->rot.data[0][0]); /*0x53e6d3*/
        v148 = *(float *)&v241; /*0x53e6da*/
        v248 = v91->rot.data[0][1]; /*0x53e6e5*/
        v249 = v91->rot.data[0][2]; /*0x53e6ec*/
        v85 = *(float *)&v241 * v249 + v277.pos.z; /*0x53e6f6*/
        if ( v277.pos.z >= v85 ) /*0x53e6ff*/
          v92 = v85; /*0x53e705*/
        else
          v92 = v277.pos.z; /*0x53e701*/
        datam = v90[0xA].members.m_uiRefCount; /*0x53e70a*/
        v227 = -*(float *)&datam; /*0x53e71b*/
        v254.rot.data[1][0] = v227; /*0x53e727*/
        v254.rot.data[1][1] = v227; /*0x53e738*/
        v236 = v92; /*0x53e73f*/
        v254.rot.data[1][2] = v236; /*0x53e747*/
        if ( v277.pos.z > v85 ) /*0x53e755*/
          v85 = v277.pos.z; /*0x53e757*/
        *(float *)&v226 = *(float *)&v90[0xA].members.m_uiRefCount; /*0x53e767*/
        v89 = *(float *)&v226; /*0x53e76b*/
      }
      *((float *)&v226 + 1) = v89; /*0x53e773*/
      v237 = v85; /*0x53e77b*/
      *(_QWORD *)&v254.rot.data[2][0] = v226; /*0x53e783*/
      v254.rot.data[2][2] = v237; /*0x53e791*/
      goto LABEL_120; /*0x53e798*/
    }
  }
  return 0; /*0x53f1c9*/
}
