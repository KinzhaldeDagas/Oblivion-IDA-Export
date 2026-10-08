char __thiscall sub_4C2630(int this)
{
  _DWORD *v1; // esi
  int v2; // ebx
  _DWORD *v3; // eax
  bool v4; // zf
  float v5; // ebp
  int i; // edi
  int v7; // ecx
  int v8; // edx
  float *v9; // eax
  int v10; // ebp
  NiObject *v11; // edi
  const void **v12; // ecx
  int v13; // eax
  NiNode *v14; // ecx
  NiProperty *NiPropertyByID; // eax
  NiProperty *v16; // edi
  BOOL v17; // eax
  Ni2DBuffer ***v18; // eax
  int j; // edi
  Ni2DBuffer ***v20; // eax
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // ebx
  _DWORD **v35; // eax
  int v36; // ebx
  int v37; // ecx
  _DWORD **v38; // ebp
  LONG (__stdcall *v39)(volatile LONG *); // ebp
  void (__thiscall ***v40)(_DWORD, int); // esi
  void (__thiscall ***v41)(_DWORD, int); // esi
  void (__thiscall ***v42)(_DWORD, int); // esi
  void (__thiscall ***v43)(_DWORD, int); // esi
  void (__thiscall ***v44)(_DWORD, int); // esi
  void (__thiscall ***v45)(_DWORD, int); // esi
  void (__thiscall ***v46)(_DWORD, int); // esi
  void (__thiscall ***v47)(_DWORD, int); // esi
  void (__thiscall ***v48)(_DWORD, int); // esi
  void (__thiscall ***v49)(_DWORD, int); // esi
  void (__thiscall ***v50)(_DWORD, int); // esi
  void (__thiscall ***v51)(_DWORD, int); // esi
  void (__thiscall ***v52)(_DWORD, int); // esi
  void (__thiscall ***v53)(_DWORD, int); // esi
  void (__thiscall ***v54)(_DWORD, int); // esi
  void (__thiscall ***v55)(_DWORD, int); // esi
  void (__thiscall ***v56)(_DWORD, int); // esi
  void (__thiscall ***v57)(_DWORD, int); // esi
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  _BYTE **v65; // eax
  char v66; // di
  _BYTE **v67; // eax
  char v68; // al
  int *v70; // [esp+48h] [ebp-94h]
  char v71; // [esp+48h] [ebp-94h]
  int *v72; // [esp+4Ch] [ebp-90h]
  char v73; // [esp+4Ch] [ebp-90h]
  int *v74; // [esp+50h] [ebp-8Ch]
  char v75; // [esp+50h] [ebp-8Ch]
  int *v76; // [esp+54h] [ebp-88h]
  char v77; // [esp+54h] [ebp-88h]
  int *v78; // [esp+58h] [ebp-84h]
  char v79; // [esp+58h] [ebp-84h]
  int *v80; // [esp+5Ch] [ebp-80h]
  char v81; // [esp+5Ch] [ebp-80h]
  int *v82; // [esp+60h] [ebp-7Ch]
  char v83; // [esp+60h] [ebp-7Ch]
  UInt32 v84; // [esp+64h] [ebp-78h]
  int v85; // [esp+64h] [ebp-78h]
  int v86; // [esp+68h] [ebp-74h] BYREF
  int v87; // [esp+6Ch] [ebp-70h]
  int *v88; // [esp+70h] [ebp-6Ch]
  int v89; // [esp+74h] [ebp-68h] BYREF
  int v90; // [esp+78h] [ebp-64h] BYREF
  int v91; // [esp+7Ch] [ebp-60h] BYREF
  int v92; // [esp+80h] [ebp-5Ch] BYREF
  int v93; // [esp+84h] [ebp-58h] BYREF
  int v94; // [esp+88h] [ebp-54h] BYREF
  int *v95; // [esp+8Ch] [ebp-50h]
  int v96; // [esp+90h] [ebp-4Ch] BYREF
  int v97; // [esp+94h] [ebp-48h] BYREF
  int v98; // [esp+98h] [ebp-44h] BYREF
  int v99; // [esp+9Ch] [ebp-40h] BYREF
  int v100; // [esp+A0h] [ebp-3Ch] BYREF
  int v101; // [esp+A4h] [ebp-38h] BYREF
  int v102; // [esp+A8h] [ebp-34h] BYREF
  int v103; // [esp+ACh] [ebp-30h] BYREF
  int v104; // [esp+B0h] [ebp-2Ch] BYREF
  int v105; // [esp+B4h] [ebp-28h] BYREF
  int v106; // [esp+B8h] [ebp-24h]
  int v107; // [esp+BCh] [ebp-20h] BYREF
  float v108; // [esp+C0h] [ebp-1Ch]
  float v109; // [esp+C4h] [ebp-18h]
  float v110; // [esp+C8h] [ebp-14h]
  float v111; // [esp+CCh] [ebp-10h]
  int v112; // [esp+D8h] [ebp-4h]

  v1 = (_DWORD *)this; /*0x4c265d*/
  v106 = this; /*0x4c265f*/
  v2 = 0; /*0x4c2666*/
  v3 = *(_DWORD **)(this + 0x24); /*0x4c266c*/
  if ( !v3 || !*v3 || !*(_DWORD *)*v3 ) /*0x4c2681*/
    return 0; /*0x4c3014*/
  v4 = (*(_BYTE *)(this + 0x1C) & 2) == 0; /*0x4c2689*/
  v108 = 1.0; /*0x4c268f*/
  v109 = 1.0; /*0x4c2696*/
  v110 = 1.0; /*0x4c269d*/
  v111 = 0.0; /*0x4c26a6*/
  if ( v4 ) /*0x4c26ad*/
  {
    v5 = v111; /*0x4c26af*/
    for ( i = 0; i < 0x10; i += 4 ) /*0x4c26b6*/
    {
      v7 = 0; /*0x4c26b8*/
      do /*0x4c26f8*/
      {
        v8 = 0x11; /*0x4c26ba*/
        do /*0x4c26f0*/
        {
          v9 = (float *)(v7 + *(_DWORD *)(*(_DWORD *)(v1[9] + 0xC) + i)); /*0x4c26cf*/
          *v9 = v108; /*0x4c26d1*/
          v9[1] = v109; /*0x4c26da*/
          v7 += 0x10; /*0x4c26e4*/
          --v8; /*0x4c26e7*/
          v9[2] = v110; /*0x4c26ea*/
          v9[3] = v5; /*0x4c26ed*/
        }
        while ( v8 ); /*0x4c26f0*/
      }
      while ( v7 < 0x1210 ); /*0x4c26f8*/
    }
    v2 = 0; /*0x4c2702*/
  }
  v1[7] |= 8u; /*0x4c2706*/
  v10 = 0; /*0x4c270a*/
  v87 = 0; /*0x4c270c*/
  do
  {
    if ( v1[9] != 0xFFFFFFC0 ) /*0x4c2716*/
    {
      v11 = (NiObject *)FormHeapAlloc(0x14u); /*0x4c271f*/
      v112 = 0; /*0x4c272a*/
      if ( v11 ) /*0x4c2735*/
      {
        v84 = **(_DWORD **)(v1[9] + 4 * v10 + 0x40); /*0x4c2740*/
        sub_721350(v11); /*0x4c2746*/
        v11->__vftable = (NiObjectVtbl *)&NiBinaryExtraData::`vftable'; /*0x4c274f*/
        v11[2].__vftable = (NiObjectVtbl *)0x2420; /*0x4c2755*/
        v11[1].members.m_uiRefCount = v84; /*0x4c275c*/
      }
      else
      {
        v11 = 0; /*0x4c2761*/
      }
      v12 = *(const void ***)(*(_DWORD *)v1[9] + 4 * v10); /*0x4c2768*/
      v112 = 0xFFFFFFFF; /*0x4c2771*/
      sub_6FF820(v12, "tex %", (unsigned int *)v11); /*0x4c277c*/
    }
    BSShaderManager_AssignShadersRecursive(*(NiAVObject **)(*(_DWORD *)v1[9] + 4 * v10), 1u, 1, 1); /*0x4c2790*/
    v13 = *(_DWORD *)(*(_DWORD *)v1[9] + 4 * v10); /*0x4c279a*/
    if ( *(_WORD *)(v13 + 0xB6) ) /*0x4c27a0*/
      v14 = **(NiNode ***)(v13 + 0xB0); /*0x4c27b4*/
    else
      v14 = 0; /*0x4c27aa*/
    NiPropertyByID = NiNode_GetNiPropertyByID(v14, 4); /*0x4c27b8*/
    v16 = NiPropertyByID; /*0x4c27bd*/
    v17 = NiPropertyByID /*0x4c27df*/
       && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
       && (*((int (__thiscall **)(NiProperty *))v16->vtbl + 0x15))(v16) <= 0xA;
    v85 = v17 ? (unsigned int)v16 : 0;
    if ( v85 ) /*0x4c27f2*/
    {
      v18 = (Ni2DBuffer ***)(v1[9] + 4 * v10 + 0x20); /*0x4c2800*/
      if ( *v18 ) /*0x4c27fb*/
        sub_4C95B0(*v18); /*0x4c2808*/
      for ( j = 0; j < 0x20; j += 4 ) /*0x4c280d*/
      {
        v20 = (Ni2DBuffer ***)(j + *(_DWORD *)(v1[9] + 4 * v10 + 0x30)); /*0x4c2816*/
        if ( *v20 ) /*0x4c2818*/
          sub_4C95B0(*v20); /*0x4c281f*/
      }
      v21 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c282f*/
      if ( *(_DWORD *)(v21 + 0x1C) ) /*0x4c2833*/
      {
        v95 = sub_4C1670(*(_DWORD **)(v21 + 0x1C), &v104); /*0x4c2849*/
        v22 = v2 | 1; /*0x4c284d*/
      }
      else
      {
        v93 = 0; /*0x4c2852*/
        v95 = &v93; /*0x4c285e*/
        v22 = v2 | 2; /*0x4c2862*/
      }
      v23 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2868*/
      if ( *(_DWORD *)(v23 + 0x18) ) /*0x4c286e*/
      {
        v88 = sub_4C1670(*(_DWORD **)(v23 + 0x18), &v102); /*0x4c2880*/
        v24 = v22 | 4; /*0x4c2884*/
      }
      else
      {
        v91 = 0; /*0x4c2889*/
        v88 = &v91; /*0x4c2891*/
        v24 = v22 | 8; /*0x4c2895*/
      }
      v25 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c289b*/
      if ( *(_DWORD *)(v25 + 0x14) ) /*0x4c289f*/
      {
        v82 = sub_4C1670(*(_DWORD **)(v25 + 0x14), &v100); /*0x4c28b1*/
        v26 = v24 | 0x10; /*0x4c28b5*/
      }
      else
      {
        v89 = 0; /*0x4c28ba*/
        v82 = &v89; /*0x4c28c2*/
        v26 = v24 | 0x20; /*0x4c28c6*/
      }
      v27 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c28cc*/
      if ( *(_DWORD *)(v27 + 0x10) ) /*0x4c28d0*/
      {
        v78 = sub_4C1670(*(_DWORD **)(v27 + 0x10), &v99); /*0x4c28e2*/
        v28 = v26 | 0x40; /*0x4c28e6*/
      }
      else
      {
        v86 = 0; /*0x4c28eb*/
        v78 = &v86; /*0x4c28f3*/
        v28 = v26 | 0x80; /*0x4c28f7*/
      }
      v29 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2900*/
      if ( *(_DWORD *)(v29 + 0xC) ) /*0x4c2904*/
      {
        v80 = sub_4C1670(*(_DWORD **)(v29 + 0xC), &v103); /*0x4c2916*/
        v30 = v28 | 0x100; /*0x4c291a*/
      }
      else
      {
        v92 = 0; /*0x4c2922*/
        v80 = &v92; /*0x4c292a*/
        v30 = v28 | 0x200; /*0x4c292e*/
      }
      v31 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2937*/
      if ( *(_DWORD *)(v31 + 8) ) /*0x4c293b*/
      {
        v76 = sub_4C1670(*(_DWORD **)(v31 + 8), &v105); /*0x4c2950*/
        v32 = v30 | 0x400; /*0x4c2954*/
      }
      else
      {
        v94 = 0; /*0x4c295c*/
        v76 = &v94; /*0x4c2964*/
        v32 = v30 | 0x800; /*0x4c2968*/
      }
      v33 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2971*/
      if ( *(_DWORD *)(v33 + 4) ) /*0x4c2975*/
      {
        v70 = sub_4C1670(*(_DWORD **)(v33 + 4), &v101); /*0x4c2987*/
        v34 = v32 | 0x1000; /*0x4c298b*/
      }
      else
      {
        v90 = 0; /*0x4c2993*/
        v70 = &v90; /*0x4c299b*/
        v34 = v32 | 0x2000; /*0x4c299f*/
      }
      v35 = *(_DWORD ***)(v1[9] + 4 * v10 + 0x30); /*0x4c29a8*/
      if ( *v35 ) /*0x4c29ac*/
      {
        v72 = sub_4C1670(*v35, &v107); /*0x4c29bf*/
        v36 = v34 | 0x4000; /*0x4c29c3*/
      }
      else
      {
        v96 = 0; /*0x4c29cb*/
        v72 = &v96; /*0x4c29d3*/
        v36 = v34 | 0x8000; /*0x4c29d7*/
      }
      v37 = v1[9]; /*0x4c29dd*/
      v4 = *(_DWORD *)(v37 + 4 * v10 + 0x20) == 0; /*0x4c29e0*/
      v38 = (_DWORD **)(v37 + 4 * v10 + 0x20); /*0x4c29e4*/
      if ( v4 ) /*0x4c29e8*/
      {
        v97 = 0; /*0x4c2a0e*/
        v74 = &v97; /*0x4c2a16*/
        v112 = 0x12; /*0x4c2a1a*/
        v2 = v36 | 0x20000; /*0x4c2a25*/
      }
      else
      {
        v74 = sub_4C1670(*v38, &v98); /*0x4c29f7*/
        v112 = 0x11; /*0x4c29fb*/
        v2 = v36 | 0x10000; /*0x4c2a06*/
      }
      sub_7D8BA0(v85, *v74, *v72, *v70, *v76, *v80, *v78, *v82, *v88, *v95); /*0x4c2a82*/
      v39 = InterlockedDecrement; /*0x4c2a91*/
      v112 = 0x11; /*0x4c2a97*/
      if ( (v2 & 0x20000) != 0 ) /*0x4c2aa2*/
      {
        v40 = (void (__thiscall ***)(_DWORD, int))v97; /*0x4c2aa4*/
        v2 &= ~0x20000u; /*0x4c2aa8*/
        if ( v97 ) /*0x4c2ab4*/
        {
          if ( !v39((volatile LONG *)(v97 + 4)) ) /*0x4c2aba*/
            (**v40)(v40, 1); /*0x4c2ac8*/
        }
      }
      v112 = 0x10; /*0x4c2ad2*/
      if ( (v2 & 0x10000) != 0 ) /*0x4c2add*/
      {
        v2 &= ~0x10000u; /*0x4c2ae3*/
        if ( v98 ) /*0x4c2aef*/
        {
          v41 = (void (__thiscall ***)(_DWORD, int))v98; /*0x4c2af1*/
          if ( !v39((volatile LONG *)(v98 + 4)) ) /*0x4c2af7*/
            (**v41)(v41, 1); /*0x4c2b09*/
        }
      }
      v112 = 0xF; /*0x4c2b11*/
      if ( (v2 & 0x8000) != 0 ) /*0x4c2b1c*/
      {
        v42 = (void (__thiscall ***)(_DWORD, int))v96; /*0x4c2b1e*/
        v2 &= ~0x8000u; /*0x4c2b22*/
        if ( v96 ) /*0x4c2b2e*/
        {
          if ( !v39((volatile LONG *)(v96 + 4)) ) /*0x4c2b34*/
            (**v42)(v42, 1); /*0x4c2b42*/
        }
      }
      v112 = 0xE; /*0x4c2b4a*/
      if ( (v2 & 0x4000) != 0 ) /*0x4c2b55*/
      {
        v2 &= ~0x4000u; /*0x4c2b5e*/
        if ( v107 ) /*0x4c2b6a*/
        {
          v43 = (void (__thiscall ***)(_DWORD, int))v107; /*0x4c2b6c*/
          if ( !v39((volatile LONG *)(v107 + 4)) ) /*0x4c2b72*/
            (**v43)(v43, 1); /*0x4c2b84*/
        }
      }
      v112 = 0xD; /*0x4c2b8c*/
      if ( (v2 & 0x2000) != 0 ) /*0x4c2b97*/
      {
        v44 = (void (__thiscall ***)(_DWORD, int))v90; /*0x4c2b99*/
        v2 &= ~0x2000u; /*0x4c2b9d*/
        if ( v90 ) /*0x4c2ba9*/
        {
          if ( !v39((volatile LONG *)(v90 + 4)) ) /*0x4c2baf*/
            (**v44)(v44, 1); /*0x4c2bbd*/
        }
      }
      v112 = 0xC; /*0x4c2bc5*/
      if ( (v2 & 0x1000) != 0 ) /*0x4c2bd0*/
      {
        v2 &= ~0x1000u; /*0x4c2bd6*/
        if ( v101 ) /*0x4c2be2*/
        {
          v45 = (void (__thiscall ***)(_DWORD, int))v101; /*0x4c2be4*/
          if ( !v39((volatile LONG *)(v101 + 4)) ) /*0x4c2bea*/
            (**v45)(v45, 1); /*0x4c2bfc*/
        }
      }
      v112 = 0xB; /*0x4c2c04*/
      if ( (v2 & 0x800) != 0 ) /*0x4c2c0f*/
      {
        v46 = (void (__thiscall ***)(_DWORD, int))v94; /*0x4c2c11*/
        v2 &= ~0x800u; /*0x4c2c15*/
        if ( v94 ) /*0x4c2c21*/
        {
          if ( !v39((volatile LONG *)(v94 + 4)) ) /*0x4c2c27*/
            (**v46)(v46, 1); /*0x4c2c35*/
        }
      }
      v112 = 0xA; /*0x4c2c3d*/
      if ( (v2 & 0x400) != 0 ) /*0x4c2c48*/
      {
        v2 &= ~0x400u; /*0x4c2c51*/
        if ( v105 ) /*0x4c2c5d*/
        {
          v47 = (void (__thiscall ***)(_DWORD, int))v105; /*0x4c2c5f*/
          if ( !v39((volatile LONG *)(v105 + 4)) ) /*0x4c2c65*/
            (**v47)(v47, 1); /*0x4c2c77*/
        }
      }
      v112 = 9; /*0x4c2c7f*/
      if ( (v2 & 0x200) != 0 ) /*0x4c2c8a*/
      {
        v48 = (void (__thiscall ***)(_DWORD, int))v92; /*0x4c2c8c*/
        v2 &= ~0x200u; /*0x4c2c90*/
        if ( v92 ) /*0x4c2c9c*/
        {
          if ( !v39((volatile LONG *)(v92 + 4)) ) /*0x4c2ca2*/
            (**v48)(v48, 1); /*0x4c2cb0*/
        }
      }
      v112 = 8; /*0x4c2cb8*/
      if ( (v2 & 0x100) != 0 ) /*0x4c2cc3*/
      {
        v2 &= ~0x100u; /*0x4c2cc9*/
        if ( v103 ) /*0x4c2cd5*/
        {
          v49 = (void (__thiscall ***)(_DWORD, int))v103; /*0x4c2cd7*/
          if ( !v39((volatile LONG *)(v103 + 4)) ) /*0x4c2cdd*/
            (**v49)(v49, 1); /*0x4c2cef*/
        }
      }
      v112 = 7; /*0x4c2cf3*/
      if ( (char)v2 < 0 ) /*0x4c2cfe*/
      {
        v50 = (void (__thiscall ***)(_DWORD, int))v86; /*0x4c2d00*/
        v2 &= ~0x80u; /*0x4c2d04*/
        if ( v86 ) /*0x4c2d10*/
        {
          if ( !v39((volatile LONG *)(v86 + 4)) ) /*0x4c2d16*/
            (**v50)(v50, 1); /*0x4c2d24*/
        }
      }
      v112 = 6; /*0x4c2d29*/
      if ( (v2 & 0x40) != 0 ) /*0x4c2d34*/
      {
        v2 &= ~0x40u; /*0x4c2d3a*/
        if ( v99 ) /*0x4c2d43*/
        {
          v51 = (void (__thiscall ***)(_DWORD, int))v99; /*0x4c2d45*/
          if ( !v39((volatile LONG *)(v99 + 4)) ) /*0x4c2d4b*/
            (**v51)(v51, 1); /*0x4c2d5d*/
        }
      }
      v112 = 5; /*0x4c2d62*/
      if ( (v2 & 0x20) != 0 ) /*0x4c2d6d*/
      {
        v52 = (void (__thiscall ***)(_DWORD, int))v89; /*0x4c2d6f*/
        v2 &= ~0x20u; /*0x4c2d73*/
        if ( v89 ) /*0x4c2d7c*/
        {
          if ( !v39((volatile LONG *)(v89 + 4)) ) /*0x4c2d82*/
            (**v52)(v52, 1); /*0x4c2d90*/
        }
      }
      v112 = 4; /*0x4c2d95*/
      if ( (v2 & 0x10) != 0 ) /*0x4c2da0*/
      {
        v2 &= ~0x10u; /*0x4c2da6*/
        if ( v100 ) /*0x4c2daf*/
        {
          v53 = (void (__thiscall ***)(_DWORD, int))v100; /*0x4c2db1*/
          if ( !v39((volatile LONG *)(v100 + 4)) ) /*0x4c2db7*/
            (**v53)(v53, 1); /*0x4c2dc9*/
        }
      }
      v112 = 3; /*0x4c2dce*/
      if ( (v2 & 8) != 0 ) /*0x4c2dd9*/
      {
        v54 = (void (__thiscall ***)(_DWORD, int))v91; /*0x4c2ddb*/
        v2 &= ~8u; /*0x4c2ddf*/
        if ( v91 ) /*0x4c2de8*/
        {
          if ( !v39((volatile LONG *)(v91 + 4)) ) /*0x4c2dee*/
            (**v54)(v54, 1); /*0x4c2dfc*/
        }
      }
      v112 = 2; /*0x4c2e01*/
      if ( (v2 & 4) != 0 ) /*0x4c2e0c*/
      {
        v2 &= ~4u; /*0x4c2e12*/
        if ( v102 ) /*0x4c2e1b*/
        {
          v55 = (void (__thiscall ***)(_DWORD, int))v102; /*0x4c2e1d*/
          if ( !v39((volatile LONG *)(v102 + 4)) ) /*0x4c2e23*/
            (**v55)(v55, 1); /*0x4c2e35*/
        }
      }
      v112 = 1; /*0x4c2e3a*/
      if ( (v2 & 2) != 0 ) /*0x4c2e45*/
      {
        v56 = (void (__thiscall ***)(_DWORD, int))v93; /*0x4c2e47*/
        v2 &= ~2u; /*0x4c2e4b*/
        if ( v93 ) /*0x4c2e54*/
        {
          if ( !v39((volatile LONG *)(v93 + 4)) ) /*0x4c2e5a*/
            (**v56)(v56, 1); /*0x4c2e68*/
        }
      }
      v112 = 0xFFFFFFFF; /*0x4c2e6d*/
      if ( (v2 & 1) != 0 ) /*0x4c2e78*/
      {
        v2 &= ~1u; /*0x4c2e81*/
        if ( v104 ) /*0x4c2e86*/
        {
          v57 = (void (__thiscall ***)(_DWORD, int))v104; /*0x4c2e88*/
          if ( !v39((volatile LONG *)(v104 + 4)) ) /*0x4c2e8e*/
            (**v57)(v57, 1); /*0x4c2ea0*/
        }
      }
      v1 = (_DWORD *)v106; /*0x4c2ea2*/
      v10 = v87; /*0x4c2eac*/
      v58 = *(_DWORD *)(*(_DWORD *)(v106 + 0x24) + 4 * v87 + 0x30); /*0x4c2eb0*/
      if ( *(_DWORD *)(v58 + 0x1C) ) /*0x4c2eb4*/
        v75 = sub_4C8D20(*(_BYTE **)(v58 + 0x1C)); /*0x4c2ec4*/
      else
        v75 = 0; /*0x4c2eca*/
      v59 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2ed1*/
      if ( *(_DWORD *)(v59 + 0x18) ) /*0x4c2ed5*/
        v73 = sub_4C8D20(*(_BYTE **)(v59 + 0x18)); /*0x4c2ee5*/
      else
        v73 = 0; /*0x4c2eeb*/
      v60 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2ef2*/
      if ( *(_DWORD *)(v60 + 0x14) ) /*0x4c2ef6*/
        v71 = sub_4C8D20(*(_BYTE **)(v60 + 0x14)); /*0x4c2f06*/
      else
        v71 = 0; /*0x4c2f0c*/
      v61 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2f13*/
      if ( *(_DWORD *)(v61 + 0x10) ) /*0x4c2f17*/
        v77 = sub_4C8D20(*(_BYTE **)(v61 + 0x10)); /*0x4c2f27*/
      else
        v77 = 0; /*0x4c2f2d*/
      v62 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2f34*/
      if ( *(_DWORD *)(v62 + 0xC) ) /*0x4c2f38*/
        v81 = sub_4C8D20(*(_BYTE **)(v62 + 0xC)); /*0x4c2f48*/
      else
        v81 = 0; /*0x4c2f4e*/
      v63 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2f55*/
      if ( *(_DWORD *)(v63 + 8) ) /*0x4c2f59*/
        v79 = sub_4C8D20(*(_BYTE **)(v63 + 8)); /*0x4c2f69*/
      else
        v79 = 0; /*0x4c2f6f*/
      v64 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30); /*0x4c2f76*/
      if ( *(_DWORD *)(v64 + 4) ) /*0x4c2f7a*/
        v83 = sub_4C8D20(*(_BYTE **)(v64 + 4)); /*0x4c2f8a*/
      else
        v83 = 0; /*0x4c2f90*/
      v65 = *(_BYTE ***)(v1[9] + 4 * v10 + 0x30); /*0x4c2f97*/
      if ( *v65 ) /*0x4c2f9b*/
        v66 = sub_4C8D20(*v65); /*0x4c2fa6*/
      else
        v66 = 0; /*0x4c2fab*/
      v67 = (_BYTE **)(v1[9] + 4 * v10 + 0x20); /*0x4c2fb5*/
      if ( *v67 ) /*0x4c2fb0*/
        v68 = sub_4C8D20(*v67); /*0x4c2fbd*/
      else
        v68 = 0; /*0x4c2fc7*/
      sub_7D7400(v85, v68, v66, v83, v79, v81, v77, v71, v73, v75, 0); /*0x4c2ff4*/
    }
    v87 = ++v10; /*0x4c2fff*/
  }
  while ( v10 < 4 );
  sub_4C2300(v1); /*0x4c300b*/
  return 1; /*0x4c3016*/
}
