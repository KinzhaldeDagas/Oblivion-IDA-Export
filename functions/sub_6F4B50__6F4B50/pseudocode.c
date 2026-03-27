char __cdecl sub_6F4B50(_DWORD *a1, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebp
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  float v10; // eax
  unsigned int v11; // eax
  _BYTE *v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebp
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // esi
  unsigned int v19; // eax
  char *v20; // ebp
  unsigned int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // esi
  char v24; // al
  float *v25; // ecx
  _DWORD *v26; // esi
  unsigned int v27; // eax
  int v28; // eax
  char *v29; // ebx
  char *v30; // ebp
  char *v31; // esi
  char *v32; // ebx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // esi
  int v37; // ebp
  int v38; // edi
  unsigned int v39; // ebx
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // edx
  _DWORD *v43; // ecx
  unsigned int v44; // edi
  int v45; // eax
  _DWORD *v46; // esi
  _DWORD *v47; // esi
  int v48; // eax
  int v49; // eax
  int v50; // edx
  unsigned int v51; // edi
  int v52; // ebx
  int v53; // eax
  int v54; // esi
  int v55; // eax
  float v56; // ecx
  float *v57; // eax
  float v58; // edx
  unsigned int v59; // ebx
  int v60; // ebp
  unsigned int v61; // edi
  unsigned int v62; // esi
  int v63; // eax
  _DWORD *v64; // ecx
  unsigned int v65; // edx
  void (__thiscall ***v66)(_DWORD, int); // ecx
  int v67; // eax
  _DWORD *v68; // esi
  _DWORD *v69; // esi
  float v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // edx
  int v74; // esi
  int v75; // eax
  int v76; // eax
  int v77; // esi
  int v78; // eax
  int v79; // [esp-2Ch] [ebp-144h] BYREF
  rsize_t v80; // [esp-20h] [ebp-138h] BYREF
  void *v81; // [esp-18h] [ebp-130h]
  int v82; // [esp-14h] [ebp-12Ch]
  int v83; // [esp-10h] [ebp-128h]
  char **v84; // [esp-Ch] [ebp-124h]
  _BYTE v85[12]; // [esp-8h] [ebp-120h]
  char *v86; // [esp+14h] [ebp-104h] BYREF
  _BYTE v87[5]; // [esp+1Bh] [ebp-FDh] BYREF
  char *v88; // [esp+20h] [ebp-F8h] BYREF
  int *v89; // [esp+24h] [ebp-F4h]
  int v90; // [esp+28h] [ebp-F0h]
  float v91; // [esp+2Ch] [ebp-ECh]
  float v92; // [esp+30h] [ebp-E8h] BYREF
  float v93; // [esp+34h] [ebp-E4h]
  float v94; // [esp+38h] [ebp-E0h]
  int v95; // [esp+3Ch] [ebp-DCh]
  float v96; // [esp+40h] [ebp-D8h] BYREF
  int v97; // [esp+44h] [ebp-D4h] BYREF
  unsigned int v98; // [esp+48h] [ebp-D0h]
  int v99; // [esp+4Ch] [ebp-CCh]
  int v100; // [esp+50h] [ebp-C8h]
  unsigned int v101; // [esp+54h] [ebp-C4h] BYREF
  unsigned int v102; // [esp+58h] [ebp-C0h]
  int v103; // [esp+68h] [ebp-B0h]
  unsigned int v104; // [esp+6Ch] [ebp-ACh]
  _DWORD *v105; // [esp+70h] [ebp-A8h]
  float v106; // [esp+74h] [ebp-A4h]
  float v107; // [esp+78h] [ebp-A0h]
  float v108; // [esp+7Ch] [ebp-9Ch]
  float v109; // [esp+80h] [ebp-98h]
  _DWORD v110[16]; // [esp+84h] [ebp-94h] BYREF
  void (__thiscall ***v111)(_DWORD, int); // [esp+C4h] [ebp-54h]
  int v112[14]; // [esp+C8h] [ebp-50h] BYREF
  int v113; // [esp+100h] [ebp-18h] BYREF
  int v114; // [esp+104h] [ebp-14h]
  int v115; // [esp+114h] [ebp-4h]

  v105 = a1;
  _memset(v112, 0, sizeof(v112));
  v89 = (int *)&v80 + 1;
  LODWORD(v80) = 8;
  *(_DWORD *)&v85[4] = 0xF;
  *(_DWORD *)v85 = 0;
  LOBYTE(v81) = 0;
  sub_414500((_DWORD *)&v80 + 1, a2, "FRTRI003", v80);
  sub_6F6110((FutBinaryFileC *)v110, SBYTE4(v80), (int)v81, v82, v83, (int)v84, *(int *)v85, *(int *)&v85[4]);
  *(_DWORD *)&v85[4] = 0;
  *(_DWORD *)v85 = 0xF;
  v89 = (int *)&v80;
  v84 = 0;
  v115 = 0;
  BYTE4(v80) = 0;
  sub_414420((int)&v80, a1, 0, 0xFFFFFFFF);
  if ( !sub_6F66E0(v110, v80, SHIDWORD(v80), (int)v81, v82, v83, (int)v84, *(unsigned int *)v85, v85[4])
    || !sub_6F5E50(v110, (int)v112, 1, 0x38) )
  {
    v115 = 0xFFFFFFFF;
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v110);
    return 0;
  }
  sub_6F2FD0((_DWORD *)a2, v112[0] + v112[9]);
  sub_6F29D0((_DWORD *)(a2 + 0x10), v112[1], 0, 0, 0);
  sub_6F2B70((_DWORD *)(a2 + 0x20), v112[2], 0, 0, 0, 0);
  v89 = (int *)&v80;
  LOBYTE(v81) = 0;
  sub_6F3ED0((char **)(a2 + 0x60), v112[3], v80, SHIDWORD(v80), (unsigned int)v81, v82, v83, (int)v84, 0, 0xFu);
  v89 = &v79;
  LOBYTE(v81) = 0;
  sub_6F3FC0(
    (char **)(a2 + 0x70),
    v112[4],
    v79,
    COERCE_INT(0.0),
    COERCE_INT(0.0),
    COERCE_INT(0.0),
    SHIDWORD(v80),
    (unsigned int)v81,
    v82,
    v83,
    (int)v84,
    0,
    0xFu);
  v90 = a2 + 0x80;
  sub_6F4A70((int *)(a2 + 0x80), v112[7]);
  v89 = (int *)(a2 + 0x90);
  sub_6F4AE0((char **)(a2 + 0x90), v112[8]);
  if ( v112[9] + v112[0] )
  {
    *(_DWORD *)&v85[4] = v112[9] + v112[0];
    *(_DWORD *)v85 = 0xC;
    v3 = sub_6F10A0((_DWORD *)a2, 0);
    if ( !sub_6F5D40(v110, v3, *(unsigned int *)v85, *(int *)&v85[4]) )
      goto LABEL_56;
  }
  if ( v112[1] )
  {
    *(_DWORD *)&v85[4] = v112[1];
    *(_DWORD *)v85 = 0xC;
    v4 = sub_6F10A0((_DWORD *)(a2 + 0x10), 0);
    if ( !sub_6F5D40(v110, v4, *(unsigned int *)v85, *(int *)&v85[4]) )
      goto LABEL_56;
  }
  if ( v112[2] )
  {
    *(_DWORD *)&v85[4] = v112[2];
    *(_DWORD *)v85 = 0x10;
    v5 = sub_6F10E0((_DWORD *)(a2 + 0x20), 0);
    if ( !sub_6F5D40(v110, v5, *(unsigned int *)v85, *(int *)&v85[4]) )
      goto LABEL_56;
  }
  v6 = 0;
  if ( v112[3] )
  {
    v86 = 0;
    do
    {
      v7 = *(_DWORD *)(a2 + 0x64);
      if ( !v7 || v6 >= (*(_DWORD *)(a2 + 0x68) - v7) >> 5 )
        _invalid_parameter_noinfo();
      if ( !sub_6F5D40(v110, (int)&v86[*(_DWORD *)(a2 + 0x64)], 4u, 1) || !sub_6F5D40(v110, (int)&v88, 4u, 1) )
        goto LABEL_56;
      if ( v88 )
      {
        sub_6F3010(&v97, v88);
        *(_DWORD *)&v85[4] = v88;
        *(_DWORD *)v85 = 1;
        LOBYTE(v115) = 1;
        v8 = sub_6F1210(&v97, 0);
        if ( !sub_6F5D40(v110, v8, *(unsigned int *)v85, *(int *)&v85[4]) )
        {
          v25 = (float *)&v97;
LABEL_55:
          sub_794EB0(v25);
          goto LABEL_56;
        }
        if ( (unsigned int)v88 <= 1 )
        {
          v96 = COERCE_FLOAT(sub_414750((int)&v101, EmptyString));
          LOBYTE(v115) = 2;
          v13 = sub_6F1110((_DWORD *)(a2 + 0x60), v6);
          sub_414420(v13 + 4, (_DWORD *)LODWORD(v96), 0, 0xFFFFFFFF);
          sub_79AB00(&v101);
        }
        else
        {
          *(_DWORD *)&v85[4] = v88 + 0xFFFFFFFF;
          v9 = sub_6F1110((_DWORD *)(a2 + 0x60), v6);
          sub_6EDB50((_DWORD *)(v9 + 4), v6, a2, *(unsigned int *)&v85[4]);
          *(_DWORD *)&v87[1] = 0;
          if ( v88 != (char *)1 )
            *(_DWORD *)&v87[1] = v88 + 0xFFFFFFFF;
          v10 = COERCE_FLOAT(sub_6F1210(&v97, *(unsigned int *)&v87[1]));
          *(_DWORD *)&v85[4] = *(_DWORD *)&v87[1];
          v96 = v10;
          v11 = sub_6F1110((_DWORD *)(a2 + 0x60), v6);
          v12 = (_BYTE *)sub_6EDA70((_DWORD *)(v11 + 4), *(unsigned int *)&v85[4]);
          *v12 = *(_BYTE *)LODWORD(v96);
        }
        LOBYTE(v115) = 0;
        sub_794EB0(&v97);
      }
      v86 += 0x20;
    }
    while ( ++v6 < v112[3] );
  }
  v14 = 0;
  v86 = 0;
  if ( v112[4] )
  {
    v15 = 0;
    *(_DWORD *)&v87[1] = 0;
    do
    {
      v16 = *(_DWORD *)(a2 + 0x74);
      if ( !v16 || v14 >= (*(_DWORD *)(a2 + 0x78) - v16) / 0x2C )
        _invalid_parameter_noinfo();
      if ( !sub_6F5D40(v110, v15 + *(_DWORD *)(a2 + 0x74), 4u, 1) )
        goto LABEL_56;
      v17 = *(_DWORD *)(a2 + 0x74);
      if ( !v17 || v14 >= (*(_DWORD *)(a2 + 0x78) - v17) / 0x2C )
        _invalid_parameter_noinfo();
      if ( !sub_6F5D40(v110, v15 + *(_DWORD *)(a2 + 0x74) + 4, 0xCu, 1) || !sub_6F5D40(v110, (int)&v88, 4u, 1) )
        goto LABEL_56;
      if ( v88 )
      {
        v87[0] = 0;
        sub_6F2CD0(&v92, v88, v87);
        v18 = LODWORD(v93);
        LOBYTE(v115) = 3;
        if ( v93 == 0.0 || LODWORD(v94) == LODWORD(v93) )
          _invalid_parameter_noinfo();
        if ( !sub_6F5D40(v110, v18, 1u, (int)v88) )
        {
          v25 = &v92;
          goto LABEL_55;
        }
        if ( (unsigned int)v88 <= 1 )
        {
          v26 = (_DWORD *)sub_414750((int)&v101, EmptyString);
          LOBYTE(v115) = 4;
          v27 = sub_6F1160((_DWORD *)(a2 + 0x70), v14);
          sub_414420(v27 + 0x10, v26, 0, 0xFFFFFFFF);
          sub_79AB00(&v101);
        }
        else
        {
          *(_DWORD *)&v85[4] = v88 + 0xFFFFFFFF;
          v19 = sub_6F1160((_DWORD *)(a2 + 0x70), v14);
          sub_6EDB50((_DWORD *)(v19 + 0x10), v14, a2, *(unsigned int *)&v85[4]);
          v20 = 0;
          if ( v88 != (char *)1 )
            v20 = v88 + 0xFFFFFFFF;
          if ( !v18 || (unsigned int)v20 >= LODWORD(v94) - v18 )
            _invalid_parameter_noinfo();
          v21 = sub_6F1160((_DWORD *)(a2 + 0x70), (unsigned int)v86);
          v22 = v21 + 0x10;
          if ( (unsigned int)v20 > *(_DWORD *)(v21 + 0x24) )
            _invalid_parameter_noinfo();
          if ( *(_DWORD *)(v22 + 0x18) < 0x10u )
          {
            v24 = v20[LODWORD(v93)];
            v23 = v22 + 4;
          }
          else
          {
            v23 = *(_DWORD *)(v22 + 4);
            v24 = v20[LODWORD(v93)];
          }
          v20[v23] = v24;
        }
        LOBYTE(v115) = 0;
        if ( v93 != 0.0 )
          FormHeapFree(LODWORD(v93));
        v14 = (unsigned int)v86;
        v15 = *(_DWORD *)&v87[1];
        v93 = 0.0;
        v94 = 0.0;
        v95 = 0;
      }
      ++v14;
      v15 += 0x2C;
      v86 = (char *)v14;
      *(_DWORD *)&v87[1] = v15;
    }
    while ( v14 < v112[4] );
  }
  if ( (v112[6] & 1) != 0 )
  {
    if ( !v112[5] )
    {
      sub_6F2C20((char **)(a2 + 0x30), v112[0], 0.0, COERCE_UNSIGNED_INT(0.0));
      if ( !v112[0] )
        goto LABEL_70;
      v28 = *(_DWORD *)(a2 + 0x34);
      if ( !v28 || !((*(_DWORD *)(a2 + 0x38) - v28) >> 3) )
        _invalid_parameter_noinfo();
      if ( sub_6F5D40(v110, *(_DWORD *)(a2 + 0x34), 8u, v112[0]) )
      {
LABEL_70:
        v29 = *(char **)(a2 + 0x48);
        if ( *(_DWORD *)(a2 + 0x44) > (unsigned int)v29 )
          _invalid_parameter_noinfo();
        v30 = *(char **)(a2 + 0x44);
        if ( (unsigned int)v30 > *(_DWORD *)(a2 + 0x48) )
          _invalid_parameter_noinfo();
        sub_6F1470((void *)(a2 + 0x40), &v113, a2 + 0x40, v30, a2 + 0x40, v29);
        v31 = *(char **)(a2 + 0x58);
        if ( *(_DWORD *)(a2 + 0x54) > (unsigned int)v31 )
          _invalid_parameter_noinfo();
        v32 = *(char **)(a2 + 0x54);
        if ( (unsigned int)v32 > *(_DWORD *)(a2 + 0x58) )
          _invalid_parameter_noinfo();
        sub_6F14D0((void *)(a2 + 0x50), &v113, a2 + 0x50, v32, a2 + 0x50, v31);
        goto LABEL_95;
      }
LABEL_56:
      v115 = 0xFFFFFFFF;
      BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v110);
      return 0;
    }
    sub_6F2C20((char **)(a2 + 0x30), v112[5], 0.0, COERCE_UNSIGNED_INT(0.0));
    if ( v112[5] )
    {
      v33 = *(_DWORD *)(a2 + 0x34);
      if ( !v33 || !((*(_DWORD *)(a2 + 0x38) - v33) >> 3) )
        _invalid_parameter_noinfo();
      if ( !sub_6F5D40(v110, *(_DWORD *)(a2 + 0x34), 8u, v112[5]) )
        goto LABEL_56;
    }
    sub_6F29D0((_DWORD *)(a2 + 0x40), v112[1], 0, 0, 0);
    if ( v112[1] )
    {
      v34 = *(_DWORD *)(a2 + 0x44);
      if ( !v34 || !((*(_DWORD *)(a2 + 0x48) - v34) / 0xC) )
        _invalid_parameter_noinfo();
      if ( !sub_6F5D40(v110, *(_DWORD *)(a2 + 0x44), 0xCu, v112[1]) )
        goto LABEL_56;
    }
    sub_6F2B70((_DWORD *)(a2 + 0x50), v112[2], 0, 0, 0, 0);
    if ( v112[2] )
    {
      v35 = *(_DWORD *)(a2 + 0x54);
      if ( !v35 || !((*(_DWORD *)(a2 + 0x58) - v35) >> 4) )
        _invalid_parameter_noinfo();
      if ( !sub_6F5D40(v110, *(_DWORD *)(a2 + 0x54), 0x10u, v112[2]) )
        goto LABEL_56;
    }
  }
