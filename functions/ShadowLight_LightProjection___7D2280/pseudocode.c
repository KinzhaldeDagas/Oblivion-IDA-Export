int __fastcall ShadowLight_LightProjection_(int a1, _DWORD *a2, float a3, int a4, int a5, int a6)
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
  int v39; // eax
  _DWORD *v40; // eax
  float v41; // ecx
  float v42; // eax
  float v43; // ecx
  float v44; // edx
  int v45; // eax
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
  int v71; // eax
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

  v107 = *(float *)&a1;
  v7 = 0.0;
  v96 = 0.0;
  ExtraData = NiObjectNET_GetExtraData(*(NiObjectNET **)(a1 + 0x130), (const char *)&off_A7D2CC);
  v9 = *(float **)(a1 + 0x130);
  v10 = v9[0x22] + *(float *)&ExtraData[1].__vftable;
  v112 = *(float *)&ExtraData[2].member.super.m_uiRefCount;
  v129 = v10;
  v127 = *(float *)&ExtraData[1].member.super.m_uiRefCount + v9[0x23];
  v11 = *(float *)&ExtraData[1].member.m_pcName + v9[0x24];
  v12 = *(float *)&ExtraData[2].__vftable;
  m_pcName = ExtraData[2].member.m_pcName;
  v111 = v12;
  v125 = v11;
  v113 = *(float *)&m_pcName;
  if ( v112 >= (double)v12 )
  {
    *(float *)&v97 = v112;
    v14 = v12;
    v15 = v112;
  }
  else
  {
    v14 = v12;
    v15 = v112;
    *(float *)&v97 = v12;
  }
  if ( v113 >= (double)*(float *)&v97 )
  {
    v14 = v113;
    goto LABEL_8;
  }
  if ( v14 > v15 )
