//
// [2026-10-03 live caster identification] 14:22 bounds observer confirms first invalid lookup at call17 is Daedroth reference00028F5E/base00028F5D, null BBX, zero restored-frond records/attachments. See comment at7D22D5. Immediate cause is now proven null dereference rather than merely candidate stale pointer. This does not itself define a safe native fallback for missing creature BSBound data.
int __fastcall ShadowLight_LightProjection_(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6)
{
  float v7; // ebx
  NiExtraData *ExtraData; // eax
  float *v9; // ecx
  double v10; // st7
  double v11; // st7
  float v12; // ecx
  char *m_pcName; // eax
  double v14; // st6
  double v15; // st7
  int v16; // edi
  _DWORD *v17; // esi
  _DWORD *ShadowSceneNode; // eax
  int v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  LONG (__stdcall *v22)(volatile LONG *); // ebp
  float *v23; // eax
  void (__thiscall ***v24)(_DWORD, int); // edi
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  double v27; // st7
  _DWORD *v28; // eax
  double v29; // st7
  bool v30; // c0
  bool v31; // c3
  _DWORD *v32; // eax
  float v33; // esi
  void (__thiscall ***v34)(_DWORD, int); // esi
  void (__thiscall ***v35)(_DWORD, int); // esi
  void (__thiscall ***v36)(_DWORD, int); // esi
  double v37; // st7
  int v38; // eax
  unsigned int v39; // eax
  _DWORD *v40; // eax
  float v41; // ecx
  float v42; // eax
  float v43; // ecx
  float v44; // edx
  float v45; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48; // edi
  int v49; // eax
  float *v50; // ebx
  void (__thiscall ***v51)(_DWORD, int); // esi
  float v52; // ecx
  float v53; // edx
  float v54; // eax
  int i; // esi
  _DWORD *v56; // eax
  void (__thiscall ***v57)(_DWORD, int); // ebp
  float *v58; // eax
  double v59; // st7
  void (__thiscall ***v60)(_DWORD, int); // ebp
  float **v61; // eax
  float v62; // ecx
  double v63; // st7
  float v64; // edx
  float *v65; // eax
  double v66; // st6
  float v67; // ecx
  float v68; // edx
  float v69; // eax
  float v70; // edi
  unsigned int v71; // eax
  _DWORD *v72; // eax
  double v73; // st7
  double v74; // st6
  float v75; // esi
  double v76; // st7
  double v77; // st6
  float *v78; // eax
  double v79; // st7
  double v80; // st6
  double v81; // st6
  NiAVObject *v82; // ecx
  double v83; // st7
  double v84; // st6
  int v85; // eax
  double v86; // st7
  float v87; // edx
  float v88; // ecx
  double v89; // st7
  float v90; // edx
  int result; // eax
  float v92; // edx
  unsigned __int16 v93; // [esp+28h] [ebp-F8h]
  unsigned __int16 v94; // [esp+28h] [ebp-F8h]
  float v95; // [esp+40h] [ebp-E0h] BYREF
  float v96; // [esp+44h] [ebp-DCh]
  int v97; // [esp+48h] [ebp-D8h]
  float v98; // [esp+4Ch] [ebp-D4h] BYREF
  float v99; // [esp+50h] [ebp-D0h]
  float v100; // [esp+54h] [ebp-CCh]
  float v101; // [esp+58h] [ebp-C8h]
  float v102; // [esp+5Ch] [ebp-C4h]
  int v103; // [esp+60h] [ebp-C0h]
  int v104; // [esp+64h] [ebp-BCh]
  unsigned __int64 v105; // [esp+68h] [ebp-B8h] BYREF
  float v106; // [esp+70h] [ebp-B0h]
  float v107; // [esp+74h] [ebp-ACh]
  float v108; // [esp+78h] [ebp-A8h]
  float v109; // [esp+7Ch] [ebp-A4h]
  float v110; // [esp+80h] [ebp-A0h]
  float v111; // [esp+84h] [ebp-9Ch]
  float v112; // [esp+88h] [ebp-98h]
  float v113; // [esp+8Ch] [ebp-94h]
  float v114; // [esp+90h] [ebp-90h]
  float v115; // [esp+94h] [ebp-8Ch]
  float v116; // [esp+98h] [ebp-88h]
  float v117; // [esp+9Ch] [ebp-84h]
  int v118; // [esp+A0h] [ebp-80h] BYREF
  float v119; // [esp+A4h] [ebp-7Ch]
  float v120; // [esp+A8h] [ebp-78h]
  float v121; // [esp+ACh] [ebp-74h]
  float v122; // [esp+B0h] [ebp-70h]
  float v123; // [esp+B4h] [ebp-6Ch]
  float v124; // [esp+B8h] [ebp-68h]
  float v125; // [esp+BCh] [ebp-64h]
  int v126; // [esp+C0h] [ebp-60h] BYREF
  float v127; // [esp+C4h] [ebp-5Ch]
  int v128; // [esp+C8h] [ebp-58h] BYREF
  float v129; // [esp+CCh] [ebp-54h]
  float v130; // [esp+D0h] [ebp-50h]
  float v131; // [esp+D4h] [ebp-4Ch]
  float v132; // [esp+D8h] [ebp-48h]
  float v133; // [esp+DCh] [ebp-44h]
  float v134; // [esp+E0h] [ebp-40h]
  float v135; // [esp+E4h] [ebp-3Ch]
  unsigned __int64 v136; // [esp+E8h] [ebp-38h] BYREF
  float v137; // [esp+F0h] [ebp-30h]
  float v138; // [esp+F4h] [ebp-2Ch] BYREF
  float v139; // [esp+F8h] [ebp-28h]
  float v140; // [esp+FCh] [ebp-24h]
  float v141; // [esp+100h] [ebp-20h]
  float v142; // [esp+104h] [ebp-1Ch]
  float v143; // [esp+108h] [ebp-18h]
  int v144; // [esp+10Ch] [ebp-14h] BYREF
  float v145; // [esp+110h] [ebp-10h]
  int v146; // [esp+11Ch] [ebp-4h]

  v107 = *(float *)&a1; /*0x7d22af*/
  v7 = 0.0; /*0x7d22b3*/
  v96 = 0.0; /*0x7d22b5*/
  ExtraData = NiObjectNET_GetExtraData(*(NiObjectNET **)(a1 + 0x130), (const char *)&off_A7D2CC);// Native projection requests BBX extra data from the exact caster root at +0x130; the following retail path assumes the bound object is present. /*0x7d22c4*/
  v9 = *(float **)(a1 + 0x130); /*0x7d22c9*/
  v10 = v9[0x22] + *(float *)&ExtraData[1].__vftable; /*0x7d22d8*/
  v112 = *(float *)&ExtraData[2].member.super.m_uiRefCount; /*0x7d22db*/
  v129 = v10; /*0x7d22df*/
  v127 = *(float *)&ExtraData[1].member.super.m_uiRefCount + v9[0x23]; /*0x7d22ef*/
  v11 = *(float *)&ExtraData[1].member.m_pcName + v9[0x24]; /*0x7d22f9*/
  v12 = *(float *)&ExtraData[2].__vftable; /*0x7d22ff*/
  m_pcName = ExtraData[2].member.m_pcName; /*0x7d2302*/
  v111 = v12; /*0x7d2305*/
  v125 = v11; /*0x7d2309*/
  v113 = *(float *)&m_pcName; /*0x7d2310*/
  if ( v112 >= (double)v12 ) /*0x7d2323*/
  {
    *(float *)&v97 = v112; /*0x7d232d*/
    v14 = v12; /*0x7d2331*/
    v15 = v112; /*0x7d2331*/
  }
  else
  {
    v14 = v12; /*0x7d2325*/
    v15 = v112; /*0x7d2325*/
    *(float *)&v97 = v12; /*0x7d2327*/
  }
  if ( v113 >= (double)*(float *)&v97 ) /*0x7d2344*/
  {
    v14 = v113; /*0x7d2355*/
    goto LABEL_8; /*0x7d2355*/
  }
  if ( v14 > v15 ) /*0x7d234f*/
LABEL_8:
    v15 = v14; /*0x7d2357*/
  v99 = v15; /*0x7d2359*/
  v16 = 0; /*0x7d2364*/
  v103 = 0; /*0x7d2368*/
  v104 = 0; /*0x7d236c*/
  if ( *(float *)&a3 == 0.0 ) /*0x7d2370*/
  {
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x7d238d*/
    v19 = ShadowSceneLight_GetObjectGeometryAtIndex(ShadowSceneNode, 0); /*0x7d2397*/
    if ( v19 ) /*0x7d239e*/
    {
      do /*0x7d23be*/
      {
        if ( !*(_BYTE *)(v19 + 0xF4) ) /*0x7d23a0*/
          ++v16; /*0x7d23a8*/
        v20 = (_DWORD *)GetShadowSceneNode(0); /*0x7d23ad*/
        v19 = ShadowSceneLight_GetObjectGeometryAtIndex(v20, v16); /*0x7d23b7*/
      }
      while ( v19 ); /*0x7d23be*/
      v104 = v16; /*0x7d23c0*/
    }
    v103 = 0; /*0x7d23c6*/
    v21 = (_DWORD *)GetShadowSceneNode(0); /*0x7d23ca*/
    v17 = (_DWORD *)ShadowSceneLight_GetObjectGeometryAtIndex(v21, 0); /*0x7d23d9*/
  }
  else
  {
    v17 = BSShaderLightingProperty__GetFirstActiveNonShadowLight(a3); /*0x7d237b*/
    v16 = (unsigned __int16)OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(a3); /*0x7d2382*/
    v104 = v16; /*0x7d2385*/
  }
  if ( v16 >= 0x28 ) /*0x7d23de*/
  {
    v16 = 0x28; /*0x7d23e0*/
    v104 = 0x28; /*0x7d23e5*/
  }
  v22 = InterlockedDecrement; /*0x7d23ed*/
  v114 = 0.0; /*0x7d23f3*/
  *(float *)&v97 = 0.0; /*0x7d23f7*/
  if ( v16 > 0 ) /*0x7d23fb*/
  {
    do /*0x7d2727*/
    {
      if ( v17 ) /*0x7d2403*/
      {
        v23 = (float *)*ShadowSceneLight_GetLightRef(v17, &v144); /*0x7d2418*/
        v96 = v23[0x22] - v129; /*0x7d2427*/
        v145 = v23[0x23] - v127; /*0x7d2438*/
        v95 = v23[0x24] - v125; /*0x7d2455*/
        if ( v144 ) /*0x7d2459*/
        {
          v24 = (void (__thiscall ***)(_DWORD, int))v144; /*0x7d245b*/
          if ( !v22((volatile LONG *)(v144 + 4)) ) /*0x7d2461*/
            (**v24)(v24, 1); /*0x7d2473*/
        }
        v25 = ShadowSceneLight_GetLightRef(v17, &v126); /*0x7d247f*/
        v146 = 0; /*0x7d2491*/
        v96 = v96 * v96 + v145 * v145 + v95 * v95; /*0x7d24b0*/
        v95 = sqrt(v96); /*0x7d24c5*/
        if ( 1.0 - (v95 - v99) / *(float *)(*v25 + 0xF8) < dbl_A2FC68 /*0x7d2547*/
          || (v26 = ShadowSceneLight_GetLightRef(v17, &v118),
              LOBYTE(v146) = 1,
              LODWORD(v7) |= 1u,
              v95 = sqrt(v96),
              v27 = 1.0,
              1.0 - (v95 - v99) / *(float *)(*v26 + 0xF8) <= 1.0) )
        {
          v28 = ShadowSceneLight_GetLightRef(v17, &v128); /*0x7d2559*/
          v146 = 2; /*0x7d2568*/
          LODWORD(v7) |= 2u; /*0x7d2577*/
          v95 = sqrt(v96); /*0x7d257f*/
          v29 = 1.0 - (v95 - v99) / *(float *)(*v28 + 0xF8); /*0x7d259d*/
          v30 = v29 > 0.0; /*0x7d25a1*/
          v31 = 0.0 == v29; /*0x7d25a1*/
          v27 = 0.0; /*0x7d25a5*/
          if ( v30 || v31 ) /*0x7d25a7*/
          {
            v32 = ShadowSceneLight_GetLightRef(v17, &v98); /*0x7d25b5*/
            LODWORD(v7) |= 4u; /*0x7d25c8*/
            v95 = sqrt(v96); /*0x7d25d0*/
            v27 = 1.0 - (v95 - v99) / *(float *)(*v32 + 0xF8); /*0x7d25ee*/
          }
        }
        v95 = v27; /*0x7d25f3*/
        if ( (LOBYTE(v7) & 4) != 0 ) /*0x7d25f7*/
        {
          LODWORD(v7) &= ~4u; /*0x7d25fd*/
          v96 = v7; /*0x7d2602*/
          if ( v98 != 0.0 ) /*0x7d2606*/
          {
            v33 = v98; /*0x7d2608*/
            if ( !v22((volatile LONG *)(LODWORD(v98) + 4)) ) /*0x7d260e*/
              (**(void (__thiscall ***)(_DWORD, int))LODWORD(v33))(LODWORD(v33), 1); /*0x7d2620*/
          }
        }
        v146 = 1; /*0x7d2625*/
        if ( (LOBYTE(v7) & 2) != 0 ) /*0x7d2630*/
        {
          LODWORD(v7) &= ~2u; /*0x7d2639*/
          v96 = v7; /*0x7d263e*/
          if ( v128 ) /*0x7d2642*/
          {
            v34 = (void (__thiscall ***)(_DWORD, int))v128; /*0x7d2644*/
            if ( !v22((volatile LONG *)(v128 + 4)) ) /*0x7d264a*/
              (**v34)(v34, 1); /*0x7d265c*/
          }
        }
        v146 = 0; /*0x7d2661*/
        if ( (LOBYTE(v7) & 1) != 0 ) /*0x7d266c*/
        {
          LODWORD(v7) &= ~1u; /*0x7d2672*/
          if ( v118 ) /*0x7d2677*/
          {
            v35 = (void (__thiscall ***)(_DWORD, int))v118; /*0x7d2679*/
            if ( !v22((volatile LONG *)(v118 + 4)) ) /*0x7d267f*/
              (**v35)(v35, 1); /*0x7d2691*/
          }
        }
        v36 = (void (__thiscall ***)(_DWORD, int))v126; /*0x7d2693*/
        v146 = 0xFFFFFFFF; /*0x7d269c*/
        if ( v126 ) /*0x7d26a7*/
        {
          if ( !v22((volatile LONG *)(v126 + 4)) ) /*0x7d26ad*/
          {
            if ( v36 ) /*0x7d26b5*/
              (**v36)(v36, 1); /*0x7d26bf*/
          }
        }
        v37 = v95; /*0x7d26c1*/
        v38 = v97; /*0x7d26c5*/
        v16 = v104; /*0x7d26c9*/
        *(float *)(4 * v97 + 0xB45CD0) = v95; /*0x7d26cd*/
        *(float *)(4 * v38 + 0xB45C30) = v37; /*0x7d26d4*/
        v114 = v37 + v114; /*0x7d26df*/
      }
      if ( *(float *)&a3 == 0.0 ) /*0x7d26eb*/
      {
        v93 = ++v103; /*0x7d2702*/
        v40 = (_DWORD *)GetShadowSceneNode(0); /*0x7d2709*/
        v39 = ShadowSceneLight_GetObjectGeometryAtIndex(v40, v93); /*0x7d2713*/
      }
      else
      {
        v39 = BSShaderLightingProperty__GetNextActiveNonShadowLight((int ***)a3); /*0x7d26f4*/
      }
      v17 = (_DWORD *)v39; /*0x7d2718*/
      ++v97; /*0x7d2723*/
    }
    while ( v97 < v16 ); /*0x7d2727*/
  }
  v41 = g_zeroNiPoint3; /*0x7d2737*/
  *(float *)&v97 = 0.0; /*0x7d273d*/
  v42 = MEMORY[0xB3F9B0][0]; /*0x7d2747*/
  v105 = __PAIR64__(LODWORD(MEMORY[0xB3F9AC]), LODWORD(v41)); /*0x7d274c*/
  v43 = MEMORY[0xB3F9B0][0x38]; /*0x7d2750*/
  v44 = MEMORY[0xB3F9B0][0x39]; /*0x7d275a*/
  v106 = v42; /*0x7d2760*/
  v45 = MEMORY[0xB3F9B0][0x3A]; /*0x7d2764*/
  v108 = v43; /*0x7d2769*/
  v109 = v44; /*0x7d276d*/
  v110 = v45; /*0x7d2771*/
  if ( *(float *)&a3 == 0.0 ) /*0x7d2775*/
  {
    v103 = 0; /*0x7d2789*/
    v47 = (_DWORD *)GetShadowSceneNode(0); /*0x7d2791*/
    v46 = (_DWORD *)ShadowSceneLight_GetObjectGeometryAtIndex(v47, 0); /*0x7d279b*/
  }
  else
  {
    v46 = BSShaderLightingProperty__GetFirstActiveNonShadowLight(a3); /*0x7d277e*/
  }
  v48 = v46; /*0x7d27a2*/
  v49 = GetShadowSceneNode(0); /*0x7d27a4*/
  v50 = (float *)*ShadowSceneLight_GetLightRef(*(_DWORD **)(v49 + 0x118), &v126); /*0x7d27bf*/
  if ( v126 ) /*0x7d27ca*/
  {
    v51 = (void (__thiscall ***)(_DWORD, int))v126; /*0x7d27cc*/
    if ( !v22((volatile LONG *)(v126 + 4)) ) /*0x7d27d2*/
      (**v51)(v51, 1); /*0x7d27e4*/
  }
  *(float *)&v136 = -v50[0x42]; /*0x7d27f5*/
  *((float *)&v136 + 1) = -v50[0x43]; /*0x7d2804*/
  v137 = -v50[0x44]; /*0x7d2813*/
  Vector3_NormalizeInPlace((float *)&v136); /*0x7d281a*/
  if ( 0.0 == v114 ) /*0x7d282c*/
  {
    v105 = v136; /*0x7d2843*/
    v52 = v50[0x3B]; /*0x7d2847*/
    v53 = v50[0x3C]; /*0x7d2851*/
    v106 = v137; /*0x7d2857*/
    v54 = v50[0x3D]; /*0x7d285b*/
    v108 = v52; /*0x7d2861*/
    v109 = v53; /*0x7d2865*/
    v110 = v54; /*0x7d2869*/
  }
  else
  {
    for ( i = 0; i < v104; v48 = (_DWORD *)v71 ) /*0x7d2878*/
    {
      if ( v48 ) /*0x7d2880*/
      {
        v96 = *(float *)(4 * i + 0xB45C30) / v114; /*0x7d2891*/
        if ( v96 > 0.0 ) /*0x7d28a0*/
        {
          v56 = ShadowSceneLight_GetLightRef(v48, &v118); /*0x7d28ad*/
          *(float *)&v97 = (*(float *)(*v56 + 0xF8) * *(float *)(4 * i + 0xB45C30) /*0x7d28e2*/
                          + (1.0 - *(float *)(4 * i + 0xB45C30)) * dbl_A2FC70)
                         * v96
                         + *(float *)&v97;
          if ( v118 ) /*0x7d28e6*/
          {
            v57 = (void (__thiscall ***)(_DWORD, int))v118; /*0x7d28e8*/
            if ( !InterlockedDecrement((volatile LONG *)(v118 + 4)) ) /*0x7d28ee*/
              (**v57)(v57, 1); /*0x7d2905*/
          }
          v58 = (float *)*ShadowSceneLight_GetLightRef(v48, &v128); /*0x7d2916*/
          v59 = v58[0x22]; /*0x7d2918*/
          v58 += 0x22; /*0x7d291e*/
          v138 = v59 - v129; /*0x7d292a*/
          v139 = v58[1] - v127; /*0x7d293b*/
          v140 = v58[2] - v125; /*0x7d2955*/
          if ( v128 ) /*0x7d295c*/
          {
            v60 = (void (__thiscall ***)(_DWORD, int))v128; /*0x7d295e*/
            if ( !InterlockedDecrement((volatile LONG *)(v128 + 4)) ) /*0x7d2964*/
              (**v60)(v60, 1); /*0x7d297b*/
          }
          Vector3_NormalizeInPlace(&v138); /*0x7d2984*/
          v98 = 1.0 - *(float *)(4 * i + 0xB45C30); /*0x7d2996*/
          v130 = v98 * *(float *)&v136; /*0x7d29a7*/
          v131 = *((float *)&v136 + 1) * v98; /*0x7d29b7*/
          v132 = v98 * v137; /*0x7d29c5*/
          v98 = *(float *)(4 * i + 0xB45C30); /*0x7d29d3*/
          v141 = v98 * v138; /*0x7d29e4*/
          v142 = v139 * v98; /*0x7d29f4*/
          v143 = v98 * v140; /*0x7d2a02*/
          v111 = v141 + v130; /*0x7d2a17*/
          v138 = v111; /*0x7d2a26*/
          v112 = v142 + v131; /*0x7d2a3b*/
          v139 = v112; /*0x7d2a4a*/
          v113 = v143 + v132; /*0x7d2a58*/
          v140 = v113; /*0x7d2a64*/
          v100 = v111 * v96; /*0x7d2a75*/
          v101 = v112 * v96; /*0x7d2a7f*/
          v102 = v96 * v113; /*0x7d2a87*/
          *(float *)&v105 = v100 + *(float *)&v105; /*0x7d2a93*/
          *((float *)&v105 + 1) = *((float *)&v105 + 1) + v101; /*0x7d2a9f*/
          v106 = v102 + v106; /*0x7d2aab*/
          v61 = (float **)ShadowSceneLight_GetLightRef(v48, &v95); /*0x7d2aaf*/
          v62 = v50[0x3C]; /*0x7d2ac3*/
          v63 = 1.0 - *(float *)(4 * i + 0xB45C30); /*0x7d2ac9*/
          v122 = v50[0x3B]; /*0x7d2acb*/
          v64 = v50[0x3D]; /*0x7d2ad2*/
          v123 = v62; /*0x7d2ad8*/
          v124 = v64; /*0x7d2adf*/
          v98 = v63; /*0x7d2ae6*/
          v122 = v122 * v98; /*0x7d2afb*/
          v65 = *v61; /*0x7d2b02*/
          v66 = v62; /*0x7d2b04*/
          v67 = v65[0x3B]; /*0x7d2b0b*/
          v68 = v65[0x3C]; /*0x7d2b13*/
          v69 = v65[0x3D]; /*0x7d2b19*/
          v115 = v67; /*0x7d2b1f*/
          v123 = v66 * v98; /*0x7d2b23*/
          v116 = v68; /*0x7d2b2a*/
          v117 = v69; /*0x7d2b2e*/
          v124 = v98 * v124; /*0x7d2b39*/
          v98 = *(float *)(4 * i + 0xB45C30); /*0x7d2b47*/
          v115 = v67 * v98; /*0x7d2b59*/
          v116 = v68 * v98; /*0x7d2b6b*/
          v117 = v98 * v69; /*0x7d2b7b*/
          v119 = v115 + v122; /*0x7d2b95*/
          v120 = v116 + v123; /*0x7d2baf*/
          v121 = v117 + v124; /*0x7d2bcc*/
          v133 = v119 * v96; /*0x7d2bf5*/
          v134 = v120 * v96; /*0x7d2c05*/
          v135 = v96 * v121; /*0x7d2c13*/
          v108 = v133 + v108; /*0x7d2c25*/
          v109 = v134 + v109; /*0x7d2c34*/
          v110 = v135 + v110; /*0x7d2c43*/
          if ( v95 != 0.0 ) /*0x7d2c47*/
          {
            v70 = v95; /*0x7d2c49*/
            if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v95) + 4)) ) /*0x7d2c4f*/
              (**(void (__thiscall ***)(_DWORD, int))LODWORD(v70))(LODWORD(v70), 1); /*0x7d2c65*/
          }
        }
      }
      if ( *(float *)&a3 == 0.0 ) /*0x7d2c70*/
      {
        v94 = ++v103; /*0x7d2c80*/
        v72 = (_DWORD *)GetShadowSceneNode(0); /*0x7d2c87*/
        v71 = ShadowSceneLight_GetObjectGeometryAtIndex(v72, v94); /*0x7d2c91*/
      }
      else
      {
        v71 = BSShaderLightingProperty__GetNextActiveNonShadowLight((int ***)a3); /*0x7d2c72*/
      }
      ++i; /*0x7d2c96*/
    }
  }
  Vector3_NormalizeInPlace((float *)&v105); /*0x7d2ca9*/
  v73 = v106; /*0x7d2cb0*/
  v74 = dbl_A31C70; /*0x7d2cb4*/
  if ( v74 > v106 ) /*0x7d2cc1*/
    v73 = v74; /*0x7d2cc3*/
  v106 = v73; /*0x7d2ccd*/
  Vector3_NormalizeInPlace((float *)&v105); /*0x7d2cd1*/
  v75 = v107; /*0x7d2cd8*/
  v76 = *(float *)(*(_DWORD *)(LODWORD(v107) + 0x130) + 0x94) * v99;// Load source world scale for the BBX maximum-extent calculation. /*0x7d2ce8*/
  v77 = dbl_A3B1B8;                             // Load the retail maximum projected extent constant 256.0. /*0x7d2cec*/
  if ( v77 < v76 ) /*0x7d2cf9*/
    v76 = v77;                                  // Clamp the scaled maximum BBX extent to 256. /*0x7d2cfb*/
  v78 = (float *)(*(_DWORD *)(LODWORD(v107) + 0x100) + 0x54); /*0x7d2d0d*/
  v107 = v76 * dbl_A38618;                      // Compute projector offset as capped extent multiplied by 2.5. /*0x7d2d15*/
  v79 = v107; /*0x7d2d26*/
  v100 = *(float *)&v105 * v107; /*0x7d2d28*/
  v101 = *((float *)&v105 + 1) * v107; /*0x7d2d32*/
  v102 = v107 * v106; /*0x7d2d3c*/
  v130 = v100 + v129; /*0x7d2d4b*/
  v80 = v101; /*0x7d2d59*/
  *v78 = v130;                                  // Commit backing projector branch local X translation; Y/Z follow at 0x007D2D78/0x007D2D91. /*0x7d2d5d*/
  v131 = v80 + v127; /*0x7d2d66*/
  v81 = v102; /*0x7d2d74*/
  v78[1] = v131;                                // Commit backing projector branch local Y translation. /*0x7d2d78*/
  v132 = v81 + v125; /*0x7d2d83*/
  v78[2] = v132;                                // Commit backing projector branch local Z translation. /*0x7d2d91*/
  v82 = *(NiAVObject **)(LODWORD(v75) + 0x100); /*0x7d2d9a*/
  *(float *)&v97 = v79 * dbl_A3F3A0;            // Compute backing point-light range from projector offset: range = 6 * offset = 15 * capped extent. /*0x7d2da0*/
  NiAVObject_UpdateNiAVObject(v82, 0.0, 1);     // Update the backing NiAVObject after committing projector translation. /*0x7d2da9*/
  v83 = v109 * dbl_A91270 + v108 * dbl_A91270 + dbl_A91270 * v110; /*0x7d2dc6*/
  v84 = dbl_A91268; /*0x7d2dc8*/
  if ( v84 > v83 || v83 <= 1.0 ) /*0x7d2de8*/
  {
    if ( v84 > v83 ) /*0x7d2e91*/
      v83 = v84; /*0x7d2e97*/
  }
  else
  {
    v83 = 1.0; /*0x7d2dee*/
  }
  v85 = *(_DWORD *)(LODWORD(v75) + 0x100); /*0x7d2df2*/
  v107 = v83; /*0x7d2df8*/
  v86 = v107; /*0x7d2dfc*/
  ++*(_DWORD *)(v85 + 0xB8); /*0x7d2e00*/
  v100 = v86; /*0x7d2e06*/
  v101 = v86; /*0x7d2e0e*/
  v87 = v101; /*0x7d2e12*/
  *(float *)(v85 + 0xEC) = v100;                // Commit native backing-light attenuation component. /*0x7d2e16*/
  v102 = v86; /*0x7d2e1c*/
  v88 = v102; /*0x7d2e20*/
  v89 = *(float *)&v97; /*0x7d2e24*/
  *(float *)(v85 + 0xF0) = v87;                 // Commit native backing-light attenuation component. /*0x7d2e28*/
  v100 = v89; /*0x7d2e2e*/
  v90 = v100; /*0x7d2e34*/
  *(float *)(v85 + 0xF4) = v88;                 // Commit native backing-light attenuation component. /*0x7d2e38*/
  v101 = 0.0; /*0x7d2e3e*/
  result = *(_DWORD *)(LODWORD(v75) + 0x100); /*0x7d2e42*/
  v102 = 0.0; /*0x7d2e48*/
  ++*(_DWORD *)(result + 0xB8); /*0x7d2e50*/
  *(float *)(result + 0xF8) = v90;              // Commit computed projector range to backing NiPointLight+0xF8. /*0x7d2e56*/
  v92 = v102; /*0x7d2e5c*/
  *(float *)(result + 0xFC) = 0.0;              // Zero backing light field +0xFC on the sole normal projection path. /*0x7d2e60*/
  *(float *)(result + 0x100) = v92;             // Zero backing light field +0x100 on the sole normal projection path. /*0x7d2e66*/
  return result; /*0x7d2e6c*/
}
