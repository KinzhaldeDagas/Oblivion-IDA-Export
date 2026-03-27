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
  unsigned int *v11; // edi
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
  unsigned int v84; // [esp+64h] [ebp-78h]
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

  v1 = (_DWORD *)this;
  v106 = this;
  v2 = 0;
  v3 = *(_DWORD **)(this + 0x24);
  if ( !v3 || !*v3 || !*(_DWORD *)*v3 )
    return 0;
  v4 = (*(_BYTE *)(this + 0x1C) & 2) == 0;
  v108 = 1.0;
  v109 = 1.0;
  v110 = 1.0;
  v111 = 0.0;
  if ( v4 )
  {
    v5 = v111;
    for ( i = 0; i < 0x10; i += 4 )
    {
      v7 = 0;
      do
      {
        v8 = 0x11;
        do
        {
          v9 = (float *)(v7 + *(_DWORD *)(*(_DWORD *)(v1[9] + 0xC) + i));
          *v9 = v108;
          v9[1] = v109;
          v7 += 0x10;
          --v8;
          v9[2] = v110;
          v9[3] = v5;
        }
        while ( v8 );
      }
      while ( v7 < 0x1210 );
    }
    v2 = 0;
  }
  v1[7] |= 8u;
  v10 = 0;
  v87 = 0;
  do
  {
    if ( v1[9] != 0xFFFFFFC0 )
    {
      v11 = (unsigned int *)FormHeapAlloc(0x14u);
      v112 = 0;
      if ( v11 )
      {
        v84 = **(_DWORD **)(v1[9] + 4 * v10 + 0x40);
        sub_721350(v11);
        *v11 = (unsigned int)&NiBinaryExtraData::`vftable';
        v11[4] = 0x2420;
        v11[3] = v84;
      }
      else
      {
        v11 = 0;
      }
      v12 = *(const void ***)(*(_DWORD *)v1[9] + 4 * v10);
      v112 = 0xFFFFFFFF;
      sub_6FF820(v12, "tex %", v11);
    }
    sub_7B8940(*(NiAVObject **)(*(_DWORD *)v1[9] + 4 * v10), 1, 1, 1);
    v13 = *(_DWORD *)(*(_DWORD *)v1[9] + 4 * v10);
    if ( *(_WORD *)(v13 + 0xB6) )
      v14 = **(NiNode ***)(v13 + 0xB0);
    else
      v14 = 0;
    NiPropertyByID = NiNode_GetNiPropertyByID(v14, 4);
    v16 = NiPropertyByID;
    v17 = NiPropertyByID
       && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
       && (*((int (__thiscall **)(NiProperty *))v16->vtbl + 0x15))(v16) <= 0xA;
    v85 = v17 ? (unsigned int)v16 : 0;
    if ( v85 )
    {
      v18 = (Ni2DBuffer ***)(v1[9] + 4 * v10 + 0x20);
      if ( *v18 )
        sub_4C95B0(*v18);
      for ( j = 0; j < 0x20; j += 4 )
      {
        v20 = (Ni2DBuffer ***)(j + *(_DWORD *)(v1[9] + 4 * v10 + 0x30));
        if ( *v20 )
          sub_4C95B0(*v20);
      }
      v21 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v21 + 0x1C) )
      {
        v95 = sub_4C1670(*(_DWORD **)(v21 + 0x1C), &v104);
        v22 = v2 | 1;
      }
      else
      {
        v93 = 0;
        v95 = &v93;
        v22 = v2 | 2;
      }
      v23 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v23 + 0x18) )
      {
        v88 = sub_4C1670(*(_DWORD **)(v23 + 0x18), &v102);
        v24 = v22 | 4;
      }
      else
      {
        v91 = 0;
        v88 = &v91;
        v24 = v22 | 8;
      }
      v25 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v25 + 0x14) )
      {
        v82 = sub_4C1670(*(_DWORD **)(v25 + 0x14), &v100);
        v26 = v24 | 0x10;
      }
      else
      {
        v89 = 0;
        v82 = &v89;
        v26 = v24 | 0x20;
      }
      v27 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v27 + 0x10) )
      {
        v78 = sub_4C1670(*(_DWORD **)(v27 + 0x10), &v99);
        v28 = v26 | 0x40;
      }
      else
      {
        v86 = 0;
        v78 = &v86;
        v28 = v26 | 0x80;
      }
      v29 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v29 + 0xC) )
      {
        v80 = sub_4C1670(*(_DWORD **)(v29 + 0xC), &v103);
        v30 = v28 | 0x100;
      }
      else
      {
        v92 = 0;
        v80 = &v92;
        v30 = v28 | 0x200;
      }
      v31 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v31 + 8) )
      {
        v76 = sub_4C1670(*(_DWORD **)(v31 + 8), &v105);
        v32 = v30 | 0x400;
      }
      else
      {
        v94 = 0;
        v76 = &v94;
        v32 = v30 | 0x800;
      }
      v33 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v33 + 4) )
      {
        v70 = sub_4C1670(*(_DWORD **)(v33 + 4), &v101);
        v34 = v32 | 0x1000;
      }
      else
      {
        v90 = 0;
        v70 = &v90;
        v34 = v32 | 0x2000;
      }
      v35 = *(_DWORD ***)(v1[9] + 4 * v10 + 0x30);
      if ( *v35 )
      {
        v72 = sub_4C1670(*v35, &v107);
        v36 = v34 | 0x4000;
      }
      else
      {
        v96 = 0;
        v72 = &v96;
        v36 = v34 | 0x8000;
      }
      v37 = v1[9];
      v4 = *(_DWORD *)(v37 + 4 * v10 + 0x20) == 0;
      v38 = (_DWORD **)(v37 + 4 * v10 + 0x20);
      if ( v4 )
      {
        v97 = 0;
        v74 = &v97;
        v112 = 0x12;
        v2 = v36 | 0x20000;
      }
      else
      {
        v74 = sub_4C1670(*v38, &v98);
        v112 = 0x11;
        v2 = v36 | 0x10000;
      }
      sub_7D8BA0(v85, *v74, *v72, *v70, *v76, *v80, *v78, *v82, *v88, *v95);
      v39 = InterlockedDecrement;
      v112 = 0x11;
      if ( (v2 & 0x20000) != 0 )
      {
        v40 = (void (__thiscall ***)(_DWORD, int))v97;
        v2 &= ~0x20000u;
        if ( v97 )
        {
          if ( !v39((volatile LONG *)(v97 + 4)) )
            (**v40)(v40, 1);
        }
      }
      v112 = 0x10;
      if ( (v2 & 0x10000) != 0 )
      {
        v2 &= ~0x10000u;
        if ( v98 )
        {
          v41 = (void (__thiscall ***)(_DWORD, int))v98;
          if ( !v39((volatile LONG *)(v98 + 4)) )
            (**v41)(v41, 1);
        }
      }
      v112 = 0xF;
      if ( (v2 & 0x8000) != 0 )
      {
        v42 = (void (__thiscall ***)(_DWORD, int))v96;
        v2 &= ~0x8000u;
        if ( v96 )
        {
          if ( !v39((volatile LONG *)(v96 + 4)) )
            (**v42)(v42, 1);
        }
      }
      v112 = 0xE;
      if ( (v2 & 0x4000) != 0 )
      {
        v2 &= ~0x4000u;
        if ( v107 )
        {
          v43 = (void (__thiscall ***)(_DWORD, int))v107;
          if ( !v39((volatile LONG *)(v107 + 4)) )
            (**v43)(v43, 1);
        }
      }
      v112 = 0xD;
      if ( (v2 & 0x2000) != 0 )
      {
        v44 = (void (__thiscall ***)(_DWORD, int))v90;
        v2 &= ~0x2000u;
        if ( v90 )
        {
          if ( !v39((volatile LONG *)(v90 + 4)) )
            (**v44)(v44, 1);
        }
      }
      v112 = 0xC;
      if ( (v2 & 0x1000) != 0 )
      {
        v2 &= ~0x1000u;
        if ( v101 )
        {
          v45 = (void (__thiscall ***)(_DWORD, int))v101;
          if ( !v39((volatile LONG *)(v101 + 4)) )
            (**v45)(v45, 1);
        }
      }
      v112 = 0xB;
      if ( (v2 & 0x800) != 0 )
      {
        v46 = (void (__thiscall ***)(_DWORD, int))v94;
        v2 &= ~0x800u;
        if ( v94 )
        {
          if ( !v39((volatile LONG *)(v94 + 4)) )
            (**v46)(v46, 1);
        }
      }
      v112 = 0xA;
      if ( (v2 & 0x400) != 0 )
      {
        v2 &= ~0x400u;
        if ( v105 )
        {
          v47 = (void (__thiscall ***)(_DWORD, int))v105;
          if ( !v39((volatile LONG *)(v105 + 4)) )
            (**v47)(v47, 1);
        }
      }
      v112 = 9;
      if ( (v2 & 0x200) != 0 )
      {
        v48 = (void (__thiscall ***)(_DWORD, int))v92;
        v2 &= ~0x200u;
        if ( v92 )
        {
          if ( !v39((volatile LONG *)(v92 + 4)) )
            (**v48)(v48, 1);
        }
      }
      v112 = 8;
      if ( (v2 & 0x100) != 0 )
      {
        v2 &= ~0x100u;
        if ( v103 )
        {
          v49 = (void (__thiscall ***)(_DWORD, int))v103;
          if ( !v39((volatile LONG *)(v103 + 4)) )
            (**v49)(v49, 1);
        }
      }
      v112 = 7;
      if ( (char)v2 < 0 )
      {
        v50 = (void (__thiscall ***)(_DWORD, int))v86;
        v2 &= ~0x80u;
        if ( v86 )
        {
          if ( !v39((volatile LONG *)(v86 + 4)) )
            (**v50)(v50, 1);
        }
      }
      v112 = 6;
      if ( (v2 & 0x40) != 0 )
      {
        v2 &= ~0x40u;
        if ( v99 )
        {
          v51 = (void (__thiscall ***)(_DWORD, int))v99;
          if ( !v39((volatile LONG *)(v99 + 4)) )
            (**v51)(v51, 1);
        }
      }
      v112 = 5;
      if ( (v2 & 0x20) != 0 )
      {
        v52 = (void (__thiscall ***)(_DWORD, int))v89;
        v2 &= ~0x20u;
        if ( v89 )
        {
          if ( !v39((volatile LONG *)(v89 + 4)) )
            (**v52)(v52, 1);
        }
      }
      v112 = 4;
      if ( (v2 & 0x10) != 0 )
      {
        v2 &= ~0x10u;
        if ( v100 )
        {
          v53 = (void (__thiscall ***)(_DWORD, int))v100;
          if ( !v39((volatile LONG *)(v100 + 4)) )
            (**v53)(v53, 1);
        }
      }
      v112 = 3;
      if ( (v2 & 8) != 0 )
      {
        v54 = (void (__thiscall ***)(_DWORD, int))v91;
        v2 &= ~8u;
        if ( v91 )
        {
          if ( !v39((volatile LONG *)(v91 + 4)) )
            (**v54)(v54, 1);
        }
      }
      v112 = 2;
      if ( (v2 & 4) != 0 )
      {
        v2 &= ~4u;
        if ( v102 )
        {
          v55 = (void (__thiscall ***)(_DWORD, int))v102;
          if ( !v39((volatile LONG *)(v102 + 4)) )
            (**v55)(v55, 1);
        }
      }
      v112 = 1;
      if ( (v2 & 2) != 0 )
      {
        v56 = (void (__thiscall ***)(_DWORD, int))v93;
        v2 &= ~2u;
        if ( v93 )
        {
          if ( !v39((volatile LONG *)(v93 + 4)) )
            (**v56)(v56, 1);
        }
      }
      v112 = 0xFFFFFFFF;
      if ( (v2 & 1) != 0 )
      {
        v2 &= ~1u;
        if ( v104 )
        {
          v57 = (void (__thiscall ***)(_DWORD, int))v104;
          if ( !v39((volatile LONG *)(v104 + 4)) )
            (**v57)(v57, 1);
        }
      }
      v1 = (_DWORD *)v106;
      v10 = v87;
      v58 = *(_DWORD *)(*(_DWORD *)(v106 + 0x24) + 4 * v87 + 0x30);
      if ( *(_DWORD *)(v58 + 0x1C) )
        v75 = sub_4C8D20(*(_BYTE **)(v58 + 0x1C));
      else
        v75 = 0;
      v59 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v59 + 0x18) )
        v73 = sub_4C8D20(*(_BYTE **)(v59 + 0x18));
      else
        v73 = 0;
      v60 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v60 + 0x14) )
        v71 = sub_4C8D20(*(_BYTE **)(v60 + 0x14));
      else
        v71 = 0;
      v61 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v61 + 0x10) )
        v77 = sub_4C8D20(*(_BYTE **)(v61 + 0x10));
      else
        v77 = 0;
      v62 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v62 + 0xC) )
        v81 = sub_4C8D20(*(_BYTE **)(v62 + 0xC));
      else
        v81 = 0;
      v63 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v63 + 8) )
        v79 = sub_4C8D20(*(_BYTE **)(v63 + 8));
      else
        v79 = 0;
      v64 = *(_DWORD *)(v1[9] + 4 * v10 + 0x30);
      if ( *(_DWORD *)(v64 + 4) )
        v83 = sub_4C8D20(*(_BYTE **)(v64 + 4));
      else
        v83 = 0;
      v65 = *(_BYTE ***)(v1[9] + 4 * v10 + 0x30);
      if ( *v65 )
        v66 = sub_4C8D20(*v65);
      else
        v66 = 0;
      v67 = (_BYTE **)(v1[9] + 4 * v10 + 0x20);
      if ( *v67 )
        v68 = sub_4C8D20(*v67);
      else
        v68 = 0;
      sub_7D7400(v85, v68, v66, v83, v79, v81, v77, v71, v73, v75, 0);
    }
    v87 = ++v10;
  }
  while ( v10 < 4 );
  sub_4C2300(v1);
  return 1;
}
