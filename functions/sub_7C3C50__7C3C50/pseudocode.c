void (__thiscall ***__cdecl sub_7C3C50(const char **a1))(_DWORD, signed int)
{
  bool v1; // zf
  const char *v2; // eax
  _DWORD *v3; // eax
  Ni2DBuffer *v4; // eax
  UInt32 v5; // edi
  int *v6; // ebx
  int v7; // esi
  IOTask *v8; // eax
  IOTask *v9; // eax
  UInt32 v11; // edi
  _DWORD *v12; // esi
  IOTask *v13; // eax
  IOTask *v14; // eax
  int v15; // eax
  int *v16; // eax
  NiObject *v17; // eax
  int v18; // eax
  NiNode *v19; // ebx
  int v20; // edi
  int v21; // esi
  int v22; // ecx
  NiObject *v23; // eax
  int v24; // ebx
  void *v25; // edx
  int v26; // ecx
  signed int v27; // esi
  int v28; // eax
  int v29; // edi
  int v30; // eax
  int v31; // edi
  unsigned int v32; // ebp
  void *v33; // eax
  UInt16 *v34; // eax
  float v35; // ecx
  _DWORD *v36; // edx
  int v37; // ebp
  _DWORD *v38; // eax
  int v39; // ecx
  int v40; // edx
  _DWORD *v41; // eax
  double v42; // st7
  float v43; // esi
  float *v44; // edi
  _DWORD *v45; // ecx
  char *v46; // ebx
  _DWORD *v47; // edx
  _DWORD *v48; // eax
  void *v49; // ebp
  _DWORD *v50; // ebx
  float *v51; // ebp
  int v52; // eax
  UInt16 *v53; // edi
  bool v54; // cc
  int v55; // ebp
  NiTriShapeData *v56; // eax
  void *v57; // eax
  int v58; // eax
  __int16 *v59; // edi
  int v60; // eax
  unsigned int v61; // ebp
  NiProperty *v62; // eax
  __int64 v63; // rax
  int v64; // eax
  void *v65; // ecx
  void *v66; // edx
  int v67; // ebp
  void *v68; // edi
  int v69; // ecx
  int v70; // eax
  __int16 v71; // dx
  int v72; // edi
  _WORD *v73; // edx
  int v74; // ebp
  __int16 v75; // ax
  _WORD *v76; // eax
  __int16 *v77; // edx
  int v78; // ebx
  __int16 v79; // ax
  NiTriBasedGeomData *v80; // eax
  NiProperty *NiPropertyByID; // eax
  int v82; // eax
  volatile LONG *v83; // eax
  NiProperty *v84; // eax
  char v85; // bl
  NiObjectNET *v86; // eax
  NiObjectNET *v87; // ebp
  __int16 v88; // cx
  NiObjectNET *v89; // eax
  NiObjectNET *v90; // ebp
  _WORD *v91; // eax
  __int16 v92; // dx
  NiNode *v93; // ebx
  NiNode *v94; // ecx
  NiProperty *v95; // eax
  UInt32 v96; // ebp
  float *v97; // eax
  int v98; // edx
  int v99; // ecx
  float v100; // edx
  int v101; // ebx
  int v102; // eax
  volatile LONG *v103; // ebx
  volatile LONG *v104; // esi
  volatile LONG *v105; // esi
  volatile LONG *v106; // ebx
  NiProperty *v107; // esi
  NiProperty *v108; // ebx
  volatile LONG *v109; // esi
  volatile LONG *v110; // ebx
  __int16 v111; // cx
  size_t *v112; // esi
  int v113; // eax
  char v114; // al
  void (__thiscall ***v115)(void *, int); // esi
  void (__thiscall ***v116)(_DWORD, int); // esi
  void (__thiscall ***v117)(_DWORD, int); // esi
  size_t v118; // [esp-28h] [ebp-680h]
  size_t v119; // [esp-1Ch] [ebp-674h]
  size_t v120; // [esp-10h] [ebp-668h]
  size_t v121; // [esp-4h] [ebp-65Ch] BYREF
  void *v122; // [esp+14h] [ebp-644h]
  NiProperty *v123; // [esp+18h] [ebp-640h] BYREF
  char v124; // [esp+1Fh] [ebp-639h]
  void *v125; // [esp+20h] [ebp-638h]
  void *Dst; // [esp+24h] [ebp-634h]
  UInt32 v127; // [esp+28h] [ebp-630h] BYREF
  int v128; // [esp+2Ch] [ebp-62Ch]
  __int16 *v129; // [esp+30h] [ebp-628h]
  int Size; // [esp+34h] [ebp-624h]
  int v131; // [esp+38h] [ebp-620h]
  void *Src; // [esp+3Ch] [ebp-61Ch]
  NiProperty *v133; // [esp+40h] [ebp-618h]
  float *v134; // [esp+44h] [ebp-614h]
  float *v135; // [esp+48h] [ebp-610h]
  int v136; // [esp+4Ch] [ebp-60Ch]
  UInt32 v137; // [esp+50h] [ebp-608h] BYREF
  size_t *v138; // [esp+54h] [ebp-604h]
  _WORD *v139; // [esp+58h] [ebp-600h]
  int v140; // [esp+5Ch] [ebp-5FCh]
  _BYTE *v141; // [esp+60h] [ebp-5F8h]
  UInt16 *v142; // [esp+64h] [ebp-5F4h]
  float v143; // [esp+68h] [ebp-5F0h]
  NiNode *v144; // [esp+6Ch] [ebp-5ECh]
  float *v145; // [esp+70h] [ebp-5E8h]
  _DWORD *v146; // [esp+74h] [ebp-5E4h]
  void *v147; // [esp+78h] [ebp-5E0h]
  void *v148; // [esp+7Ch] [ebp-5DCh]
  void *v149; // [esp+80h] [ebp-5D8h]
  const char **v150; // [esp+84h] [ebp-5D4h]
  _DWORD *v151; // [esp+88h] [ebp-5D0h]
  int v152; // [esp+8Ch] [ebp-5CCh]
  float *v153; // [esp+90h] [ebp-5C8h]
  int v154; // [esp+94h] [ebp-5C4h]
  signed int v155; // [esp+98h] [ebp-5C0h]
  _DWORD *v156; // [esp+9Ch] [ebp-5BCh]
  signed int v157; // [esp+A0h] [ebp-5B8h]
  int v158; // [esp+A4h] [ebp-5B4h]
  int v159; // [esp+A8h] [ebp-5B0h]
  int v160; // [esp+ACh] [ebp-5ACh]
  float v161; // [esp+B0h] [ebp-5A8h]
  char v162[520]; // [esp+B4h] [ebp-5A4h] BYREF
  Ni2DBuffer **v163; // [esp+2BCh] [ebp-39Ch]
  int v164; // [esp+2C4h] [ebp-394h]
  char v165[260]; // [esp+544h] [ebp-114h] BYREF
  unsigned int v166; // [esp+654h] [ebp-4h]

  v1 = ShaderPackage == 0;
  v150 = a1;
  if ( v1 )
    return 0;
  v2 = *a1;
  v1 = *a1 == 0;
  v144 = 0;
  if ( v1 )
    return 0;
  v127 = 0;
  v166 = 0;
  if ( sub_4A1AB0(&off_B2CBD4, (int)v2, (int *)&v127) )
  {
    v5 = v127;
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x38u);
    if ( v3 )
      v4 = (Ni2DBuffer *)sub_7C3590(v3);
    else
      v4 = 0;
    NiSmartPointer_Set__((Ni2DBuffer **)&v127, v4);
    v5 = v127;
    v6 = (int *)(v127 + 0x24);
    *(_BYTE *)(v127 + 0x32) = 1;
    v7 = *v6;
    if ( *v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
      {
        if ( v7 )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
      *v6 = 0;
    }
    LODWORD(v121) = v5;
    v138 = &v121;
    InterlockedIncrement((volatile LONG *)(v5 + 4));
    sub_7C2FF0((int)&off_B2CBD4, (int)*a1, v121, SHIDWORD(v121));
    if ( byte_B2CBC0 )
    {
      v8 = (IOTask *)FormHeapAlloc(0x4B8u);
      v138 = (size_t *)v8;
      LOBYTE(v166) = 1;
      if ( v8 )
        v9 = sub_7C2AF0(v8, *a1);
      else
        v9 = 0;
      LOBYTE(v166) = 0;
      sub_4BCB70(v6, (int)v9);
      (*((void (__thiscall **)(IOManager *, int))ioManager->vtbl + 0xF))(ioManager, *v6);
      goto LABEL_17;
    }
  }
  if ( *(_BYTE *)(v5 + 0x32) )
  {
    v137 = 0;
    v1 = byte_B2CBC0 == 0;
    v11 = v127;
    LOBYTE(v166) = 2;
    if ( !v1 )
    {
      v12 = (_DWORD *)(v127 + 0x24);
      if ( !*(_DWORD *)(v127 + 0x24) )
      {
        v13 = (IOTask *)FormHeapAlloc(0x4B8u);
        v138 = (size_t *)v13;
        LOBYTE(v166) = 3;
        if ( v13 )
          v14 = sub_7C2AF0(v13, *v150);
        else
          v14 = 0;
        LOBYTE(v166) = 2;
        sub_4BCB70((int *)(v11 + 0x24), (int)v14);
        (*((void (__thiscall **)(IOManager *, _DWORD))ioManager->vtbl + 0xF))(ioManager, *v12);
        goto LABEL_27;
      }
    }
    v15 = *(_DWORD *)(v127 + 0x24);
    if ( v15 )
    {
      if ( *(int *)(v15 + 0xC) < 4 )
        goto LABEL_27;
      v16 = sub_7C2BF0(*(_DWORD *)(v127 + 0x24), &v123);
      LOBYTE(v166) = 4;
      sub_55E2A0((int *)&v137, v16);
      LOBYTE(v166) = 2;
      sub_7016A0((NiD3DVertexShader *)&v123);
      sub_4BCB70((int *)(v11 + 0x24), 0);
    }
    else
    {
      sub_434710((char *)*v150, v165);
      sub_4363C0((NiStream *)v162);
      LOBYTE(v166) = 5;
      sub_6F9980(v162, v165, 0);
      if ( v164 )
        NiSmartPointer_Set__((Ni2DBuffer **)&v137, *v163);
      LOBYTE(v166) = 2;
      BSStream::~BSStream((BSStream *)v162);
    }
    if ( v137 )
    {
      LODWORD(v121) = v137;
      *(_BYTE *)(v11 + 0x32) = 0;
      v17 = NiRTTI_Cast((BSStringT *)dword_B3FA80, (NiObject *)v121);
      v18 = (int)v17->__vftable->Unk_02(v17);
      v19 = v144;
      v20 = v18;
      v138 = (size_t *)v18;
      while ( v20 )
      {
        v21 = 0;
        if ( *(_WORD *)(v20 + 0xB6) )
        {
          do
          {
            v22 = *(_DWORD *)(*(_DWORD *)(v20 + 0xB0) + 4 * v21);
            if ( v22 )
            {
              v19 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0xC))(v22);
              v144 = v19;
              if ( v19 )
                goto LABEL_42;
            }
          }
          while ( *(unsigned __int16 *)(v20 + 0xB6) > (unsigned int)++v21 );
        }
        if ( v19 )
          break;
      }
LABEL_42:
      v23 = NiRTTI_Cast((BSStringT *)dword_B3FD04, (NiObject *)v19);
      v24 = *(_DWORD *)&v19->members.children.capacity;
      v25 = *(void **)(v24 + 0x1C);
      v26 = ShaderPackage < 2 ? 0x50 : 0xE4;
      v136 = *(unsigned __int16 *)(v24 + 8);
      v27 = (unsigned __int16)v136;
      v131 = v26;
      if ( v23 )
      {
        Src = v25;
        v139 = *(_WORD **)(v24 + 0x4C);
        v58 = 0xFFFF / (unsigned __int16)v136;
        v59 = *(__int16 **)(v24 + 0x48);
        v124 = 1;
        v129 = v59;
        if ( (unsigned __int16)v26 >= (unsigned __int16)v58 )
        {
          LOWORD(v26) = 0xFFFF / (unsigned __int16)v136;
          v131 = (unsigned __int16)v58;
        }
        v60 = 0xFFFF / ((unsigned __int16)*v59 + ((*v59 & 1) != 0) + 2);
        if ( (unsigned __int16)v26 >= (unsigned __int16)v60 )
          v131 = (unsigned __int16)v60;
        v31 = (unsigned __int16)v131;
        v61 = (unsigned __int16)v136 * (unsigned __int16)v131;
        v141 = (_BYTE *)FormHeapAlloc((0xC * (unsigned __int64)v61) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v61);
        v142 = (UInt16 *)FormHeapAlloc((0xC * (unsigned __int64)v61) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v61);
        v62 = (NiProperty *)FormHeapAlloc(v61 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v61);
        v123 = v62;
        LOBYTE(v166) = 8;
        if ( v62 )
        {
          sub_401080(v62, 0x10, v61, (void *(__thiscall *)(void *))sub_47EA50);
          v133 = v123;
        }
        else
        {
          v133 = 0;
        }
        LOBYTE(v166) = 2;
        v123 = (NiProperty *)FormHeapAlloc(v61 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v61);
        v145 = (float *)FormHeapAlloc(v61 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v61);
        v63 = 2LL
            * ((unsigned __int16)*v129 + (unsigned int)(unsigned __int16)(*v129 + ((*v129 & 1) != 0) + 2) * (v31 - 1));
        v64 = FormHeapAlloc(HIDWORD(v63) != 0 ? 0xFFFFFFFF : v63);
        v65 = *(void **)(v24 + 0x24);
        v66 = *(void **)(v24 + 0x28);
        v67 = 0;
        v134 = (float *)v64;
        v147 = *(void **)(v24 + 0x20);
        v149 = v65;
        v148 = v66;
        v128 = 0;
        if ( v31 > 0 )
        {
          Size = 0x10 * v27;
          v135 = v145;
          v125 = v123;
          v146 = (_DWORD *)(v31 - 1);
          v122 = v133;
          Dst = v142;
          v140 = v141 - (_BYTE *)v142;
          do
          {
            v68 = Dst;
            LODWORD(v121) = 0xC * v27;
            memcpy((char *)Dst + v140, Src, v121);
            LODWORD(v120) = 0xC * v27;
            memcpy(v68, v147, v120);
            LODWORD(v119) = Size;
            memcpy(v122, v149, v119);
            LODWORD(v118) = 8 * v27;
            memcpy(v125, v148, v118);
            if ( v27 > 0 )
            {
              v143 = (float)v128;
              memset32(v135, SLODWORD(v143), v27);
            }
            v69 = (int)v134;
            v70 = 0;
            if ( *v129 )
            {
              v71 = v136 * v128;
              do
                *(_WORD *)(v69 + 2 * v67++) = v71 + v139[v70++];
              while ( v70 < (unsigned __int16)*v129 );
            }
            if ( v128 < (int)v146 )
            {
              v72 = (unsigned __int16)*v129;
              v73 = v139;
              LODWORD(v143) = (unsigned __int16)v128;
              v74 = v67 + 1;
              *(_WORD *)(v69 + 2 * v74 - 2) = v139[v72 - 1] + v136 * v128;
              v75 = v136 * (LOWORD(v143) + 1);
              *(_WORD *)(v69 + 2 * v74) = v75 + *v73;
              v67 = v74 + 1;
              if ( (*v129 & 1) == 1 )
                *(_WORD *)(v69 + 2 * v67++) = v75 + *v73;
            }
            v122 = (char *)v122 + Size;
            v31 = (unsigned __int16)v131;
            Dst = (char *)Dst + 0xC * v27;
            v125 = (char *)v125 + 8 * v27;
            v135 += v27;
            ++v128;
          }
          while ( v128 < (unsigned __int16)v131 );
        }
        v76 = (_WORD *)FormHeapAlloc(2u);
        v77 = v129;
        v78 = (int)v76;
        *v76 = v67;
        v79 = *v77;
        if ( (*v77 & 1) == 1 )
          v125 = (void *)(unsigned __int16)(v79 + 3);
        else
          v125 = (void *)(unsigned __int16)(v79 + 2);
        v80 = (NiTriBasedGeomData *)FormHeapAlloc(0x54u);
        Src = v80;
        LOBYTE(v166) = 9;
        if ( v80 )
        {
          v57 = sub_73B430(
                  v80,
                  v136 * v131,
                  (int)v141,
                  (int)v142,
                  (int)v133,
                  (int)v123,
                  1,
                  0,
                  v67 - 2,
                  1,
                  v78,
                  (int)v134,
                  v136 * v131,
                  0);
          goto LABEL_88;
        }
      }
      else
      {
        v148 = v25;
        Src = *(void **)(v24 + 0x48);
        v28 = 0xFFFF / (unsigned __int16)v136;
        v29 = *(_DWORD *)(v24 + 0x44);
        v124 = 0;
        v157 = (unsigned __int16)v136;
        if ( (unsigned __int16)v26 >= (unsigned __int16)v28 )
        {
          LOWORD(v26) = 0xFFFF / (unsigned __int16)v136;
          v131 = (unsigned __int16)v28;
        }
        v30 = 0xFFFF / (unsigned __int16)v29;
        v128 = (unsigned __int16)v29;
        if ( (unsigned __int16)v26 >= (unsigned __int16)v30 )
        {
          LOWORD(v26) = 0xFFFF / (unsigned __int16)v29;
          v131 = (unsigned __int16)v30;
        }
        v31 = (unsigned __int16)v26;
        v32 = (unsigned __int16)v136 * (unsigned __int16)v26;
        v123 = (NiProperty *)FormHeapAlloc((0xC * (unsigned __int64)v32) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v32);
        Dst = (void *)FormHeapAlloc((0xC * (unsigned __int64)v32) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v32);
        v33 = (void *)FormHeapAlloc(v32 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v32);
        v122 = v33;
        LOBYTE(v166) = 6;
        if ( v33 )
          sub_401080(v33, 0x10, v32, (void *(__thiscall *)(void *))sub_47EA50);
        else
          v122 = 0;
        LOBYTE(v166) = 2;
        v139 = (_WORD *)FormHeapAlloc(v32 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v32);
        v145 = (float *)FormHeapAlloc(v32 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v32);
        v34 = (UInt16 *)FormHeapAlloc((unsigned int)(v128 * v31) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v128 * v31);
        v35 = *(float *)(v24 + 0x24);
        v36 = *(_DWORD **)(v24 + 0x28);
        v37 = 0;
        v142 = v34;
        v38 = *(_DWORD **)(v24 + 0x20);
        v152 = 0;
        v156 = v38;
        v143 = v35;
        v146 = v36;
        v133 = 0;
        if ( v31 > 0 )
        {
          v39 = 0;
          v40 = 0xC * v27;
          Size = 0x10 * v27;
          v125 = Dst;
          v41 = v122;
          v135 = (float *)v139;
          v154 = 0;
          v140 = 0xC * v27;
          v141 = v122;
          v134 = v145;
          do
          {
            if ( v27 > 0 )
            {
              *(float *)&v149 = (float)(int)v133;
              v42 = *(float *)&v149;
              v43 = v143;
              v44 = v135;
              v147 = (void *)((char *)v123 - (_BYTE *)Dst);
              v151 = v146;
              v45 = v156;
              v153 = v134;
              v46 = (char *)((_BYTE *)v148 - (_BYTE *)v156);
              v47 = v41;
              v48 = v125;
              v129 = (__int16 *)((_BYTE *)v148 - (_BYTE *)v156);
              v155 = v157;
              while ( 1 )
              {
                v49 = v147;
                *(_DWORD *)((char *)v48 + (_DWORD)v147) = *(_DWORD *)((char *)v45 + (_DWORD)v46);
                *(_DWORD *)((char *)v48 + (_DWORD)v49 + 4) = *(_DWORD *)((char *)v45 + (_DWORD)v129 + 4);
                *(_DWORD *)((char *)v48 + (_DWORD)v49 + 8) = *(_DWORD *)((char *)v45 + (_DWORD)v129 + 8);
                *v48 = *v45;
                v48[1] = v45[1];
                v48[2] = v45[2];
                *v47 = *(_DWORD *)LODWORD(v43);
                v47[1] = *(_DWORD *)(LODWORD(v43) + 4);
                v47[2] = *(_DWORD *)(LODWORD(v43) + 8);
                v47[3] = *(_DWORD *)(LODWORD(v43) + 0xC);
                v50 = v151;
                *v44 = *(float *)v151;
                v44[1] = *((float *)v50 + 1);
                v51 = v153;
                *v153 = v42;
                v48 += 3;
                v45 += 3;
                v47 += 4;
                LODWORD(v43) += 0x10;
                v44 += 2;
                v1 = v155-- == 1;
                v153 = v51 + 1;
                v151 = v50 + 2;
                if ( v1 )
                  break;
                v46 = (char *)v129;
              }
              v37 = v152;
              v27 = v157;
              v40 = v140;
              v39 = v154;
            }
            v52 = 0;
            if ( v128 > 0 )
            {
              v53 = v142;
              do
                v53[v37++] = v39 + *((_WORD *)Src + v52++);
              while ( v52 < v128 );
              v152 = v37;
            }
            v31 = (unsigned __int16)v131;
            v125 = (char *)v125 + v40;
            v134 += v27;
            v135 += 2 * v27;
            v41 = &v141[Size];
            v39 += v27;
            v54 = (int)&v133->vtbl + 1 < (unsigned __int16)v131;
            v133 = (NiProperty *)((char *)v133 + 1);
            v154 = v39;
            v141 += Size;
          }
          while ( v54 );
        }
        v55 = v128 / 3;
        v125 = (void *)(unsigned __int16)(v128 / 3);
        v56 = (NiTriShapeData *)FormHeapAlloc(0x5Cu);
        Src = v56;
        LOBYTE(v166) = 7;
        if ( v56 )
        {
          v57 = sub_72AB00(
                  v56,
                  v136 * v131,
                  (int)v123,
                  (int)Dst,
                  (int)v122,
                  (int)v139,
                  1,
                  0,
                  v131 * v55,
                  v142,
                  v136 * v131,
                  0);
LABEL_88:
          Size = (int)v57;
          v122 = 0;
          LOBYTE(v166) = 0xA;
          NiPropertyByID = NiNode_GetNiPropertyByID(v144, 6);
          if ( NiPropertyByID )
          {
            v82 = *(_DWORD *)NiPropertyByID[1].members.m_pcName;
            if ( v82 )
            {
              v83 = *(volatile LONG **)(v82 + 8);
              if ( v83 )
              {
                v122 = (void *)v83;
                InterlockedIncrement(v83 + 1);
              }
            }
          }
          v84 = NiNode_GetNiPropertyByID(v144, 0);
          v85 = 0;
          v123 = v84;
          if ( v84 )
          {
            v85 = BYTE2(v84[1].vtbl);
          }
          else
          {
            v86 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
            v87 = v86;
            Src = v86;
            LOBYTE(v166) = 0xB;
            if ( v86 )
            {
              NiObjectNET::NiObjectNET(v86);
              v87->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
              LOWORD(v87[1].vtbl) = 0xEC;
              BYTE2(v87[1].vtbl) = 0;
            }
            else
            {
              v87 = 0;
            }
            LOBYTE(v166) = 0xA;
            v84 = (NiProperty *)v87;
            v123 = (NiProperty *)v87;
          }
          v88 = (int)v84[1].vtbl & 0xE1FE | 0x1201;
          LODWORD(v121) = 0x1C;
          BYTE2(v84[1].vtbl) = v85;
          LOWORD(v84[1].vtbl) = v88;
          v89 = (NiObjectNET *)FormHeapAlloc(v121);
          v90 = v89;
          Src = v89;
          LOBYTE(v166) = 0xC;
          if ( v89 )
          {
            NiObjectNET::NiObjectNET(v89);
            v90->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
            LOWORD(v90[1].vtbl) = 0xEC;
            BYTE2(v90[1].vtbl) = 0;
            Dst = v90;
          }
          else
          {
            Dst = 0;
          }
          v91 = Dst;
          v92 = *((_WORD *)Dst + 0xC);
          *((_BYTE *)Dst + 0x1A) = v85;
          v93 = v144;
          LODWORD(v121) = 5;
          v94 = v144;
          LOBYTE(v166) = 0xA;
          v91[0xC] = v92 & 0xE1FE | 0x1200;
          v95 = NiNode_GetNiPropertyByID(v94, v121);
          v96 = v127;
          Src = v95;
          v97 = *(float **)&v93->members.children.capacity;
          v98 = *((_DWORD *)v97 + 4);
          v158 = *((_DWORD *)v97 + 3);
          v99 = *((_DWORD *)v97 + 5);
          v159 = v98;
          v100 = v97[6];
          *(_BYTE *)(v127 + 0x30) = v124;
          v101 = *(_DWORD *)(v96 + 8);
          v160 = v99;
          v161 = v100;
          if ( v101 != Size )
          {
            if ( v101 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v101 + 4)) )
                (**(void (__thiscall ***)(int, int))v101)(v101, 1);
            }
            v102 = Size;
            v1 = Size == 0;
            *(_DWORD *)(v96 + 8) = Size;
            if ( !v1 )
              InterlockedIncrement((volatile LONG *)(v102 + 4));
          }
          v103 = (volatile LONG *)v122;
          *(_DWORD *)(v96 + 0xC) = v145;
          *(_DWORD *)(v96 + 0x10) = v27;
          v104 = *(volatile LONG **)(v96 + 0x14);
          if ( v104 != v103 )
          {
            if ( v104 )
            {
              if ( !InterlockedDecrement(v104 + 1) )
                (**(void (__thiscall ***)(void *, int))v104)((void *)v104, 1);
            }
            *(_DWORD *)(v96 + 0x14) = v103;
            if ( v103 )
              InterlockedIncrement(v103 + 1);
          }
          v105 = *(volatile LONG **)(v96 + 0x1C);
          v106 = (volatile LONG *)Dst;
          if ( v105 != Dst )
          {
            if ( v105 )
            {
              if ( !InterlockedDecrement(v105 + 1) )
                (**(void (__thiscall ***)(void *, int))v105)((void *)v105, 1);
            }
            *(_DWORD *)(v96 + 0x1C) = v106;
            InterlockedIncrement(v106 + 1);
          }
          v107 = *(NiProperty **)(v96 + 0x18);
          v108 = v123;
          if ( v107 != v123 )
          {
            if ( v107 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v107->members) )
                (*(void (__thiscall **)(NiProperty *, int))v107->vtbl)(v107, 1);
            }
            *(_DWORD *)(v96 + 0x18) = v108;
            InterlockedIncrement((volatile LONG *)&v108->members);
          }
          v109 = *(volatile LONG **)(v96 + 0x20);
          v110 = (volatile LONG *)Src;
          if ( v109 != Src )
          {
            if ( v109 )
            {
              if ( !InterlockedDecrement(v109 + 1) )
                (**(void (__thiscall ***)(void *, int))v109)((void *)v109, 1);
            }
            *(_DWORD *)(v96 + 0x20) = v110;
            if ( v110 )
              InterlockedIncrement(v110 + 1);
          }
          v111 = (__int16)v125;
          v112 = v138;
          *(float *)(v96 + 0x28) = v161;
          *(_DWORD *)(v96 + 0x2C) = v31;
          *(_WORD *)(v96 + 0x34) = v111;
          *(_BYTE *)(v96 + 0x31) = 0;
          if ( v112 )
          {
            v113 = (*(int (__thiscall **)(size_t *))(*(_DWORD *)v112 + 4))(v112);
            if ( v113 )
            {
              while ( (char *)v113 != dword_B3FD4C )
              {
                v113 = *(_DWORD *)(v113 + 4);
                if ( !v113 )
                  goto LABEL_133;
              }
              v114 = 1;
            }
            else
            {
LABEL_133:
              v114 = 0;
            }
            if ( (v114 != 0 ? (unsigned int)v112 : 0) != 0 )
              *(_BYTE *)(v96 + 0x31) = 1;
          }
          QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, (int)*v150, 1, 1);
          v115 = (void (__thiscall ***)(void *, int))v122;
          LOBYTE(v166) = 2;
          if ( v122 )
          {
            if ( !InterlockedDecrement((volatile LONG *)v122 + 1) )
              (**v115)(v115, 1);
          }
          v116 = (void (__thiscall ***)(_DWORD, int))v137;
          LOBYTE(v166) = 0;
          if ( !InterlockedDecrement((volatile LONG *)(v137 + 4)) )
            (**v116)(v116, 1);
          goto LABEL_141;
        }
      }
      v57 = 0;
      goto LABEL_88;
    }
LABEL_27:
    LOBYTE(v166) = 0;
    sub_7016A0((NiD3DVertexShader *)&v137);
LABEL_17:
    v166 = 0xFFFFFFFF;
    sub_7016A0((NiD3DVertexShader *)&v127);
    return 0;
  }
LABEL_141:
  v117 = (void (__thiscall ***)(_DWORD, int))v127;
  v166 = 0xFFFFFFFF;
  if ( !InterlockedDecrement((volatile LONG *)(v127 + 4)) )
    (**v117)(v117, 1);
  return v117;
}