LABEL_95:
  v36 = 0;
  v86 = 0;
  if ( v112[7] )
  {
    v37 = v90;
    *(_DWORD *)&v87[1] = 0;
    while ( 1 )
    {
      v38 = *(_DWORD *)&v87[1];
      if ( !sub_6F5D40(v110, (int)&v88, 4u, 1) )
        goto LABEL_56;
      if ( v88 )
      {
        v87[0] = 0;
        sub_6F2CD0(&v97, v88, v87);
        v39 = v98;
        LOBYTE(v115) = 5;
        if ( !v98 || v99 == v98 )
          _invalid_parameter_noinfo();
        if ( !sub_6F5D40(v110, v39, 1u, (int)v88) )
        {
          if ( v39 )
            FormHeapFree(v39);
          goto LABEL_56;
        }
        if ( (unsigned int)v88 <= 1 )
        {
          *(_DWORD *)&v85[4] = 0;
          v104 = 0xF;
          v103 = 0;
          LOBYTE(v102) = 0;
          sub_414500(&v101, v38, EmptyString, *(rsize_t *)&v85[4]);
          v48 = *(_DWORD *)(v37 + 4);
          LOBYTE(v115) = 6;
          if ( !v48 || v36 >= (*(_DWORD *)(v37 + 8) - v48) / 0x2C )
            _invalid_parameter_noinfo();
          sub_414420(v38 + *(_DWORD *)(v37 + 4), &v101, 0, 0xFFFFFFFF);
          if ( v104 >= 0x10 )
            FormHeapFree(v102);
        }
        else
        {
          v40 = *(_DWORD *)(v37 + 4);
          if ( !v40 || v36 >= (*(_DWORD *)(v37 + 8) - v40) / 0x2C )
            _invalid_parameter_noinfo();
          v41 = *(_DWORD *)(v37 + 4);
          v42 = *(_DWORD *)(v41 + v38 + 0x14);
          v43 = (_DWORD *)(v38 + v41);
          if ( (unsigned int)(v88 + 0xFFFFFFFF) > v42 )
            sub_6EDAA0(v43, v38, (unsigned int)&v88[0xFFFFFFFF - v42], 0);
          else
            sub_4134E0(v43, v37, (unsigned int)(v88 + 0xFFFFFFFF), 0xFFFFFFFF);
          v44 = 0;
          if ( v88 != (char *)1 )
          {
            do
            {
              if ( !v39 || v44 >= v99 - v39 )
                _invalid_parameter_noinfo();
              v45 = *(_DWORD *)(v37 + 4);
              if ( !v45 || (unsigned int)v86 >= (*(_DWORD *)(v37 + 8) - v45) / 0x2C )
                _invalid_parameter_noinfo();
              v46 = (_DWORD *)(*(_DWORD *)&v87[1] + *(_DWORD *)(v37 + 4));
              if ( v44 > v46[5] )
                _invalid_parameter_noinfo();
              if ( v46[6] < 0x10u )
                v47 = v46 + 1;
              else
                v47 = (_DWORD *)v46[1];
              *((_BYTE *)v47 + v44) = *(_BYTE *)(v39 + v44);
              ++v44;
            }
            while ( v44 < (unsigned int)(v88 + 0xFFFFFFFF) );
            v36 = (unsigned int)v86;
          }
        }
        LOBYTE(v115) = 0;
        if ( v39 )
          FormHeapFree(v39);
        v98 = 0;
        v99 = 0;
        v100 = 0;
      }
      if ( !sub_6F5D40(v110, (int)&v96, 4u, 1) )
        goto LABEL_56;
      v49 = *(_DWORD *)(v37 + 4);
      if ( !v49 || v36 >= (*(_DWORD *)(v37 + 8) - v49) / 0x2C )
        _invalid_parameter_noinfo();
      v50 = *(_DWORD *)(v37 + 4);
      v107 = 0.0;
      v108 = 0.0;
      v109 = 0.0;
      sub_6F29D0(
        (_DWORD *)(v50 + *(_DWORD *)&v87[1] + 0x1C),
        v112[0],
        COERCE_INT(0.0),
        COERCE_UNSIGNED_INT(0.0),
        COERCE_INT(0.0));
      v51 = 0;
      if ( v112[0] )
      {
        v52 = 0;
        while ( sub_6F5D40(v110, (int)&v113, 2u, 3) )
        {
          v90 = SHIWORD(v113);
          v53 = *(_DWORD *)(v37 + 4);
          v91 = (double)(__int16)v114 * v96;
          v90 = (__int16)v113;
          v106 = (double)SHIWORD(v113) * v96;
          v92 = v96 * (double)(__int16)v113;
          v93 = v106;
          v94 = v91;
          if ( !v53 || (unsigned int)v86 >= (*(_DWORD *)(v37 + 8) - v53) / 0x2C )
            _invalid_parameter_noinfo();
          v54 = *(_DWORD *)&v87[1] + *(_DWORD *)(v37 + 4);
          v55 = *(_DWORD *)(v54 + 0x20);
          if ( !v55 || v51 >= (*(_DWORD *)(v54 + 0x24) - v55) / 0xC )
            _invalid_parameter_noinfo();
          v56 = v93;
          v57 = (float *)(v52 + *(_DWORD *)(v54 + 0x20));
          *v57 = v92;
          v58 = v94;
          v57[1] = v56;
          ++v51;
          v57[2] = v58;
          v52 += 0xC;
          if ( v51 >= v112[0] )
            goto LABEL_147;
        }
        v110[0] = &BSFaceGenBinaryFile::`vftable';
        v66 = v111;
        v115 = 7;
        if ( v111 )
LABEL_165:
          (**v111)(v66, 1);
LABEL_166:
        v111 = 0;
        goto LABEL_167;
      }
LABEL_147:
      *(_DWORD *)&v87[1] += 0x2C;
      if ( (unsigned int)++v86 >= v112[7] )
        break;
      v36 = (unsigned int)v86;
    }
  }
  v59 = 0;
  v88 = (char *)v112[0];
  if ( v112[8] )
  {
    v60 = (int)v89;
    *(_DWORD *)&v87[1] = 0;
    while ( 1 )
    {
      if ( !sub_6F5D40(v110, (int)&v86, 4u, 1) )
      {
        v110[0] = &BSFaceGenBinaryFile::`vftable';
        v66 = v111;
        v115 = 8;
        if ( !v111 )
          goto LABEL_166;
        goto LABEL_165;
      }
      v61 = 0;
      if ( v86 )
      {
        v87[0] = 0;
        sub_6F2CD0(&v92, v86, v87);
        v62 = LODWORD(v93);
        LOBYTE(v115) = 9;
        if ( v93 == 0.0 || LODWORD(v94) == LODWORD(v93) )
          _invalid_parameter_noinfo();
        if ( !sub_6F5D40(v110, v62, 1u, (int)v86) )
        {
          if ( v62 )
            FormHeapFree(v62);
          v110[0] = &BSFaceGenBinaryFile::`vftable';
          v115 = 0xA;
          if ( v111 )
            (**v111)(v111, 1);
          goto LABEL_217;
        }
        if ( (unsigned int)v86 <= 1 )
        {
          *(_DWORD *)&v85[4] = 0;
          v104 = 0xF;
          v103 = 0;
          LOBYTE(v102) = 0;
          sub_414500(&v101, 0, EmptyString, *(rsize_t *)&v85[4]);
          v71 = *(_DWORD *)(v60 + 4);
          LOBYTE(v115) = 0xB;
          if ( !v71 || v59 >= (*(_DWORD *)(v60 + 8) - v71) / 0x30 )
            _invalid_parameter_noinfo();
          sub_414420(*(_DWORD *)&v87[1] + *(_DWORD *)(v60 + 4), &v101, 0, 0xFFFFFFFF);
          if ( v104 >= 0x10 )
            FormHeapFree(v102);
        }
        else
        {
          v63 = *(_DWORD *)(v60 + 4);
          if ( !v63 || v59 >= (*(_DWORD *)(v60 + 8) - v63) / 0x30 )
            _invalid_parameter_noinfo();
          v64 = (_DWORD *)(*(_DWORD *)&v87[1] + *(_DWORD *)(v60 + 4));
          v65 = v64[5];
          if ( (unsigned int)(v86 + 0xFFFFFFFF) > v65 )
            sub_6EDAA0(v64, 0, (unsigned int)&v86[0xFFFFFFFF - v65], 0);
          else
            sub_4134E0(v64, v60, (unsigned int)(v86 + 0xFFFFFFFF), 0xFFFFFFFF);
          if ( v86 != (char *)1 )
          {
            do
            {
              if ( v93 == 0.0 || v61 >= LODWORD(v94) - LODWORD(v93) )
                _invalid_parameter_noinfo();
              v67 = *(_DWORD *)(v60 + 4);
              if ( !v67 || v59 >= (*(_DWORD *)(v60 + 8) - v67) / 0x30 )
                _invalid_parameter_noinfo();
              v68 = (_DWORD *)(*(_DWORD *)&v87[1] + *(_DWORD *)(v60 + 4));
              if ( v61 > v68[5] )
                _invalid_parameter_noinfo();
              if ( v68[6] < 0x10u )
                v69 = v68 + 1;
              else
                v69 = (_DWORD *)v68[1];
              v70 = v93;
              *((_BYTE *)v69 + v61) = *(_BYTE *)(LODWORD(v93) + v61);
              ++v61;
            }
            while ( v61 < (unsigned int)(v86 + 0xFFFFFFFF) );
            v62 = LODWORD(v70);
          }
        }
        LOBYTE(v115) = 0;
        if ( v62 )
          FormHeapFree(v62);
        v93 = 0.0;
        v94 = 0.0;
        v95 = 0;
      }
      v72 = *(_DWORD *)(v60 + 4);
      if ( !v72 || v59 >= (*(_DWORD *)(v60 + 8) - v72) / 0x30 )
        _invalid_parameter_noinfo();
      v73 = *(_DWORD *)(v60 + 4);
      v74 = *(_DWORD *)&v87[1];
      *(_DWORD *)&v85[4] = 1;
      *(_DWORD *)v85 = 4;
      v84 = &v86;
      *(_DWORD *)(v73 + *(_DWORD *)&v87[1] + 0x1C) = v88;
      if ( !sub_6F5D40(v110, (int)v84, *(unsigned int *)v85, *(int *)&v85[4]) )
        break;
      v75 = *(_DWORD *)(v60 + 4);
      if ( !v75 || v59 >= (*(_DWORD *)(v60 + 8) - v75) / 0x30 )
        _invalid_parameter_noinfo();
      sub_6F2AB0((_DWORD *)(*(_DWORD *)(v60 + 4) + v74 + 0x20), (unsigned int)v86, 0);
      if ( v86 )
      {
        v76 = *(_DWORD *)(v60 + 4);
        if ( !v76 || v59 >= (*(_DWORD *)(v60 + 8) - v76) / 0x30 )
          _invalid_parameter_noinfo();
        v77 = *(_DWORD *)&v87[1] + *(_DWORD *)(v60 + 4);
        v78 = *(_DWORD *)(v77 + 0x24);
        if ( !v78 || !((*(_DWORD *)(v77 + 0x28) - v78) >> 2) )
          _invalid_parameter_noinfo();
        if ( !sub_6F5D40(v110, *(_DWORD *)(v77 + 0x24), 4u, (int)v86) )
          goto LABEL_56;
      }
      v88 = &v88[(_DWORD)v86];
      *(_DWORD *)&v87[1] += 0x30;
      if ( ++v59 >= v112[8] )
        goto LABEL_207;
    }
    v110[0] = &BSFaceGenBinaryFile::`vftable';
    v115 = 0xC;
    if ( !v111 )
    {
LABEL_217:
      v111 = 0;
      goto LABEL_167;
    }
    (**v111)(v111, 1);
    v111 = 0;
    goto LABEL_167;
  }
LABEL_207:
  if ( v88 != (char *)(v112[0] + v112[9]) )
  {
    v89 = (int *)&v80 + 1;
    *(_QWORD *)v85 = 0xF00000000LL;
    LOBYTE(v81) = 0;
    sub_414420((int)&v80 + 4, v105, 0, 0xFFFFFFFF);
    sub_6F6BF0(1, SHIDWORD(v80), v81, v82, v83, (int)v84, *(size_t *)v85, *(int *)&v85[8]);
    v110[0] = &BSFaceGenBinaryFile::`vftable';
    v115 = 0xD;
    if ( v111 )
      (**v111)(v111, 1);
    v111 = 0;
LABEL_167:
    v115 = 0xFFFFFFFF;
    FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v110);
    return 0;
  }
  v110[0] = &BSFaceGenBinaryFile::`vftable';
  v115 = 0xE;
  if ( v111 )
    (**v111)(v111, 1);
  v111 = 0;
  v115 = 0xFFFFFFFF;
  FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v110);
  return 1;
}
