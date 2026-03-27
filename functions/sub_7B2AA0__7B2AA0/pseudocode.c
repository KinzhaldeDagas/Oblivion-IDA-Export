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
  NiNode *v61; // ebx
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
  float *v72; // eax
  int v73; // edx
  int v74; // ecx
  float v75; // edx
  _DWORD *v76; // eax
  _DWORD *v77; // ebp
  int v78; // ebx
  int v79; // ebp
  int v80; // ebx
  int v81; // eax
  int v82; // esi
  int v83; // eax
  NiNode *v84; // esi
  NiNode *v85; // ebx
  volatile LONG *v86; // esi
  volatile LONG *v87; // ebx
  volatile LONG *v88; // esi
  volatile LONG *v89; // ebx
  __int16 v90; // cx
  const char **v91; // edi
  const char *v92; // esi
  int v93; // eax
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
  NiNode *v115; // [esp+58h] [ebp-5C4h]
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
  int v134; // [esp+A4h] [ebp-578h]
  int v135; // [esp+A8h] [ebp-574h]
  int v136; // [esp+ACh] [ebp-570h]
  float v137; // [esp+B0h] [ebp-56Ch]
  char v138[520]; // [esp+B4h] [ebp-568h] BYREF
  _DWORD *v139; // [esp+2BCh] [ebp-360h]
  int v140; // [esp+53Ch] [ebp-E0h]
  int v141; // [esp+540h] [ebp-DCh]
  char v142[200]; // [esp+544h] [ebp-D8h] BYREF
  unsigned int v143; // [esp+618h] [ebp-4h]

  v1 = ShaderPackage == 0;
  v130 = (const char **)a1;
  if ( v1 )
    return 0;
  v115 = 0;
  NiStream::NiStream((NiStream *)v138);
  *(_DWORD *)v138 = &BSStream::`vftable';
  v141 = 0;
  v140 = 0;
  v2 = *(_DWORD *)(a1 + 8);
  v143 = 0;
  if ( !v2 )
  {
    v143 = 0xFFFFFFFF;
    BSStream::~BSStream((BSStream *)v138);
    return 0;
  }
  v120 = 0;
  LOBYTE(v143) = 1;
  if ( !sub_4A1AB0(&off_B2C34C, v2, &v120) )
  {
    if ( !*(_DWORD *)(a1 + 4) )
    {
      if ( *(_DWORD *)a1 )
      {
        if ( sub_6F9980(v138, *(char **)a1, 0) )
        {
          if ( *v139 )
            *(_DWORD *)(a1 + 4) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v139 + 8))(*v139);
        }
      }
    }
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 )
    {
      do
LABEL_12:
        v5 = 0;
      while ( !*(_WORD *)(v4 + 0xB6) );
      while ( 1 )
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v5);
        if ( v6 )
        {
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0xC))(v6);
          v115 = (NiNode *)v7;
          if ( v7 )
            break;
        }
        if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v5 )
          goto LABEL_12;
      }
      v8 = NiRTTI_Cast((BSStringT *)dword_B3FD04, (NiObject *)v7);
      v9 = ShaderPackage < 2 ? 0x50 : 0xE4;
      v107 = ShaderPackage < 2 ? 0x50 : 0xE4;
      if ( v8 )
      {
        LODWORD(v99) = *(_DWORD *)(v7 + 0xB4);
        v104 = 1;
        v40 = NiRTTI_Cast((BSStringT *)dword_B3FD0C, (NiObject *)v99);
        vftable_low = LOWORD(v40[1].__vftable);
        vftable = v40[9].__vftable;
        Src = (void *)v40[3].members.m_uiRefCount;
        v124 = v40[4].__vftable;
        m_uiRefCount = (void *)v40[4].members.m_uiRefCount;
        v43 = v40[5].__vftable;
        v116 = (UInt16 *)v40[9].members.m_uiRefCount;
        v125 = v43;
        v14 = (unsigned __int16)vftable_low;
        v44 = 0xFFFF / (unsigned __int16)vftable_low;
        v113 = vftable_low;
        v105 = vftable;
        if ( v9 >= (unsigned __int16)v44 )
        {
          v9 = 0xFFFF / (unsigned __int16)vftable_low;
          v107 = (unsigned __int16)v44;
        }
        v45 = 0xFFFF / (LOWORD(vftable->super.Destructor) + (((int)vftable->super.Destructor & 1) != 0) + 2);
        if ( v9 >= (unsigned __int16)v45 )
        {
          v9 = 0xFFFF / (LOWORD(vftable->super.Destructor) + (((int)vftable->super.Destructor & 1) != 0) + 2);
          v107 = (unsigned __int16)v45;
        }
        v17 = v9;
        v46 = (unsigned __int16)vftable_low * v9;
        v119 = FormHeapAlloc((0xC * (unsigned __int64)v46) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v46);
        v114 = (char *)FormHeapAlloc((0xC * (unsigned __int64)v46) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v46);
        v47 = (volatile LONG *)FormHeapAlloc(v46 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v46);
        v102 = v47;
        LOBYTE(v143) = 4;
        if ( v47 )
        {
          sub_401080((void *)v47, 0x10, v14 * v9, (void *(__thiscall *)(void *))sub_47EA50);
          v110 = v102;
        }
        else
        {
          v110 = 0;
        }
        LOBYTE(v143) = 1;
        v102 = (volatile LONG *)FormHeapAlloc(v46 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v46);
        v121 = (char *)FormHeapAlloc(v46 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v46);
        v48 = 2LL
            * (LOWORD(v105->super.Destructor)
             + (unsigned __int16)(LOWORD(v105->super.Destructor) + (((int)v105->super.Destructor & 1) != 0) + 2)
             * ((unsigned int)v9 - 1));
        v49 = 0;
        v112 = (volatile LONG *)FormHeapAlloc(HIDWORD(v48) != 0 ? 0xFFFFFFFF : v48);
        v101 = 0;
        if ( v9 )
        {
          Size = 0x10 * v14;
          v109 = v121;
          v103 = (void *)v102;
          v122 = v9 - 1;
          v108 = (void *)v110;
          Dst = v114;
          v100 = (NiProperty *)(v119 - (_DWORD)v114);
          do
          {
            LODWORD(v99) = 0xC * v14;
            memcpy((char *)v100 + (_DWORD)Dst, Src, v99);
            LODWORD(v98) = 0xC * v14;
            memcpy(Dst, v124, v98);
            LODWORD(v97) = Size;
            memcpy(v108, m_uiRefCount, v97);
            LODWORD(v96) = 8 * v14;
            memcpy(v103, v125, v96);
            if ( v14 > 0 )
            {
              v118 = (float)v101;
              memset32(v109, SLODWORD(v118), v14);
            }
            v50 = (int)v112;
            v51 = 0;
            if ( LOWORD(v105->super.Destructor) )
            {
              v52 = v113 * v101;
              do
                *(_WORD *)(v50 + 2 * v49++) = v52 + v116[v51++];
              while ( v51 < LOWORD(v105->super.Destructor) );
            }
            if ( v101 < v122 )
            {
              Destructor_low = LOWORD(v105->super.Destructor);
              v54 = v116;
              LODWORD(v118) = (unsigned __int16)v101;
              v55 = v49 + 1;
              *(_WORD *)(v50 + 2 * v55 - 2) = v116[Destructor_low - 1] + v113 * v101;
              v56 = v113 * (LOWORD(v118) + 1);
              *(_WORD *)(v50 + 2 * v55) = v56 + *v54;
              v49 = v55 + 1;
              if ( ((int)v105->super.Destructor & 1) == 1 )
                *(_WORD *)(v50 + 2 * v49++) = v56 + *v54;
            }
            v108 = (char *)v108 + Size;
            v17 = (unsigned __int16)v107;
            Dst = (char *)Dst + 0xC * v14;
            v103 = (char *)v103 + 8 * v14;
            v109 += 4 * v14;
            ++v101;
          }
          while ( v101 < (unsigned __int16)v107 );
          v9 = v107;
        }
        v57 = (volatile LONG *)FormHeapAlloc(2u);
        v58 = v105;
        v100 = (NiProperty *)v57;
        *(_WORD *)v57 = v49;
        Destructor = (__int16)v58->super.Destructor;
        if ( ((int)v58->super.Destructor & 1) == 1 )
          v103 = (void *)(unsigned __int16)(Destructor + 3);
        else
          v103 = (void *)(unsigned __int16)(Destructor + 2);
        v60 = (NiTriBasedGeomData *)FormHeapAlloc(0x54u);
        Src = v60;
        LOBYTE(v143) = 5;
        if ( v60 )
        {
          v39 = sub_73B430(
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
          goto LABEL_64;
        }
      }
      else
      {
        v104 = 0;
        NiRTTI_Cast((BSStringT *)dword_B3FCD4, (NiObject *)v7);
        v10 = NiRTTI_Cast((BSStringT *)dword_B3FD2C, *(NiObject **)(v7 + 0xB4));
        v11 = LOWORD(v10[1].__vftable);
        v12 = v10[8].members.m_uiRefCount;
        v118 = *(float *)&v10[3].members.m_uiRefCount;
        v132 = v10[4].__vftable;
        v122 = v10[4].members.m_uiRefCount;
        v13 = v10[5].__vftable;
        Src = v10[9].__vftable;
        v133 = v13;
        v14 = (unsigned __int16)v11;
        v15 = 0xFFFF / (unsigned __int16)v11;
        v113 = v11;
        v131 = (unsigned __int16)v11;
        if ( v9 >= (unsigned __int16)v15 )
        {
          v9 = 0xFFFF / (unsigned __int16)v11;
          v107 = (unsigned __int16)v15;
        }
        v16 = 0xFFFF / (unsigned __int16)v12;
        v101 = (unsigned __int16)v12;
        if ( v9 >= (unsigned __int16)v16 )
        {
          v9 = 0xFFFF / (unsigned __int16)v12;
          v107 = (unsigned __int16)v16;
        }
        v17 = v9;
        v18 = (unsigned __int16)v11 * v9;
        v102 = (volatile LONG *)FormHeapAlloc((0xC * (unsigned __int64)v18) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v18);
        Dst = (void *)FormHeapAlloc((0xC * (unsigned __int64)v18) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v18);
        v19 = (volatile LONG *)FormHeapAlloc(v18 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v18);
        v20 = v19;
        v100 = (NiProperty *)v19;
        LOBYTE(v143) = 2;
        if ( v19 )
        {
          sub_401080((void *)v19, 0x10, v18, (void *(__thiscall *)(void *))sub_47EA50);
          v108 = (void *)v20;
        }
        else
        {
          v108 = 0;
        }
        LOBYTE(v143) = 1;
        v21 = (volatile LONG *)FormHeapAlloc(v18 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v18);
        v100 = (NiProperty *)v21;
        v121 = (char *)FormHeapAlloc(v18 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v18);
        v22 = 0;
        v116 = (UInt16 *)FormHeapAlloc((unsigned int)(v101 * v17) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v101 * v17);
        v119 = 0;
        v126 = 0;
        if ( v17 > 0 )
        {
          v23 = 0;
          v24 = 0xC * v14;
          Size = 0x10 * v14;
          v103 = Dst;
          v109 = (char *)v108;
          v114 = 0;
          v124 = (void *)(0xC * v14);
          v112 = v21;
          v110 = (volatile LONG *)v121;
          do
          {
            if ( v14 > 0 )
            {
              *(float *)&v125 = (float)v126;
              v25 = *(float *)&v125;
              v26 = (_DWORD *)v122;
              v27 = v112;
              v28 = v103;
              p_Unk_02 = v133;
              v29 = v132;
              m_uiRefCount = (void *)((char *)v102 - (_BYTE *)Dst);
              v30 = (NiObjectVtbl *)(LODWORD(v118) - (_DWORD)v132);
              v128 = (float *)v110;
              v31 = v109;
              v105 = (NiObjectVtbl *)(LODWORD(v118) - (_DWORD)v132);
              v127 = v131;
              while ( 1 )
              {
                v32 = m_uiRefCount;
                *(_DWORD *)((char *)v28 + (_DWORD)m_uiRefCount) = *(void (__thiscall **)(NiRefObject *, bool))((char *)&v29->super.Destructor + (_DWORD)v30);
                *(_DWORD *)((char *)v28 + (_DWORD)v32 + 4) = *(NiRTTI *(__thiscall **)(NiObject *))((char *)&v29->GetType
                                                                                                  + (_DWORD)v105);
                *(_DWORD *)((char *)v28 + (_DWORD)v32 + 8) = *(NiObject *(__thiscall **)(NiObject *))((char *)&v29->Unk_02 + (_DWORD)v105);
                *v28 = v29->super.Destructor;
                v28[1] = v29->GetType;
                v28[2] = v29->Unk_02;
                *v31 = *v26;
                v31[1] = v26[1];
                v31[2] = v26[2];
                v31[3] = v26[3];
                v33 = p_Unk_02;
                *v27 = (volatile LONG)p_Unk_02->super.Destructor;
                *((_DWORD *)v27 + 1) = v33->GetType;
                v34 = v128;
                *v128 = v25;
                v28 += 3;
                v29 = (NiObjectVtbl *)((char *)v29 + 0xC);
                v31 += 4;
                v26 += 4;
                v27 += 2;
                v1 = v127-- == 1;
                v128 = v34 + 1;
                p_Unk_02 = (NiObjectVtbl *)&v33->Unk_02;
                if ( v1 )
                  break;
                v30 = v105;
              }
              v22 = v119;
              v14 = v131;
              v23 = v114;
              v24 = (int)v124;
            }
            v35 = 0;
            if ( v101 > 0 )
            {
              v36 = v116;
              do
                v36[v22++] = (_WORD)v23 + *((_WORD *)Src + v35++);
              while ( v35 < v101 );
              v119 = v22;
            }
            v17 = (unsigned __int16)v107;
            v103 = (char *)v103 + v24;
            v110 += v14;
            v112 += 2 * v14;
            v109 += Size;
            v23 += v14;
            v37 = ++v126 < (unsigned __int16)v107;
            v114 = v23;
          }
          while ( v37 );
        }
        v103 = (void *)(unsigned __int16)(v101 / 3);
        v38 = (NiTriShapeData *)FormHeapAlloc(0x5Cu);
        Src = v38;
        LOBYTE(v143) = 3;
        if ( v38 )
        {
          v39 = sub_72AB00(
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
          Size = (int)v39;
          v101 = 0;
          v61 = v115;
          LOBYTE(v143) = 6;
          NiPropertyByID = NiNode_GetNiPropertyByID(v115, 6);
          if ( NiPropertyByID )
          {
            m_pcName = NiPropertyByID[1].members.m_pcName;
            if ( *(_DWORD *)m_pcName )
            {
              v64 = *(_DWORD *)(*(_DWORD *)m_pcName + 8);
              if ( v64 )
              {
                v101 = *(_DWORD *)(*(_DWORD *)m_pcName + 8);
                InterlockedIncrement((volatile LONG *)(v64 + 4));
              }
            }
          }
          sub_708560((int **)v115, (volatile LONG **)&v100, 0);
          v65 = (volatile LONG *)v100;
          if ( v100 )
          {
            if ( !InterlockedDecrement((volatile LONG *)&v100->members) )
            {
              if ( v65 )
                (**(void (__thiscall ***)(volatile LONG *, int))v65)(v65, 1);
            }
          }
          v66 = (volatile LONG *)FormHeapAlloc(0x1Cu);
          v67 = v66;
          v100 = (NiProperty *)v66;
          LOBYTE(v143) = 7;
          if ( v66 )
          {
            NiObjectNET::NiObjectNET((NiObjectNET *)v66);
            *v67 = (volatile LONG)&NiAlphaProperty::`vftable';
            *((_WORD *)v67 + 0xC) = 0xEC;
            *((_BYTE *)v67 + 0x1A) = 0;
          }
          else
          {
            v67 = 0;
          }
          v68 = v67[6] & 0xE1FE | 0x1201;
          LODWORD(v99) = 0x1C;
          v102 = v67;
          LOBYTE(v143) = 6;
          *((_BYTE *)v67 + 0x1A) = 0;
          *((_WORD *)v67 + 0xC) = v68;
          v69 = (volatile LONG *)FormHeapAlloc(v99);
          v70 = v69;
          v100 = (NiProperty *)v69;
          LOBYTE(v143) = 8;
          if ( v69 )
          {
            NiObjectNET::NiObjectNET((NiObjectNET *)v69);
            *v70 = (volatile LONG)&NiAlphaProperty::`vftable';
            *((_WORD *)v70 + 0xC) = 0xEC;
            *((_BYTE *)v70 + 0x1A) = 0;
          }
          else
          {
            v70 = 0;
          }
          v71 = v70[6] & 0xE1FE | 0x1200;
          LODWORD(v99) = 5;
          v115 = (NiNode *)v70;
          LOBYTE(v143) = 6;
          *((_BYTE *)v70 + 0x1A) = 0;
          *((_WORD *)v70 + 0xC) = v71;
          v100 = NiNode_GetNiPropertyByID(v61, v99);
          v72 = *(float **)&v61->members.children.capacity;
          v73 = *((_DWORD *)v72 + 4);
          v134 = *((_DWORD *)v72 + 3);
          v74 = *((_DWORD *)v72 + 5);
          v135 = v73;
          v75 = v72[6];
          v136 = v74;
          v137 = v75;
          v76 = (_DWORD *)FormHeapAlloc(0x34u);
          v77 = v76;
          v78 = 0;
          if ( v76 )
          {
            LODWORD(v99) = &NiRefObject_objcount;
            *v76 = &NiRefObject::`vftable';
            v76[1] = 0;
            InterlockedIncrement((volatile LONG *)v99);
            *v77 = &DistantLODShaderProperty::CachedGeometry::`vftable';
            v77[2] = 0;
            v77[6] = 0;
            v77[7] = 0;
            v77[8] = 0;
            v77[9] = 0;
            v78 = (int)v77;
          }
          v79 = v120;
          if ( v120 != v78 )
          {
            if ( v120 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v120 + 4)) )
                (**(void (__thiscall ***)(int, int))v79)(v79, 1);
            }
            v79 = v78;
            v120 = v78;
            if ( v78 )
              InterlockedIncrement((volatile LONG *)(v78 + 4));
          }
          *(_BYTE *)(v79 + 0xC) = v104;
          v80 = *(_DWORD *)(v79 + 8);
          if ( v80 != Size )
          {
            if ( v80 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v80 + 4)) )
                (**(void (__thiscall ***)(int, int))v80)(v80, 1);
            }
            v81 = Size;
            v1 = Size == 0;
            *(_DWORD *)(v79 + 8) = Size;
            if ( !v1 )
              InterlockedIncrement((volatile LONG *)(v81 + 4));
          }
          *(_DWORD *)(v79 + 0x10) = v121;
          *(_DWORD *)(v79 + 0x14) = v14;
          v82 = *(_DWORD *)(v79 + 0x18);
          if ( v82 != v101 )
          {
            if ( v82 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v82 + 4)) )
                (**(void (__thiscall ***)(int, int))v82)(v82, 1);
            }
            v83 = v101;
            v1 = v101 == 0;
            *(_DWORD *)(v79 + 0x18) = v101;
            if ( !v1 )
              InterlockedIncrement((volatile LONG *)(v83 + 4));
          }
          v84 = *(NiNode **)(v79 + 0x20);
          v85 = v115;
          if ( v84 != v115 )
          {
            if ( v84 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v84->members) )
                v84->vtbl->super.super.super.Destructor((NiRefObject *)v84, 1);
            }
            *(_DWORD *)(v79 + 0x20) = v85;
            InterlockedIncrement((volatile LONG *)&v85->members);
          }
          v86 = *(volatile LONG **)(v79 + 0x1C);
          v87 = v102;
          if ( v86 != v102 )
          {
            if ( v86 )
            {
              if ( !InterlockedDecrement(v86 + 1) )
                (**(void (__thiscall ***)(void *, int))v86)((void *)v86, 1);
            }
            *(_DWORD *)(v79 + 0x1C) = v87;
            InterlockedIncrement(v87 + 1);
          }
          v88 = *(volatile LONG **)(v79 + 0x24);
          v89 = (volatile LONG *)v100;
          if ( v88 != (volatile LONG *)v100 )
          {
            if ( v88 )
            {
              if ( !InterlockedDecrement(v88 + 1) )
                (**(void (__thiscall ***)(volatile LONG *, int))v88)(v88, 1);
            }
            *(_DWORD *)(v79 + 0x24) = v89;
            if ( v89 )
              InterlockedIncrement(v89 + 1);
          }
          v90 = (__int16)v103;
          *(float *)(v79 + 0x28) = v137;
          *(_DWORD *)(v79 + 0x2C) = v17;
          v91 = v130;
          *(_WORD *)(v79 + 0x32) = v90;
          *(_BYTE *)(v79 + 0x30) = 0;
          v92 = v91[1];
          if ( v92 )
          {
            v93 = (*(int (__thiscall **)(const char *))(*(_DWORD *)v92 + 4))(v91[1]);
            if ( v93 )
            {
              while ( (char *)v93 != dword_B3FD4C )
              {
                v93 = *(_DWORD *)(v93 + 4);
                if ( !v93 )
                  goto LABEL_118;
              }
              v94 = 1;
            }
            else
            {
LABEL_118:
              v94 = 0;
            }
            if ( (v94 != 0 ? (unsigned int)v92 : 0) != 0 )
              *(_BYTE *)(v79 + 0x30) = 1;
          }
          v100 = (NiProperty *)&v99;
          LODWORD(v99) = v79;
          InterlockedIncrement((volatile LONG *)(v79 + 4));
          sub_7B2180(&off_B2C34C, (int)v91[2], v99, SHIDWORD(v99));
          v95 = (void (__thiscall ***)(_DWORD, int))v101;
          LOBYTE(v143) = 1;
          if ( v101 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v101 + 4)) )
              (**v95)(v95, 1);
          }
          goto LABEL_126;
        }
      }
      v39 = 0;
      goto LABEL_64;
    }
  }
  v79 = v120;
LABEL_126:
  if ( !v79 )
  {
    _sprintf(v142, "DISTANT LOD ERROR : could not load DistantLOD nif %s", *v130);
    if ( dword_B42E8C )
      dword_B42E8C(v142, 0);
  }
  LOBYTE(v143) = 0;
  if ( v79 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v79 + 4)) )
      (**(void (__thiscall ***)(int, int))v79)(v79, 1);
  }
  v143 = 0xFFFFFFFF;
  BSStream::~BSStream((BSStream *)v138);
  return (volatile LONG *)v79;
}
