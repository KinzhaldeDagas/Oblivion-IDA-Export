char __cdecl sub_6F4B50(OB_stString28_010201A0 *source, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebp
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  OB_stString28_010201A0 *v11; // eax
  unsigned int v12; // eax
  _BYTE *v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebp
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // esi
  unsigned int v20; // eax
  char *v21; // ebp
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // esi
  char v25; // al
  OB_stVector4_010201A0 *v26; // ecx
  OB_stString28_010201A0 *v27; // esi
  unsigned int v28; // eax
  int v29; // eax
  char *v30; // ebx
  char *v31; // ebp
  char *v32; // esi
  char *v33; // ebx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // esi
  int v38; // ebp
  unsigned int *begin; // ebx
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // edx
  _DWORD *v43; // ecx
  int v44; // eax
  _DWORD *v45; // esi
  _DWORD *v46; // esi
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // ebx
  int v51; // eax
  int v52; // esi
  int v53; // eax
  float v54; // ecx
  float *v55; // eax
  float v56; // edx
  unsigned int v57; // ebx
  int v58; // ebp
  unsigned int v59; // esi
  int v60; // eax
  _DWORD *v61; // ecx
  unsigned int v62; // edx
  void (__thiscall ***v63)(_DWORD, int); // ecx
  int v64; // eax
  _DWORD *v65; // esi
  _DWORD *v66; // esi
  float v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // edx
  int v71; // esi
  int v72; // eax
  int v73; // eax
  int v74; // esi
  int v75; // eax
  int v76; // [esp-2Ch] [ebp-144h] BYREF
  unsigned int v77; // [esp-20h] [ebp-138h] BYREF
  OB_stString28_010201A0 v78; // [esp-1Ch] [ebp-134h] BYREF
  char *v79; // [esp+14h] [ebp-104h] BYREF
  _BYTE v80[5]; // [esp+1Bh] [ebp-FDh] BYREF
  char *v81; // [esp+20h] [ebp-F8h] BYREF
  OB_stString28_010201A0 *v82; // [esp+24h] [ebp-F4h]
  int v83; // [esp+28h] [ebp-F0h]
  float v84; // [esp+2Ch] [ebp-ECh]
  float v85; // [esp+30h] [ebp-E8h] BYREF
  float v86; // [esp+34h] [ebp-E4h]
  float v87; // [esp+38h] [ebp-E0h]
  int v88; // [esp+3Ch] [ebp-DCh]
  OB_stString28_010201A0 *v89; // [esp+40h] [ebp-D8h] BYREF
  OB_stVector4_010201A0 v90; // [esp+44h] [ebp-D4h] BYREF
  OB_stString28_010201A0 v91; // [esp+54h] [ebp-C4h] BYREF
  OB_stString28_010201A0 *v92; // [esp+70h] [ebp-A8h]
  float v93; // [esp+74h] [ebp-A4h]
  float v94; // [esp+78h] [ebp-A0h]
  float v95; // [esp+7Ch] [ebp-9Ch]
  float v96; // [esp+80h] [ebp-98h]
  unsigned int v97[16]; // [esp+84h] [ebp-94h] BYREF
  void (__thiscall ***v98)(_DWORD, int); // [esp+C4h] [ebp-54h]
  int v99[14]; // [esp+C8h] [ebp-50h] BYREF
  int v100; // [esp+100h] [ebp-18h] BYREF
  int v101; // [esp+104h] [ebp-14h]
  int v102; // [esp+114h] [ebp-4h]

  v2 = a2; /*0x6f4b92*/
  v92 = source; /*0x6f4ba6*/
  _memset((int)v99, 0, sizeof(v99)); /*0x6f4baa*/
  v82 = &v78; /*0x6f4bb4*/
  v78.capacity = 0xF; /*0x6f4bbf*/
  v78.size = 0; /*0x6f4bc2*/
  v78.storage.inlineData[0] = 0; /*0x6f4bca*/
  OB_stString28_AssignBytes_010201A0(&v78, "FRTRI003", 8u); /*0x6f4bcd*/
  sub_6F6110( /*0x6f4bd9*/
    (FutBinaryFileC *)v97,
    v78.allocatorState,
    (unsigned int)v78.storage.heapData,
    *((int *)&v78.storage.heapData + 1),
    *((int *)&v78.storage.heapData + 2),
    *((int *)&v78.storage.heapData + 3),
    v78.size,
    v78.capacity);
  v78.capacity = 0; /*0x6f4bde*/
  v78.size = 0xF; /*0x6f4be4*/
  v82 = (OB_stString28_010201A0 *)&v77; /*0x6f4be7*/
  *((_DWORD *)&v78.storage.heapData + 3) = 0; /*0x6f4bf0*/
  v102 = 0; /*0x6f4bf4*/
  LOBYTE(v78.allocatorState) = 0; /*0x6f4bfb*/
  OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)&v77, source, 0, 0xFFFFFFFF); /*0x6f4bfe*/
  if ( !sub_6F66E0( /*0x6f4c40*/
          v97,
          v77,
          v78.allocatorState,
          (int)v78.storage.heapData,
          *((int *)&v78.storage.heapData + 1),
          *((int *)&v78.storage.heapData + 2),
          *((int *)&v78.storage.heapData + 3),
          v78.size,
          v78.capacity)
    || !sub_6F5E50(v97, (int)v99, 1, 0x38) )
  {
    v102 = 0xFFFFFFFF; /*0x6f4c1a*/
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v97, a2); /*0x6f4c21*/
    return 0; /*0x6f4c28*/
  }
  sub_6F2FD0((_DWORD *)a2, v99[0] + v99[9]); /*0x6f4c5c*/
  memset(&v78.storage.heapData + 3, 0, 0xC); /*0x6f4c68*/
  sub_6F29D0((_DWORD *)(a2 + 0x10), v99[1], *((OB_CBranchChildRef_010201A0 *)&v78.storage.heapData + 1)); /*0x6f4c81*/
  sub_6F2B70((_DWORD *)(a2 + 0x20), v99[2], 0, 0, 0, 0); /*0x6f4ca5*/
  v82 = (OB_stString28_010201A0 *)&v77; /*0x6f4cb9*/
  v78.storage.inlineData[0] = 0; /*0x6f4ccb*/
  sub_6F3ED0( /*0x6f4ccf*/
    (char **)(a2 + 0x60),
    v99[3],
    v77,
    v78.allocatorState,
    (unsigned int)v78.storage.heapData,
    *((int *)&v78.storage.heapData + 1),
    *((int *)&v78.storage.heapData + 2),
    *((int *)&v78.storage.heapData + 3),
    0,
    0xFu);
  v82 = (OB_stString28_010201A0 *)&v76; /*0x6f4ce5*/
  v78.storage.inlineData[0] = 0; /*0x6f4cff*/
  sub_6F3FC0( /*0x6f4d03*/
    (char **)(a2 + 0x70),
    v99[4],
    v76,
    COERCE_INT(0.0),
    COERCE_INT(0.0),
    COERCE_INT(0.0),
    v78.allocatorState,
    (unsigned int)v78.storage.heapData,
    *((int *)&v78.storage.heapData + 1),
    *((int *)&v78.storage.heapData + 2),
    *((int *)&v78.storage.heapData + 3),
    0,
    0xFu);
  v83 = a2 + 0x80; /*0x6f4d16*/
  sub_6F4A70((OB_stString28_010201A0 *)(a2 + 0x80), v99[7]); /*0x6f4d1a*/
  v82 = (OB_stString28_010201A0 *)(a2 + 0x90); /*0x6f4d2d*/
  sub_6F4AE0((OB_stString28_010201A0 *)(a2 + 0x90), v99[8]); /*0x6f4d31*/
  if ( v99[9] + v99[0] ) /*0x6f4d44*/
  {
    v78.capacity = v99[9] + v99[0]; /*0x6f4d48*/
    v78.size = 0xC; /*0x6f4d49*/
    v4 = sub_6F10A0((_DWORD *)a2, 0); /*0x6f4d4f*/
    if ( !sub_6F5D40(v97, v4, v78.size, v78.capacity) ) /*0x6f4d5c*/
      goto LABEL_56; /*0x6f4d5c*/
  }
  if ( v99[1] ) /*0x6f4d72*/
  {
    v78.capacity = v99[1]; /*0x6f4d74*/
    v78.size = 0xC; /*0x6f4d75*/
    v5 = sub_6F10A0((_DWORD *)(a2 + 0x10), 0); /*0x6f4d7b*/
    if ( !sub_6F5D40(v97, v5, v78.size, v78.capacity) ) /*0x6f4d88*/
      goto LABEL_56; /*0x6f4d88*/
  }
  if ( v99[2] ) /*0x6f4d9e*/
  {
    v78.capacity = v99[2]; /*0x6f4da0*/
    v78.size = 0x10; /*0x6f4da1*/
    v6 = sub_6F10E0((_DWORD *)(a2 + 0x20), 0); /*0x6f4da8*/
    if ( !sub_6F5D40(v97, v6, v78.size, v78.capacity) ) /*0x6f4db5*/
      goto LABEL_56; /*0x6f4dbc*/
  }
  v7 = 0; /*0x6f4dc2*/
  if ( !v99[3] ) /*0x6f4dcb*/
  {
LABEL_26:
    v15 = 0; /*0x6f4f3a*/
    v79 = 0; /*0x6f4f43*/
    if ( v99[4] ) /*0x6f4f47*/
    {
      v16 = 0; /*0x6f4f4d*/
      *(_DWORD *)&v80[1] = 0; /*0x6f4f4f*/
      do /*0x6f4f53*/
      {
        v17 = *(_DWORD *)(a2 + 0x74); /*0x6f4f53*/
        if ( !v17 || v15 >= (*(_DWORD *)(a2 + 0x78) - v17) / 0x2C ) /*0x6f4f72*/
          _invalid_parameter_noinfo(); /*0x6f4f74*/
        if ( !sub_6F5D40(v97, v16 + *(_DWORD *)(a2 + 0x74), 4u, 1) ) /*0x6f4f8a*/
          goto LABEL_56; /*0x6f4f91*/
        v18 = *(_DWORD *)(a2 + 0x74); /*0x6f4f97*/
        if ( !v18 || v15 >= (*(_DWORD *)(a2 + 0x78) - v18) / 0x2C ) /*0x6f4fb6*/
          _invalid_parameter_noinfo(); /*0x6f4fb8*/
        if ( !sub_6F5D40(v97, v16 + *(_DWORD *)(a2 + 0x74) + 4, 0xCu, 1) ) /*0x6f4fdf*/
          goto LABEL_53; /*0x6f4fdf*/
        if ( !sub_6F5D40(v97, (int)&v81, 4u, 1) ) /*0x6f4ff5*/
          goto LABEL_56; /*0x6f4ff5*/
        if ( v81 ) /*0x6f5001*/
        {
          v80[0] = 0; /*0x6f5011*/
          sub_6F2CD0(&v85, v81, v80); /*0x6f5016*/
          v19 = LODWORD(v86); /*0x6f501b*/
          LOBYTE(v102) = 3; /*0x6f5021*/
          if ( v86 == 0.0 || LODWORD(v87) == LODWORD(v86) ) /*0x6f5031*/
            _invalid_parameter_noinfo(); /*0x6f5033*/
          if ( !sub_6F5D40(v97, v19, 1u, (int)v81) ) /*0x6f504e*/
          {
            v26 = (OB_stVector4_010201A0 *)&v85; /*0x6f527f*/
            goto LABEL_55; /*0x6f5283*/
          }
          if ( (unsigned int)v81 <= 1 ) /*0x6f505b*/
          {
            v27 = sub_414750(&v91, EmptyString); /*0x6f5125*/
            LOBYTE(v102) = 4; /*0x6f512a*/
            v28 = sub_6F1160((_DWORD *)(a2 + 0x70), v15); /*0x6f5132*/
            OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)(v28 + 0x10), v27, 0, 0xFFFFFFFF); /*0x6f5141*/
            OB_stString28_Dtor_010201A0(&v91); /*0x6f514a*/
          }
          else
          {
            v78.capacity = (unsigned int)(v81 + 0xFFFFFFFF); /*0x6f5064*/
            v20 = sub_6F1160((_DWORD *)(a2 + 0x70), v15); /*0x6f5068*/
            sub_6EDB50((_DWORD *)(v20 + 0x10), v15, a2, v78.capacity); /*0x6f5072*/
            v21 = 0; /*0x6f507b*/
            if ( v81 != (char *)1 ) /*0x6f5080*/
              v21 = v81 + 0xFFFFFFFF; /*0x6f5082*/
            if ( !v19 || (unsigned int)v21 >= LODWORD(v87) - v19 ) /*0x6f5090*/
              _invalid_parameter_noinfo(); /*0x6f5092*/
            v22 = sub_6F1160((_DWORD *)(a2 + 0x70), (unsigned int)v79); /*0x6f509e*/
            v23 = v22 + 0x10; /*0x6f50a5*/
            if ( (unsigned int)v21 > *(_DWORD *)(v22 + 0x24) ) /*0x6f50ab*/
              _invalid_parameter_noinfo(); /*0x6f50ad*/
            if ( *(_DWORD *)(v23 + 0x18) < 0x10u ) /*0x6f50b6*/
            {
              v25 = v21[LODWORD(v86)]; /*0x6f510c*/
              v24 = v23 + 4; /*0x6f510f*/
            }
            else
            {
              v24 = *(_DWORD *)(v23 + 4); /*0x6f50bc*/
              v25 = v21[LODWORD(v86)]; /*0x6f50bf*/
            }
            v21[v24] = v25; /*0x6f50c2*/
          }
          LOBYTE(v102) = 0; /*0x6f5155*/
          if ( v86 != 0.0 ) /*0x6f515d*/
            FormHeapFree(LODWORD(v86)); /*0x6f5164*/
          v15 = (unsigned int)v79; /*0x6f516e*/
          v16 = *(_DWORD *)&v80[1]; /*0x6f5172*/
          v86 = 0.0; /*0x6f5176*/
          v87 = 0.0; /*0x6f517a*/
          v88 = 0; /*0x6f517e*/
        }
        ++v15; /*0x6f5182*/
        v16 += 0x2C; /*0x6f5185*/
        v79 = (char *)v15; /*0x6f518f*/
        *(_DWORD *)&v80[1] = v16; /*0x6f5193*/
      }
      while ( v15 < v99[4] ); /*0x6f4f53*/
    }
    if ( (v99[6] & 1) != 0 ) /*0x6f51a5*/
    {
      if ( v99[5] ) /*0x6f51be*/
      {
        sub_6F2C20((char **)(a2 + 0x30), v99[5], 0.0, COERCE_UNSIGNED_INT(0.0)); /*0x6f5290*/
        if ( v99[5] ) /*0x6f529d*/
        {
          v34 = *(_DWORD *)(a2 + 0x34); /*0x6f529f*/
          if ( !v34 || !((*(_DWORD *)(a2 + 0x38) - v34) >> 3) ) /*0x6f52ab*/
            _invalid_parameter_noinfo(); /*0x6f52b0*/
          if ( !sub_6F5D40(v97, *(_DWORD *)(a2 + 0x34), 8u, v99[5]) ) /*0x6f52ca*/
            goto LABEL_56; /*0x6f52ca*/
        }
        memset(&v78.storage.heapData + 3, 0, 0xC); /*0x6f52de*/
        sub_6F29D0((_DWORD *)(a2 + 0x40), v99[1], *((OB_CBranchChildRef_010201A0 *)&v78.storage.heapData + 1)); /*0x6f52f7*/
        if ( v99[1] ) /*0x6f5303*/
        {
          v35 = *(_DWORD *)(a2 + 0x44); /*0x6f5305*/
          if ( !v35 || !((*(_DWORD *)(a2 + 0x48) - v35) / 0xC) ) /*0x6f531f*/
            _invalid_parameter_noinfo(); /*0x6f5323*/
          if ( !sub_6F5D40(v97, *(_DWORD *)(a2 + 0x44), 0xCu, v99[1]) ) /*0x6f533d*/
            goto LABEL_56; /*0x6f533d*/
        }
        v2 = a2 + 0x50; /*0x6f5369*/
        sub_6F2B70((_DWORD *)(a2 + 0x50), v99[2], 0, 0, 0, 0); /*0x6f536f*/
        if ( v99[2] ) /*0x6f537b*/
        {
          v36 = *(_DWORD *)(a2 + 0x54); /*0x6f537d*/
          if ( !v36 || !((*(_DWORD *)(a2 + 0x58) - v36) >> 4) ) /*0x6f5389*/
            _invalid_parameter_noinfo(); /*0x6f538e*/
          v2 = *(_DWORD *)(a2 + 0x54); /*0x6f539a*/
          if ( !sub_6F5D40(v97, v2, 0x10u, v99[2]) ) /*0x6f53a8*/
            goto LABEL_56; /*0x6f53af*/
        }
      }
      else
      {
        sub_6F2C20((char **)(a2 + 0x30), v99[0], 0.0, COERCE_UNSIGNED_INT(0.0)); /*0x6f51d3*/
        if ( v99[0] ) /*0x6f51e0*/
        {
          v29 = *(_DWORD *)(a2 + 0x34); /*0x6f51e2*/
          if ( !v29 || !((*(_DWORD *)(a2 + 0x38) - v29) >> 3) ) /*0x6f51ee*/
            _invalid_parameter_noinfo(); /*0x6f51f3*/
          if ( !sub_6F5D40(v97, *(_DWORD *)(a2 + 0x34), 8u, v99[0]) ) /*0x6f5214*/
            goto LABEL_56; /*0x6f5214*/
        }
        v30 = *(char **)(a2 + 0x48); /*0x6f521a*/
        if ( *(_DWORD *)(a2 + 0x44) > (unsigned int)v30 ) /*0x6f5223*/
          _invalid_parameter_noinfo(); /*0x6f5225*/
        v31 = *(char **)(a2 + 0x44); /*0x6f522a*/
        if ( (unsigned int)v31 > *(_DWORD *)(a2 + 0x48) ) /*0x6f5230*/
          _invalid_parameter_noinfo(); /*0x6f5232*/
        sub_6F1470((void *)(a2 + 0x40), &v100, a2 + 0x40, v31, a2 + 0x40, v30); /*0x6f5245*/
        v32 = *(char **)(a2 + 0x58); /*0x6f524a*/
        v2 = a2 + 0x50; /*0x6f524d*/
        if ( *(_DWORD *)(a2 + 0x54) > (unsigned int)v32 ) /*0x6f5253*/
          _invalid_parameter_noinfo(); /*0x6f5255*/
        v33 = *(char **)(a2 + 0x54); /*0x6f525a*/
        if ( (unsigned int)v33 > *(_DWORD *)(a2 + 0x58) ) /*0x6f5260*/
          _invalid_parameter_noinfo(); /*0x6f5262*/
        sub_6F14D0((void *)v2, &v100, v2, v33, v2, v32); /*0x6f5275*/
      }
    }
    v37 = 0; /*0x6f53b5*/
    v79 = 0; /*0x6f53be*/
    if ( v99[7] ) /*0x6f53c2*/
    {
      v38 = v83; /*0x6f53c8*/
      *(_DWORD *)&v80[1] = 0; /*0x6f53cc*/
      while ( 1 ) /*0x6f53d6*/
      {
        v2 = *(_DWORD *)&v80[1]; /*0x6f53d6*/
        if ( !sub_6F5D40(v97, (int)&v81, 4u, 1) ) /*0x6f53ea*/
          goto LABEL_56; /*0x6f53f1*/
        if ( v81 ) /*0x6f53fd*/
        {
          v80[0] = 0; /*0x6f540d*/
          sub_6F2CD0(&v90, v81, v80); /*0x6f5412*/
          begin = v90.begin; /*0x6f5417*/
          LOBYTE(v102) = 5; /*0x6f541d*/
          if ( !v90.begin || v90.end == v90.begin ) /*0x6f542d*/
            _invalid_parameter_noinfo(); /*0x6f542f*/
          if ( !sub_6F5D40(v97, (int)begin, 1u, (int)v81) ) /*0x6f544a*/
          {
            if ( begin ) /*0x6f586a*/
              FormHeapFree((unsigned int)begin); /*0x6f5871*/
            goto LABEL_56; /*0x6f5879*/
          }
          if ( (unsigned int)v81 <= 1 ) /*0x6f5455*/
          {
            v91.capacity = 0xF; /*0x6f5537*/
            v91.size = 0; /*0x6f553f*/
            v91.storage.inlineData[0] = 0; /*0x6f5547*/
            OB_stString28_AssignBytes_010201A0(&v91, EmptyString, 0); /*0x6f554c*/
            v47 = *(_DWORD *)(v38 + 4); /*0x6f5551*/
            LOBYTE(v102) = 6; /*0x6f5556*/
            if ( !v47 || v37 >= (*(_DWORD *)(v38 + 8) - v47) / 0x2C ) /*0x6f5578*/
              _invalid_parameter_noinfo(); /*0x6f557a*/
            OB_stString28_AssignSubstring_010201A0( /*0x6f558d*/
              (OB_stString28_010201A0 *)(v2 + *(_DWORD *)(v38 + 4)),
              &v91,
              0,
              0xFFFFFFFF);
            if ( v91.capacity >= 0x10 ) /*0x6f5597*/
              FormHeapFree((unsigned int)v91.storage.heapData); /*0x6f559e*/
          }
          else
          {
            v40 = *(_DWORD *)(v38 + 4); /*0x6f545b*/
            if ( !v40 || v37 >= (*(_DWORD *)(v38 + 8) - v40) / 0x2C ) /*0x6f547a*/
              _invalid_parameter_noinfo(); /*0x6f547c*/
            v41 = *(_DWORD *)(v38 + 4); /*0x6f5481*/
            v42 = *(_DWORD *)(v41 + v2 + 0x14); /*0x6f5488*/
            v43 = (_DWORD *)(v2 + v41); /*0x6f548c*/
            if ( (unsigned int)(v81 + 0xFFFFFFFF) > v42 ) /*0x6f5493*/
              sub_6EDAA0(v43, v2, (unsigned int)&v81[0xFFFFFFFF - v42], 0); /*0x6f54a4*/
            else
              sub_4134E0(v43, v38, (unsigned int)(v81 + 0xFFFFFFFF), 0xFFFFFFFF); /*0x6f5498*/
            v2 = 0; /*0x6f54ad*/
            if ( v81 != (char *)1 ) /*0x6f54b2*/
            {
              do /*0x6f5524*/
              {
                if ( !begin || v2 >= (char *)v90.end - (char *)begin ) /*0x6f54c4*/
                  _invalid_parameter_noinfo(); /*0x6f54c6*/
                v44 = *(_DWORD *)(v38 + 4); /*0x6f54cb*/
                if ( !v44 || (unsigned int)v79 >= (*(_DWORD *)(v38 + 8) - v44) / 0x2C ) /*0x6f54ec*/
                  _invalid_parameter_noinfo(); /*0x6f54ee*/
                v45 = (_DWORD *)(*(_DWORD *)&v80[1] + *(_DWORD *)(v38 + 4)); /*0x6f54f6*/
                if ( v2 > v45[5] ) /*0x6f54fd*/
                  _invalid_parameter_noinfo(); /*0x6f54ff*/
                if ( v45[6] < 0x10u ) /*0x6f5508*/
                  v46 = v45 + 1; /*0x6f550f*/
                else
                  v46 = (_DWORD *)v45[1]; /*0x6f550a*/
                *((_BYTE *)v46 + v2) = *((_BYTE *)begin + v2); /*0x6f5515*/
                ++v2; /*0x6f551c*/
              }
              while ( v2 < (unsigned int)(v81 + 0xFFFFFFFF) ); /*0x6f5524*/
              v37 = (unsigned int)v79; /*0x6f5526*/
            }
          }
          LOBYTE(v102) = 0; /*0x6f55a8*/
          if ( begin ) /*0x6f55b0*/
            FormHeapFree((unsigned int)begin); /*0x6f55b3*/
          memset(&v90.begin, 0, 0xC); /*0x6f55bd*/
        }
        if ( !sub_6F5D40(v97, (int)&v89, 4u, 1) ) /*0x6f55e0*/
          goto LABEL_56; /*0x6f55e0*/
        v48 = *(_DWORD *)(v38 + 4); /*0x6f55e6*/
        if ( !v48 || v37 >= (*(_DWORD *)(v38 + 8) - v48) / 0x2C ) /*0x6f5605*/
          _invalid_parameter_noinfo(); /*0x6f5607*/
        v49 = *(_DWORD *)(v38 + 4); /*0x6f560e*/
        v94 = 0.0; /*0x6f5615*/
        v95 = 0.0; /*0x6f561d*/
        v96 = 0.0; /*0x6f5625*/
        *((float *)&v78.storage.heapData + 3) = 0.0; /*0x6f5631*/
        *(float *)&v78.size = 0.0; /*0x6f563a*/
        *(float *)&v78.capacity = 0.0; /*0x6f5644*/
        sub_6F29D0( /*0x6f564f*/
          (_DWORD *)(v49 + *(_DWORD *)&v80[1] + 0x1C),
          v99[0],
          *((OB_CBranchChildRef_010201A0 *)&v78.storage.heapData + 1));
        v2 = 0; /*0x6f5654*/
        if ( v99[0] ) /*0x6f565d*/
        {
          v50 = 0; /*0x6f5663*/
          while ( sub_6F5D40(v97, (int)&v100, 2u, 3) ) /*0x6f567f*/
          {
            v83 = SHIWORD(v100); /*0x6f56a5*/
            v51 = *(_DWORD *)(v38 + 4); /*0x6f56ad*/
            v84 = (double)(__int16)v101 * *(float *)&v89; /*0x6f56b8*/
            v83 = (__int16)v100; /*0x6f56c0*/
            v93 = (double)SHIWORD(v100) * *(float *)&v89; /*0x6f56c6*/
            v85 = *(float *)&v89 * (double)(__int16)v100; /*0x6f56d0*/
            v86 = v93; /*0x6f56d8*/
            v87 = v84; /*0x6f56e0*/
            if ( !v51 || (unsigned int)v79 >= (*(_DWORD *)(v38 + 8) - v51) / 0x2C ) /*0x6f5700*/
              _invalid_parameter_noinfo(); /*0x6f5702*/
            v52 = *(_DWORD *)&v80[1] + *(_DWORD *)(v38 + 4); /*0x6f570a*/
            v53 = *(_DWORD *)(v52 + 0x20); /*0x6f570e*/
            if ( !v53 || v2 >= (*(_DWORD *)(v52 + 0x24) - v53) / 0xC ) /*0x6f572c*/
              _invalid_parameter_noinfo(); /*0x6f572e*/
            v54 = v86; /*0x6f573a*/
            v55 = (float *)(v50 + *(_DWORD *)(v52 + 0x20)); /*0x6f573e*/
            *v55 = v85; /*0x6f5740*/
            v56 = v87; /*0x6f5742*/
            v55[1] = v54; /*0x6f5746*/
            ++v2; /*0x6f5749*/
            v55[2] = v56; /*0x6f574c*/
            v50 += 0xC; /*0x6f574f*/
            if ( v2 >= v99[0] ) /*0x6f5759*/
              goto LABEL_147; /*0x6f5759*/
          }
          v97[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6f587e*/
          v63 = v98; /*0x6f5889*/
          v102 = 7; /*0x6f5892*/
          if ( v98 ) /*0x6f589d*/
LABEL_165:
            (**v98)(v63, 1); /*0x6f589f*/
LABEL_166:
          v98 = 0; /*0x6f58a7*/
          goto LABEL_167; /*0x6f58a7*/
        }
LABEL_147:
        *(_DWORD *)&v80[1] += 0x2C; /*0x6f575f*/
        if ( (unsigned int)++v79 >= v99[7] ) /*0x6f5776*/
          break; /*0x6f5776*/
        v37 = (unsigned int)v79; /*0x6f53d2*/
      }
    }
    v57 = 0; /*0x6f577c*/
    v81 = (char *)v99[0]; /*0x6f578c*/
    if ( v99[8] ) /*0x6f5790*/
    {
      v58 = (int)v82; /*0x6f5796*/
      *(_DWORD *)&v80[1] = 0; /*0x6f579a*/
      while ( 1 ) /*0x6f57a0*/
      {
        if ( !sub_6F5D40(v97, (int)&v79, 4u, 1) ) /*0x6f57b7*/
        {
          v97[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6f5b85*/
          v63 = v98; /*0x6f5b90*/
          v102 = 8; /*0x6f5b99*/
          if ( !v98 ) /*0x6f5ba4*/
            goto LABEL_166; /*0x6f5ba4*/
          goto LABEL_165; /*0x6f5ba4*/
        }
        v2 = 0; /*0x6f57c1*/
        if ( v79 ) /*0x6f57c5*/
        {
          v80[0] = 0; /*0x6f57d5*/
          sub_6F2CD0(&v85, v79, v80); /*0x6f57da*/
          v59 = LODWORD(v86); /*0x6f57df*/
          LOBYTE(v102) = 9; /*0x6f57e5*/
          if ( v86 == 0.0 || LODWORD(v87) == LODWORD(v86) ) /*0x6f57f5*/
            _invalid_parameter_noinfo(); /*0x6f57f7*/
          if ( !sub_6F5D40(v97, v59, 1u, (int)v79) ) /*0x6f5812*/
          {
            if ( v59 ) /*0x6f5bb9*/
              FormHeapFree(v59); /*0x6f5bbc*/
            v97[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6f5bc4*/
            v102 = 0xA; /*0x6f5bd8*/
            if ( v98 ) /*0x6f5be3*/
              (**v98)(v98, 1); /*0x6f5beb*/
            goto LABEL_217; /*0x6f5beb*/
          }
          if ( (unsigned int)v79 <= 1 ) /*0x6f581d*/
          {
            v91.capacity = 0xF; /*0x6f596a*/
            v91.size = 0; /*0x6f5972*/
            v91.storage.inlineData[0] = 0; /*0x6f5976*/
            OB_stString28_AssignBytes_010201A0(&v91, EmptyString, 0); /*0x6f597b*/
            v68 = *(_DWORD *)(v58 + 4); /*0x6f5980*/
            LOBYTE(v102) = 0xB; /*0x6f5985*/
            if ( !v68 || v57 >= (*(_DWORD *)(v58 + 8) - v68) / 0x30 ) /*0x6f59a7*/
              _invalid_parameter_noinfo(); /*0x6f59a9*/
            OB_stString28_AssignSubstring_010201A0( /*0x6f59bd*/
              (OB_stString28_010201A0 *)(*(_DWORD *)&v80[1] + *(_DWORD *)(v58 + 4)),
              &v91,
              0,
              0xFFFFFFFF);
            if ( v91.capacity >= 0x10 ) /*0x6f59c7*/
              FormHeapFree((unsigned int)v91.storage.heapData); /*0x6f59ce*/
          }
          else
          {
            v60 = *(_DWORD *)(v58 + 4); /*0x6f5823*/
            if ( !v60 || v57 >= (*(_DWORD *)(v58 + 8) - v60) / 0x30 ) /*0x6f5842*/
              _invalid_parameter_noinfo(); /*0x6f5844*/
            v61 = (_DWORD *)(*(_DWORD *)&v80[1] + *(_DWORD *)(v58 + 4)); /*0x6f584c*/
            v62 = v61[5]; /*0x6f5854*/
            if ( (unsigned int)(v79 + 0xFFFFFFFF) > v62 ) /*0x6f585c*/
              sub_6EDAA0(v61, 0, (unsigned int)&v79[0xFFFFFFFF - v62], 0); /*0x6f58d4*/
            else
              sub_4134E0(v61, v58, (unsigned int)(v79 + 0xFFFFFFFF), 0xFFFFFFFF); /*0x6f5861*/
            if ( v79 != (char *)1 ) /*0x6f58e0*/
            {
              do /*0x6f5958*/
              {
                if ( v86 == 0.0 || v2 >= LODWORD(v87) - LODWORD(v86) ) /*0x6f58f6*/
                  _invalid_parameter_noinfo(); /*0x6f58f8*/
                v64 = *(_DWORD *)(v58 + 4); /*0x6f58fd*/
                if ( !v64 || v57 >= (*(_DWORD *)(v58 + 8) - v64) / 0x30 ) /*0x6f591c*/
                  _invalid_parameter_noinfo(); /*0x6f591e*/
                v65 = (_DWORD *)(*(_DWORD *)&v80[1] + *(_DWORD *)(v58 + 4)); /*0x6f5926*/
                if ( v2 > v65[5] ) /*0x6f592d*/
                  _invalid_parameter_noinfo(); /*0x6f592f*/
                if ( v65[6] < 0x10u ) /*0x6f5938*/
                  v66 = v65 + 1; /*0x6f593f*/
                else
                  v66 = (_DWORD *)v65[1]; /*0x6f593a*/
                v67 = v86; /*0x6f5942*/
                *((_BYTE *)v66 + v2) = *(_BYTE *)(LODWORD(v86) + v2); /*0x6f5949*/
                ++v2; /*0x6f5950*/
              }
              while ( v2 < (unsigned int)(v79 + 0xFFFFFFFF) ); /*0x6f5958*/
              v59 = LODWORD(v67); /*0x6f595a*/
              v2 = 0; /*0x6f595c*/
            }
          }
          LOBYTE(v102) = 0; /*0x6f59d8*/
          if ( v59 ) /*0x6f59e0*/
            FormHeapFree(v59); /*0x6f59e3*/
          v86 = 0.0; /*0x6f59eb*/
          v87 = 0.0; /*0x6f59ef*/
          v88 = 0; /*0x6f59f3*/
        }
        v69 = *(_DWORD *)(v58 + 4); /*0x6f59f7*/
        if ( !v69 || v57 >= (*(_DWORD *)(v58 + 8) - v69) / 0x30 ) /*0x6f5a16*/
          _invalid_parameter_noinfo(); /*0x6f5a18*/
        v70 = *(_DWORD *)(v58 + 4); /*0x6f5a1d*/
        v71 = *(_DWORD *)&v80[1]; /*0x6f5a24*/
        v78.capacity = 1; /*0x6f5a28*/
        v78.size = 4; /*0x6f5a2a*/
        *((_DWORD *)&v78.storage.heapData + 3) = &v79; /*0x6f5a30*/
        *(_DWORD *)(v70 + *(_DWORD *)&v80[1] + 0x1C) = v81; /*0x6f5a38*/
        if ( !sub_6F5D40(v97, *((int *)&v78.storage.heapData + 3), v78.size, v78.capacity) ) /*0x6f5a3c*/
          break; /*0x6f5a3c*/
        v72 = *(_DWORD *)(v58 + 4); /*0x6f5a49*/
        if ( !v72 || v57 >= (*(_DWORD *)(v58 + 8) - v72) / 0x30 ) /*0x6f5a68*/
          _invalid_parameter_noinfo(); /*0x6f5a6a*/
        sub_6F2AB0((OB_stVector4_010201A0 *)(*(_DWORD *)(v58 + 4) + v71 + 0x20), (unsigned int *)v79, 0); /*0x6f5a7c*/
        if ( v79 ) /*0x6f5a85*/
        {
          v73 = *(_DWORD *)(v58 + 4); /*0x6f5a87*/
          if ( !v73 || v57 >= (*(_DWORD *)(v58 + 8) - v73) / 0x30 ) /*0x6f5aa6*/
            _invalid_parameter_noinfo(); /*0x6f5aa8*/
          v74 = *(_DWORD *)&v80[1] + *(_DWORD *)(v58 + 4); /*0x6f5ab0*/
          v75 = *(_DWORD *)(v74 + 0x24); /*0x6f5ab4*/
          if ( !v75 || !((*(_DWORD *)(v74 + 0x28) - v75) >> 2) ) /*0x6f5ac0*/
            _invalid_parameter_noinfo(); /*0x6f5ac5*/
          if ( !sub_6F5D40(v97, *(_DWORD *)(v74 + 0x24), 4u, (int)v79) ) /*0x6f5ae3*/
            goto LABEL_56; /*0x6f5ae3*/
        }
        v81 = &v81[(_DWORD)v79]; /*0x6f5aed*/
        *(_DWORD *)&v80[1] += 0x30; /*0x6f5af1*/
        if ( ++v57 >= v99[8] ) /*0x6f5b00*/
          goto LABEL_207; /*0x6f5b00*/
      }
      v97[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6f5bf9*/
      v102 = 0xC; /*0x6f5c0d*/
      if ( !v98 ) /*0x6f5c18*/
      {
LABEL_217:
        v98 = 0; /*0x6f5bed*/
        goto LABEL_167; /*0x6f5bf4*/
      }
      (**v98)(v98, 1); /*0x6f5c20*/
      v98 = 0; /*0x6f5c22*/
    }
    else
    {
LABEL_207:
      if ( v81 == (char *)(v99[0] + v99[9]) ) /*0x6f5b1a*/
      {
        v97[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6f5c2e*/
        v102 = 0xE; /*0x6f5c42*/
        if ( v98 ) /*0x6f5c4d*/
          (**v98)(v98, 1); /*0x6f5c55*/
        v98 = 0; /*0x6f5c5e*/
        v102 = 0xFFFFFFFF; /*0x6f5c69*/
        FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v97, v2); /*0x6f5c74*/
        return 1; /*0x6f5c79*/
      }
      v82 = &v78; /*0x6f5b29*/
      *(_QWORD *)&v78.size = 0xF00000000LL; /*0x6f5b39*/
      v78.storage.inlineData[0] = 0; /*0x6f5b3d*/
      OB_stString28_AssignSubstring_010201A0(&v78, v92, 0, 0xFFFFFFFF); /*0x6f5b41*/
      sub_6F6BF0( /*0x6f5b48*/
        1,
        v78.allocatorState,
        (void **)v78.storage.heapData,
        *((int *)&v78.storage.heapData + 1),
        *((int *)&v78.storage.heapData + 2),
        *((int *)&v78.storage.heapData + 3),
        *(size_t *)&v78.size);
      v97[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6f5b50*/
      v102 = 0xD; /*0x6f5b64*/
      if ( v98 ) /*0x6f5b6f*/
        (**v98)(v98, 1); /*0x6f5b77*/
      v98 = 0; /*0x6f5b79*/
    }
LABEL_167:
    v102 = 0xFFFFFFFF; /*0x6f58b2*/
    FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v97, v2); /*0x6f58c4*/
    return 0; /*0x6f58cb*/
  }
  v79 = 0; /*0x6f4dd1*/
  while ( 1 ) /*0x6f4dd5*/
  {
    v8 = *(_DWORD *)(a2 + 0x64); /*0x6f4dd5*/
    if ( !v8 || v7 >= (*(_DWORD *)(a2 + 0x68) - v8) >> 5 ) /*0x6f4de6*/
      _invalid_parameter_noinfo(); /*0x6f4de8*/
    if ( !sub_6F5D40(v97, (int)&v79[*(_DWORD *)(a2 + 0x64)], 4u, 1) ) /*0x6f4e0e*/
    {
LABEL_53:
      v102 = 0xFFFFFFFF; /*0x6f50ca*/
      BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v97, a2); /*0x6f50d5*/
      return 0; /*0x6f50dc*/
    }
    if ( !sub_6F5D40(v97, (int)&v81, 4u, 1) ) /*0x6f4e24*/
      goto LABEL_56; /*0x6f4e24*/
    if ( v81 ) /*0x6f4e30*/
      break; /*0x6f4e30*/
LABEL_25:
    v79 += 0x20; /*0x6f4f25*/
    if ( ++v7 >= v99[3] ) /*0x6f4f34*/
      goto LABEL_26; /*0x6f4f34*/
  }
  sub_6F3010(&v90, v81); /*0x6f4e3b*/
  v78.capacity = (unsigned int)v81; /*0x6f4e44*/
  v78.size = 1; /*0x6f4e45*/
  LOBYTE(v102) = 1; /*0x6f4e4d*/
  v9 = sub_6F1210(&v90, 0); /*0x6f4e55*/
  if ( sub_6F5D40(v97, v9, v78.size, v78.capacity) ) /*0x6f4e62*/
  {
    if ( (unsigned int)v81 <= 1 ) /*0x6f4e76*/
    {
      *(float *)&v89 = COERCE_FLOAT(sub_414750(&v91, EmptyString)); /*0x6f4ee4*/
      LOBYTE(v102) = 2; /*0x6f4eeb*/
      v14 = sub_6F1110((_DWORD *)(a2 + 0x60), v7); /*0x6f4ef3*/
      OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)(v14 + 4), v89, 0, 0xFFFFFFFF); /*0x6f4f06*/
      OB_stString28_Dtor_010201A0(&v91); /*0x6f4f0f*/
    }
    else
    {
      v78.capacity = (unsigned int)(v81 + 0xFFFFFFFF); /*0x6f4e7b*/
      v10 = sub_6F1110((_DWORD *)(a2 + 0x60), v7); /*0x6f4e7f*/
      sub_6EDB50((_DWORD *)(v10 + 4), v7, a2, v78.capacity); /*0x6f4e89*/
      *(_DWORD *)&v80[1] = 0; /*0x6f4e95*/
      if ( v81 != (char *)1 ) /*0x6f4e9d*/
        *(_DWORD *)&v80[1] = v81 + 0xFFFFFFFF; /*0x6f4e9f*/
      *(float *)&v11 = COERCE_FLOAT(sub_6F1210(&v90, *(unsigned int *)&v80[1])); /*0x6f4eac*/
      v78.capacity = *(_DWORD *)&v80[1]; /*0x6f4eb5*/
      v89 = v11; /*0x6f4eb9*/
      v12 = sub_6F1110((_DWORD *)(a2 + 0x60), v7); /*0x6f4ebd*/
      v13 = (_BYTE *)sub_6EDA70((_DWORD *)(v12 + 4), v78.capacity); /*0x6f4ec7*/
      *v13 = v89->allocatorState; /*0x6f4ed2*/
    }
    LOBYTE(v102) = 0; /*0x6f4f18*/
    OB_stVector4_DestroyThiscall_010201A0(&v90); /*0x6f4f20*/
    goto LABEL_25; /*0x6f4f20*/
  }
  v26 = &v90; /*0x6f50e1*/
LABEL_55:
  OB_stVector4_DestroyThiscall_010201A0(v26); /*0x6f50e5*/
LABEL_56:
  v102 = 0xFFFFFFFF; /*0x6f50ea*/
  BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v97, v2); /*0x6f50fc*/
  return 0; /*0x6f5c7b*/
}
