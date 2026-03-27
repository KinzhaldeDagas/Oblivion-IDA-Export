NiNode *__stdcall sub_53DA20(NiObject *a1, int a2, char a3)
{
  NiInterpController *m_uiRefCount; // esi
  NiObject *v4; // ebp
  int v5; // eax
  NiObject *v6; // edi
  NiObjectVtbl *v7; // eax
  NiNodeVtbl *vftable; // edx
  NiRTTI *(__thiscall *GetType)(NiObject *); // eax
  int v10; // eax
  NiObjectVtbl *v11; // edi
  NiObjectVtbl *v12; // eax
  int v13; // ecx
  float **v14; // edx
  float *v15; // edx
  int v16; // esi
  float *v17; // esi
  int v18; // eax
  NiObjectVtbl *v19; // edi
  NiObjectVtbl *Destructor; // eax
  int v21; // ecx
  int *p_Unk_02; // edx
  int v23; // edx
  int v24; // esi
  int v25; // esi
  int v26; // eax
  int v27; // eax
  NiObject *v28; // eax
  NiObject *v29; // eax
  NiObject *v30; // eax
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
  _DWORD *v42; // esi
  _DWORD *v43; // ecx
  _DWORD *v44; // edx
  int v45; // ebp
  int v46; // eax
  bool v47; // zf
  NiGeometry *v48; // edi
  NiTriShapeData *v49; // ecx
  NiTriShapeData *v50; // eax
  NiNode *v51; // edi
  int v52; // ebx
  int v53; // ebp
  int v54; // eax
  UInt16 *v55; // edi
  int v56; // ecx
  int v57; // ebp
  int v58; // esi
  _WORD *v59; // edx
  float *v60; // eax
  double v61; // st7
  double v62; // st5
  double v63; // st4
  double v64; // st3
  double v65; // st4
  double v66; // rt1
  double v67; // st3
  NiGeometry *v68; // esi
  NiTriShapeData *v69; // eax
  NiTriShapeData *v70; // eax
  NiAVObject *v71; // eax
  float *v72; // esi
  int v73; // eax
  int v74; // eax
  int (__thiscall *v75)(float *); // edx
  int v76; // eax
  int v77; // eax
  int v78; // eax
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
  int v103; // edi
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
  float v149; // [esp+44h] [ebp-2A8h]
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
  char v173[4]; // [esp+4Ch] [ebp-2A0h]
  float v174; // [esp+4Ch] [ebp-2A0h]
  float v175; // [esp+4Ch] [ebp-2A0h]
  float v176; // [esp+4Ch] [ebp-2A0h]
  float v177; // [esp+4Ch] [ebp-2A0h]
  float v178; // [esp+4Ch] [ebp-2A0h]
  float v179; // [esp+4Ch] [ebp-2A0h]
  float v180; // [esp+4Ch] [ebp-2A0h]
  float v181; // [esp+4Ch] [ebp-2A0h]
  float v182; // [esp+4Ch] [ebp-2A0h]
  float v183; // [esp+4Ch] [ebp-2A0h]
  NiObjectVtbl *v184; // [esp+4Ch] [ebp-2A0h]
  UInt32 v185; // [esp+4Ch] [ebp-2A0h]
  int v186; // [esp+4Ch] [ebp-2A0h]
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
  float v214; // [esp+58h] [ebp-294h]
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
  int v242; // [esp+78h] [ebp-274h]
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
  NiTransform v280; // [esp+19Ch] [ebp-150h] BYREF
  NiTransform v281; // [esp+1D0h] [ebp-11Ch] BYREF
  NiTransform v282; // [esp+204h] [ebp-E8h] BYREF
  NiTransform v283; // [esp+238h] [ebp-B4h] BYREF
  _BYTE v284[64]; // [esp+26Ch] [ebp-80h] BYREF
  float v285[13]; // [esp+2ACh] [ebp-40h] BYREF
  int v286; // [esp+2E8h] [ebp-4h]

  m_uiRefCount = (NiInterpController *)a1[1].members.m_uiRefCount;
  v245 = 0.0;
  v4 = 0;
  v243 = 0;
  v242 = 0;
  v268 = 0;
  if ( m_uiRefCount )
  {
    while ( 1 )
    {
      v5 = (int)m_uiRefCount->vtbl->super.super.GetType((NiObject *)m_uiRefCount);
      if ( v5 )
        break;
LABEL_5:
      m_uiRefCount = (NiInterpController *)m_uiRefCount->member.next;
      if ( !m_uiRefCount )
        return 0;
    }
    while ( (char *)v5 != dword_B40BCC )
    {
      v5 = *(_DWORD *)(v5 + 4);
      if ( !v5 )
        goto LABEL_5;
    }
    *(float *)&v6 = COERCE_FLOAT(NiRTTI_Cast((BSStringT *)dword_B40B50, *(NiObject **)&m_uiRefCount[1].member.flags));
    v256 = (float *)v6;
    v7 = sub_53D850(m_uiRefCount);
    (*((void (__thiscall **)(NiObjectVtbl *, _DWORD, _DWORD, float *))v7->super.Destructor + 0x17))(v7, 0.0, 0, &v245);
    vftable = (NiNodeVtbl *)a1->__vftable;
    v245 = *(float *)&v6[9].__vftable * v245;
    GetType = vftable->super.super.GetType;
    v241 = (unsigned __int16)(int)v245;
    v266 = 0.0;
    v10 = (int)GetType(a1);
    if ( v10 )
    {
      while ( (char *)v10 != dword_B40B1C )
      {
        v10 = *(_DWORD *)(v10 + 4);
        if ( !v10 )
          goto LABEL_10;
      }
      v19 = 0;
      while ( 1 )
      {
LABEL_22:
        if ( v19 < a1[0x1A].__vftable && (Destructor = a1[0x19].__vftable, v21 = 0, Destructor) )
        {
          while ( 1 )
          {
            p_Unk_02 = (int *)&Destructor->Unk_02;
            Destructor = (NiObjectVtbl *)Destructor->super.Destructor;
            v23 = *p_Unk_02;
            v24 = v21++;
            if ( (NiObjectVtbl *)v24 == v19 )
              break;
            if ( !Destructor )
              goto LABEL_26;
          }
          v25 = v23;
        }
        else
        {
LABEL_26:
          v25 = 0;
        }
        v19 = (NiObjectVtbl *)((char *)v19 + 1);
        if ( !v25 )
          break;
        if ( !v243 )
        {
          v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 4))(v25);
          if ( v26 )
          {
            while ( (char *)v26 != dword_B40A28 )
            {
              v26 = *(_DWORD *)(v26 + 4);
              if ( !v26 )
                goto LABEL_35;
            }
            v243 = v25;
          }
        }
LABEL_35:
        if ( !v242 )
        {
          v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 4))(v25);
          if ( v27 )
          {
            while ( (char *)v27 != dword_B40AA4 )
            {
              v27 = *(_DWORD *)(v27 + 4);
              if ( !v27 )
                goto LABEL_22;
            }
            v242 = v25;
          }
        }
      }
      if ( v243 )
      {
        if ( *(_WORD *)(v243 + 0x22) )
          v28 = **(NiObject ***)(v243 + 0x1C);
        else
          v28 = 0;
        v29 = NiRTTI_Cast((BSStringT *)dword_B3FAB0, v28);
        if ( v29 )
        {
          v30 = (NiObject *)sub_405790((int)v29, 0);
          v4 = NiRTTI_Cast((BSStringT *)dword_B3FD5C, v30);
          v268 = (NiNode *)v4;
        }
      }
      if ( v242 )
        v266 = *(float *)(v242 + 0x18);
      if ( NiRTTI_Cast((BSStringT *)dword_B3FD04, v4) )
        return 0;
      v31 = NiRTTI_Cast((BSStringT *)dword_B3FD2C, (NiObject *)v4[0x16].members.m_uiRefCount);
      vftable_low = LOWORD(v31[1].__vftable);
      v33 = v31[8].members.m_uiRefCount;
      v202 = (_DWORD *)v31[3].members.m_uiRefCount;
      v132 = v31[9].__vftable;
      *(_DWORD *)v173 = v31[5].__vftable;
      v34 = (unsigned __int16)vftable_low;
      v35 = 0xFFFF / (unsigned __int16)vftable_low;
      v250 = vftable_low;
      if ( (unsigned __int16)v241 >= (unsigned __int16)v35 )
        v241 = (unsigned __int16)v35;
      v243 = (unsigned __int16)v241;
      v251 = COERCE_FLOAT(
               FormHeapAlloc(
                 (0xC * (unsigned __int64)((unsigned __int16)vftable_low * (unsigned int)(unsigned __int16)v241)) >> 0x20 != 0
               ? 0xFFFFFFFF
               : 0xC * (unsigned __int16)vftable_low * (unsigned __int16)v241));
      v255 = (NiObject *)FormHeapAlloc(
                           (unsigned __int64)(v34 * (unsigned int)(unsigned __int16)v241) >> 0x1D != 0
                         ? 0xFFFFFFFF
                         : 8 * v34 * (unsigned __int16)v241);
      v36 = (unsigned __int16)v33;
      LODWORD(v244) = (unsigned __int16)v33;
      *(float *)&v37 = COERCE_FLOAT(
                         FormHeapAlloc(
                           (unsigned __int64)((unsigned __int16)v33 * (unsigned int)(unsigned __int16)v241) >> 0x1F != 0
                         ? 0xFFFFFFFF
                         : 2 * (unsigned __int16)v33 * (unsigned __int16)v241));
      v38 = 0;
      v39 = (UInt16 *)v37;
      v246 = *(float *)&v37;
      v252 = 0;
      if ( (_WORD)v241 )
      {
        v40 = 0;
        v267 = 0xC * v34;
        v41 = v251;
        v242 = (int)v255;
        v253 = 0;
        v254.scale = v251;
        LODWORD(v254.pos.z) = v243;
        do
        {
          if ( v34 > 0 )
          {
            v42 = *(_DWORD **)v173;
            v43 = v202;
            v44 = (_DWORD *)v242;
            v45 = v34;
            do
            {
              *(_DWORD *)LODWORD(v41) = *v43;
              *(_DWORD *)(LODWORD(v41) + 4) = v43[1];
              *(_DWORD *)(LODWORD(v41) + 8) = v43[2];
              *v44 = *v42;
              v44[1] = v42[1];
              LODWORD(v41) += 0xC;
              v43 += 3;
              v44 += 2;
              v42 += 2;
              --v45;
            }
            while ( v45 );
            v40 = v253;
            v36 = LODWORD(v244);
            v38 = v252;
            v39 = (UInt16 *)LODWORD(v246);
          }
          v46 = 0;
          if ( v36 > 0 )
          {
            do
            {
              v39[(_DWORD)v38] = (_WORD)v40 + *((_WORD *)&v132->super.Destructor + v46++);
              v38 = (NiNode *)((char *)v38 + 1);
            }
            while ( v46 < v36 );
            v252 = v38;
          }
          v242 += 8 * v34;
          LODWORD(v41) = v267 + LODWORD(v254.scale);
          v40 = (NiObject *)((char *)v40 + v34);
          v47 = LODWORD(v254.pos.z)-- == 1;
          v253 = v40;
          LODWORD(v254.scale) += v267;
        }
        while ( !v47 );
      }
      v48 = (NiGeometry *)FormHeapAlloc(0xC0u);
      v286 = 0;
      if ( v48 )
      {
        v49 = (NiTriShapeData *)FormHeapAlloc(0x5Cu);
        LOBYTE(v286) = 1;
        if ( v49 )
        {
          v50 = sub_72AB00(v49, v250 * v241, SLODWORD(v251), 0, 0, (int)v255, 1, 0, v241 * (v36 / 3), v39, 0, 0);
          LOBYTE(v286) = 0;
          v51 = (NiNode *)NiTriShape_NiTriShape(v48, (NiScreenElementsData *)v50);
        }
        else
        {
          LOBYTE(v286) = 0;
          v51 = (NiNode *)NiTriShape_NiTriShape(v48, 0);
        }
        v252 = v51;
      }
      else
      {
        v51 = 0;
        v252 = 0;
      }
    }
    else
    {
LABEL_10:
      v11 = 0;
      while ( 1 )
      {
LABEL_11:
        if ( v11 < a1[0x1A].__vftable && (v12 = a1[0x19].__vftable, v13 = 0, v12) )
        {
          while ( 1 )
          {
            v14 = (float **)&v12->Unk_02;
            v12 = (NiObjectVtbl *)v12->super.Destructor;
            v15 = *v14;
            v16 = v13++;
            if ( (NiObjectVtbl *)v16 == v11 )
              break;
            if ( !v12 )
              goto LABEL_15;
          }
          v17 = v15;
        }
        else
        {
LABEL_15:
          v17 = 0;
        }
        v11 = (NiObjectVtbl *)((char *)v11 + 1);
        if ( !v17 )
          break;
        v18 = (*(int (__thiscall **)(float *))(*(_DWORD *)v17 + 4))(v17);
        if ( v18 )
        {
          while ( (char *)v18 != dword_B40AA4 )
          {
            v18 = *(_DWORD *)(v18 + 4);
            if ( !v18 )
              goto LABEL_11;
          }
          v266 = v17[6];
          break;
        }
      }
      v268 = (NiNode *)a1;
      v250 = 4;
      if ( (unsigned __int16)v241 >= 0x3FFFu )
        v241 = 0x3FFF;
      v243 = (unsigned __int16)v241;
      *(float *)&v52 = COERCE_FLOAT(
                         FormHeapAlloc(
                           (0xC * (unsigned __int64)(4 * (unsigned int)(unsigned __int16)v241)) >> 0x20 != 0
                         ? 0xFFFFFFFF
                         : 0x30 * (unsigned __int16)v241));
      v251 = *(float *)&v52;
      *(float *)&v53 = COERCE_FLOAT(
                         FormHeapAlloc(
                           (unsigned __int64)(4 * (unsigned int)(unsigned __int16)v241) >> 0x1D != 0
                         ? 0xFFFFFFFF
                         : 0x20 * (unsigned __int16)v241));
      v246 = *(float *)&v53;
      *(float *)&v54 = COERCE_FLOAT(
                         FormHeapAlloc(
                           (unsigned __int64)(6 * (unsigned int)(unsigned __int16)v241) >> 0x1F != 0
                         ? 0xFFFFFFFF
                         : 0xC * (unsigned __int16)v241));
      v55 = (UInt16 *)v54;
      v244 = *(float *)&v54;
      if ( (_WORD)v241 )
      {
        v56 = v53 + 0x10;
        v57 = v243;
        v254.pos.x = 0.0;
        v58 = 0;
        v254.pos.y = 1.0;
        v59 = (_WORD *)(v54 + 4);
        *(float *)&v257 = 1.0;
        v60 = (float *)(v52 + 0x18);
        *((float *)&v257 + 1) = 1.0;
        *(float *)&v258 = 1.0;
        *((float *)&v258 + 1) = 0.0;
        v61 = dbl_A3D360;
        do
        {
          v62 = v256[0x10];
          v133 = v62 * v61;
          v63 = v133;
          v174 = v133;
          v134 = v62 * 0.0;
          v64 = v63;
          v65 = v134;
          v203 = v64;
          v240.x = v174;
          v60[0xFFFFFFFA] = v174;
          v240.y = v134;
          v60[0xFFFFFFFB] = v134;
          v240.z = v203;
          v66 = v64;
          v60[0xFFFFFFFC] = v203;
          v135 = v62;
          v175 = v65;
          v204 = v64;
          v260 = v135;
          v60[0xFFFFFFFD] = v135;
          v261 = v175;
          v60[0xFFFFFFFE] = v175;
          v262 = v204;
          v67 = v135;
          v60[0xFFFFFFFF] = v204;
          v136 = v67;
          v205 = v67;
          v176 = v65;
          v263 = v136;
          *v60 = v136;
          v264 = v176;
          v60[1] = v176;
          v265 = v205;
          v60[2] = v205;
          v137 = v66;
          v177 = v65;
          v206 = v67;
          v60[3] = v137;
          v60[4] = v177;
          v60[5] = v206;
          *(float *)(v56 - 0x10) = v254.pos.x;
          *(float *)(v56 - 0xC) = v254.pos.y;
          *(double *)(v56 - 8) = v257;
          *(double *)v56 = v258;
          *(float *)(v56 + 8) = 0.0;
          *(float *)(v56 + 0xC) = 0.0;
          v59[0xFFFFFFFF] = v58 + 1;
          v59[0xFFFFFFFE] = v58;
          v59[2] = v58;
          *v59 = v58 + 2;
          v59[1] = v58 + 3;
          v59[3] = v58 + 2;
          v58 += 4;
          v60 += 0xC;
          v56 += 0x20;
          v59 += 6;
          --v57;
        }
        while ( v57 );
        v55 = (UInt16 *)LODWORD(v244);
        *(float *)&v53 = v246;
        *(float *)&v52 = v251;
      }
      v68 = (NiGeometry *)FormHeapAlloc(0xC0u);
      v286 = 2;
      if ( v68 )
      {
        v69 = (NiTriShapeData *)FormHeapAlloc(0x5Cu);
        LOBYTE(v286) = 3;
        if ( v69 )
        {
          v70 = sub_72AB00(v69, 4 * v243, v52, 0, 0, v53, 1, 0, 2 * v243, v55, 0, 0);
          LOBYTE(v286) = 2;
          v71 = NiTriShape_NiTriShape(v68, (NiScreenElementsData *)v70);
        }
        else
        {
          LOBYTE(v286) = 2;
          v71 = NiTriShape_NiTriShape(v68, 0);
        }
      }
      else
      {
        v71 = 0;
      }
      v252 = (NiNode *)v71;
      v51 = (NiNode *)v71;
    }
    v286 = 0xFFFFFFFF;
    if ( v51 )
    {
      v72 = v256;
      v207 = v256[6];
      v178 = v256[7];
      v138 = (double)rand() / dbl_A3D5A8;
      v246 = (v138 - dbl_A2FAA0) * v178 + v207;
      v208 = v72[8];
      v179 = v72[9];
      v73 = rand();
      v139 = ((double)v73 + (double)v73) / dbl_A3D5A8 - dbl_A2F928;
      v244 = v139 * v179 + v208;
      v209 = v72[0xA];
      v180 = v72[0xB];
      v74 = rand();
      v140 = ((double)v74 + (double)v74) / dbl_A3D5A8 - dbl_A2F928;
      v181 = v140 * v180 + v209;
      v141 = sin(v244);
      v210 = v141;
      v142 = cos(v244);
      v244 = v142;
      *(double *)&v254.pos.x = v181;
      v143 = sin(v181);
      v182 = v143;
      v257 = v210;
      v144 = cos(*(long double *)&v254.pos.x);
      v254.rot.data[0][0] = v144 * v210;
      v254.rot.data[0][1] = v210 * v182;
      v145 = v254.rot.data[0][0] * v246;
      v183 = v254.rot.data[0][1] * v246;
      v75 = *(int (__thiscall **)(float *))(*(_DWORD *)v72 + 4);
      v211 = v246 * v244;
      v242 = 0;
      v253 = 0;
      v259.x = v145;
      v255 = 0;
      v244 = 0.0;
      v259.y = v183;
      v259.z = v211;
      v241 = *((int *)v72 + 0x12);
      v76 = v75(v72);
      if ( v76 )
      {
        while ( (char *)v76 != dword_B409EC )
        {
          v76 = *(_DWORD *)(v76 + 4);
          if ( !v76 )
            goto LABEL_86;
        }
        v83 = NiRTTI_Cast((BSStringT *)dword_B409EC, (NiObject *)v72);
        qmemcpy(&v282, &v83[0xA].__vftable[1].Copy, sizeof(v282));
        qmemcpy(&v281, &v83[2].__vftable[1].Copy, sizeof(v281));
        v242 = (int)v83;
        sub_718A80((float *)&v281, (float *)&v280);
        qmemcpy(&v277, sub_53D7A0(&v280, &v283, &v282), sizeof(v277));
        v84 = sub_7101F0(&v277, &v254, &v259);
        v247 = SLODWORD(v84->rot.data[0][0]);
        v148 = *(float *)&v241;
        v248 = v84->rot.data[0][1];
        v249 = v84->rot.data[0][2];
        v85 = *(float *)&v241 * v249 + v277.pos.z;
        if ( v277.pos.z >= v85 )
          z = v85;
        else
          z = v277.pos.z;
        v184 = v83[0xB].__vftable;
        v87 = dbl_A2FAA0;
        v225 = -(*(float *)&v83[0xA].members.m_uiRefCount * v87);
        v254.rot.data[1][0] = v225;
        v231 = -(*(float *)&v184 * v87);
        v254.rot.data[1][1] = v231;
        v235 = z;
        v88 = v87;
        v254.rot.data[1][2] = v235;
        if ( v277.pos.z > v85 )
          v85 = v277.pos.z;
        *(float *)&v226 = *(float *)&v83[0xA].members.m_uiRefCount * v88;
        v89 = v88 * *(float *)&v83[0xB].__vftable;
      }
      else
      {
LABEL_86:
        v77 = (*(int (__thiscall **)(float *))(*(_DWORD *)v72 + 4))(v72);
        if ( v77 )
        {
          while ( (char *)v77 != dword_B40968 )
          {
            v77 = *(_DWORD *)(v77 + 4);
            if ( !v77 )
              goto LABEL_89;
          }
          v90 = NiRTTI_Cast((BSStringT *)dword_B40968, (NiObject *)v72);
          v255 = v90;
        }
        else
        {
LABEL_89:
          v78 = (*(int (__thiscall **)(float *))(*(_DWORD *)v72 + 4))(v72);
          if ( !v78 )
          {
LABEL_92:
            if ( !NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B408C8, (NiObject *)v72) )
            {
LABEL_148:
              v51->vtbl->super.super.super.Destructor((NiRefObject *)v51, 1);
              return 0;
            }
            *(float *)&v79 = COERCE_FLOAT(NiRTTI_Cast((BSStringT *)dword_B408C8, (NiObject *)v72));
            v80 = v79;
            v81 = LOWORD(v79[0xB].members.m_uiRefCount) == 0;
            v244 = *(float *)&v79;
            if ( v81 )
              v82 = 0;
            else
              v82 = *(_DWORD *)v79[0xA].members.m_uiRefCount;
            qmemcpy(&v284[0xC], (const void *)(v82 + 0x64), 0x34u);
            qmemcpy(v285, &a1[0xC].members, sizeof(v285));
            sub_718A80(v285, (float *)&v283);
            qmemcpy(&v277, sub_53D7A0(&v283, &v280, (NiTransform *)&v284[0xC]), sizeof(v277));
            v93 = sub_7101F0(&v277, &v254, &v259);
            v247 = SLODWORD(v93->rot.data[0][0]);
            v248 = v93->rot.data[0][1];
            v249 = v93->rot.data[0][2];
            if ( LOWORD(v80[0xB].members.m_uiRefCount) )
              v94 = *(_DWORD *)v80[0xA].members.m_uiRefCount;
            else
              v94 = 0;
            v95 = *(float **)(v94 + 0xB4);
            v148 = *(float *)&v241;
            v96 = v95[4];
            v270 = v95[3];
            v97 = v95[5];
            v273 = v95[6];
            v98 = *(float *)&v241 * v249 + v277.pos.z;
            v271 = v96;
            v272 = v97;
            if ( v277.pos.z >= v98 )
              v99 = v98;
            else
              v99 = v277.pos.z;
            v228 = v270 - v273;
            v254.rot.data[1][0] = v228;
            v232 = v271 - v273;
            v254.rot.data[1][1] = v232;
            v238 = v99;
            v100 = v273;
            v254.rot.data[1][2] = v238;
            if ( v277.pos.z > v98 )
              v98 = v277.pos.z;
            v229 = v270 + v100;
            v254.rot.data[2][0] = v229;
            v233 = v100 + v271;
            v254.rot.data[2][1] = v233;
            v239 = v98;
            v254.rot.data[2][2] = v239;
LABEL_120:
            v101 = (unsigned __int16)v250 * v243;
            v250 = (unsigned __int16)v250;
            v186 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v101) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v101);
            v246 = v148 * v249;
            if ( v243 > 0 )
            {
              v102 = (float *)v186;
              v146 = *(float *)&v247 * v148;
              v258 = v146;
              v103 = v242;
              v212 = v248 * v148;
              v257 = v212;
              *(double *)&v254.pos.x = v246;
              v267 = 0xC * v250;
              v104 = v253;
              v213 = v243;
              do
              {
                if ( v103 )
                {
                  v149 = *(float *)(v103 + 0x58);
                  v187 = (double)rand() / dbl_A3D5A8;
                  v214 = *(float *)(v103 + 0x54);
                  v147 = (double)rand() / dbl_A3D5A8;
                  v105 = dbl_A2FAA0;
                  v230 = (v147 - v105) * v214;
                  v240.x = v230;
                  v234 = (v187 - v105) * v149;
                  v240.y = v234;
                  scale = v277.scale;
                  v240.z = 0.0;
                  v106 = sub_7101F0(&v277, (NiTransform *)v284, &v240);
                  v107 = scale;
                  v151 = v106->rot.data[0][0] * scale;
                  v188 = v106->rot.data[0][1] * v107;
                  v215 = v107 * v106->rot.data[0][2];
                  v152 = v151 + v277.pos.x;
                  v189 = v188 + v277.pos.y;
                  v216 = v215 + v277.pos.z;
                  v263 = v152;
                  v240.x = v152;
                  v264 = v189;
                  v240.y = v189;
                  v265 = v216;
                  v240.z = v216;
                  v153 = (double)rand() / dbl_A3D5A8;
                  v108 = v153;
                  v154 = v258 * v153;
                  v190 = v257 * v108;
                  v217 = v108 * *(double *)&v254.pos.x;
                  v155 = v154 + v240.x;
                  v191 = v190 + v240.y;
                  v218 = v217 + v240.z;
                  v260 = v155;
                  v109 = v155;
                  v261 = v191;
                  v110 = v191;
                  v262 = v218;
                  v111 = v218;
                }
                else if ( v104 )
                {
                  v192 = v104[0xA].members.m_uiRefCount;
                  v156 = (double)rand() / dbl_A3D5A8;
                  v193 = v156 * *(float *)&v192;
                  v157 = (double)rand() / dbl_A3D5A8;
                  v158 = v157 * flt_B3F9A0;
                  *(float *)&v256 = cos(v158);
                  v251 = sin(v158);
                  v240.x = *(float *)&v256 * v193;
                  v240.y = v193 * v251;
                  v159 = (double)rand() / dbl_A3D5A8;
                  v240.z = (v159 - dbl_A2FAA0) * *(float *)&v104[0xB].__vftable;
                  v240 = *(NiPoint3 *)sub_53D4B0(&v277, v278, &v240);
                  v160 = (double)rand() / dbl_A3D5A8;
                  v112 = v160;
                  v161 = v258 * v160;
                  v194 = v257 * v112;
                  v219 = v112 * *(double *)&v254.pos.x;
                  v162 = v161 + v240.x;
                  v195 = v194 + v240.y;
                  v220 = v219 + v240.z;
                  v274 = v162;
                  v109 = v162;
                  v275 = v195;
                  v110 = v195;
                  v276 = v220;
                  v111 = v220;
                }
                else
                {
                  if ( v255 )
                  {
                    v196 = v255[0xA].members.m_uiRefCount;
                    v163 = (double)rand() / dbl_A3D5A8;
                    v221 = v163 * *(float *)&v196;
                    v164 = (double)rand() / dbl_A3D5A8;
                    v197 = v164 * flt_B3F9A0;
                    v165 = (double)rand() / dbl_A3D5A8;
                    v166 = v165 * flt_B3F9A0;
                    v254.scale = cos(v197);
                    *(float *)&v241 = sin(v197);
                    v246 = cos(v166);
                    v254.pos.z = sin(v166);
                    v113 = v254.pos.z * v221;
                    v240.x = v254.scale * v113;
                    v240.y = v113 * *(float *)&v241;
                    v240.z = v221 * v246;
                    v240 = *(NiPoint3 *)sub_53D4B0(&v277, &v270, &v240);
                    v167 = (double)rand() / dbl_A3D5A8;
                    v114 = v167;
                    v168 = v258 * v167;
                    v198 = v257 * v114;
                    v222 = v114 * *(double *)&v254.pos.x;
                    v169 = v168 + v240.x;
                    v199 = v198 + v240.y;
                    v223 = v222 + v240.z;
                    v269[3] = v169;
                    v109 = v169;
                    v269[4] = v199;
                    v110 = v199;
                    v269[5] = v223;
                  }
                  else
                  {
                    (*(void (__thiscall **)(float, NiPoint3 *, float *))(*(_DWORD *)LODWORD(v244) + 0x60))(
                      COERCE_FLOAT(LODWORD(v244)),
                      &v240,
                      v269);
                    v170 = (double)rand() / dbl_A3D5A8;
                    v115 = v170;
                    v171 = v258 * v170;
                    v200 = v257 * v115;
                    v224 = v115 * *(double *)&v254.pos.x;
                    v172 = v171 + v240.x;
                    v201 = v200 + v240.y;
                    v223 = v224 + v240.z;
                    v254.rot.data[0][0] = v172;
                    v109 = v172;
                    v254.rot.data[0][1] = v201;
                    v110 = v201;
                    v254.rot.data[0][2] = v223;
                  }
                  v111 = v223;
                }
                v240.z = v111;
                v240.y = v110;
                v240.x = v109;
                if ( v250 > 0 )
                {
                  *v102 = v109;
                  v116 = v250;
                  v102[1] = v110;
                  v102[2] = v111;
                  qmemcpy(v102 + 3, v102, 4 * ((unsigned int)(0xC * v116 - 0xC) >> 2));
                  v104 = v253;
                }
                v102 = (float *)((char *)v102 + v267);
                v47 = v213-- == 1;
                v103 = v242;
              }
              while ( !v47 );
            }
            v117 = (NiObject *)FormHeapAlloc(0x2Cu);
            v286 = 4;
            if ( v117 )
              v118 = (unsigned __int16 *)sub_53D930(v117, v101, 1, 1);
            else
              v118 = 0;
            v286 = 0xFFFFFFFF;
            sub_7263B0(v118, 1u);
            sub_7260B0((int)v118, v186, 0, v186, (void *)(0xC * v101), 1);
            FormHeapFree(v186);
            sub_7262A0((int)v118, 0, 0, 0, 3, v101, 0xC, 0xC);
            v51 = v252;
            sub_6C61E0(*(_DWORD **)&v252->members.children.capacity, (int)v118);
            v119 = *(float **)&v51->members.children.capacity;
            v120 = v119[3];
            v121 = (v254.rot.data[2][0] - v254.rot.data[1][0]) * dbl_A2FAA0;
            v278[1] = v119[4];
            v279 = v121;
            v278[0] = v120;
            v122 = v119[5];
            v254.rot.data[0][0] = 0.0;
            v254.rot.data[0][1] = 0.0;
            v278[2] = v122;
            v254.rot.data[0][2] = 0.0;
            v119[3] = 0.0;
            v119[4] = 0.0;
            v123 = v279;
            v119[5] = 0.0;
            v119[6] = v123;
            v124 = (NiNode *)a1[3].members.m_uiRefCount;
            v125 = 1;
            if ( v124 )
            {
              if ( (char *)v124->vtbl->super.super.GetType((NiObject *)v124) == dword_B3FD4C )
                v125 = *(_BYTE *)(a1[3].members.m_uiRefCount + 0xDC) & 7;
            }
            v126 = (BSShaderProperty *)FormHeapAlloc(0xACu);
            v286 = 5;
            if ( v126 )
              v127 = (BSShaderProperty *)sub_7EFA80(
                                           v126,
                                           v243,
                                           v266,
                                           (int)&v247,
                                           (int)v254.rot.data[1],
                                           (int)v254.rot.data[2],
                                           a3 != 0,
                                           v125);
            else
              v127 = 0;
            v286 = 0xFFFFFFFF;
            sub_405680(v51, v127);
            v128 = v268;
            if ( NiNode_GetNiPropertyByID(v268, 6) )
            {
              NiPropertyByID = (BSShaderProperty *)NiNode_GetNiPropertyByID(v128, 6);
              sub_405680(v51, NiPropertyByID);
            }
            if ( NiNode_GetNiPropertyByID(v128, 0) )
            {
              v130 = (BSShaderProperty *)NiNode_GetNiPropertyByID(v128, 0);
              sub_405680(v51, v130);
            }
            if ( sub_7B8940((NiAVObject *)v51, 0x1B, 0, 1) )
              return v51;
            goto LABEL_148;
          }
          while ( (char *)v78 != dword_B40944 )
          {
            v78 = *(_DWORD *)(v78 + 4);
            if ( !v78 )
              goto LABEL_92;
          }
          v90 = NiRTTI_Cast((BSStringT *)dword_B40944, (NiObject *)v72);
          v253 = v90;
        }
        qmemcpy(&v282, &v90[0xA].__vftable[1].Copy, sizeof(v282));
        qmemcpy(&v280, &v90[2].__vftable[1].Copy, sizeof(v280));
        sub_718A80((float *)&v280, (float *)&v281);
        qmemcpy(&v277, sub_53D7A0(&v281, &v283, &v282), sizeof(v277));
        v91 = sub_7101F0(&v277, &v254, &v259);
        v247 = SLODWORD(v91->rot.data[0][0]);
        v148 = *(float *)&v241;
        v248 = v91->rot.data[0][1];
        v249 = v91->rot.data[0][2];
        v85 = *(float *)&v241 * v249 + v277.pos.z;
        if ( v277.pos.z >= v85 )
          v92 = v85;
        else
          v92 = v277.pos.z;
        v185 = v90[0xA].members.m_uiRefCount;
        v227 = -*(float *)&v185;
        v254.rot.data[1][0] = v227;
        v254.rot.data[1][1] = v227;
        v236 = v92;
        v254.rot.data[1][2] = v236;
        if ( v277.pos.z > v85 )
          v85 = v277.pos.z;
        *(float *)&v226 = *(float *)&v90[0xA].members.m_uiRefCount;
        v89 = *(float *)&v226;
      }
      *((float *)&v226 + 1) = v89;
      v237 = v85;
      *(_QWORD *)&v254.rot.data[2][0] = v226;
      v254.rot.data[2][2] = v237;
      goto LABEL_120;
    }
  }
  return 0;
}
