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
  NiRTTI *v113; // eax
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

  v1 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] == 0; /*0x7c3c94*/
  v150 = a1; /*0x7c3c9a*/
  if ( v1 ) /*0x7c3ca1*/
    return 0; /*0x7c3ca1*/
  v2 = *a1; /*0x7c3ca7*/
  v1 = *a1 == 0; /*0x7c3caa*/
  v144 = 0; /*0x7c3cac*/
  if ( v1 ) /*0x7c3cb0*/
    return 0; /*0x7c3cb0*/
  v127 = 0; /*0x7c3cb6*/
  v166 = 0; /*0x7c3cc5*/
  if ( sub_4A1AB0(&off_B2CBD4, (int)v2, (int *)&v127) ) /*0x7c3ccc*/
  {
    v5 = v127; /*0x7c3dc0*/
  }
  else
  {
    v3 = (_DWORD *)FormHeapAlloc(0x38u); /*0x7c3cdb*/
    if ( v3 ) /*0x7c3ce5*/
      v4 = (Ni2DBuffer *)sub_7C3590(v3); /*0x7c3ce9*/
    else
      v4 = 0; /*0x7c3cf0*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v127, v4); /*0x7c3cf7*/
    v5 = v127; /*0x7c3cfc*/
    v6 = (int *)(v127 + 0x24); /*0x7c3d00*/
    *(_BYTE *)(v127 + 0x32) = 1; /*0x7c3d03*/
    v7 = *v6; /*0x7c3d07*/
    if ( *v6 ) /*0x7c3d07*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x7c3d11*/
      {
        if ( v7 ) /*0x7c3d1d*/
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7c3d27*/
      }
      *v6 = 0; /*0x7c3d29*/
    }
    LODWORD(v121) = v5; /*0x7c3d32*/
    v138 = &v121; /*0x7c3d37*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x7c3d3c*/
    sub_7C2FF0((int)&off_B2CBD4, (int)*a1, v121, SHIDWORD(v121)); /*0x7c3d4b*/
    if ( byte_B2CBC0 ) /*0x7c3d50*/
    {
      v8 = (IOTask *)FormHeapAlloc(0x4B8u); /*0x7c3d5e*/
      v138 = (size_t *)v8; /*0x7c3d66*/
      LOBYTE(v166) = 1; /*0x7c3d6c*/
      if ( v8 ) /*0x7c3d74*/
        v9 = sub_7C2AF0(v8, *a1); /*0x7c3d7c*/
      else
        v9 = 0; /*0x7c3d83*/
      LOBYTE(v166) = 0; /*0x7c3d88*/
      sub_4BCB70(v6, (int)v9); /*0x7c3d90*/
      (*((void (__thiscall **)(IOManager *, int))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], *v6); /*0x7c3da3*/
      goto LABEL_17; /*0x7c3da3*/
    }
  }
  if ( *(_BYTE *)(v5 + 0x32) )
  {
    v137 = 0; /*0x7c3dce*/
    v1 = byte_B2CBC0 == 0; /*0x7c3dd6*/
    v11 = v127; /*0x7c3ddd*/
    LOBYTE(v166) = 2; /*0x7c3de1*/
    if ( !v1 ) /*0x7c3de9*/
    {
      v12 = (_DWORD *)(v127 + 0x24); /*0x7c3def*/
      if ( !*(_DWORD *)(v127 + 0x24) ) /*0x7c3deb*/
      {
        v13 = (IOTask *)FormHeapAlloc(0x4B8u); /*0x7c3df9*/
        v138 = (size_t *)v13; /*0x7c3e01*/
        LOBYTE(v166) = 3; /*0x7c3e07*/
        if ( v13 ) /*0x7c3e0f*/
          v14 = sub_7C2AF0(v13, *v150); /*0x7c3e1d*/
        else
          v14 = 0; /*0x7c3e24*/
        LOBYTE(v166) = 2; /*0x7c3e29*/
        sub_4BCB70((int *)(v11 + 0x24), (int)v14); /*0x7c3e31*/
        (*((void (__thiscall **)(IOManager *, _DWORD))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], *v12); /*0x7c3e44*/
        goto LABEL_27; /*0x7c3e44*/
      }
    }
    v15 = *(_DWORD *)(v127 + 0x24); /*0x7c3e5c*/
    if ( v15 ) /*0x7c3e64*/
    {
      if ( *(int *)(v15 + 0xC) < 4 ) /*0x7c3e6a*/
        goto LABEL_27; /*0x7c3e6a*/
      v16 = sub_7C2BF0(*(_DWORD *)(v127 + 0x24), &v123); /*0x7c3e73*/
      LOBYTE(v166) = 4; /*0x7c3e7d*/
      OB_NiSmartPointer_Assign_010201A0((int *)&v137, v16); /*0x7c3e85*/
      LOBYTE(v166) = 2; /*0x7c3e8e*/
      NiPointerSlot_Release((NiD3DVertexShader *)&v123); /*0x7c3e96*/
      sub_4BCB70((int *)(v11 + 0x24), 0); /*0x7c3e9f*/
    }
    else
    {
      sub_434710((char *)*v150, v165); /*0x7c3ebe*/
      sub_4363C0((NiStream *)v162); /*0x7c3eca*/
      LOBYTE(v166) = 5; /*0x7c3ee0*/
      sub_6F9980(v162, v165, 0); /*0x7c3ee8*/
      if ( v164 ) /*0x7c3ef5*/
        NiSmartPointer_Set__((Ni2DBuffer **)&v137, *v163); /*0x7c3f05*/
      LOBYTE(v166) = 2; /*0x7c3f11*/
      BSStream::~BSStream((BSStream *)v162); /*0x7c3f19*/
    }
    if ( v137 )
    {
      LODWORD(v121) = v137; /*0x7c3f2a*/
      *(_BYTE *)(v11 + 0x32) = 0; /*0x7c3f30*/
      v17 = NiRTTI_Cast((BSStringT *)&stru_B3FA80, (NiObject *)v121); /*0x7c3f34*/
      v18 = (int)v17->__vftable->Unk_02(v17); /*0x7c3f43*/
      v19 = v144; /*0x7c3f45*/
      v20 = v18; /*0x7c3f49*/
      v138 = (size_t *)v18; /*0x7c3f4b*/
      while ( v20 ) /*0x7c3f52*/
      {
        v21 = 0; /*0x7c3f5b*/
        if ( *(_WORD *)(v20 + 0xB6) ) /*0x7c3f54*/
        {
          do /*0x7c3f6b*/
          {
            v22 = *(_DWORD *)(*(_DWORD *)(v20 + 0xB0) + 4 * v21); /*0x7c3f6b*/
            if ( v22 ) /*0x7c3f70*/
            {
              v19 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0xC))(v22); /*0x7c3f79*/
              v144 = v19; /*0x7c3f7d*/
              if ( v19 ) /*0x7c3f81*/
                goto LABEL_42; /*0x7c3f81*/
            }
          }
          while ( *(unsigned __int16 *)(v20 + 0xB6) > (unsigned int)++v21 ); /*0x7c3f6b*/
        }
        if ( v19 ) /*0x7c3f93*/
          break; /*0x7c3f93*/
      }