LABEL_8:
    v15 = v14;
  v99 = v15;
  v16 = 0;
  v103 = 0;
  v104 = 0;
  if ( a3 == 0.0 )
  {
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    v19 = sub_7C62D0(ShadowSceneNode, 0);
    if ( v19 )
    {
      do
      {
        if ( !*(_BYTE *)(v19 + 0xF4) )
          ++v16;
        v20 = (_DWORD *)GetShadowSceneNode(0);
        v19 = sub_7C62D0(v20, v16);
      }
      while ( v19 );
      v104 = v16;
    }
    v103 = 0;
    v21 = (_DWORD *)GetShadowSceneNode(0);
    v17 = (_DWORD *)sub_7C62D0(v21, 0);
  }
  else
  {
    v17 = sub_7ED1A0((_DWORD *)LODWORD(a3));
    v16 = (unsigned __int16)sub_7ED5D0((_DWORD *)LODWORD(a3));
    v104 = v16;
  }
  if ( v16 >= 0x28 )
  {
    v16 = 0x28;
    v104 = 0x28;
  }
  v22 = InterlockedDecrement;
  v114 = 0.0;
  *(float *)&v97 = 0.0;
  if ( v16 > 0 )
  {
    do
    {
      if ( v17 )
      {
        v23 = (float *)*sub_405AD0(v17, &v144);
        v96 = v23[0x22] - v129;
        v145 = v23[0x23] - v127;
        v95 = v23[0x24] - v125;
        if ( v144 )
        {
          v24 = (void (__thiscall ***)(_DWORD, int))v144;
          if ( !v22((volatile LONG *)(v144 + 4)) )
            (**v24)(v24, 1);
        }
        v25 = sub_405AD0(v17, &v126);
        v146 = 0;
        v96 = v96 * v96 + v145 * v145 + v95 * v95;
        v95 = sqrt(v96);
        if ( 1.0 - (v95 - v99) / *(float *)(*v25 + 0xF8) < dbl_A2FC68
          || (v26 = sub_405AD0(v17, &v118),
              LOBYTE(v146) = 1,
              LODWORD(v7) |= 1u,
              v95 = sqrt(v96),
              v27 = 1.0,
              1.0 - (v95 - v99) / *(float *)(*v26 + 0xF8) <= 1.0) )
        {
          v28 = sub_405AD0(v17, &v128);
          v146 = 2;
          LODWORD(v7) |= 2u;
          v95 = sqrt(v96);
          v29 = 1.0 - (v95 - v99) / *(float *)(*v28 + 0xF8);
          v30 = v29 > 0.0;
          v31 = 0.0 == v29;
          v27 = 0.0;
          if ( v30 || v31 )
          {
            v32 = sub_405AD0(v17, &v98);
            LODWORD(v7) |= 4u;
            v95 = sqrt(v96);
            v27 = 1.0 - (v95 - v99) / *(float *)(*v32 + 0xF8);
          }
        }
        v95 = v27;
        if ( (LOBYTE(v7) & 4) != 0 )
        {
          LODWORD(v7) &= ~4u;
          v96 = v7;
          if ( v98 != 0.0 )
          {
            v33 = v98;
            if ( !v22((volatile LONG *)(LODWORD(v98) + 4)) )
              (**(void (__thiscall ***)(_DWORD, int))LODWORD(v33))(LODWORD(v33), 1);
          }
        }
        v146 = 1;
        if ( (LOBYTE(v7) & 2) != 0 )
        {
          LODWORD(v7) &= ~2u;
          v96 = v7;
          if ( v128 )
          {
            v34 = (void (__thiscall ***)(_DWORD, int))v128;
            if ( !v22((volatile LONG *)(v128 + 4)) )
              (**v34)(v34, 1);
          }
        }
        v146 = 0;
        if ( (LOBYTE(v7) & 1) != 0 )
        {
          LODWORD(v7) &= ~1u;
          if ( v118 )
          {
            v35 = (void (__thiscall ***)(_DWORD, int))v118;
            if ( !v22((volatile LONG *)(v118 + 4)) )
              (**v35)(v35, 1);
          }
        }
        v36 = (void (__thiscall ***)(_DWORD, int))v126;
        v146 = 0xFFFFFFFF;
        if ( v126 )
        {
          if ( !v22((volatile LONG *)(v126 + 4)) )
          {
            if ( v36 )
              (**v36)(v36, 1);
          }
        }
        v37 = v95;
        v38 = v97;
        v16 = v104;
        *(float *)(4 * v97 + 0xB45CD0) = v95;
        *(float *)(4 * v38 + 0xB45C30) = v37;
        v114 = v37 + v114;
      }
      if ( a3 == 0.0 )
      {
        v93 = ++v103;
        v40 = (_DWORD *)GetShadowSceneNode(0);
        v39 = sub_7C62D0(v40, v93);
      }
      else
      {
        v39 = sub_7ED3B0((_DWORD *)LODWORD(a3));
      }
      v17 = (_DWORD *)v39;
      ++v97;
    }
    while ( v97 < v16 );
  }
  v41 = Vector3_InitValue_;
  *(float *)&v97 = 0.0;
  v42 = dword_B3F9B0;
  v105 = __PAIR64__(*((_DWORD *)&Vector3_InitValue_ + 1), LODWORD(v41));
  v43 = *(float *)&dword_B3FA90;
  v44 = *(float *)&dword_B3FA94;
  v106 = v42;
  v45 = dword_B3FA98;
  v108 = v43;
  v109 = v44;
  v110 = *(float *)&v45;
  if ( a3 == 0.0 )
  {
    v103 = 0;
    v47 = (_DWORD *)GetShadowSceneNode(0);
    v46 = (_DWORD *)sub_7C62D0(v47, 0);
  }
  else
  {
    v46 = sub_7ED1A0((_DWORD *)LODWORD(a3));
  }
  v48 = v46;
  v49 = GetShadowSceneNode(0);
  v50 = (float *)*sub_405AD0(*(_DWORD **)(v49 + 0x118), &v126);
  if ( v126 )
  {
    v51 = (void (__thiscall ***)(_DWORD, int))v126;
    if ( !v22((volatile LONG *)(v126 + 4)) )
      (**v51)(v51, 1);
  }
  *(float *)&v136 = -v50[0x42];
  *((float *)&v136 + 1) = -v50[0x43];
  v137 = -v50[0x44];
  sub_43F350((float *)&v136);
  if ( 0.0 == v114 )
  {
    v105 = v136;
    v52 = v50[0x3B];
    v53 = v50[0x3C];
    v106 = v137;
    v54 = v50[0x3D];
    v108 = v52;
    v109 = v53;
    v110 = v54;
  }
  else
  {
    for ( i = 0; i < v104; v48 = (_DWORD *)v71 )
    {
      if ( v48 )
      {
        v96 = *(float *)(4 * i + 0xB45C30) / v114;
        if ( v96 > 0.0 )
        {
          v56 = sub_405AD0(v48, &v118);
          *(float *)&v97 = (*(float *)(*v56 + 0xF8) * *(float *)(4 * i + 0xB45C30)
                          + (1.0 - *(float *)(4 * i + 0xB45C30)) * dbl_A2FC70)
                         * v96
                         + *(float *)&v97;
          if ( v118 )
          {
            v57 = (void (__thiscall ***)(_DWORD, int))v118;
            if ( !InterlockedDecrement((volatile LONG *)(v118 + 4)) )
              (**v57)(v57, 1);
          }
          v58 = (float *)*sub_405AD0(v48, &v128);
          v59 = v58[0x22];
          v58 += 0x22;
          v138 = v59 - v129;
          v139 = v58[1] - v127;
          v140 = v58[2] - v125;
          if ( v128 )
          {
            v60 = (void (__thiscall ***)(_DWORD, int))v128;
            if ( !InterlockedDecrement((volatile LONG *)(v128 + 4)) )
              (**v60)(v60, 1);
          }
          sub_43F350(&v138);
          v98 = 1.0 - *(float *)(4 * i + 0xB45C30);
          v130 = v98 * *(float *)&v136;
          v131 = *((float *)&v136 + 1) * v98;
          v132 = v98 * v137;
          v98 = *(float *)(4 * i + 0xB45C30);
          v141 = v98 * v138;
          v142 = v139 * v98;
          v143 = v98 * v140;
          v111 = v141 + v130;
          v138 = v111;
          v112 = v142 + v131;
          v139 = v112;
          v113 = v143 + v132;
          v140 = v113;
          v100 = v111 * v96;
          v101 = v112 * v96;
          v102 = v96 * v113;
          *(float *)&v105 = v100 + *(float *)&v105;
          *((float *)&v105 + 1) = *((float *)&v105 + 1) + v101;
          v106 = v102 + v106;
          v61 = (float **)sub_405AD0(v48, &v95);
          v62 = v50[0x3C];
          v63 = 1.0 - *(float *)(4 * i + 0xB45C30);
          v122 = v50[0x3B];
          v64 = v50[0x3D];
          v123 = v62;
          v124 = v64;
          v98 = v63;
          v122 = v122 * v98;
          v65 = *v61;
          v66 = v62;
          v67 = v65[0x3B];
          v68 = v65[0x3C];
          v69 = v65[0x3D];
          v115 = v67;
          v123 = v66 * v98;
          v116 = v68;
          v117 = v69;
          v124 = v98 * v124;
          v98 = *(float *)(4 * i + 0xB45C30);
          v115 = v67 * v98;
          v116 = v68 * v98;
          v117 = v98 * v69;
          v119 = v115 + v122;
          v120 = v116 + v123;
          v121 = v117 + v124;
          v133 = v119 * v96;
          v134 = v120 * v96;
          v135 = v96 * v121;
          v108 = v133 + v108;
          v109 = v134 + v109;
          v110 = v135 + v110;
          if ( v95 != 0.0 )
          {
            v70 = v95;
            if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v95) + 4)) )
              (**(void (__thiscall ***)(_DWORD, int))LODWORD(v70))(LODWORD(v70), 1);
          }
        }
      }
      if ( a3 == 0.0 )
      {
        v94 = ++v103;
        v72 = (_DWORD *)GetShadowSceneNode(0);
        v71 = sub_7C62D0(v72, v94);
      }
      else
      {
        v71 = sub_7ED3B0((_DWORD *)LODWORD(a3));
      }
      ++i;
    }
  }
  sub_43F350((float *)&v105);
  v73 = v106;
  v74 = dbl_A31C70;
  if ( v74 > v106 )
    v73 = v74;
  v106 = v73;
  sub_43F350((float *)&v105);
  v75 = v107;
  v76 = *(float *)(*(_DWORD *)(LODWORD(v107) + 0x130) + 0x94) * v99;
  v77 = dbl_A3B1B8;
  if ( v77 < v76 )
    v76 = v77;
  v78 = (float *)(*(_DWORD *)(LODWORD(v107) + 0x100) + 0x54);
  v107 = v76 * dbl_A38618;
  v79 = v107;
  v100 = *(float *)&v105 * v107;
  v101 = *((float *)&v105 + 1) * v107;
  v102 = v107 * v106;
  v130 = v100 + v129;
  v80 = v101;
  *v78 = v130;
  v131 = v80 + v127;
  v81 = v102;
  v78[1] = v131;
  v132 = v81 + v125;
  v78[2] = v132;
  v82 = *(NiAVObject **)(LODWORD(v75) + 0x100);
  *(float *)&v97 = v79 * dbl_A3F3A0;
  NiAVObject_UpdateNiAVObject(v82, 0.0, 1);
  v83 = v109 * dbl_A91270 + v108 * dbl_A91270 + dbl_A91270 * v110;
  v84 = dbl_A91268;
  if ( v84 > v83 || v83 <= 1.0 )
  {
    if ( v84 > v83 )
      v83 = v84;
  }
  else
  {
    v83 = 1.0;
  }
  v85 = *(_DWORD *)(LODWORD(v75) + 0x100);
  v107 = v83;
  v86 = v107;
  ++*(_DWORD *)(v85 + 0xB8);
  v100 = v86;
  v101 = v86;
  v87 = v101;
  *(float *)(v85 + 0xEC) = v100;
  v102 = v86;
  v88 = v102;
  v89 = *(float *)&v97;
  *(float *)(v85 + 0xF0) = v87;
  v100 = v89;
  v90 = v100;
  *(float *)(v85 + 0xF4) = v88;
  v101 = 0.0;
  result = *(_DWORD *)(LODWORD(v75) + 0x100);
  v102 = 0.0;
  ++*(_DWORD *)(result + 0xB8);
  *(float *)(result + 0xF8) = v90;
  v92 = v102;
  *(float *)(result + 0xFC) = 0.0;
  *(float *)(result + 0x100) = v92;
  return result;
}
