char __thiscall sub_6EE270(_BYTE *this, float *a2, _DWORD *a3)
{
  float *v3; // ebx
  float *v4; // esi
  unsigned int v5; // edi
  double v6; // st7
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edi
  _DWORD *v10; // esi
  double v11; // st7
  unsigned int v12; // ebp
  _DWORD *v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // ebp
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // edi
  _DWORD *v19; // edi
  int *v20; // ebp
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // ebx
  int v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  float *v27; // eax
  float *v28; // ebx
  float *v29; // edi
  int *v30; // ebp
  _DWORD *v31; // eax
  _DWORD *v32; // esi
  int v33; // eax
  unsigned int v34; // eax
  bool v35; // zf
  double v36; // st7
  double v37; // st6
  double v38; // st7
  unsigned int v40; // [esp+50h] [ebp-B0h]
  unsigned int v41; // [esp+50h] [ebp-B0h]
  float *v42; // [esp+6Ch] [ebp-94h]
  unsigned int v43; // [esp+6Ch] [ebp-94h]
  _DWORD *v44; // [esp+6Ch] [ebp-94h]
  int *v45; // [esp+6Ch] [ebp-94h]
  _BYTE *v46; // [esp+70h] [ebp-90h]
  int v47; // [esp+70h] [ebp-90h]
  float v48; // [esp+70h] [ebp-90h]
  float v49; // [esp+70h] [ebp-90h]
  float v50; // [esp+70h] [ebp-90h]
  float v51; // [esp+70h] [ebp-90h]
  float v52; // [esp+70h] [ebp-90h]
  float v53; // [esp+70h] [ebp-90h]
  int v54; // [esp+70h] [ebp-90h]
  int v55; // [esp+74h] [ebp-8Ch]
  int v56; // [esp+74h] [ebp-8Ch]
  int v57; // [esp+74h] [ebp-8Ch]
  int v58; // [esp+74h] [ebp-8Ch]
  float *v59; // [esp+74h] [ebp-8Ch]
  float *v60; // [esp+78h] [ebp-88h]
  float v61; // [esp+78h] [ebp-88h]
  int *v62; // [esp+78h] [ebp-88h]
  int *v63; // [esp+78h] [ebp-88h]
  int v64; // [esp+7Ch] [ebp-84h]
  unsigned int v65; // [esp+7Ch] [ebp-84h]
  int v66; // [esp+7Ch] [ebp-84h]
  int *v67; // [esp+7Ch] [ebp-84h]
  int v68; // [esp+80h] [ebp-80h]
  float v69; // [esp+80h] [ebp-80h]
  float v70; // [esp+80h] [ebp-80h]
  int v71; // [esp+84h] [ebp-7Ch]
  int v73; // [esp+8Ch] [ebp-74h] BYREF
  float v74; // [esp+90h] [ebp-70h]
  float v75; // [esp+94h] [ebp-6Ch]
  float v76; // [esp+98h] [ebp-68h]
  int v77; // [esp+9Ch] [ebp-64h]
  int v78; // [esp+A0h] [ebp-60h]
  int v79; // [esp+A4h] [ebp-5Ch]
  int v80[3]; // [esp+ACh] [ebp-54h] BYREF
  unsigned int v81; // [esp+B8h] [ebp-48h]
  int v82; // [esp+BCh] [ebp-44h]
  int v83; // [esp+C0h] [ebp-40h]
  int v84[3]; // [esp+C4h] [ebp-3Ch] BYREF
  unsigned int v85; // [esp+D0h] [ebp-30h]
  int v86[3]; // [esp+DCh] [ebp-24h] BYREF
  unsigned int v87; // [esp+E8h] [ebp-18h]
  int v88; // [esp+FCh] [ebp-4h]

  v3 = a2;
  v55 = 0;
  v60 = (float *)(this + 0x268);
LABEL_2:
  v64 = 0;
  v42 = v60;
LABEL_3:
  v4 = v42;
  v5 = 0;
  while ( 1 )
  {
    v40 = a3[2 * v5];
    *((_DWORD *)v4 + 0xFFFFFFFD) = 1;
    *((_DWORD *)v4 + 0xFFFFFFFE) = v40;
    sub_527160((_DWORD *)v4 + 0xFFFFFFFF, v40, COERCE_INT(0.0));
    if ( !*(_DWORD *)v4 || !((*((_DWORD *)v4 + 1) - *(_DWORD *)v4) >> 2) )
      _invalid_parameter_noinfo();
    if ( !(*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 0x10))(
            a2,
            *(_DWORD *)v4,
            4,
            a3[2 * v5])
      || !(*(unsigned __int8 (__thiscall **)(float *, _DWORD *, int, int))(*(_DWORD *)a2 + 0x10))(
            a2,
            (_DWORD *)v4 + 4,
            4,
            1) )
    {
      return 0;
    }
    v6 = sub_5511D0((unsigned int *)v4 + 0xFFFFFFFD);
    ++v5;
    v4 += 8;
    v4[0xFFFFFFFB] = 1.0 / v6;
    if ( v5 >= 2 )
    {
      v42 += 0x10;
      if ( (unsigned int)++v64 < 2 )
        goto LABEL_3;
      v60 += 0x20;
      if ( (unsigned int)++v55 >= 5 )
      {
        v7 = 0;
        v56 = 0;
        v43 = 0;
        while ( 2 )
        {
          v8 = 0;
          v65 = 0;
          do
          {
            if ( v8 != v56 )
            {
              v61 = 0.0;
              v9 = 0;
              v46 = this + 0x38 * v7 + 0x38 * v8;
              v10 = v46 + 0x4E8;
              while ( 1 )
              {
                v41 = a3[2 * v9];
                v10[0xFFFFFFFD] = 1;
                v10[0xFFFFFFFE] = v41;
                sub_527160(v10 + 0xFFFFFFFF, v41, COERCE_INT(0.0));
                if ( !*v10 || !((v10[1] - *v10) >> 2) )
                  _invalid_parameter_noinfo();
                if ( !(*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 0x10))(
                        a2,
                        *v10,
                        4,
                        a3[2 * v9]) )
                  return 0;
                v11 = sub_5511D0(v10 + 0xFFFFFFFD);
                ++v9;
                v10 += 6;
                v61 = v11 + v61;
                if ( v9 >= 2 )
                {
                  if ( !(*(unsigned __int8 (__thiscall **)(float *, _BYTE *, int, int))(*(_DWORD *)a2 + 0x10))(
                          a2,
                          v46 + 0x510,
                          4,
                          1) )
                    return 0;
                  v7 = v43;
                  v8 = v65;
                  *((float *)v46 + 0x143) = 1.0 / v61;
                  break;
                }
              }
            }
            v65 = ++v8;
          }
          while ( v8 < 5 );
          ++v56;
          v7 += 5;
          v43 = v7;
          if ( v7 < 0x19 )
            continue;
          break;
        }
        v57 = 0;
        v47 = *a3 + a3[2];
        v44 = this + 0x40;
LABEL_26:
        v12 = 0;
        v13 = v44 + 0xFFFFFFF4;
        while ( 1 )
        {
          v14 = a3[2 * v12];
          v13[0xFFFFFFFD] = v14;
          v13[0xFFFFFFFE] = 1;
          sub_527160(v13 + 0xFFFFFFFF, v14, COERCE_INT(0.0));
          if ( !*v13 || !((v13[1] - *v13) >> 2) )
            _invalid_parameter_noinfo();
          if ( !(*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, unsigned int))(*(_DWORD *)a2 + 0x10))(
                  a2,
                  *v13,
                  4,
                  v14) )
            return 0;
          ++v12;
          v13 += 6;
          if ( v12 >= 2 )
          {
            v44[0xFFFFFFFD] = v47;
            v44[0xFFFFFFFE] = v47;
            sub_527160(v44 + 0xFFFFFFFF, v47 * v47, COERCE_INT(0.0));
            if ( !*v44 || !((v44[1] - *v44) >> 2) )
              _invalid_parameter_noinfo();
            if ( (*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, int))(*(_DWORD *)a2 + 0x10))(
                   a2,
                   *v44,
                   4,
                   v47 * v47) )
            {
              v15 = 0;
              v16 = v44 + 6;
              while ( 1 )
              {
                v17 = a3[2 * v15];
                v18 = v17 * v17;
                v16[0xFFFFFFFD] = v17;
                v16[0xFFFFFFFE] = v17;
                sub_527160(v16 + 0xFFFFFFFF, v17 * v17, COERCE_INT(0.0));
                if ( !*v16 || !((v16[1] - *v16) >> 2) )
                  _invalid_parameter_noinfo();
                if ( !(*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, int))(*(_DWORD *)a2 + 0x10))(
                        a2,
                        *v16,
                        4,
                        v18) )
                  break;
                ++v15;
                v16 += 6;
                if ( v15 >= 2 )
                {
                  v44 += 0x1E;
                  if ( (unsigned int)++v57 < 5 )
                    goto LABEL_26;
                  v62 = (int *)(this + 0x29C);
                  v19 = this + 0xA6C;
                  v58 = 5;
                  do
                  {
                    v20 = v62;
                    v66 = 2;
                    do
                    {
                      v48 = sub_5511D0((unsigned int *)v20 + 0xFFFFFFF0);
                      v49 = sqrt(v48);
                      if ( v49 <= dbl_A7CD98 )
                        sub_6ED6D0(".\\FanControls.cpp", 0x85);
                      v21 = sub_6EE130(v20 + 0xFFFFFFF0, &v73, v49);
                      v88 = 0;
                      sub_5520E0(v19 + 0xFFFFFFFA, (int)v3, v21);
                      v88 = 0xFFFFFFFF;
                      if ( v76 != 0.0 )
                        FormHeapFree(LODWORD(v76));
                      v22 = sub_552730(v19 + 0xFFFFFFFA, v84);
                      v88 = 1;
                      v23 = sub_5523C0(v20, &v73, v22);
                      v24 = v23[3];
                      if ( !v24 || !((v23[4] - v24) >> 2) )
                        _invalid_parameter_noinfo();
                      v3 = (float *)v23[3];
                      v50 = *v3;
                      if ( v76 != 0.0 )
                        FormHeapFree(LODWORD(v76));
                      v76 = 0.0;
                      v77 = 0;
                      v78 = 0;
                      v88 = 0xFFFFFFFF;
                      if ( v85 )
                        FormHeapFree(v85);
                      v25 = sub_552310(v19 + 0xFFFFFFFA, v84, v50);
                      v88 = 2;
                      v26 = sub_552630(v20, &v73, v25);
                      LOBYTE(v88) = 3;
                      sub_5520E0(v19, (int)v3, v26);
                      if ( v76 != 0.0 )
                        FormHeapFree(LODWORD(v76));
                      v76 = 0.0;
                      v77 = 0;
                      v78 = 0;
                      v88 = 0xFFFFFFFF;
                      if ( v85 )
                        FormHeapFree(v85);
                      v51 = sub_5511D0(v19);
                      v52 = sqrt(v51);
                      if ( v52 <= dbl_A7CD98 )
                        sub_6ED6D0(".\\FanControls.cpp", 0x8D);
                      v53 = 1.0 / v52;
                      sub_551D40(v19, v53);
                      v20 += 8;
                      v19 += 0xC;
                      --v66;
                    }
                    while ( v66 );
                    v62 += 0x20;
                    --v58;
                  }
                  while ( v58 );
                  v27 = (float *)(this + 0xC38);
                  v67 = (int *)(this + 0x25C);
                  v54 = 5;
                  do
                  {
                    v45 = v67;
                    v59 = v27;
                    v71 = 2;
                    do
                    {
                      v28 = v59 + 0xFFFFFFFF;
                      v59[0xFFFFFFFF] = 0.0;
                      *v59 = 0.0;
                      v59[1] = 0.0;
                      v59[2] = 0.0;
                      v29 = v59 + 0xFFFFFFFF;
                      v63 = v45;
                      v68 = 2;
                      do
                      {
                        v30 = v45;
                        v79 = 2;
                        do
                        {
                          v31 = sub_552730(v30, v86);
                          v88 = 4;
                          v32 = sub_5523C0(v63, v80, v31);
                          v33 = v32[3];
                          if ( !v33 || !((v32[4] - v33) >> 2) )
                            _invalid_parameter_noinfo();
                          v34 = v81;
                          v35 = v81 == 0;
                          *v29 = *v29 + *(float *)v32[3];
                          if ( !v35 )
                            FormHeapFree(v34);
                          v81 = 0;
                          v82 = 0;
                          v83 = 0;
                          v88 = 0xFFFFFFFF;
                          if ( v87 )
                            FormHeapFree(v87);
                          ++v29;
                          v30 += 0x10;
                          --v79;
                        }
                        while ( v79 );
                        v63 += 0x10;
                        --v68;
                      }
                      while ( v68 );
                      v45 += 8;
                      v36 = v59[2] * *v28;
                      v27 = v59 + 4;
                      v35 = v71-- == 1;
                      v37 = v59[1] * *v59;
                      v59 = v27;
                      v69 = v36 - v37;
                      v70 = 1.0 / v69;
                      *(float *)&v73 = v27[0xFFFFFFFE] * v70;
                      v74 = -v27[0xFFFFFFFC] * v70;
                      v75 = -v27[0xFFFFFFFD] * v70;
                      v38 = v70 * *v28;
                      *v28 = *(float *)&v73;
                      v28[1] = v74;
                      v76 = v38;
                      v28[2] = v75;
                      v28[3] = v76;
                    }
                    while ( !v35 );
                    v67 += 0x20;
                    --v54;
                  }
                  while ( v54 );
                  *this = 1;
                  return 1;
                }
              }
            }
            return 0;
          }
        }
      }
      goto LABEL_2;
    }
  }
}
