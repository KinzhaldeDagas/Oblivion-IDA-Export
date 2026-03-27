void __thiscall sub_798CC0(_WORD *this, unsigned __int16 a2, int a3)
{
  _DWORD *v4; // ebx
  unsigned int v5; // ecx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  int v19; // ebp
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  double v23; // st7
  int v24; // ecx
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ebx
  int v31; // ecx
  int v32; // ecx
  __int16 v33; // dx
  int v34; // eax
  unsigned int v35; // ebx
  int v36; // ebp
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  double v40; // st7
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // ebx
  int v44; // ecx
  int v45; // eax
  unsigned int v46; // ebx
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  unsigned int v50; // ebx
  int v51; // ecx
  int v52; // edx
  int v53; // eax
  unsigned int v54; // ebx
  int v55; // ecx
  int v56; // eax
  unsigned int v57; // ebx
  int v58; // ebp
  int v59; // ecx
  float *v60; // eax
  int v61; // ecx
  double v62; // st7
  int v63; // ecx
  int v64; // eax
  unsigned int v65; // ebx
  int v66; // ebp
  int v67; // ecx
  float *v68; // eax
  int v69; // ecx
  double v70; // st7
  int v71; // ecx
  int v72; // eax
  float *v73; // eax
  int v74; // ecx
  double v75; // st7
  int v76; // ecx
  unsigned __int16 i; // [esp+18h] [ebp-14h]
  int v79; // [esp+1Ch] [ebp-10h]
  float v80; // [esp+1Ch] [ebp-10h]
  char v81; // [esp+1Ch] [ebp-10h]

  v4 = 0;
  if ( a3 )
  {
    if ( *((_DWORD *)this + 4) )
    {
      if ( *((_DWORD *)this + 1) )
      {
        if ( *((_DWORD *)this + 5) )
        {
          *(this + 0x14) = a2;
          v5 = (0x44 * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x44 * a2;
          v6 = (_DWORD *)FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
          if ( v6 )
          {
            v4 = v6 + 1;
            *v6 = a2;
            ArrayConstructor(v6 + 1, 0x44u, a2, (int)sub_7981C0, (void (__thiscall *)(void *))sub_7981E0);
          }
          *((_DWORD *)this + 0xB) = v4;
          for ( i = 0; i < a2; ++i )
          {
            v7 = *((_DWORD *)this + 0xB) + 0x44 * i;
            v8 = 0x10 * i + a3;
            v9 = *(_DWORD *)(v8 + 4);
            if ( v9 )
              v10 = (*(_DWORD *)(v8 + 8) - v9) >> 2;
            else
              LOWORD(v10) = 0;
            *(_WORD *)(v7 + 0xC) = v10;
            v11 = FormHeapAlloc((unsigned __int64)(unsigned __int16)v10 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v10);
            v12 = 0;
            v13 = *(_WORD *)(v7 + 0xC) == 0;
            *(_DWORD *)(v7 + 0x20) = v11;
            if ( !v13 )
            {
              do
              {
                v14 = *(_DWORD *)(v8 + 4);
                if ( !v14 || v12 >= (*(_DWORD *)(v8 + 8) - v14) >> 2 )
                  _invalid_parameter_noinfo();
                v15 = *(_DWORD *)(v8 + 4);
                v79 = *(unsigned __int8 *)(*(_DWORD *)(v15 + 4 * v12) + 0x40);
                if ( !v15 || v12 >= (*(_DWORD *)(v8 + 8) - v15) >> 2 )
                  _invalid_parameter_noinfo();
                v16 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * i)
                    + ((v79 * (unsigned __int16)*(this + 4)
                      + *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v12++) + 0x10)) << 6);
                *(_DWORD *)(*(_DWORD *)(v7 + 0x20) + 4 * v12 - 4) = v16;
              }
              while ( (int)v12 < *(unsigned __int16 *)(v7 + 0xC) );
            }
            if ( *((_BYTE *)this + 1) )
            {
              v17 = FormHeapAlloc(
                      (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                    ? 0xFFFFFFFF
                    : 0xC * *(unsigned __int16 *)(v7 + 0xC));
              v18 = 0;
              v13 = *(_WORD *)(v7 + 0xC) == 0;
              *(_DWORD *)(v7 + 0x40) = v17;
              if ( !v13 )
              {
                v19 = 0;
                do
                {
                  v20 = *(_DWORD *)(v8 + 4);
                  if ( !v20 || v18 >= (unsigned int)((*(_DWORD *)(v8 + 8) - v20) >> 2) )
                    _invalid_parameter_noinfo();
                  v21 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v18);
                  v22 = *(_DWORD *)(v7 + 0x40);
                  v23 = *(float *)(v21 + 4);
                  v21 += 4;
                  *(float *)(v22 + v19) = v23;
                  v24 = v19 + v22;
                  *(float *)(v24 + 4) = *(float *)(v21 + 4);
                  ++v18;
                  v19 += 0xC;
                  *(float *)(v24 + 8) = *(float *)(v21 + 8);
                }
                while ( v18 < *(unsigned __int16 *)(v7 + 0xC) );
              }
              v25 = FormHeapAlloc(
                      (unsigned __int64)*(unsigned __int16 *)(v7 + 0xC) >> 0x1E != 0
                    ? 0xFFFFFFFF
                    : 4 * *(unsigned __int16 *)(v7 + 0xC));
              v26 = 0;
              v13 = *(_WORD *)(v7 + 0xC) == 0;
              *(_DWORD *)(v7 + 0x34) = v25;
              if ( !v13 )
              {
                do
                {
                  v27 = *(_DWORD *)(v8 + 4);
                  if ( !v27 || v26 >= (unsigned int)((*(_DWORD *)(v8 + 8) - v27) >> 2) )
                    _invalid_parameter_noinfo();
                  v28 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v26++);
                  v80 = 1.0 - *(float *)(v28 + 0x44);
                  *(float *)(*(_DWORD *)(v7 + 0x34) + 4 * v26 - 4) = v80;
                }
                while ( v26 < *(unsigned __int16 *)(v7 + 0xC) );
              }
              v29 = FormHeapAlloc(*(unsigned __int16 *)(v7 + 0xC));
              v30 = 0;
              v13 = *(_WORD *)(v7 + 0xC) == 0;
              *(_DWORD *)(v7 + 0x38) = v29;
              if ( !v13 )
              {
                do
                {
                  v31 = *(_DWORD *)(v8 + 4);
                  if ( !v31 || v30 >= (unsigned int)((*(_DWORD *)(v8 + 8) - v31) >> 2) )
                    _invalid_parameter_noinfo();
                  v32 = *((_DWORD *)this + 1);
                  v33 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v30++) + 0x48)
                      % (__int16)*(unsigned __int8 *)(v32 + 0x2C);
                  *(_BYTE *)(v30 + *(_DWORD *)(v7 + 0x38) - 1) = *(_BYTE *)(v32 + 0x28) + v33;
                }
                while ( v30 < *(unsigned __int16 *)(v7 + 0xC) );
              }
            }
            v34 = FormHeapAlloc(
                    (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 0xC * *(unsigned __int16 *)(v7 + 0xC));
            v35 = 0;
            v13 = *(_WORD *)(v7 + 0xC) == 0;
            *(_DWORD *)(v7 + 0x18) = v34;
            if ( !v13 )
            {
              v36 = 0;
              do
              {
                v37 = *(_DWORD *)(v8 + 4);
                if ( !v37 || v35 >= (*(_DWORD *)(v8 + 8) - v37) >> 2 )
                  _invalid_parameter_noinfo();
                v38 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v35);
                v39 = *(_DWORD *)(v7 + 0x18);
                v40 = *(float *)(v38 + 4);
                v38 += 4;
                *(float *)(v39 + v36) = v40;
                v41 = v36 + v39;
                *(float *)(v41 + 4) = *(float *)(v38 + 4);
                ++v35;
                v36 += 0xC;
                *(float *)(v41 + 8) = *(float *)(v38 + 8);
              }
              while ( v35 < *(unsigned __int16 *)(v7 + 0xC) );
            }
            v42 = FormHeapAlloc(*(unsigned __int16 *)(v7 + 0xC));
            v43 = 0;
            v13 = *(_WORD *)(v7 + 0xC) == 0;
            *(_DWORD *)(v7 + 0x10) = v42;
            if ( !v13 )
            {
              do
              {
                v44 = *(_DWORD *)(v8 + 4);
                if ( !v44 || v43 >= (*(_DWORD *)(v8 + 8) - v44) >> 2 )
                  _invalid_parameter_noinfo();
                *(_BYTE *)(v43 + *(_DWORD *)(v7 + 0x10)) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v43) + 0x40);
                ++v43;
              }
              while ( v43 < *(unsigned __int16 *)(v7 + 0xC) );
            }
            v45 = FormHeapAlloc(*(unsigned __int16 *)(v7 + 0xC));
            v46 = 0;
            v13 = *(_WORD *)(v7 + 0xC) == 0;
            *(_DWORD *)(v7 + 0x14) = v45;
            if ( !v13 )
            {
              do
              {
                v47 = *(_DWORD *)(v8 + 4);
                if ( !v47 || v46 >= (*(_DWORD *)(v8 + 8) - v47) >> 2 )
                  _invalid_parameter_noinfo();
                v48 = *(_DWORD *)(v8 + 4);
                v81 = *(_BYTE *)(*(_DWORD *)(v48 + 4 * v46) + 0x40);
                if ( !v48 || v46 >= (*(_DWORD *)(v8 + 8) - v48) >> 2 )
                  _invalid_parameter_noinfo();
                *(_BYTE *)(v46 + *(_DWORD *)(v7 + 0x14)) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v46) + 0x10)
                                                         + v81 * *((_BYTE *)this + 8);
                ++v46;
              }
              while ( v46 < *(unsigned __int16 *)(v7 + 0xC) );
            }
            v49 = FormHeapAlloc(
                    (unsigned __int64)*(unsigned __int16 *)(v7 + 0xC) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 4 * *(unsigned __int16 *)(v7 + 0xC));
            v50 = 0;
            v13 = *(_WORD *)(v7 + 0xC) == 0;
            *(_DWORD *)(v7 + 0x1C) = v49;
            if ( !v13 )
            {
              do
              {
                v51 = *(_DWORD *)(v8 + 4);
                if ( !v51 || v50 >= (*(_DWORD *)(v8 + 8) - v51) >> 2 )
                  _invalid_parameter_noinfo();
                v52 = *((_DWORD *)this + 5)
                    + 0x20 * *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v50++) + 0x40);
                *(_DWORD *)(*(_DWORD *)(v7 + 0x1C) + 4 * v50 - 4) = v52;
              }
              while ( v50 < *(unsigned __int16 *)(v7 + 0xC) );
            }
            v53 = FormHeapAlloc(
                    (unsigned __int64)*(unsigned __int16 *)(v7 + 0xC) >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 4 * *(unsigned __int16 *)(v7 + 0xC));
            v54 = 0;
            v13 = *(_WORD *)(v7 + 0xC) == 0;
            *(_DWORD *)(v7 + 0x24) = v53;
            if ( !v13 )
            {
              do
              {
                v55 = *(_DWORD *)(v8 + 4);
                if ( !v55 || v54 >= (*(_DWORD *)(v8 + 8) - v55) >> 2 )
                  _invalid_parameter_noinfo();
                *(_DWORD *)(*(_DWORD *)(v7 + 0x24) + 4 * v54) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v54)
                                                                          + 0x14);
                ++v54;
              }
              while ( v54 < *(unsigned __int16 *)(v7 + 0xC) );
            }
            if ( !*(_BYTE *)this )
            {
              v56 = FormHeapAlloc(
                      (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                    ? 0xFFFFFFFF
                    : 0xC * *(unsigned __int16 *)(v7 + 0xC));
              v57 = 0;
              v13 = *(_WORD *)(v7 + 0xC) == 0;
              *(_DWORD *)(v7 + 0x28) = v56;
              if ( !v13 )
              {
                v58 = 0;
                do
                {
                  v59 = *(_DWORD *)(v8 + 4);
                  if ( !v59 || v57 >= (*(_DWORD *)(v8 + 8) - v59) >> 2 )
                    _invalid_parameter_noinfo();
                  v60 = *(float **)(*(_DWORD *)(v8 + 4) + 4 * v57);
                  v61 = *(_DWORD *)(v7 + 0x28);
                  v62 = v60[7];
                  v60 += 7;
                  *(float *)(v61 + v58) = v62;
                  v63 = v58 + v61;
                  *(float *)(v63 + 4) = v60[1];
                  ++v57;
                  v58 += 0xC;
                  *(float *)(v63 + 8) = v60[2];
                }
                while ( v57 < *(unsigned __int16 *)(v7 + 0xC) );
              }
              if ( !*(_BYTE *)this )
              {
                *(_DWORD *)(v7 + 0x30) = FormHeapAlloc(
                                           (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                                         ? 0xFFFFFFFF
                                         : 0xC * *(unsigned __int16 *)(v7 + 0xC));
                v64 = FormHeapAlloc(
                        (unsigned __int64)(3 * (unsigned int)*(unsigned __int16 *)(v7 + 0xC)) >> 0x1E != 0
                      ? 0xFFFFFFFF
                      : 0xC * *(unsigned __int16 *)(v7 + 0xC));
                v65 = 0;
                v13 = *(_WORD *)(v7 + 0xC) == 0;
                *(_DWORD *)(v7 + 0x2C) = v64;
                if ( !v13 )
                {
                  v66 = 0;
                  do
                  {
                    v67 = *(_DWORD *)(v8 + 4);
                    if ( !v67 || v65 >= (*(_DWORD *)(v8 + 8) - v67) >> 2 )
                      _invalid_parameter_noinfo();
                    v68 = *(float **)(*(_DWORD *)(v8 + 4) + 4 * v65);
                    v69 = *(_DWORD *)(v7 + 0x30);
                    v70 = v68[0xA];
                    v68 += 0xA;
                    *(float *)(v69 + v66) = v70;
                    v71 = v66 + v69;
                    *(float *)(v71 + 4) = v68[1];
                    *(float *)(v71 + 8) = v68[2];
                    v72 = *(_DWORD *)(v8 + 4);
                    if ( !v72 || v65 >= (*(_DWORD *)(v8 + 8) - v72) >> 2 )
                      _invalid_parameter_noinfo();
                    v73 = *(float **)(*(_DWORD *)(v8 + 4) + 4 * v65);
                    v74 = *(_DWORD *)(v7 + 0x2C);
                    v75 = v73[0xD];
                    v73 += 0xD;
                    *(float *)(v74 + v66) = v75;
                    v76 = v66 + v74;
                    *(float *)(v76 + 4) = v73[1];
                    ++v65;
                    v66 += 0xC;
                    *(float *)(v76 + 8) = v73[2];
                  }
                  while ( v65 < *(unsigned __int16 *)(v7 + 0xC) );
                }
              }
            }
          }
        }
      }
    }
  }
}
