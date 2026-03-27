int __thiscall sub_5622B0(float **this, int a2)
{
  float **v2; // esi
  float *v3; // ecx
  int *v4; // eax
  unsigned int v5; // edi
  int *v6; // eax
  unsigned int v7; // edi
  float *v8; // ecx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // bp
  const char **v11; // edi
  int v12; // ebx
  int v13; // edi
  unsigned int v14; // ecx
  _DWORD *v15; // eax
  float *v16; // ebp
  unsigned int v17; // ecx
  int *v18; // eax
  float *v19; // ebp
  unsigned int v20; // ecx
  int *v21; // eax
  float *v22; // ebp
  bool v23; // zf
  int v24; // ebx
  float *v25; // ebp
  float v26; // edi
  float *v27; // ebp
  float *v28; // ebp
  float v29; // edi
  float *v30; // ebp
  float *v31; // ebp
  float v32; // edi
  float *v33; // ebp
  float *v34; // eax
  float *v35; // ebp
  float *v36; // edi
  float *v37; // eax
  int v38; // eax
  float *v39; // ebx
  double (__thiscall *v40)(int); // eax
  float *v41; // ebx
  int v42; // ebx
  int v43; // edi
  unsigned __int16 v44; // bp
  unsigned __int16 v45; // cx
  unsigned int v46; // esi
  int v47; // edi
  _DWORD *v48; // esi
  int v49; // ecx
  int v50; // ebp
  int v51; // eax
  int v52; // ebx
  int v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // edx
  int v57; // edi
  float v58; // ecx
  float v59; // edx
  float *v60; // eax
  int v61; // edx
  double v62; // st7
  float v63; // edx
  int v64; // ecx
  int v65; // eax
  UInt16 *v66; // edx
  NiTriShapeData *v67; // eax
  NiTriShapeData *v68; // eax
  float *v69; // ebx
  NiTriShapeData *v70; // ebp
  NiTriShapeData **v71; // ebx
  _DWORD *v72; // eax
  _DWORD *v73; // ebp
  int v74; // ebx
  __int16 v75; // dx
  SpeedTreeLeafShaderProperty *v76; // eax
  float *v77; // ebx
  volatile LONG *v78; // ebp
  SpeedTreeLeafShaderProperty **v79; // ebx
  _DWORD *v80; // ebx
  int v81; // eax
  rsize_t v83; // [esp+4h] [ebp-1FCh]
  int v84; // [esp+Ch] [ebp-1F4h]
  const char **v85; // [esp+1Ch] [ebp-1E4h]
  int v86; // [esp+1Ch] [ebp-1E4h]
  NiTriShapeData *v87; // [esp+1Ch] [ebp-1E4h]
  SpeedTreeLeafShaderProperty *v88; // [esp+1Ch] [ebp-1E4h]
  float v89; // [esp+20h] [ebp-1E0h]
  float v90; // [esp+20h] [ebp-1E0h]
  int v91; // [esp+20h] [ebp-1E0h]
  char v92; // [esp+27h] [ebp-1D9h]
  int v93; // [esp+28h] [ebp-1D8h]
  int v94; // [esp+28h] [ebp-1D8h]
  int v95; // [esp+28h] [ebp-1D8h]
  float v96; // [esp+2Ch] [ebp-1D4h]
  float v97; // [esp+2Ch] [ebp-1D4h]
  float v98; // [esp+2Ch] [ebp-1D4h]
  int v99; // [esp+30h] [ebp-1D0h]
  int v100; // [esp+30h] [ebp-1D0h]
  __int16 v101; // [esp+34h] [ebp-1CCh]
  _DWORD *v102; // [esp+38h] [ebp-1C8h]
  int v103; // [esp+38h] [ebp-1C8h]
  _DWORD *v104; // [esp+3Ch] [ebp-1C4h] BYREF
  float v105; // [esp+40h] [ebp-1C0h]
  int v106; // [esp+44h] [ebp-1BCh]
  float *v107; // [esp+48h] [ebp-1B8h]
  float *v108; // [esp+4Ch] [ebp-1B4h]
  int v109; // [esp+50h] [ebp-1B0h]
  float *v110; // [esp+54h] [ebp-1ACh]
  int v111; // [esp+58h] [ebp-1A8h]
  int v112; // [esp+5Ch] [ebp-1A4h]
  float v113; // [esp+60h] [ebp-1A0h]
  int v114; // [esp+64h] [ebp-19Ch]
  int v115; // [esp+68h] [ebp-198h]
  int v116; // [esp+6Ch] [ebp-194h]
  float **v117; // [esp+70h] [ebp-190h]
  int v118; // [esp+74h] [ebp-18Ch]
  int v119; // [esp+78h] [ebp-188h]
  UInt16 *v120; // [esp+7Ch] [ebp-184h]
  float v121; // [esp+80h] [ebp-180h]
  float v122; // [esp+84h] [ebp-17Ch]
  float v123; // [esp+88h] [ebp-178h]
  float v124; // [esp+8Ch] [ebp-174h]
  float v125; // [esp+90h] [ebp-170h]
  float v126; // [esp+94h] [ebp-16Ch]
  float v127; // [esp+98h] [ebp-168h]
  float v128; // [esp+9Ch] [ebp-164h]
  float v129; // [esp+A0h] [ebp-160h]
  float v130; // [esp+A4h] [ebp-15Ch]
  int v131; // [esp+A8h] [ebp-158h]
  int v132; // [esp+ACh] [ebp-154h] BYREF
  int v133; // [esp+B0h] [ebp-150h]
  const char **v134; // [esp+B4h] [ebp-14Ch]
  float Src[33]; // [esp+C8h] [ebp-138h] BYREF
  int v136; // [esp+14Ch] [ebp-B4h]
  int v137; // [esp+154h] [ebp-ACh]
  int v138; // [esp+158h] [ebp-A8h]
  int v139; // [esp+15Ch] [ebp-A4h]
  int v140; // [esp+164h] [ebp-9Ch]
  _DWORD *v141; // [esp+168h] [ebp-98h]
  int v142; // [esp+174h] [ebp-8Ch]
  int v143; // [esp+178h] [ebp-88h]
  unsigned int v144; // [esp+1FCh] [ebp-4h]

  v2 = this;
  v117 = this;
  sub_7879A0(Src);
  v144 = 0;
  sub_786FA0(&v132);
  v104 = 0;
  v3 = v2[3];
  LOBYTE(v144) = 2;
  v92 = 0;
  if ( v3 )
  {
    if ( sub_78A740(v3) )
    {
      if ( v2[2] != (float *)2 )
      {
        v4 = (int *)v2[6];
        if ( v4 )
        {
          v5 = (unsigned int)(v4 + 0xFFFFFFFF);
          _LN21(v4, 4u, v4[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
          FormHeapFree(v5);
          v2[6] = 0;
        }
        v6 = (int *)v2[0xA];
        if ( v6 )
        {
          v7 = (unsigned int)(v6 + 0xFFFFFFFF);
          _LN21(v6, 4u, v6[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
          FormHeapFree(v7);
          v2[0xA] = 0;
        }
        v8 = v2[3];
        if ( v8 && (v9 = sub_787200(v8), (v109 = v9) != 0) && (sub_78A890(v2[3], &v132), (_WORD)v133) )
        {
          v10 = 1;
          v85 = v134;
          v93 = (unsigned __int16)v133;
          do
          {
            if ( v10 < (unsigned __int16)v133 )
            {
              v11 = &v134[v10];
              v12 = (unsigned __int16)(v133 - v10);
              do
              {
                if ( strcmp(*v85, *v11) )
                  v92 = 1;
                ++v11;
                --v12;
              }
              while ( v12 );
            }
            ++v85;
            ++v10;
            --v93;
          }
          while ( v93 );
          v13 = (unsigned __int16)v109;
          v14 = (unsigned __int64)(unsigned __int16)v109 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v109;
          v15 = (_DWORD *)FormHeapAlloc(__CFADD__(v14, 4) ? 0xFFFFFFFF : v14 + 4);
          LOBYTE(v144) = 3;
          if ( v15 )
          {
            v16 = (float *)(v15 + 1);
            *v15 = (unsigned __int16)v109;
            ArrayConstructor(
              v15 + 1,
              4u,
              v13,
              (int)Concurrency::details::_NonReentrantLock::_Release,
              (void (__thiscall *)(void *))sub_7016A0);
          }
          else
          {
            v16 = 0;
          }
          LOBYTE(v144) = 2;
          v2[6] = v16;
          v17 = (unsigned __int64)(unsigned int)v13 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v13;
          v18 = (int *)FormHeapAlloc(__CFADD__(v17, 4) ? 0xFFFFFFFF : v17 + 4);
          LOBYTE(v144) = 4;
          if ( v18 )
          {
            v19 = (float *)(v18 + 1);
            *v18 = v13;
            ArrayConstructor(
              v18 + 1,
              4u,
              v13,
              (int)Concurrency::details::_NonReentrantLock::_Release,
              (void (__thiscall *)(void *))sub_7016A0);
          }
          else
          {
            v19 = 0;
          }
          LOBYTE(v144) = 2;
          v2[0xA] = v19;
          v20 = (unsigned __int64)(unsigned int)v13 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v13;
          v21 = (int *)FormHeapAlloc(__CFADD__(v20, 4) ? 0xFFFFFFFF : v20 + 4);
          LOBYTE(v144) = 5;
          if ( v21 )
          {
            v22 = (float *)(v21 + 1);
            *v21 = v13;
            ArrayConstructor(
              v21 + 1,
              4u,
              v13,
              (int)Concurrency::details::_NonReentrantLock::_Release,
              (void (__thiscall *)(void *))sub_7016A0);
          }
          else
          {
            v22 = 0;
          }
          v23 = (_WORD)v109 == 0;
          LOBYTE(v144) = 2;
          v2[0xC] = v22;
          if ( !v23 )
          {
            v24 = 0;
            v94 = v13;
            do
            {
              v25 = v2[6];
              v26 = v25[v24];
              v27 = &v25[v24];
              if ( v26 != 0.0 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v26) + 4)) )
                  (**(void (__thiscall ***)(float, int))LODWORD(v26))(COERCE_FLOAT(LODWORD(v26)), 1);
                *v27 = 0.0;
              }
              v28 = v2[0xA];
              v29 = v28[v24];
              v30 = &v28[v24];
              if ( v29 != 0.0 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v29) + 4)) )
                  (**(void (__thiscall ***)(float, int))LODWORD(v29))(COERCE_FLOAT(LODWORD(v29)), 1);
                *v30 = 0.0;
              }
              v31 = v2[0xC];
              v32 = v31[v24];
              v33 = &v31[v24];
              if ( v32 != 0.0 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v32) + 4)) )
                  (**(void (__thiscall ***)(float, int))LODWORD(v32))(COERCE_FLOAT(LODWORD(v32)), 1);
                *v33 = 0.0;
              }
              ++v24;
              --v94;
            }
            while ( v94 );
          }
          v34 = (float *)FormHeapAlloc(0x20u);
          LOBYTE(v144) = 6;
          if ( v34 )
            v35 = sub_7F1810(v34);
          else
            v35 = 0;
          v36 = v2[8];
          LOBYTE(v144) = 2;
          if ( v36 != v35 )
          {
            if ( v36 )
            {
              if ( !InterlockedDecrement((volatile LONG *)v36 + 1) )
                (**(void (__thiscall ***)(float *, int))v36)(v36, 1);
            }
            v2[8] = v35;
            if ( v35 )
              InterlockedIncrement((volatile LONG *)v35 + 1);
          }
          v2[8][3] = *((float *)v2 + 0x11);
          v37 = v2[3];
          if ( v37 )
          {
            v38 = *((_DWORD *)v37 + 4);
            if ( v38 )
            {
              v2[8][4] = *(float *)(v38 + 0x3C);
              v2[8][5] = *(float *)(*((_DWORD *)v2[3] + 4) + 0x40);
              if ( a2 )
              {
                v39 = v2[8];
                v89 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 0x164))(a2);
                v40 = *(double (__thiscall **)(int))(*(_DWORD *)a2 + 0x16C);
                v39[6] = v89;
                v41 = v2[8];
                v90 = v40(a2);
                v41[7] = v90;
              }
            }
          }
          v42 = 0;
          v111 = 0;
          if ( (_WORD)v109 )
          {
            v43 = 0;
            v95 = 0;
            do
            {
              LODWORD(v83) = v42;
              sub_78C6F0(v2[3], Src, 4, 0xFFFFFFFFFFFFFFFFuLL, v83, v84);
              v44 = v136;
              v45 = 4 * v136;
              v101 = v136;
              v114 = (unsigned __int16)(4 * v136);
              if ( (_WORD)v136 )
              {
                v46 = v45;
                v106 = v138;
                v102 = v141;
                v47 = FormHeapAlloc((0xC * (unsigned __int64)v45) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v45);
                v118 = v47;
                v131 = FormHeapAlloc((0xC * (unsigned __int64)v46) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v46);
                v119 = FormHeapAlloc((unsigned __int64)v46 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v46);
                v91 = FormHeapAlloc((unsigned __int64)v46 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v46);
                v99 = v44;
                v120 = (UInt16 *)FormHeapAlloc((unsigned __int64)(6 * (unsigned int)v44) >> 0x1F != 0 ? 0xFFFFFFFF : 0xC * v44);
                v48 = v102;
                LOWORD(v49) = 0;
                v115 = 0;
                v112 = 0;
                v116 = 0;
                v86 = 0;
                v50 = v106 - (_DWORD)v102;
                v106 = v99;
                do
                {
                  v51 = 4 * (3 * (unsigned __int16)v49 + 9);
                  *(_DWORD *)(v51 + v47) = *(_DWORD *)((char *)v48 + v50);
                  *(_DWORD *)(v51 + v47 + 4) = *(_DWORD *)((char *)v48 + v50 + 4);
                  *(_DWORD *)(v51 + v47 + 8) = *(_DWORD *)((char *)v48 + v50 + 8);
                  v52 = v131;
                  v53 = 4 * (3 * (unsigned __int16)v49 + 6);
                  *(_DWORD *)(v53 + v47) = *(_DWORD *)((char *)v48 + v50);
                  *(_DWORD *)(v53 + v47 + 4) = *(_DWORD *)((char *)v48 + v50 + 4);
                  *(_DWORD *)(v53 + v47 + 8) = *(_DWORD *)((char *)v48 + v50 + 8);
                  v54 = 0xC * (unsigned __int16)v49;
                  *(_DWORD *)(v54 + v47 + 0xC) = *(_DWORD *)((char *)v48 + v50);
                  *(_DWORD *)(v54 + v47 + 0x10) = *(_DWORD *)((char *)v48 + v50 + 4);
                  *(_DWORD *)(v54 + v47 + 0x14) = *(_DWORD *)((char *)v48 + v50 + 8);
                  *(_DWORD *)(v54 + v47) = *(_DWORD *)((char *)v48 + v50);
                  *(_DWORD *)(v54 + v47 + 4) = *(_DWORD *)((char *)v48 + v50 + 4);
                  *(_DWORD *)(v54 + v47 + 8) = *(_DWORD *)((char *)v48 + v50 + 8);
                  v55 = 4 * (3 * (unsigned __int16)v49 + 9);
                  *(_DWORD *)(v55 + v52) = *v48;
                  *(_DWORD *)(v55 + v52 + 4) = v48[1];
                  *(_DWORD *)(v55 + v52 + 8) = v48[2];
                  v56 = 4 * (3 * (unsigned __int16)v49 + 6);
                  *(_DWORD *)(v56 + v52) = *v48;
                  *(_DWORD *)(v56 + v52 + 4) = v48[1];
                  *(_DWORD *)(v56 + v52 + 8) = v48[2];
                  *(_DWORD *)(v54 + v52 + 0xC) = *v48;
                  *(_DWORD *)(v54 + v52 + 0x10) = v48[1];
                  *(_DWORD *)(v54 + v52 + 0x14) = v48[2];
                  *(_DWORD *)(v54 + v52) = *v48;
                  *(_DWORD *)(v54 + v52 + 4) = v48[1];
                  *(_DWORD *)(v54 + v52 + 8) = v48[2];
                  v113 = (double)*(unsigned __int8 *)(v86 + v140 + 1) / dbl_A3DDD8;
                  if ( v113 >= 1.0 )
                    v113 = flt_A65520;
                  v57 = v91 + 0x10 * (unsigned __int16)v49;
                  v107 = *(float **)(v86 + v139);
                  v103 = 2;
                  v108 = (float *)(v119 + 8 * (unsigned __int16)v49);
                  v110 = v107 + 7;
                  v100 = 4;
                  do
                  {
                    if ( v92 )
                    {
                      v105 = *v107;
                      v96 = *v110;
                      v129 = v105;
                      v58 = v105;
                      v130 = v96;
                      v59 = v96;
                    }
                    else
                    {
                      v97 = *v107;
                      v105 = v107[1];
                      v122 = v97;
                      v58 = v97;
                      v123 = v105;
                      v59 = v105;
                    }
                    v60 = v108;
                    *v108 = v58;
                    v60[1] = v59;
                    v121 = (double)(v103 % 4 + 4 * *(unsigned __int8 *)(v115 + v137)) + v113;
                    v61 = *(unsigned __int8 *)(v115 + v143);
                    v105 = *(float *)(v86 + v142);
                    v98 = (float)(4 * v61);
                    v57 += 0x10;
                    v124 = *(float *)(sub_78A740(v117[3]) + v95);
                    v125 = v105;
                    *(float *)(v57 - 0x10) = v105;
                    v126 = v98;
                    v62 = v121;
                    *(float *)(v57 - 0xC) = v98;
                    v127 = v62;
                    v110 += 0xFFFFFFFE;
                    v128 = v124;
                    v107 += 2;
                    v108 += 2;
                    v63 = v124;
                    *(float *)(v57 - 8) = v127;
                    ++v103;
                    v23 = v100-- == 1;
                    *(float *)(v57 - 4) = v63;
                  }
                  while ( !v23 );
                  v64 = v116;
                  v65 = (unsigned __int16)v112;
                  v66 = v120;
                  v112 += 6;
                  v86 += 4;
                  v120[v65] = v116 + 3;
                  v66[v65 + 1] = v64 + 1;
                  v66[v65 + 2] = v64 + 2;
                  v66[v65 + 4] = v64 + 1;
                  v66[v65 + 3] = v64;
                  v66[v65 + 5] = v64 + 3;
                  v47 = v118;
                  ++v115;
                  v49 = v64 + 4;
                  v48 += 3;
                  v23 = v106-- == 1;
                  v116 = v49;
                }
                while ( !v23 );
                v67 = (NiTriShapeData *)FormHeapAlloc(0x58u);
                LOBYTE(v144) = 7;
                if ( v67 )
                {
                  v68 = sub_71FB40(v67, v114, v118, v52, 0, v119, 1, 0, 2 * v101, v120);
                  v87 = v68;
                }
                else
                {
                  v87 = 0;
                  v68 = 0;
                }
                v2 = v117;
                v69 = v117[6];
                v43 = v95;
                v70 = *(NiTriShapeData **)((char *)v69 + v95);
                v71 = (NiTriShapeData **)((char *)v69 + v95);
                LOBYTE(v144) = 2;
                if ( v70 != v68 )
                {
                  if ( v70 )
                  {
                    if ( !InterlockedDecrement((volatile LONG *)&v70->member) )
                      v70->__vftable->super.super.super.Destructor((NiRefObject *)v70, 1);
                    v68 = v87;
                  }
                  *v71 = v68;
                  if ( v68 )
                    InterlockedIncrement((volatile LONG *)&v68->member);
                }
                v72 = (_DWORD *)FormHeapAlloc(0x10u);
                LOBYTE(v144) = 8;
                if ( v72 )
                  v73 = sub_7F2360(v72);
                else
                  v73 = 0;
                v74 = (int)v104;
                LOBYTE(v144) = 2;
                if ( v104 != v73 )
                {
                  if ( v104 )
                  {
                    if ( !InterlockedDecrement(v104 + 1) )
                      (*(void (__thiscall **)(_DWORD *, int))*v104)(v104, 1);
                  }
                  v74 = (int)v73;
                  v104 = v73;
                  if ( v73 )
                    InterlockedIncrement(v73 + 1);
                }
                v75 = v114;
                *(_DWORD *)(v74 + 8) = v91;
                *(_WORD *)(v74 + 0xC) = v75;
                v76 = (SpeedTreeLeafShaderProperty *)FormHeapAlloc(0xB0u);
                LOBYTE(v144) = 9;
                if ( v76 )
                  v88 = SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(v76, v111, v74, (int)v2[8]);
                else
                  v88 = 0;
                v77 = v2[0xA];
                v78 = *(volatile LONG **)((char *)v77 + v95);
                v79 = (SpeedTreeLeafShaderProperty **)((char *)v77 + v95);
                LOBYTE(v144) = 2;
                if ( v78 != (volatile LONG *)v88 )
                {
                  if ( v78 )
                  {
                    if ( !InterlockedDecrement(v78 + 1) )
                      (**(void (__thiscall ***)(volatile LONG *, int))v78)(v78, 1);
                  }
                  *v79 = v88;
                  if ( v88 )
                    InterlockedIncrement((volatile LONG *)v88 + 1);
                }
                (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)((char *)v2[0xA] + v95) + 0x7C))(
                  *(_DWORD *)((char *)v2[0xA] + v95),
                  v2[0xE]);
                (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)((char *)v2[0xA] + v95) + 0x58))(
                  *(_DWORD *)((char *)v2[0xA] + v95),
                  0);
                v80 = *(_DWORD **)((char *)v2[6] + v95);
                v81 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)((char *)v2[0xA] + v95) + 0x94))(
                        *(_DWORD *)((char *)v2[0xA] + v95),
                        0);
                sub_6C61E0(v80, v81);
                v42 = v111;
                *(_WORD *)(*(_DWORD *)((char *)v2[6] + v95) + 0x2E) = *(_WORD *)(*(_DWORD *)((char *)v2[6] + v95) + 0x2E)
                                                                    & 0xFFF
                                                                    | 0x4000;
                *(_BYTE *)(*(_DWORD *)((char *)v2[6] + v95) + 0x30) = 0x11;
                *(_BYTE *)(*(_DWORD *)((char *)v2[6] + v95) + 0x31) = 0x1F;
              }
              ++v42;
              v43 += 4;
              v111 = v42;
              v95 = v43;
            }
            while ( (unsigned __int16)v42 < (unsigned __int16)v109 );
          }
          sub_787210(v2[3]);
          LOBYTE(v144) = 1;
          if ( v104 )
          {
            if ( !InterlockedDecrement(v104 + 1) )
              (*(void (__thiscall **)(_DWORD *, int))*v104)(v104, 1);
          }
        }
        else
        {
          LOBYTE(v144) = 1;
          sub_7016A0((NiD3DVertexShader *)&v104);
        }
      }
    }
  }
  LOBYTE(v144) = 0;
  sub_786FC0(&v132);
  v144 = 0xFFFFFFFF;
  return sub_787B20(Src);
}