LABEL_42:
      v23 = NiRTTI_Cast((BSStringT *)&stru_B3FD04, (NiObject *)v19); /*0x7c3f95*/
      v24 = *(_DWORD *)&v19->members.children.capacity; /*0x7c3fa0*/
      v25 = *(void **)(v24 + 0x1C); /*0x7c3fa6*/
      v26 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ? 0x50 : 0xE4;
      v136 = *(unsigned __int16 *)(v24 + 8); /*0x7c3fca*/
      v27 = (unsigned __int16)v136; /*0x7c3fce*/
      v131 = v26; /*0x7c3fd1*/
      if ( v23 )
      {
        Src = v25; /*0x7c4384*/
        v139 = *(_WORD **)(v24 + 0x4C); /*0x7c438b*/
        v58 = 0xFFFF / (unsigned __int16)v136; /*0x7c4390*/
        v59 = *(__int16 **)(v24 + 0x48); /*0x7c4392*/
        v124 = 1; /*0x7c4395*/
        v129 = v59; /*0x7c439a*/
        if ( (unsigned __int16)v26 >= (unsigned __int16)v58 ) /*0x7c43a1*/
        {
          LOWORD(v26) = 0xFFFF / (unsigned __int16)v136; /*0x7c43a3*/
          v131 = (unsigned __int16)v58; /*0x7c43a6*/
        }
        v60 = 0xFFFF / ((unsigned __int16)*v59 + ((*v59 & 1) != 0) + 2); /*0x7c43cd*/
        if ( (unsigned __int16)v26 >= (unsigned __int16)v60 ) /*0x7c43d2*/
          v131 = (unsigned __int16)v60; /*0x7c43d7*/
        v31 = (unsigned __int16)v131; /*0x7c43db*/
        v61 = (unsigned __int16)v136 * (unsigned __int16)v131; /*0x7c43e2*/
        v141 = (_BYTE *)FormHeapAlloc((0xC * (unsigned __int64)v61) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v61);
        v142 = (UInt16 *)FormHeapAlloc((0xC * (unsigned __int64)v61) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v61);
        v62 = (NiProperty *)FormHeapAlloc(v61 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v61);
        v123 = v62; /*0x7c4438*/
        LOBYTE(v166) = 8; /*0x7c443e*/
        if ( v62 ) /*0x7c4446*/
        {
          sub_401080(v62, 0x10, v61, (void *(__thiscall *)(void *))sub_47EA50); /*0x7c4451*/
          v133 = v123; /*0x7c445a*/
        }
        else
        {
          v133 = 0; /*0x7c4460*/
        }
        LOBYTE(v166) = 2; /*0x7c4476*/
        v123 = (NiProperty *)FormHeapAlloc(v61 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v61);
        v145 = (float *)FormHeapAlloc(v61 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v61);
        v63 = 2LL /*0x7c44e2*/
            * ((unsigned __int16)*v129 + (unsigned int)(unsigned __int16)(*v129 + ((*v129 & 1) != 0) + 2) * (v31 - 1));
        v64 = FormHeapAlloc(HIDWORD(v63) != 0 ? 0xFFFFFFFF : v63);
        v65 = *(void **)(v24 + 0x24); /*0x7c44f1*/
        v66 = *(void **)(v24 + 0x28); /*0x7c44f4*/
        v67 = 0; /*0x7c44f7*/
        v134 = (float *)v64; /*0x7c44f9*/
        v147 = *(void **)(v24 + 0x20); /*0x7c4505*/
        v149 = v65; /*0x7c4509*/
        v148 = v66; /*0x7c4510*/
        v128 = 0; /*0x7c4514*/
        if ( v31 > 0 ) /*0x7c4518*/
        {
          Size = 0x10 * v27; /*0x7c452b*/
          v135 = v145; /*0x7c4538*/
          v125 = v123; /*0x7c4540*/
          v146 = (_DWORD *)(v31 - 1); /*0x7c454f*/
          v122 = v133; /*0x7c4553*/
          Dst = v142; /*0x7c4557*/
          v140 = v141 - (_BYTE *)v142; /*0x7c455b*/
          do /*0x7c46aa*/
          {
            v68 = Dst; /*0x7c4568*/
            LODWORD(v121) = 0xC * v27; /*0x7c456c*/
            memcpy((char *)Dst + v140, Src, v121); /*0x7c4571*/
            LODWORD(v120) = 0xC * v27; /*0x7c457d*/
            memcpy(v68, v147, v120); /*0x7c4580*/
            LODWORD(v119) = Size; /*0x7c4594*/
            memcpy(v122, v149, v119); /*0x7c4597*/
            LODWORD(v118) = 8 * v27; /*0x7c45a7*/
            memcpy(v125, v148, v118); /*0x7c45b1*/
            if ( v27 > 0 ) /*0x7c45bb*/
            {
              v143 = (float)v128; /*0x7c45c7*/
              memset32(v135, SLODWORD(v143), v27); /*0x7c45cf*/
            }
            v69 = (int)v134; /*0x7c45d5*/
            v70 = 0; /*0x7c45d9*/
            if ( *v129 ) /*0x7c45db*/
            {
              v71 = v136 * v128; /*0x7c45e4*/
              do /*0x7c4607*/
                *(_WORD *)(v69 + 2 * v67++) = v71 + v139[v70++]; /*0x7c45f4*/
              while ( v70 < (unsigned __int16)*v129 ); /*0x7c4607*/
            }
            if ( v128 < (int)v146 ) /*0x7c4611*/
            {
              v72 = (unsigned __int16)*v129; /*0x7c4617*/
              v73 = v139; /*0x7c461a*/
              LODWORD(v143) = (unsigned __int16)v128; /*0x7c4621*/
              v74 = v67 + 1; /*0x7c462f*/
              *(_WORD *)(v69 + 2 * v74 - 2) = v139[v72 - 1] + v136 * v128; /*0x7c4632*/
              v75 = v136 * (LOWORD(v143) + 1); /*0x7c4641*/
              *(_WORD *)(v69 + 2 * v74) = v75 + *v73; /*0x7c4649*/
              v67 = v74 + 1; /*0x7c4654*/
              if ( (*v129 & 1) == 1 ) /*0x7c4667*/
                *(_WORD *)(v69 + 2 * v67++) = v75 + *v73; /*0x7c466f*/
            }
            v122 = (char *)v122 + Size; /*0x7c467a*/
            v31 = (unsigned __int16)v131; /*0x7c4682*/
            Dst = (char *)Dst + 0xC * v27; /*0x7c4687*/
            v125 = (char *)v125 + 8 * v27; /*0x7c4692*/
            v135 += v27; /*0x7c46a0*/
            ++v128; /*0x7c46a6*/
          }
          while ( v128 < (unsigned __int16)v131 ); /*0x7c46aa*/
        }
        v76 = (_WORD *)FormHeapAlloc(2u); /*0x7c46b2*/
        v77 = v129; /*0x7c46b7*/
        v78 = (int)v76; /*0x7c46bb*/
        *v76 = v67; /*0x7c46bd*/
        v79 = *v77; /*0x7c46c0*/
        if ( (*v77 & 1) == 1 ) /*0x7c46d8*/
          v125 = (void *)(unsigned __int16)(v79 + 3); /*0x7c46e0*/
        else
          v125 = (void *)(unsigned __int16)(v79 + 2); /*0x7c46ec*/
        v80 = (NiTriBasedGeomData *)FormHeapAlloc(0x54u); /*0x7c46f2*/
        Src = v80; /*0x7c46fa*/
        LOBYTE(v166) = 9; /*0x7c4700*/
        if ( v80 ) /*0x7c4708*/
        {
          v57 = sub_73B430( /*0x7c4743*/
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
          goto LABEL_88; /*0x7c4748*/
        }
      }
      else
      {
        v148 = v25; /*0x7c3fe0*/
        Src = *(void **)(v24 + 0x48); /*0x7c3fe7*/
        v28 = 0xFFFF / (unsigned __int16)v136; /*0x7c3fec*/
        v29 = *(_DWORD *)(v24 + 0x44); /*0x7c3fee*/
        v124 = 0; /*0x7c3ff1*/
        v157 = (unsigned __int16)v136; /*0x7c3ff6*/
        if ( (unsigned __int16)v26 >= (unsigned __int16)v28 ) /*0x7c4000*/
        {
          LOWORD(v26) = 0xFFFF / (unsigned __int16)v136; /*0x7c4002*/
          v131 = (unsigned __int16)v28; /*0x7c4005*/
        }
        v30 = 0xFFFF / (unsigned __int16)v29; /*0x7c4012*/
        v128 = (unsigned __int16)v29; /*0x7c4014*/
        if ( (unsigned __int16)v26 >= (unsigned __int16)v30 ) /*0x7c401b*/
        {
          LOWORD(v26) = 0xFFFF / (unsigned __int16)v29; /*0x7c401d*/
          v131 = (unsigned __int16)v30; /*0x7c4020*/
        }
        v31 = (unsigned __int16)v26; /*0x7c4024*/
        v32 = (unsigned __int16)v136 * (unsigned __int16)v26; /*0x7c4029*/
        v123 = (NiProperty *)FormHeapAlloc((0xC * (unsigned __int64)v32) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v32);
        Dst = (void *)FormHeapAlloc((0xC * (unsigned __int64)v32) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v32);
        v33 = (void *)FormHeapAlloc(v32 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v32);
        v122 = v33; /*0x7c407f*/
        LOBYTE(v166) = 6; /*0x7c4085*/
        if ( v33 ) /*0x7c408d*/
          sub_401080(v33, 0x10, v32, (void *(__thiscall *)(void *))sub_47EA50); /*0x7c4098*/
        else
          v122 = 0; /*0x7c40a7*/
        LOBYTE(v166) = 2; /*0x7c40bd*/
        v139 = (_WORD *)FormHeapAlloc(v32 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v32);
        v145 = (float *)FormHeapAlloc(v32 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v32);
        v34 = (UInt16 *)FormHeapAlloc((unsigned int)(v128 * v31) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v128 * v31);
        v35 = *(float *)(v24 + 0x24); /*0x7c410c*/
        v36 = *(_DWORD **)(v24 + 0x28); /*0x7c410f*/
        v37 = 0; /*0x7c4112*/
        v142 = v34; /*0x7c4114*/
        v38 = *(_DWORD **)(v24 + 0x20); /*0x7c4118*/
        v152 = 0; /*0x7c4120*/
        v156 = v38; /*0x7c4127*/
        v143 = v35; /*0x7c412e*/
        v146 = v36; /*0x7c4132*/
        v133 = 0; /*0x7c4136*/
        if ( v31 > 0 ) /*0x7c413a*/
        {
          v39 = 0; /*0x7c4149*/
          v40 = 0xC * v27; /*0x7c414b*/
          Size = 0x10 * v27; /*0x7c4152*/
          v125 = Dst; /*0x7c415a*/
          v41 = v122; /*0x7c415e*/
          v135 = (float *)v139; /*0x7c4162*/
          v154 = 0; /*0x7c416a*/
          v140 = 0xC * v27; /*0x7c4171*/
          v141 = v122; /*0x7c4175*/
          v134 = v145; /*0x7c4179*/
          do /*0x7c430d*/
          {
            if ( v27 > 0 ) /*0x7c417f*/
            {
              *(float *)&v149 = (float)(int)v133; /*0x7c4199*/
              v42 = *(float *)&v149; /*0x7c41a7*/
              v43 = v143; /*0x7c41ae*/
              v44 = v135; /*0x7c41b2*/
              v147 = (void *)((char *)v123 - (_BYTE *)Dst); /*0x7c41b6*/
              v151 = v146; /*0x7c41be*/
              v45 = v156; /*0x7c41c5*/
              v153 = v134; /*0x7c41cc*/
              v46 = (char *)((_BYTE *)v148 - (_BYTE *)v156); /*0x7c41d3*/
              v47 = v41; /*0x7c41d5*/
              v48 = v125; /*0x7c41d7*/
              v129 = (__int16 *)((_BYTE *)v148 - (_BYTE *)v156); /*0x7c41db*/
              v155 = v157; /*0x7c41df*/
              while ( 1 ) /*0x7c41ef*/
              {
                v49 = v147; /*0x7c41ef*/
                *(_DWORD *)((char *)v48 + (_DWORD)v147) = *(_DWORD *)((char *)v45 + (_DWORD)v46); /*0x7c41f3*/
                *(_DWORD *)((char *)v48 + (_DWORD)v49 + 4) = *(_DWORD *)((char *)v45 + (_DWORD)v129 + 4); /*0x7c41ff*/
                *(_DWORD *)((char *)v48 + (_DWORD)v49 + 8) = *(_DWORD *)((char *)v45 + (_DWORD)v129 + 8); /*0x7c420b*/
                *v48 = *v45; /*0x7c4213*/
                v48[1] = v45[1]; /*0x7c4218*/
                v48[2] = v45[2]; /*0x7c421e*/
                *v47 = *(_DWORD *)LODWORD(v43); /*0x7c4223*/
                v47[1] = *(_DWORD *)(LODWORD(v43) + 4); /*0x7c4228*/
                v47[2] = *(_DWORD *)(LODWORD(v43) + 8); /*0x7c422e*/
                v47[3] = *(_DWORD *)(LODWORD(v43) + 0xC); /*0x7c4234*/
                v50 = v151; /*0x7c4237*/
                *v44 = *(float *)v151; /*0x7c4240*/
                v44[1] = *((float *)v50 + 1); /*0x7c4245*/
                v51 = v153; /*0x7c4248*/
                *v153 = v42; /*0x7c424f*/
                v48 += 3; /*0x7c4258*/
                v45 += 3; /*0x7c425b*/
                v47 += 4; /*0x7c425e*/
                LODWORD(v43) += 0x10; /*0x7c4261*/
                v44 += 2; /*0x7c4264*/
                v1 = v155-- == 1; /*0x7c4267*/
                v153 = v51 + 1; /*0x7c426f*/
                v151 = v50 + 2; /*0x7c4276*/
                if ( v1 ) /*0x7c427d*/
                  break; /*0x7c427d*/
                v46 = (char *)v129; /*0x7c41e8*/
              }
              v37 = v152; /*0x7c4283*/
              v27 = v157; /*0x7c428c*/
              v40 = v140; /*0x7c4293*/
              v39 = v154; /*0x7c4297*/
            }
            v52 = 0; /*0x7c429e*/
            if ( v128 > 0 ) /*0x7c42a4*/
            {
              v53 = v142; /*0x7c42a6*/
              do /*0x7c42c3*/
                v53[v37++] = v39 + *((_WORD *)Src + v52++); /*0x7c42b5*/
              while ( v52 < v128 ); /*0x7c42c3*/
              v152 = v37; /*0x7c42c5*/
            }
            v31 = (unsigned __int16)v131; /*0x7c42d0*/
            v125 = (char *)v125 + v40; /*0x7c42d5*/
            v134 += v27; /*0x7c42e0*/
            v135 += 2 * v27; /*0x7c42eb*/
            v41 = &v141[Size]; /*0x7c42f3*/
            v39 += v27; /*0x7c42fa*/
            v54 = (int)&v133->vtbl + 1 < (unsigned __int16)v131; /*0x7c42fc*/
            v133 = (NiProperty *)((char *)v133 + 1); /*0x7c42fe*/
            v154 = v39; /*0x7c4302*/
            v141 += Size; /*0x7c4309*/
          }
          while ( v54 ); /*0x7c430d*/
        }
        v55 = v128 / 3; /*0x7c4321*/
        v125 = (void *)(unsigned __int16)(v128 / 3); /*0x7c4328*/
        v56 = (NiTriShapeData *)FormHeapAlloc(0x5Cu); /*0x7c432c*/
        Src = v56; /*0x7c4334*/
        LOBYTE(v166) = 7; /*0x7c433a*/
        if ( v56 )
        {
          v57 = sub_72AB00( /*0x7c437a*/
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
          Size = (int)v57; /*0x7c474c*/
          v122 = 0; /*0x7c4750*/
          LOBYTE(v166) = 0xA; /*0x7c475e*/
          NiPropertyByID = NiNode_GetNiPropertyByID(v144, 6); /*0x7c4766*/
          if ( NiPropertyByID ) /*0x7c476d*/
          {
            v82 = *(_DWORD *)NiPropertyByID[1].members.m_pcName; /*0x7c4772*/
            if ( v82 ) /*0x7c4776*/
            {
              v83 = *(volatile LONG **)(v82 + 8); /*0x7c4778*/
              if ( v83 ) /*0x7c477d*/
              {
                v122 = (void *)v83; /*0x7c477f*/
                InterlockedIncrement(v83 + 1); /*0x7c4787*/
              }
            }
          }
          v84 = NiNode_GetNiPropertyByID(v144, 0); /*0x7c4793*/
          v85 = 0; /*0x7c4798*/
          v123 = v84; /*0x7c479c*/
          if ( v84 ) /*0x7c47a0*/
          {
            v85 = BYTE2(v84[1].vtbl); /*0x7c47a2*/
          }
          else
          {
            v86 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7c47aa*/
            v87 = v86; /*0x7c47af*/
            Src = v86; /*0x7c47b4*/
            LOBYTE(v166) = 0xB; /*0x7c47ba*/
            if ( v86 ) /*0x7c47c2*/
            {
              NiObjectNET::NiObjectNET(v86); /*0x7c47c6*/
              v87->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x7c47cb*/
              LOWORD(v87[1].vtbl) = 0xEC; /*0x7c47d2*/
              BYTE2(v87[1].vtbl) = 0; /*0x7c47d8*/
            }
            else
            {
              v87 = 0; /*0x7c47de*/
            }
            LOBYTE(v166) = 0xA; /*0x7c47e0*/
            v84 = (NiProperty *)v87; /*0x7c47e8*/
            v123 = (NiProperty *)v87; /*0x7c47ea*/
          }
          v88 = (int)v84[1].vtbl & 0xE1FE | 0x1201; /*0x7c47f7*/
          LODWORD(v121) = 0x1C; /*0x7c47fc*/
          BYTE2(v84[1].vtbl) = v85; /*0x7c47fe*/
          LOWORD(v84[1].vtbl) = v88; /*0x7c4801*/
          v89 = (NiObjectNET *)FormHeapAlloc(v121); /*0x7c4805*/
          v90 = v89; /*0x7c480a*/
          Src = v89; /*0x7c480f*/
          LOBYTE(v166) = 0xC; /*0x7c4815*/
          if ( v89 ) /*0x7c481d*/
          {
            NiObjectNET::NiObjectNET(v89); /*0x7c4821*/
            v90->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x7c4826*/
            LOWORD(v90[1].vtbl) = 0xEC; /*0x7c482d*/
            BYTE2(v90[1].vtbl) = 0; /*0x7c4833*/
            Dst = v90; /*0x7c4837*/
          }
          else
          {
            Dst = 0; /*0x7c483d*/
          }
          v91 = Dst; /*0x7c4845*/
          v92 = *((_WORD *)Dst + 0xC); /*0x7c4849*/
          *((_BYTE *)Dst + 0x1A) = v85; /*0x7c484d*/
          v93 = v144; /*0x7c4850*/
          LODWORD(v121) = 5; /*0x7c485e*/
          v94 = v144; /*0x7c4860*/
          LOBYTE(v166) = 0xA; /*0x7c4862*/
          v91[0xC] = v92 & 0xE1FE | 0x1200; /*0x7c486a*/
          v95 = NiNode_GetNiPropertyByID(v94, v121); /*0x7c486e*/
          v96 = v127; /*0x7c4873*/
          Src = v95; /*0x7c4877*/
          v97 = *(float **)&v93->members.children.capacity; /*0x7c487b*/
          v98 = *((_DWORD *)v97 + 4); /*0x7c4884*/
          v158 = *((_DWORD *)v97 + 3); /*0x7c4887*/
          v99 = *((_DWORD *)v97 + 5); /*0x7c488e*/
          v159 = v98; /*0x7c4891*/
          v100 = v97[6]; /*0x7c4898*/
          *(_BYTE *)(v127 + 0x30) = v124; /*0x7c489f*/
          v101 = *(_DWORD *)(v96 + 8); /*0x7c48a2*/
          v160 = v99; /*0x7c48a9*/
          v161 = v100; /*0x7c48b0*/
          if ( v101 != Size ) /*0x7c48b7*/
          {
            if ( v101 ) /*0x7c48bb*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v101 + 4)) ) /*0x7c48c1*/
                (**(void (__thiscall ***)(int, int))v101)(v101, 1); /*0x7c48d7*/
            }
            v102 = Size; /*0x7c48d9*/
            v1 = Size == 0; /*0x7c48dd*/
            *(_DWORD *)(v96 + 8) = Size; /*0x7c48df*/
            if ( !v1 ) /*0x7c48e2*/
              InterlockedIncrement((volatile LONG *)(v102 + 4)); /*0x7c48ea*/
          }
          v103 = (volatile LONG *)v122; /*0x7c48f4*/
          *(_DWORD *)(v96 + 0xC) = v145; /*0x7c48f8*/
          *(_DWORD *)(v96 + 0x10) = v27; /*0x7c48fb*/
          v104 = *(volatile LONG **)(v96 + 0x14); /*0x7c48fe*/
          if ( v104 != v103 ) /*0x7c4903*/
          {
            if ( v104 ) /*0x7c4907*/
            {
              if ( !InterlockedDecrement(v104 + 1) ) /*0x7c490d*/
                (**(void (__thiscall ***)(void *, int))v104)((void *)v104, 1); /*0x7c4923*/
            }
            *(_DWORD *)(v96 + 0x14) = v103; /*0x7c4927*/
            if ( v103 ) /*0x7c492a*/
              InterlockedIncrement(v103 + 1); /*0x7c4930*/
          }
          v105 = *(volatile LONG **)(v96 + 0x1C); /*0x7c4936*/
          v106 = (volatile LONG *)Dst; /*0x7c4939*/
          if ( v105 != Dst ) /*0x7c493f*/
          {
            if ( v105 ) /*0x7c4943*/
            {
              if ( !InterlockedDecrement(v105 + 1) ) /*0x7c4949*/
                (**(void (__thiscall ***)(void *, int))v105)((void *)v105, 1); /*0x7c495f*/
            }
            *(_DWORD *)(v96 + 0x1C) = v106; /*0x7c4961*/
            InterlockedIncrement(v106 + 1); /*0x7c4968*/
          }
          v107 = *(NiProperty **)(v96 + 0x18); /*0x7c496e*/
          v108 = v123; /*0x7c4971*/
          if ( v107 != v123 ) /*0x7c4977*/
          {
            if ( v107 ) /*0x7c497b*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v107->members) ) /*0x7c4981*/
                (*(void (__thiscall **)(NiProperty *, int))v107->vtbl)(v107, 1); /*0x7c4997*/
            }
            *(_DWORD *)(v96 + 0x18) = v108; /*0x7c4999*/
            InterlockedIncrement((volatile LONG *)&v108->members); /*0x7c49a0*/
          }
          v109 = *(volatile LONG **)(v96 + 0x20); /*0x7c49a6*/
          v110 = (volatile LONG *)Src; /*0x7c49a9*/
          if ( v109 != Src ) /*0x7c49af*/
          {
            if ( v109 ) /*0x7c49b3*/
            {
              if ( !InterlockedDecrement(v109 + 1) ) /*0x7c49b9*/
                (**(void (__thiscall ***)(void *, int))v109)((void *)v109, 1); /*0x7c49cf*/
            }
            *(_DWORD *)(v96 + 0x20) = v110; /*0x7c49d3*/
            if ( v110 ) /*0x7c49d6*/
              InterlockedIncrement(v110 + 1); /*0x7c49dc*/
          }
          v111 = (__int16)v125; /*0x7c49e9*/
          v112 = v138; /*0x7c49ee*/
          *(float *)(v96 + 0x28) = v161; /*0x7c49f2*/
          *(_DWORD *)(v96 + 0x2C) = v31; /*0x7c49f7*/
          *(_WORD *)(v96 + 0x34) = v111; /*0x7c49fa*/
          *(_BYTE *)(v96 + 0x31) = 0; /*0x7c49fe*/
          if ( v112 )
          {
            v113 = (NiRTTI *)(*(int (__thiscall **)(size_t *))(*(_DWORD *)v112 + 4))(v112); /*0x7c4a0b*/
            if ( v113 ) /*0x7c4a0f*/
            {
              while ( v113 != &stru_B3FD4C ) /*0x7c4a16*/
              {
                v113 = v113->parent; /*0x7c4a1c*/
                if ( !v113 ) /*0x7c4a21*/
                  goto LABEL_133; /*0x7c4a21*/
              }
              v114 = 1; /*0x7c4ae7*/
            }
            else
            {
LABEL_133:
              v114 = 0; /*0x7c4a23*/
            }
            if ( (v114 != 0 ? (unsigned int)v112 : 0) != 0 )
              *(_BYTE *)(v96 + 0x31) = 1; /*0x7c4a2d*/
          }
          QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)*v150, 1, 1); /*0x7c4a45*/
          v115 = (void (__thiscall ***)(void *, int))v122; /*0x7c4a4a*/
          LOBYTE(v166) = 2; /*0x7c4a50*/
          if ( v122 ) /*0x7c4a58*/
          {
            if ( !InterlockedDecrement((volatile LONG *)v122 + 1) ) /*0x7c4a5e*/
              (**v115)(v115, 1); /*0x7c4a70*/
          }
          v116 = (void (__thiscall ***)(_DWORD, int))v137; /*0x7c4a72*/
          LOBYTE(v166) = 0; /*0x7c4a7a*/
          if ( !InterlockedDecrement((volatile LONG *)(v137 + 4)) ) /*0x7c4a82*/
            (**v116)(v116, 1); /*0x7c4a94*/
          goto LABEL_141; /*0x7c4a94*/
        }
      }
      v57 = 0; /*0x7c474a*/
      goto LABEL_88; /*0x7c474a*/
    }
LABEL_27:
    LOBYTE(v166) = 0; /*0x7c3e46*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v137); /*0x7c3e52*/
LABEL_17:
    v166 = 0xFFFFFFFF; /*0x7c3da5*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v127); /*0x7c3db4*/
    return 0; /*0x7c3dbb*/
  }
LABEL_141:
  v117 = (void (__thiscall ***)(_DWORD, int))v127; /*0x7c4a96*/
  v166 = 0xFFFFFFFF; /*0x7c4a9e*/
  if ( !InterlockedDecrement((volatile LONG *)(v127 + 4)) ) /*0x7c4aa9*/
    (**v117)(v117, 1); /*0x7c4abb*/
  return v117; /*0x7c4abf*/
}
