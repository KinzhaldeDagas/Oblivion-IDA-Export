//
// Runtime v141 registered79 distant tree batches but rejected all attempted adapters before drawing. Cause established in native constructor call7B2FDB: expanded triangle geometry is NiTriShapeDynamicData5C/A80274, not NiTriShapeData58/A7F5A4. The v142 adapter corrects both its type check and private geometry constructor. This is an ABI correction; do not remove capacity/stream guards.
volatile LONG *__cdecl sub_7B2AA0(int a1)
{
  bool v1; // zf
  int v2; // eax
  int v4; // ebx
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  NiObject *v8; // eax
  unsigned __int16 v9; // bx
  NiObject *v10; // eax
  int v11; // ecx
  UInt32 v12; // edi
  NiObjectVtbl *v13; // edx
  signed int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // edi
  unsigned int v18; // ebp
  volatile LONG *v19; // eax
  volatile LONG *v20; // ebx
  volatile LONG *v21; // ebx
  int v22; // ebp
  char *v23; // ecx
  int v24; // edx
  double v25; // st7
  _DWORD *v26; // esi
  volatile LONG *v27; // edi
  _DWORD *v28; // eax
  NiObjectVtbl *v29; // ecx
  NiObjectVtbl *v30; // ebx
  _DWORD *v31; // edx
  void *v32; // ebp
  NiObjectVtbl *v33; // ebx
  float *v34; // ebp
  int v35; // eax
  UInt16 *v36; // edi
  bool v37; // cc
  NiTriShapeData *v38; // eax
  void *v39; // eax
  NiObject *v40; // eax
  int vftable_low; // ecx
  NiObjectVtbl *vftable; // edi
  NiObjectVtbl *v43; // edx
  int v44; // eax
  int v45; // eax
  unsigned int v46; // ebp
  volatile LONG *v47; // eax
  __int64 v48; // rax
  int v49; // ebp
  int v50; // ecx
  int v51; // eax
  __int16 v52; // dx
  int Destructor_low; // edi
  UInt16 *v54; // edx
  int v55; // ebp
  __int16 v56; // ax
  volatile LONG *v57; // eax
  NiObjectVtbl *v58; // edx
  __int16 Destructor; // ax
  NiTriBasedGeomData *v60; // eax
  int ***v61; // ebx
  NiProperty *NiPropertyByID; // eax
  const char *m_pcName; // edx
  int v64; // eax
  volatile LONG *v65; // ebp
  volatile LONG *v66; // eax
  volatile LONG *v67; // ebp
  __int16 v68; // cx
  volatile LONG *v69; // eax
  volatile LONG *v70; // ebp
  __int16 v71; // dx
  int **v72; // eax
  int *v73; // edx
  int *v74; // ecx
  float v75; // edx
  _DWORD *v76; // eax
  _DWORD *v77; // ebp
  int v78; // ebx
  int v79; // ebp
  int v80; // ebx
  int v81; // eax
  int v82; // esi
  int v83; // eax
  int v84; // esi
  int ***v85; // ebx
  volatile LONG *v86; // esi
  volatile LONG *v87; // ebx
  volatile LONG *v88; // esi
  volatile LONG *v89; // ebx
  __int16 v90; // cx
  const char **v91; // edi
  const char *v92; // esi
  NiRTTI *v93; // eax
  char v94; // al
  void (__thiscall ***v95)(_DWORD, int); // esi
  size_t v96; // [esp-20h] [ebp-63Ch]
  size_t v97; // [esp-14h] [ebp-630h]
  size_t v98; // [esp-8h] [ebp-624h]
  size_t v99; // [esp+4h] [ebp-618h] BYREF
  NiProperty *v100; // [esp+1Ch] [ebp-600h] BYREF
  int v101; // [esp+20h] [ebp-5FCh]
  volatile LONG *v102; // [esp+24h] [ebp-5F8h]
  void *v103; // [esp+28h] [ebp-5F4h]
  char v104; // [esp+2Fh] [ebp-5EDh]
  NiObjectVtbl *v105; // [esp+30h] [ebp-5ECh]
  int Size; // [esp+34h] [ebp-5E8h]
  int v107; // [esp+38h] [ebp-5E4h]
  void *v108; // [esp+3Ch] [ebp-5E0h]
  char *v109; // [esp+40h] [ebp-5DCh]
  volatile LONG *v110; // [esp+44h] [ebp-5D8h]
  void *Dst; // [esp+48h] [ebp-5D4h]
  volatile LONG *v112; // [esp+4Ch] [ebp-5D0h]
  int v113; // [esp+50h] [ebp-5CCh]
  char *v114; // [esp+54h] [ebp-5C8h]
  int ***v115; // [esp+58h] [ebp-5C4h]
  UInt16 *v116; // [esp+5Ch] [ebp-5C0h]
  void *Src; // [esp+60h] [ebp-5BCh]
  float v118; // [esp+64h] [ebp-5B8h]
  int v119; // [esp+68h] [ebp-5B4h]
  int v120; // [esp+6Ch] [ebp-5B0h] BYREF
  char *v121; // [esp+70h] [ebp-5ACh]
  int v122; // [esp+74h] [ebp-5A8h]
  void *m_uiRefCount; // [esp+78h] [ebp-5A4h]
  void *v124; // [esp+7Ch] [ebp-5A0h]
  void *v125; // [esp+80h] [ebp-59Ch]
  int v126; // [esp+84h] [ebp-598h]
  signed int v127; // [esp+88h] [ebp-594h]
  float *v128; // [esp+8Ch] [ebp-590h]
  NiObjectVtbl *p_Unk_02; // [esp+90h] [ebp-58Ch]
  const char **v130; // [esp+94h] [ebp-588h]
  signed int v131; // [esp+98h] [ebp-584h]
  NiObjectVtbl *v132; // [esp+9Ch] [ebp-580h]
  NiObjectVtbl *v133; // [esp+A0h] [ebp-57Ch]
  int *v134; // [esp+A4h] [ebp-578h]
  int *v135; // [esp+A8h] [ebp-574h]
  int *v136; // [esp+ACh] [ebp-570h]
  float v137; // [esp+B0h] [ebp-56Ch]
  char v138[520]; // [esp+B4h] [ebp-568h] BYREF
  _DWORD *v139; // [esp+2BCh] [ebp-360h]
  int v140; // [esp+53Ch] [ebp-E0h]
  int v141; // [esp+540h] [ebp-DCh]
  char v142[200]; // [esp+544h] [ebp-D8h] BYREF
  unsigned int v143; // [esp+618h] [ebp-4h]

  v1 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] == 0; /*0x7b2ae4*/
  v130 = (const char **)a1; /*0x7b2aea*/
  if ( v1 ) /*0x7b2af1*/
    return 0; /*0x7b2af1*/
  v115 = 0; /*0x7b2afc*/
  NiStream::NiStream((NiStream *)v138); /*0x7b2b00*/
  *(_DWORD *)v138 = &BSStream::`vftable'; /*0x7b2b05*/
  v141 = 0; /*0x7b2b10*/
  v140 = 0; /*0x7b2b17*/
  v2 = *(_DWORD *)(a1 + 8); /*0x7b2b1e*/
  v143 = 0; /*0x7b2b23*/
  if ( !v2 ) /*0x7b2b2a*/
  {
    v143 = 0xFFFFFFFF; /*0x7b2b33*/
    BSStream::~BSStream((BSStream *)v138); /*0x7b2b3e*/
    return 0; /*0x7b2b45*/
  }
  v120 = 0; /*0x7b2b4a*/
  LOBYTE(v143) = 1; /*0x7b2b59*/
  if ( !sub_4A1AB0(&off_B2C34C, v2, &v120) )
  {
    if ( !*(_DWORD *)(a1 + 4) ) /*0x7b2b6e*/
    {
      if ( *(_DWORD *)a1 ) /*0x7b2b73*/
      {
        if ( sub_6F9980(v138, *(char **)a1, 0) ) /*0x7b2b82*/
        {
          if ( *v139 ) /*0x7b2b92*/
            *(_DWORD *)(a1 + 4) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v139 + 8))(*v139); /*0x7b2b9f*/
        }
      }
    }
    v4 = *(_DWORD *)(a1 + 4); /*0x7b2ba2*/
    if ( v4 )
    {
      do /*0x7b2bbf*/
LABEL_12:
        v5 = 0; /*0x7b2bb4*/
      while ( !*(_WORD *)(v4 + 0xB6) ); /*0x7b2bbf*/
      while ( 1 ) /*0x7b2bcb*/
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v5); /*0x7b2bcb*/
        if ( v6 ) /*0x7b2bd0*/
        {
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xC))(v6); /*0x7b2bd9*/
          v115 = (int ***)v7; /*0x7b2bdd*/
          if ( v7 ) /*0x7b2be1*/
            break; /*0x7b2be1*/
        }
        if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v5 ) /*0x7b2bef*/
          goto LABEL_12; /*0x7b2bef*/
      }
      v8 = NiRTTI_Cast((BSStringT *)&stru_B3FD04, (NiObject *)v7); /*0x7b2bfb*/
      v9 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ? 0x50 : 0xE4;
      v107 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ? 0x50 : 0xE4;
      if ( v8 )
      {
        LODWORD(v99) = *(_DWORD *)(v7 + 0xB4); /*0x7b2feb*/
        v104 = 1; /*0x7b2ff1*/
        v40 = NiRTTI_Cast((BSStringT *)&stru_B3FD0C, (NiObject *)v99); /*0x7b2ff6*/
        vftable_low = LOWORD(v40[1].__vftable); /*0x7b2ffe*/
        vftable = v40[9].__vftable; /*0x7b3002*/
        Src = (void *)v40[3].members.m_uiRefCount; /*0x7b3005*/
        v124 = v40[4].__vftable; /*0x7b300c*/
        m_uiRefCount = (void *)v40[4].members.m_uiRefCount; /*0x7b3013*/
        v43 = v40[5].__vftable; /*0x7b3017*/
        v116 = (UInt16 *)v40[9].members.m_uiRefCount; /*0x7b301d*/
        v125 = v43; /*0x7b3021*/
        v14 = (unsigned __int16)vftable_low; /*0x7b302d*/
        v44 = 0xFFFF / (unsigned __int16)vftable_low; /*0x7b3031*/
        v113 = vftable_low; /*0x7b3036*/
        v105 = vftable; /*0x7b303a*/
        if ( v9 >= (unsigned __int16)v44 ) /*0x7b3041*/
        {
          v9 = 0xFFFF / (unsigned __int16)vftable_low; /*0x7b3043*/
          v107 = (unsigned __int16)v44; /*0x7b3046*/
        }
        v45 = 0xFFFF / (LOWORD(vftable->super.Destructor) + (((int)vftable->super.Destructor & 1) != 0) + 2); /*0x7b306d*/
        if ( v9 >= (unsigned __int16)v45 ) /*0x7b3072*/
        {
          v9 = 0xFFFF / (LOWORD(vftable->super.Destructor) + (((int)vftable->super.Destructor & 1) != 0) + 2); /*0x7b3074*/
          v107 = (unsigned __int16)v45; /*0x7b3077*/
        }
        v17 = v9; /*0x7b307b*/
        v46 = (unsigned __int16)vftable_low * v9; /*0x7b3080*/
        v119 = FormHeapAlloc((0xC * (unsigned __int64)v46) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v46);
        v114 = (char *)FormHeapAlloc((0xC * (unsigned __int64)v46) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v46);
        v47 = (volatile LONG *)FormHeapAlloc(v46 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v46);
        v102 = v47; /*0x7b30d6*/
        LOBYTE(v143) = 4; /*0x7b30dc*/
        if ( v47 ) /*0x7b30e4*/
        {
          sub_401080((void *)v47, 0x10, v14 * v9, (void *(__thiscall *)(void *))sub_47EA50); /*0x7b30ef*/
          v110 = v102; /*0x7b30f8*/
        }
        else
        {
          v110 = 0; /*0x7b30fe*/
        }
        LOBYTE(v143) = 1; /*0x7b3114*/
        v102 = (volatile LONG *)FormHeapAlloc(v46 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v46);
        v121 = (char *)FormHeapAlloc(v46 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v46);
        v48 = 2LL /*0x7b3180*/
            * (LOWORD(v105->super.Destructor)
             + (unsigned __int16)(LOWORD(v105->super.Destructor) + (((int)v105->super.Destructor & 1) != 0) + 2)
             * ((unsigned int)v9 - 1));
        v49 = 0; /*0x7b318f*/
        v112 = (volatile LONG *)FormHeapAlloc(HIDWORD(v48) != 0 ? 0xFFFFFFFF : v48);
        v101 = 0; /*0x7b319a*/
        if ( v9 ) /*0x7b319e*/
        {
          Size = 0x10 * v14; /*0x7b31b1*/
          v109 = v121; /*0x7b31be*/
          v103 = (void *)v102; /*0x7b31c6*/
          v122 = v9 - 1; /*0x7b31d5*/
          v108 = (void *)v110; /*0x7b31d9*/
          Dst = v114; /*0x7b31dd*/
          v100 = (NiProperty *)(v119 - (_DWORD)v114); /*0x7b31e1*/
          do /*0x7b333a*/
          {
            LODWORD(v99) = 0xC * v14; /*0x7b31fc*/
            memcpy((char *)v100 + (_DWORD)Dst, Src, v99); /*0x7b3201*/
            LODWORD(v98) = 0xC * v14; /*0x7b320d*/
            memcpy(Dst, v124, v98); /*0x7b3210*/
            LODWORD(v97) = Size; /*0x7b3224*/
            memcpy(v108, m_uiRefCount, v97); /*0x7b3227*/
            LODWORD(v96) = 8 * v14; /*0x7b3237*/
            memcpy(v103, v125, v96); /*0x7b3241*/
            if ( v14 > 0 ) /*0x7b324b*/
            {
              v118 = (float)v101; /*0x7b3257*/
              memset32(v109, SLODWORD(v118), v14); /*0x7b325f*/
            }
            v50 = (int)v112; /*0x7b3265*/
            v51 = 0; /*0x7b3269*/
            if ( LOWORD(v105->super.Destructor) ) /*0x7b326b*/
            {
              v52 = v113 * v101; /*0x7b3274*/
              do /*0x7b3297*/
                *(_WORD *)(v50 + 2 * v49++) = v52 + v116[v51++]; /*0x7b3284*/
              while ( v51 < LOWORD(v105->super.Destructor) ); /*0x7b3297*/
            }
            if ( v101 < v122 ) /*0x7b32a1*/
            {
              Destructor_low = LOWORD(v105->super.Destructor); /*0x7b32a7*/
              v54 = v116; /*0x7b32aa*/
              LODWORD(v118) = (unsigned __int16)v101; /*0x7b32b1*/
              v55 = v49 + 1; /*0x7b32bf*/
              *(_WORD *)(v50 + 2 * v55 - 2) = v116[Destructor_low - 1] + v113 * v101; /*0x7b32c2*/
              v56 = v113 * (LOWORD(v118) + 1); /*0x7b32d1*/
              *(_WORD *)(v50 + 2 * v55) = v56 + *v54; /*0x7b32d9*/
              v49 = v55 + 1; /*0x7b32e4*/
              if ( ((int)v105->super.Destructor & 1) == 1 ) /*0x7b32f7*/
                *(_WORD *)(v50 + 2 * v49++) = v56 + *v54; /*0x7b32ff*/
            }
            v108 = (char *)v108 + Size; /*0x7b330a*/
            v17 = (unsigned __int16)v107; /*0x7b3312*/
            Dst = (char *)Dst + 0xC * v14; /*0x7b3317*/
            v103 = (char *)v103 + 8 * v14; /*0x7b3322*/
            v109 += 4 * v14; /*0x7b3330*/
            ++v101; /*0x7b3336*/
          }
          while ( v101 < (unsigned __int16)v107 ); /*0x7b333a*/
          v9 = v107; /*0x7b3340*/
        }
        v57 = (volatile LONG *)FormHeapAlloc(2u); /*0x7b3346*/
        v58 = v105; /*0x7b334b*/
        v100 = (NiProperty *)v57; /*0x7b334f*/
        *(_WORD *)v57 = v49; /*0x7b3353*/
        Destructor = (__int16)v58->super.Destructor; /*0x7b3356*/
        if ( ((int)v58->super.Destructor & 1) == 1 ) /*0x7b336e*/
          v103 = (void *)(unsigned __int16)(Destructor + 3); /*0x7b3376*/
        else
          v103 = (void *)(unsigned __int16)(Destructor + 2); /*0x7b3382*/
        v60 = (NiTriBasedGeomData *)FormHeapAlloc(0x54u); /*0x7b3388*/
        Src = v60; /*0x7b3390*/
        LOBYTE(v143) = 5; /*0x7b3396*/
        if ( v60 ) /*0x7b339e*/
        {
          v39 = sub_73B430( /*0x7b33d8*/
                  v60,
                  v113 * v9,
                  v119,
                  (int)v114,
                  (int)v110,
                  (int)v102,
                  1,
                  0,
                  v49 - 2,
                  1,
                  (int)v100,
                  (int)v112,
                  v113 * v9,
                  0);
          goto LABEL_64; /*0x7b33dd*/
        }
      }
      else
      {
        v104 = 0; /*0x7b2c2d*/
        NiRTTI_Cast((BSStringT *)&stru_B3FCD4, (NiObject *)v7); /*0x7b2c32*/
        v10 = NiRTTI_Cast((BSStringT *)&stru_B3FD2C, *(NiObject **)(v7 + 0xB4)); /*0x7b2c43*/
        v11 = LOWORD(v10[1].__vftable); /*0x7b2c4b*/
        v12 = v10[8].members.m_uiRefCount; /*0x7b2c4f*/
        v118 = *(float *)&v10[3].members.m_uiRefCount; /*0x7b2c52*/
        v132 = v10[4].__vftable; /*0x7b2c59*/
        v122 = v10[4].members.m_uiRefCount; /*0x7b2c63*/
        v13 = v10[5].__vftable; /*0x7b2c67*/
        Src = v10[9].__vftable; /*0x7b2c6d*/
        v133 = v13; /*0x7b2c71*/
        v14 = (unsigned __int16)v11; /*0x7b2c78*/
        v15 = 0xFFFF / (unsigned __int16)v11; /*0x7b2c81*/
        v113 = v11; /*0x7b2c86*/
        v131 = (unsigned __int16)v11; /*0x7b2c8a*/
        if ( v9 >= (unsigned __int16)v15 ) /*0x7b2c94*/
        {
          v9 = 0xFFFF / (unsigned __int16)v11; /*0x7b2c96*/
          v107 = (unsigned __int16)v15; /*0x7b2c99*/
        }
        v16 = 0xFFFF / (unsigned __int16)v12; /*0x7b2ca6*/
        v101 = (unsigned __int16)v12; /*0x7b2ca8*/
        if ( v9 >= (unsigned __int16)v16 ) /*0x7b2caf*/
        {
          v9 = 0xFFFF / (unsigned __int16)v12; /*0x7b2cb1*/
          v107 = (unsigned __int16)v16; /*0x7b2cb4*/
        }
        v17 = v9; /*0x7b2cb8*/
        v18 = (unsigned __int16)v11 * v9; /*0x7b2cbd*/
        v102 = (volatile LONG *)FormHeapAlloc((0xC * (unsigned __int64)v18) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v18);
        Dst = (void *)FormHeapAlloc((0xC * (unsigned __int64)v18) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v18);
        v19 = (volatile LONG *)FormHeapAlloc(v18 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v18);
        v20 = v19; /*0x7b2d10*/
        v100 = (NiProperty *)v19; /*0x7b2d15*/
        LOBYTE(v143) = 2; /*0x7b2d1b*/
        if ( v19 ) /*0x7b2d23*/
        {
          sub_401080((void *)v19, 0x10, v18, (void *(__thiscall *)(void *))sub_47EA50); /*0x7b2d2e*/
          v108 = (void *)v20; /*0x7b2d33*/
        }
        else
        {
          v108 = 0; /*0x7b2d39*/
        }
        LOBYTE(v143) = 1; /*0x7b2d4f*/
        v21 = (volatile LONG *)FormHeapAlloc(v18 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v18);
        v100 = (NiProperty *)v21; /*0x7b2d71*/
        v121 = (char *)FormHeapAlloc(v18 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v18);
        v22 = 0; /*0x7b2da0*/
        v116 = (UInt16 *)FormHeapAlloc((unsigned int)(v101 * v17) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v101 * v17);
        v119 = 0; /*0x7b2dab*/
        v126 = 0; /*0x7b2daf*/
        if ( v17 > 0 ) /*0x7b2db3*/
        {
          v23 = 0; /*0x7b2dbe*/
          v24 = 0xC * v14; /*0x7b2dc0*/
          Size = 0x10 * v14; /*0x7b2dc7*/
          v103 = Dst; /*0x7b2dcf*/
          v109 = (char *)v108; /*0x7b2dd7*/
          v114 = 0; /*0x7b2ddf*/
          v124 = (void *)(0xC * v14); /*0x7b2de3*/
          v112 = v21; /*0x7b2de7*/
          v110 = (volatile LONG *)v121; /*0x7b2deb*/
          do /*0x7b2f6f*/
          {
            if ( v14 > 0 ) /*0x7b2df2*/
            {
              *(float *)&v125 = (float)v126; /*0x7b2e0f*/
              v25 = *(float *)&v125; /*0x7b2e17*/
              v26 = (_DWORD *)v122; /*0x7b2e1b*/
              v27 = v112; /*0x7b2e1f*/
              v28 = v103; /*0x7b2e23*/
              p_Unk_02 = v133; /*0x7b2e27*/
              v29 = v132; /*0x7b2e2e*/
              m_uiRefCount = (void *)((char *)v102 - (_BYTE *)Dst); /*0x7b2e35*/
              v30 = (NiObjectVtbl *)(LODWORD(v118) - (_DWORD)v132); /*0x7b2e40*/
              v128 = (float *)v110; /*0x7b2e42*/
              v31 = v109; /*0x7b2e49*/
              v105 = (NiObjectVtbl *)(LODWORD(v118) - (_DWORD)v132); /*0x7b2e4d*/
              v127 = v131; /*0x7b2e51*/
              while ( 1 ) /*0x7b2e61*/
              {
                v32 = m_uiRefCount; /*0x7b2e61*/
                *(_DWORD *)((char *)v28 + (_DWORD)m_uiRefCount) = *(void (__thiscall **)(NiRefObject *, bool))((char *)&v29->super.Destructor + (_DWORD)v30); /*0x7b2e65*/
                *(_DWORD *)((char *)v28 + (_DWORD)v32 + 4) = *(NiRTTI *(__thiscall **)(NiObject *))((char *)&v29->GetType /*0x7b2e71*/
                                                                                                  + (_DWORD)v105);
                *(_DWORD *)((char *)v28 + (_DWORD)v32 + 8) = *(NiObject *(__thiscall **)(NiObject *))((char *)&v29->Unk_02 + (_DWORD)v105); /*0x7b2e7d*/
                *v28 = v29->super.Destructor; /*0x7b2e85*/
                v28[1] = v29->GetType; /*0x7b2e8a*/
                v28[2] = v29->Unk_02; /*0x7b2e90*/
                *v31 = *v26; /*0x7b2e95*/
                v31[1] = v26[1]; /*0x7b2e9a*/
                v31[2] = v26[2]; /*0x7b2ea0*/
                v31[3] = v26[3]; /*0x7b2ea6*/
                v33 = p_Unk_02; /*0x7b2ea9*/
                *v27 = (volatile LONG)p_Unk_02->super.Destructor; /*0x7b2eb2*/
                *((_DWORD *)v27 + 1) = v33->GetType; /*0x7b2eb7*/
                v34 = v128; /*0x7b2eba*/
                *v128 = v25; /*0x7b2ec1*/
                v28 += 3; /*0x7b2eca*/
                v29 = (NiObjectVtbl *)((char *)v29 + 0xC); /*0x7b2ecd*/
                v31 += 4; /*0x7b2ed0*/
                v26 += 4; /*0x7b2ed3*/
                v27 += 2; /*0x7b2ed6*/
                v1 = v127-- == 1; /*0x7b2ed9*/
                v128 = v34 + 1; /*0x7b2ee1*/
                p_Unk_02 = (NiObjectVtbl *)&v33->Unk_02; /*0x7b2ee8*/
                if ( v1 ) /*0x7b2eef*/
                  break; /*0x7b2eef*/
                v30 = v105; /*0x7b2e5a*/
              }
              v22 = v119; /*0x7b2ef5*/
              v14 = v131; /*0x7b2efb*/
              v23 = v114; /*0x7b2f02*/
              v24 = (int)v124; /*0x7b2f06*/
            }
            v35 = 0; /*0x7b2f0a*/
            if ( v101 > 0 ) /*0x7b2f10*/
            {
              v36 = v116; /*0x7b2f12*/
              do /*0x7b2f2f*/
                v36[v22++] = (_WORD)v23 + *((_WORD *)Src + v35++); /*0x7b2f21*/
              while ( v35 < v101 ); /*0x7b2f2f*/
              v119 = v22; /*0x7b2f31*/
            }
            v17 = (unsigned __int16)v107; /*0x7b2f39*/
            v103 = (char *)v103 + v24; /*0x7b2f3e*/
            v110 += v14; /*0x7b2f49*/
            v112 += 2 * v14; /*0x7b2f54*/
            v109 += Size; /*0x7b2f5c*/
            v23 += v14; /*0x7b2f63*/
            v37 = ++v126 < (unsigned __int16)v107; /*0x7b2f65*/
            v114 = v23; /*0x7b2f6b*/
          }
          while ( v37 ); /*0x7b2f6f*/
        }
        v103 = (void *)(unsigned __int16)(v101 / 3); /*0x7b2f8a*/
        v38 = (NiTriShapeData *)FormHeapAlloc(0x5Cu); /*0x7b2f8e*/
        Src = v38; /*0x7b2f96*/
        LOBYTE(v143) = 3; /*0x7b2f9c*/
        if ( v38 )
        {
          v39 = sub_72AB00( /*0x7b2fdb*/
                  v38,
                  v113 * v107,
                  (int)v102,
                  (int)Dst,
                  (int)v108,
                  (int)v100,
                  1,
                  0,
                  v107 * (v101 / 3),
                  v116,
                  v113 * v107,
                  0);
LABEL_64:
          Size = (int)v39; /*0x7b33e1*/
          v101 = 0; /*0x7b33e5*/
          v61 = v115; /*0x7b33ed*/
          LOBYTE(v143) = 6; /*0x7b33f5*/
          NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v115, 6); /*0x7b33fd*/
          if ( NiPropertyByID ) /*0x7b3404*/
          {
            m_pcName = NiPropertyByID[1].members.m_pcName; /*0x7b3406*/
            if ( *(_DWORD *)m_pcName ) /*0x7b3409*/
            {
              v64 = *(_DWORD *)(*(_DWORD *)m_pcName + 8); /*0x7b340f*/
              if ( v64 ) /*0x7b3414*/
              {
                v101 = *(_DWORD *)(*(_DWORD *)m_pcName + 8); /*0x7b3416*/
                InterlockedIncrement((volatile LONG *)(v64 + 4)); /*0x7b341e*/
              }
            }
          }
          sub_708560(v115, (volatile LONG **)&v100, 0); /*0x7b342d*/
          v65 = (volatile LONG *)v100; /*0x7b3432*/
          if ( v100 ) /*0x7b3438*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&v100->members) ) /*0x7b343e*/
            {
              if ( v65 ) /*0x7b344a*/
                (**(void (__thiscall ***)(volatile LONG *, int))v65)(v65, 1); /*0x7b3455*/
            }
          }
          v66 = (volatile LONG *)FormHeapAlloc(0x1Cu); /*0x7b3459*/
          v67 = v66; /*0x7b345e*/
          v100 = (NiProperty *)v66; /*0x7b3463*/
          LOBYTE(v143) = 7; /*0x7b3469*/
          if ( v66 ) /*0x7b3471*/
          {
            NiObjectNET::NiObjectNET((NiObjectNET *)v66); /*0x7b3475*/
            *v67 = (volatile LONG)&NiAlphaProperty::`vftable'; /*0x7b347a*/
            *((_WORD *)v67 + 0xC) = 0xEC; /*0x7b3481*/
            *((_BYTE *)v67 + 0x1A) = 0; /*0x7b3487*/
          }
          else
          {
            v67 = 0; /*0x7b348d*/
          }
          v68 = v67[6] & 0xE1FE | 0x1201; /*0x7b3498*/
          LODWORD(v99) = 0x1C; /*0x7b349d*/
          v102 = v67; /*0x7b349f*/
          LOBYTE(v143) = 6; /*0x7b34a3*/
          *((_BYTE *)v67 + 0x1A) = 0; /*0x7b34ab*/
          *((_WORD *)v67 + 0xC) = v68; /*0x7b34af*/
          v69 = (volatile LONG *)FormHeapAlloc(v99); /*0x7b34b3*/
          v70 = v69; /*0x7b34b8*/
          v100 = (NiProperty *)v69; /*0x7b34bd*/
          LOBYTE(v143) = 8; /*0x7b34c3*/
          if ( v69 ) /*0x7b34cb*/
          {
            NiObjectNET::NiObjectNET((NiObjectNET *)v69); /*0x7b34cf*/
            *v70 = (volatile LONG)&NiAlphaProperty::`vftable'; /*0x7b34d4*/
            *((_WORD *)v70 + 0xC) = 0xEC; /*0x7b34db*/
            *((_BYTE *)v70 + 0x1A) = 0; /*0x7b34e1*/
          }
          else
          {
            v70 = 0; /*0x7b34e7*/
          }
          v71 = v70[6] & 0xE1FE | 0x1200; /*0x7b34f2*/
          LODWORD(v99) = 5; /*0x7b34f7*/
          v115 = (int ***)v70; /*0x7b34fb*/
          LOBYTE(v143) = 6; /*0x7b34ff*/
          *((_BYTE *)v70 + 0x1A) = 0; /*0x7b3507*/
          *((_WORD *)v70 + 0xC) = v71; /*0x7b350b*/
          v100 = NiNode_GetNiPropertyByID((NiNode *)v61, v99); /*0x7b3514*/
          v72 = v61[0x2D]; /*0x7b3518*/
          v73 = v72[4]; /*0x7b3521*/
          v134 = v72[3]; /*0x7b3524*/
          v74 = v72[5]; /*0x7b352b*/
          v135 = v73; /*0x7b352e*/
          v75 = *((float *)v72 + 6); /*0x7b3535*/
          v136 = v74; /*0x7b353a*/
          v137 = v75; /*0x7b3541*/
          v76 = (_DWORD *)FormHeapAlloc(0x34u); /*0x7b3548*/
          v77 = v76; /*0x7b354d*/
          v78 = 0; /*0x7b3552*/
          if ( v76 ) /*0x7b3556*/
          {
            LODWORD(v99) = &MEMORY[0xB3FD64]; /*0x7b3558*/
            *v76 = &NiRefObject::`vftable'; /*0x7b355d*/
            v76[1] = 0; /*0x7b3564*/
            InterlockedIncrement((volatile LONG *)v99); /*0x7b3567*/
            *v77 = &DistantLODShaderProperty::CachedGeometry::`vftable'; /*0x7b356d*/
            v77[2] = 0; /*0x7b3574*/
            v77[6] = 0; /*0x7b3577*/
            v77[7] = 0; /*0x7b357a*/
            v77[8] = 0; /*0x7b357d*/
            v77[9] = 0; /*0x7b3580*/
            v78 = (int)v77; /*0x7b3583*/
          }
          v79 = v120; /*0x7b3585*/
          if ( v120 != v78 ) /*0x7b358b*/
          {
            if ( v120 ) /*0x7b358f*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v120 + 4)) ) /*0x7b3595*/
                (**(void (__thiscall ***)(int, int))v79)(v79, 1); /*0x7b35a8*/
            }
            v79 = v78; /*0x7b35ac*/
            v120 = v78; /*0x7b35ae*/
            if ( v78 ) /*0x7b35b2*/
              InterlockedIncrement((volatile LONG *)(v78 + 4)); /*0x7b35b8*/
          }
          *(_BYTE *)(v79 + 0xC) = v104; /*0x7b35c2*/
          v80 = *(_DWORD *)(v79 + 8); /*0x7b35c5*/
          if ( v80 != Size ) /*0x7b35cc*/
          {
            if ( v80 ) /*0x7b35d0*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v80 + 4)) ) /*0x7b35d6*/
                (**(void (__thiscall ***)(int, int))v80)(v80, 1); /*0x7b35ec*/
            }
            v81 = Size; /*0x7b35ee*/
            v1 = Size == 0; /*0x7b35f2*/
            *(_DWORD *)(v79 + 8) = Size; /*0x7b35f4*/
            if ( !v1 ) /*0x7b35f7*/
              InterlockedIncrement((volatile LONG *)(v81 + 4)); /*0x7b35fd*/
          }
          *(_DWORD *)(v79 + 0x10) = v121; /*0x7b3607*/
          *(_DWORD *)(v79 + 0x14) = v14; /*0x7b360a*/
          v82 = *(_DWORD *)(v79 + 0x18); /*0x7b360d*/
          if ( v82 != v101 ) /*0x7b3614*/
          {
            if ( v82 ) /*0x7b3618*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v82 + 4)) ) /*0x7b361e*/
                (**(void (__thiscall ***)(int, int))v82)(v82, 1); /*0x7b3634*/
            }
            v83 = v101; /*0x7b3636*/
            v1 = v101 == 0; /*0x7b363a*/
            *(_DWORD *)(v79 + 0x18) = v101; /*0x7b363c*/
            if ( !v1 ) /*0x7b363f*/
              InterlockedIncrement((volatile LONG *)(v83 + 4)); /*0x7b3645*/
          }
          v84 = *(_DWORD *)(v79 + 0x20); /*0x7b364b*/
          v85 = v115; /*0x7b364e*/
          if ( (int ***)v84 != v115 ) /*0x7b3654*/
          {
            if ( v84 ) /*0x7b3658*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v84 + 4)) ) /*0x7b365e*/
                (**(void (__thiscall ***)(int, int))v84)(v84, 1); /*0x7b3674*/
            }
            *(_DWORD *)(v79 + 0x20) = v85; /*0x7b3676*/
            InterlockedIncrement((volatile LONG *)v85 + 1); /*0x7b367d*/
          }
          v86 = *(volatile LONG **)(v79 + 0x1C); /*0x7b3683*/
          v87 = v102; /*0x7b3686*/
          if ( v86 != v102 ) /*0x7b368c*/
          {
            if ( v86 ) /*0x7b3690*/
            {
              if ( !InterlockedDecrement(v86 + 1) ) /*0x7b3696*/
                (**(void (__thiscall ***)(void *, int))v86)((void *)v86, 1); /*0x7b36ac*/
            }
            *(_DWORD *)(v79 + 0x1C) = v87; /*0x7b36ae*/
            InterlockedIncrement(v87 + 1); /*0x7b36b5*/
          }
          v88 = *(volatile LONG **)(v79 + 0x24); /*0x7b36bb*/
          v89 = (volatile LONG *)v100; /*0x7b36be*/
          if ( v88 != (volatile LONG *)v100 ) /*0x7b36c4*/
          {
            if ( v88 ) /*0x7b36c8*/
            {
              if ( !InterlockedDecrement(v88 + 1) ) /*0x7b36ce*/
                (**(void (__thiscall ***)(volatile LONG *, int))v88)(v88, 1); /*0x7b36e4*/
            }
            *(_DWORD *)(v79 + 0x24) = v89; /*0x7b36e8*/
            if ( v89 ) /*0x7b36eb*/
              InterlockedIncrement(v89 + 1); /*0x7b36f1*/
          }
          v90 = (__int16)v103; /*0x7b36fe*/
          *(float *)(v79 + 0x28) = v137; /*0x7b3703*/
          *(_DWORD *)(v79 + 0x2C) = v17; /*0x7b3706*/
          v91 = v130; /*0x7b3709*/
          *(_WORD *)(v79 + 0x32) = v90; /*0x7b3710*/
          *(_BYTE *)(v79 + 0x30) = 0; /*0x7b3714*/
          v92 = v91[1]; /*0x7b3718*/
          if ( v92 )
          {
            v93 = (NiRTTI *)(*(int (__thiscall **)(const char *))(*(_DWORD *)v92 + 4))(v91[1]); /*0x7b3726*/
            if ( v93 ) /*0x7b372a*/
            {
              while ( v93 != &stru_B3FD4C ) /*0x7b3735*/
              {
                v93 = v93->parent; /*0x7b3737*/
                if ( !v93 ) /*0x7b373c*/
                  goto LABEL_118; /*0x7b373c*/
              }
              v94 = 1; /*0x7b3797*/
            }
            else
            {
LABEL_118:
              v94 = 0; /*0x7b373e*/
            }
            if ( (v94 != 0 ? (unsigned int)v92 : 0) != 0 )
              *(_BYTE *)(v79 + 0x30) = 1; /*0x7b3748*/
          }
          v100 = (NiProperty *)&v99; /*0x7b3752*/
          LODWORD(v99) = v79; /*0x7b3757*/
          InterlockedIncrement((volatile LONG *)(v79 + 4)); /*0x7b3759*/
          sub_7B2180(&off_B2C34C, (int)v91[2], v99, SHIDWORD(v99)); /*0x7b3768*/
          v95 = (void (__thiscall ***)(_DWORD, int))v101; /*0x7b376d*/
          LOBYTE(v143) = 1; /*0x7b3773*/
          if ( v101 ) /*0x7b377b*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v101 + 4)) ) /*0x7b3781*/
              (**v95)(v95, 1); /*0x7b3793*/
          }
          goto LABEL_126; /*0x7b3795*/
        }
      }
      v39 = 0; /*0x7b33df*/
      goto LABEL_64; /*0x7b33df*/
    }
  }
  v79 = v120; /*0x7b379b*/
LABEL_126:
  if ( !v79 )
  {
    _sprintf(v142, "DISTANT LOD ERROR : could not load DistantLOD nif %s", *v130);
    if ( unk_B42E8C ) /*0x7b37bf*/
      unk_B42E8C(v142, 0); /*0x7b37d4*/
  }
  LOBYTE(v143) = 0; /*0x7b37db*/
  if ( v79 ) /*0x7b37e3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v79 + 4)) ) /*0x7b37e9*/
      (**(void (__thiscall ***)(int, int))v79)(v79, 1); /*0x7b37fc*/
  }
  v143 = 0xFFFFFFFF; /*0x7b3805*/
  BSStream::~BSStream((BSStream *)v138); /*0x7b3810*/
  return (volatile LONG *)v79; /*0x7b3817*/
}
