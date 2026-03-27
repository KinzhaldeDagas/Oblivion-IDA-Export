__m128 *__thiscall sub_94A630(int *this, __m128 *a2, __m128 *a3, const void **a4)
{
  __int32 v5; // ecx
  int v6; // eax
  _OWORD *v7; // edi
  const void **v8; // esi
  __m128 *result; // eax
  __int32 v10; // ecx
  int v11; // eax
  __m128 v12; // xmm0
  __m128 *v13; // esi
  bool v14; // cc
  __m128 v15; // xmm1
  int v16; // eax
  int v17; // ecx
  __m128 v18; // xmm0
  _WORD *v19; // eax
  _WORD *v20; // eax
  _WORD *v21; // edi
  const void **v22; // esi
  int v23; // esi
  __int32 v24; // eax
  int v25; // edi
  __m128 v26; // xmm0
  int v27; // eax
  int v28; // eax
  __m128 v29; // xmm0
  __m128 *v30; // ecx
  int v31; // edi
  int v32; // eax
  int v33; // eax
  __m128 v34; // xmm0
  int v35; // edi
  int v36; // eax
  int v37; // eax
  __m128 v38; // xmm0
  int v39; // edi
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // eax
  _WORD *v43; // eax
  __m128 v44; // xmm0
  int i; // esi
  __m128 *v46; // eax
  int v47; // esi
  __int32 v48; // ecx
  int v49; // edi
  int v50; // eax
  int v51; // eax
  int v52; // edi
  int v53; // eax
  int v54; // eax
  int v55; // edi
  int v56; // eax
  int v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // esi
  int v61; // edi
  int v62; // eax
  int v63; // eax
  __int32 v64; // edi
  int v65; // edi
  int v66; // eax
  __int32 v67; // ebx
  int v68; // ebx
  int v69; // esi
  int *v70; // eax
  int *v71; // esi
  _WORD *v72; // eax
  _WORD *v73; // ebx
  __int32 v74; // eax
  _DWORD *ThreadLocalStoragePointer; // ebx
  bool v76; // sf
  int v77; // esi
  int v78; // ecx
  int v79; // ecx
  _DWORD *v80; // eax
  const void **v81; // esi
  int v82; // eax
  int v83; // eax
  char *v84; // edx
  char *v85; // eax
  char *v86; // ecx
  int v87; // edi
  int v88; // eax
  int v89; // eax
  __m128 *v90; // ecx
  bool v91; // zf
  _WORD *v92; // eax
  _WORD *v93; // edi
  __int32 v94; // edi
  __int32 v95; // edx
  double v96; // st7
  _DWORD *v97; // esi
  __int32 v98; // edx
  __int32 v99; // edx
  __int32 v100; // edx
  int v101; // eax
  int v102; // ecx
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  char v112; // cl
  int v113; // eax
  int v114; // ecx
  int v115; // edx
  int v116; // ecx
  int v117; // eax
  _DWORD *v118; // ecx
  int v119; // eax
  int v120; // edx
  int v121; // ecx
  int v122; // eax
  _DWORD *v123; // ecx
  int v124; // ecx
  int v125; // eax
  int v126; // edx
  _DWORD *v127; // eax
  int v128; // ecx
  int v129; // eax
  int v130; // eax
  _DWORD *v131; // eax
  int v132; // ecx
  int v133; // edx
  int v134; // esi
  int v135; // [esp+8h] [ebp-31Ch]
  __m128 *v136; // [esp+10h] [ebp-314h]
  __m128 *v137; // [esp+2Ch] [ebp-2F8h]
  int v138; // [esp+2Ch] [ebp-2F8h]
  __m128 *v139; // [esp+2Ch] [ebp-2F8h]
  int v140; // [esp+2Ch] [ebp-2F8h]
  int v141; // [esp+2Ch] [ebp-2F8h]
  int v142; // [esp+30h] [ebp-2F4h]
  int v143; // [esp+30h] [ebp-2F4h]
  __int32 v144; // [esp+30h] [ebp-2F4h]
  const void *v145; // [esp+30h] [ebp-2F4h]
  int v146; // [esp+30h] [ebp-2F4h]
  __int32 v147; // [esp+30h] [ebp-2F4h]
  int k; // [esp+30h] [ebp-2F4h]
  int v150; // [esp+34h] [ebp-2F0h]
  __int32 j; // [esp+34h] [ebp-2F0h]
  __int32 v152; // [esp+34h] [ebp-2F0h]
  float v153; // [esp+38h] [ebp-2ECh]
  int v154; // [esp+38h] [ebp-2ECh]
  int v155; // [esp+38h] [ebp-2ECh]
  int v156; // [esp+38h] [ebp-2ECh]
  int v157; // [esp+38h] [ebp-2ECh]
  int v158; // [esp+3Ch] [ebp-2E8h]
  int v159; // [esp+3Ch] [ebp-2E8h]
  int v160; // [esp+3Ch] [ebp-2E8h]
  const void *v161; // [esp+3Ch] [ebp-2E8h]
  __int32 v162; // [esp+3Ch] [ebp-2E8h]
  unsigned int v163; // [esp+40h] [ebp-2E4h]
  int v164; // [esp+40h] [ebp-2E4h]
  int v165; // [esp+40h] [ebp-2E4h]
  __m128 v166; // [esp+44h] [ebp-2E0h] BYREF
  __m128 v167; // [esp+54h] [ebp-2D0h] BYREF
  __m128 v168; // [esp+64h] [ebp-2C0h] BYREF
  int v169; // [esp+74h] [ebp-2B0h] BYREF
  char v170; // [esp+78h] [ebp-2ACh]
  char v171; // [esp+7Fh] [ebp-2A5h] BYREF
  float v172; // [esp+80h] [ebp-2A4h]
  __m128 v173; // [esp+84h] [ebp-2A0h] BYREF
  __m128 v174; // [esp+94h] [ebp-290h]
  __int128 v175; // [esp+A4h] [ebp-280h]
  __m128 v176; // [esp+B4h] [ebp-270h]
  int v177; // [esp+D0h] [ebp-254h]
  __m128 v178[4]; // [esp+D4h] [ebp-250h] BYREF
  _BYTE v179[524]; // [esp+114h] [ebp-210h] BYREF

  switch ( (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 8))(a2) )
  {
    case 2:
    case 0xC:
    case 0xD:
    case 0x10:
    case 0x14:
      result = (__m128 *)(*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 0x20))(a2);
      for ( i = (int)result; result != (__m128 *)0xFFFFFFFF; i = (int)result )
      {
        v46 = (__m128 *)(*(int (__thiscall **)(__m128 *, int, _BYTE *))(a2->m128_i32[0] + 0x28))(a2, i, v179);
        sub_94A630(this, v46, a3, a4);
        result = (__m128 *)(*(int (__thiscall **)(__m128 *, int))(a2->m128_i32[0] + 0x24))(a2, i);
      }
      return result;
    case 3:
    case 0x16:
    case 0x18:
      return (__m128 *)sub_94A630(this, (__m128 *)a2->m128_i32[3], a3, a4);
    case 4:
      v5 = a2->m128_i32[3];
      v173 = 0;
      v173.m128_i32[3] = v5;
      v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x80, 8);
      *(_WORD *)(v6 + 4) = 0x80;
      v7 = sub_958590((_DWORD *)v6, &v173, *(this + 3), *(this + 2));
      sub_539980(v7 + 1, a3);
      v8 = a4;
      result = (__m128 *)((unsigned int)a4[2] & 0x3FFFFFFF);
      if ( a4[1] != result )
        goto LABEL_21;
      sub_8A6EE0(a4, 4);
      *((_DWORD *)*a4 + (_DWORD)a4[1]) = v7;
      result = (__m128 *)((char *)a4[1] + 1);
      a4[1] = result;
      return result;
    case 5:
      sub_88FCC0(&v167, a3, a2 + 3);
      sub_88FCC0(&v173, a3, a2 + 2);
      v21 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x90, 8);
      v21[2] = 0x90;
      *(float *)&v135 = sub_8F2260(a2->m128_f32);
      v7 = sub_916380(v21, &v167, &v173, v135, 9, 1);
      sub_539980(v7 + 1, a3);
      v22 = a4;
      if ( a4[1] != (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
        goto LABEL_46;
      goto LABEL_18;
    case 6:
      v47 = *(_DWORD *)(sub_94A560(this, a4) + 0x50);
      v48 = *(_DWORD *)(v47 + 4);
      v49 = v48 + 1;
      v50 = *(_DWORD *)(v47 + 8) & 0x3FFFFFFF;
      v144 = v48;
      if ( v50 < v48 + 1 )
      {
        v51 = 2 * v50;
        if ( v49 >= v51 )
          v51 = v48 + 1;
        sub_8A6E40((const void **)v47, v51, 0x10);
        v48 = v144;
      }
      *(_DWORD *)(v47 + 4) = v49;
      sub_88FCC0((__m128 *)(*(_DWORD *)v47 + 0x10 * v48), a3, a2 + 1);
      v158 = *(_DWORD *)(v47 + 4);
      v52 = v158 + 1;
      v53 = *(_DWORD *)(v47 + 8) & 0x3FFFFFFF;
      if ( v53 < v158 + 1 )
      {
        v54 = 2 * v53;
        if ( v52 >= v54 )
          v54 = v158 + 1;
        sub_8A6E40((const void **)v47, v54, 0x10);
      }
      *(_DWORD *)(v47 + 4) = v52;
      sub_88FCC0((__m128 *)(*(_DWORD *)v47 + 0x10 * v158), a3, a2 + 2);
      v159 = *(_DWORD *)(v47 + 4);
      v55 = v159 + 1;
      v56 = *(_DWORD *)(v47 + 8) & 0x3FFFFFFF;
      if ( v56 < v159 + 1 )
      {
        v57 = 2 * v56;
        if ( v55 >= v57 )
          v57 = v159 + 1;
        sub_8A6E40((const void **)v47, v57, 0x10);
      }
      *(_DWORD *)(v47 + 4) = v55;
      sub_88FCC0((__m128 *)(*(_DWORD *)v47 + 0x10 * v159), a3, a2 + 3);
      v58 = *(_DWORD *)(v47 + 0x10);
      v59 = *(_DWORD *)(v47 + 0x14);
      v60 = v47 + 0xC;
      v61 = v58 + 1;
      v62 = v59 & 0x3FFFFFFF;
      if ( v62 < v58 + 1 )
      {
        v63 = 2 * v62;
        if ( v61 >= v63 )
          v63 = v58 + 1;
        sub_8A6E40((const void **)v60, v63, 0xC);
      }
      result = (__m128 *)(*(_DWORD *)v60 + 0xC * v58);
      *(_DWORD *)(v60 + 4) = v61;
      result->m128_i32[0] = v144;
      result->m128_i32[1] = v144 + 1;
      result->m128_i32[2] = v144 + 2;
      return result;
    case 7:
      v43 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x70, 8);
      v43[2] = 0x70;
      v7 = sub_949CA0(v43, (__m128 *)a2[1].m128_f32);
      sub_539980(v7 + 1, a3);
      v22 = a4;
      if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a4, 4);
LABEL_46:
      result = (__m128 *)v22[1];
      *((_DWORD *)*v22 + (_DWORD)result) = v7;
      v22[1] = (char *)v22[1] + 1;
      return result;
    case 8:
      v20 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x90, 8);
      v20[2] = 0x90;
      v7 = sub_8F4080(v20, (__m128 *)a2[2].m128_f32, (__m128 *)a2[1].m128_f32, a2->m128_i32[3], 6, 1);
      sub_539980(v7 + 1, a3);
      v8 = a4;
      result = (__m128 *)((unsigned int)a4[2] & 0x3FFFFFFF);
      if ( a4[1] == result )
        result = (__m128 *)sub_8A6EE0(a4, 4);
      goto LABEL_21;
    case 9:
      (*(void (__thiscall **)(__m128 *, int *))(a2->m128_i32[0] + 0x1C))(a2, &v169);
      v168.m128_u64[0] = 0;
      v168.m128_i32[2] = 0x80000000;
      if ( v170 )
      {
        v64 = v169;
        if ( v169 > 0 )
          sub_8A6E40((const void **)&v168, v169 < 0 ? 0 : v169, 0x10);
        v168.m128_i32[1] = v64;
      }
      v65 = (*(int (__thiscall **)(__m128 *, __int32))(a2->m128_i32[0] + 0x20))(a2, v168.m128_i32[0]);
      v66 = v169;
      v178[0].m128_u64[0] = 0;
      v178[0].m128_i32[2] = 0x80000000;
      v67 = v169;
      if ( v169 > 0 )
      {
        sub_8A6E40((const void **)v178, v169 < 0 ? 0 : v169, 0x10);
        v66 = v169;
      }
      v178[0].m128_i32[1] = v67;
      v68 = 0;
      if ( v66 > 0 )
      {
        v69 = 0;
        do
        {
          sub_88FCC0((__m128 *)(v178[0].m128_i32[0] + v69), a3, (__m128 *)(v65 + v69));
          ++v68;
          v69 += 0x10;
        }
        while ( v68 < v169 );
      }
      v70 = (int *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
      if ( v70 )
      {
        *v70 = 0;
        v70[1] = 0;
        v70[2] = 0x80000000;
        v70[3] = 0;
        v70[4] = 0;
        v70[5] = 0x80000000;
        v71 = v70;
      }
      else
      {
        v71 = 0;
      }
      v166.m128_i32[2] = 0x10;
      v166.m128_u64[0] = v178[0].m128_u64[0];
      sub_8F21E0((int *)&v166, v71, 1);
      v72 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 8);
      v72[2] = 0x60;
      v73 = sub_94CCB0(v72, (int)v71);
      if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a4, 4);
      *((_DWORD *)*a4 + (_DWORD)a4[1]) = v73;
      v74 = v178[0].m128_i32[2];
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      v76 = v178[0].m128_i32[2] < 0;
      a4[1] = (char *)a4[1] + 1;
      v77 = TlsIndex;
      if ( !v76 )
      {
        v78 = *(_DWORD *)(ThreadLocalStoragePointer[v77] + 0x19C);
        if ( !v78 )
          v78 = dword_BA7D9C;
        sub_8A75D0(v78, v178[0].m128_i32[0], 0x10 * v74, 0x14);
      }
      result = (__m128 *)v168.m128_i32[2];
      if ( v168.m128_i32[2] >= 0 )
      {
        v79 = *(_DWORD *)(ThreadLocalStoragePointer[v77] + 0x19C);
        if ( !v79 )
          v79 = dword_BA7D9C;
        return (__m128 *)sub_8A75D0(v79, v168.m128_i32[0], 0x10 * v168.m128_i32[2], 0x14);
      }
      return result;
    case 0xA:
      v80 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
      if ( v80 )
        v81 = (const void **)sub_8B44A0(v80);
      else
        v81 = 0;
      for ( j = 0; j < a2[2].m128_i32[0]; ++j )
      {
        v160 = (*(int (__thiscall **)(__int32, _DWORD, _BYTE *))(*(_DWORD *)a2[1].m128_i32[2] + 0x28))(
                 a2[1].m128_i32[2],
                 *(_DWORD *)(a2[1].m128_i32[3] + 4 * j),
                 v179);
        v145 = v81[4];
        v82 = (unsigned int)v81[5] & 0x3FFFFFFF;
        if ( v82 < (int)v145 + 1 )
        {
          v83 = 2 * v82;
          if ( (int)v145 + 1 >= v83 )
            v83 = (int)v145 + 1;
          sub_8A6E40(v81 + 3, v83, 0xC);
        }
        v84 = (char *)v81[3];
        v81[4] = (char *)v145 + 1;
        v85 = &v84[0xC * (_DWORD)v145];
        v86 = (char *)v81[1];
        *(_DWORD *)v85 = v86;
        *((_DWORD *)v85 + 1) = v86 + 1;
        *((_DWORD *)v85 + 2) = v86 + 2;
        v139 = (__m128 *)(v160 + 0x10);
        v146 = 3;
        do
        {
          v161 = v81[1];
          v87 = (int)v161 + 1;
          v88 = (unsigned int)v81[2] & 0x3FFFFFFF;
          if ( v88 < (int)v161 + 1 )
          {
            v89 = 2 * v88;
            if ( v87 >= v89 )
              v89 = (int)v161 + 1;
            sub_8A6E40(v81, v89, 0x10);
          }
          v90 = (__m128 *)((char *)*v81 + 0x10 * (_DWORD)v161);
          v81[1] = (const void *)v87;
          sub_88FCC0(v90, a3, v139);
          v91 = v146 == 1;
          ++v139;
          --v146;
        }
        while ( !v91 );
      }
      v92 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x60, 8);
      v92[2] = 0x60;
      v93 = sub_94CCB0(v92, (int)v81);
      if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a4, 4);
      result = (__m128 *)*a4;
      *((_DWORD *)*a4 + (_DWORD)a4[1]) = v93;
      a4[1] = (char *)a4[1] + 1;
      return result;
    case 0xB:
      result = a2 + 1;
      v142 = 0;
      if ( a2->m128_i32[3] > 0 )
      {
        v167 = 0;
        v137 = a2 + 1;
        do
        {
          v10 = v137->m128_i32[3];
          v173 = (__m128)stru_BA7A40;
          v173.m128_i32[3] = v10;
          v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x80, 8);
          *(_WORD *)(v11 + 4) = 0x80;
          v12 = v167;
          v13 = (__m128 *)sub_958590((_DWORD *)v11, &v173, *(this + 3), *(this + 2));
          v13[1] = v167;
          v13[2] = v12;
          v13[3] = v12;
          v13[1].m128_i32[0] = 0x3F800000;
          v13[2].m128_i32[1] = 0x3F800000;
          v13[3].m128_i32[2] = 0x3F800000;
          v13[4] = v12;
          v13[4] = *v137;
          if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
            sub_8A6EE0(a4, 4);
          *((_DWORD *)*a4 + (_DWORD)a4[1]) = v13;
          a4[1] = (char *)a4[1] + 1;
          result = (__m128 *)(v142 + 1);
          v14 = ++v142 < a2->m128_i32[3];
          ++v137;
        }
        while ( v14 );
      }
      return result;
    case 0xE:
      v173 = 0;
      v174 = 0;
      v175 = 0;
      v44 = a2[2];
      v173.m128_i32[0] = 0x3F800000;
      v174.m128_i32[1] = 0x3F800000;
      DWORD2(v175) = 0x3F800000;
      v176 = v44;
      sub_8B1F70(v178, a3, &v173);
      return (__m128 *)sub_94A630(this, (__m128 *)a2[1].m128_i32[0], v178, a4);
    case 0xF:
      sub_8B1F70(&v173, a3, a2 + 2);
      return (__m128 *)sub_94A630(this, (__m128 *)a2[1].m128_i32[0], &v173, a4);
    case 0x11:
      v23 = *(_DWORD *)(sub_94A560(this, a4) + 0x50);
      result = 0;
      v150 = 0;
      if ( a2[1].m128_i32[0] > 0 )
      {
        v167.m128_u64[0] = 0x3C23D70A;
        v167.m128_u64[1] = 0;
        v143 = 2;
        v138 = 0;
        do
        {
          v24 = a2->m128_i32[3];
          v25 = *(_DWORD *)(v23 + 4);
          v173 = *(__m128 *)(v24 + v138);
          v26 = *(__m128 *)(v138 + v24 + 0x10);
          v27 = *(_DWORD *)(v23 + 8) & 0x3FFFFFFF;
          v174 = v26;
          if ( v27 < v25 + 1 )
          {
            v28 = 2 * v27;
            if ( v25 + 1 >= v28 )
              v28 = v25 + 1;
            sub_8A6E40((const void **)v23, v28, 0x10);
          }
          v29 = v173;
          *(_DWORD *)(v23 + 4) = v25 + 1;
          v30 = (__m128 *)(*(_DWORD *)v23 + 0x10 * v25);
          *v30 = v29;
          sub_88FCC0(v30, a3, v30);
          v31 = *(_DWORD *)(v23 + 4);
          v32 = *(_DWORD *)(v23 + 8) & 0x3FFFFFFF;
          if ( v32 < v31 + 1 )
          {
            v33 = 2 * v32;
            if ( v31 + 1 >= v33 )
              v33 = v31 + 1;
            sub_8A6E40((const void **)v23, v33, 0x10);
          }
          v34 = _mm_add_ps(v173, v167);
          *(_DWORD *)(v23 + 4) = v31 + 1;
          *(__m128 *)(*(_DWORD *)v23 + 0x10 * v31) = v34;
          v35 = *(_DWORD *)(v23 + 4);
          v36 = *(_DWORD *)(v23 + 8) & 0x3FFFFFFF;
          if ( v36 < v35 + 1 )
          {
            v37 = 2 * v36;
            if ( v35 + 1 >= v37 )
              v37 = v35 + 1;
            sub_8A6E40((const void **)v23, v37, 0x10);
          }
          v38 = v174;
          v136 = (__m128 *)(*(_DWORD *)v23 + 0x10 * v35);
          *(_DWORD *)(v23 + 4) = v35 + 1;
          *v136 = v38;
          sub_88FCC0(v136, a3, v136);
          v39 = *(_DWORD *)(v23 + 0x10);
          v40 = *(_DWORD *)(v23 + 0x14) & 0x3FFFFFFF;
          if ( v40 < v39 + 1 )
          {
            v41 = 2 * v40;
            if ( v39 + 1 >= v41 )
              v41 = v39 + 1;
            sub_8A6E40((const void **)(v23 + 0xC), v41, 0xC);
          }
          *(_DWORD *)(v23 + 0x10) = v39 + 1;
          v42 = (_DWORD *)(*(_DWORD *)(v23 + 0xC) + 0xC * v39);
          *v42 = v143 - 2;
          v42[1] = v143 - 1;
          v42[2] = v143;
          v143 += 3;
          result = (__m128 *)(v150 + 1);
          v14 = ++v150 < a2[1].m128_i32[0];
          v138 += 0x20;
        }
        while ( v14 );
      }
      return result;
    case 0x13:
      result = (__m128 *)sub_94A560(this, a4);
      v94 = result[5].m128_i32[0];
      v95 = a2->m128_i32[3] - 1;
      v91 = a2->m128_i32[3] == 1;
      v173 = a2[2];
      v152 = 0;
      if ( v95 >= 0 && !v91 )
      {
        do
        {
          v140 = 0;
          if ( a2[1].m128_i32[0] - 1 > 0 )
          {
            v96 = (double)v152;
            v97 = (_DWORD *)(v94 + 0xC);
            *(float *)&v147 = v96;
            v172 = v96 + fConstant_1;
            do
            {
              v166.m128_f32[1] = ((double (__thiscall *)(__m128 *, __int32, int))*(_DWORD *)(a2->m128_i32[0] + 0x24))(
                                   a2,
                                   v152,
                                   v140);
              v166.m128_i32[0] = v147;
              v153 = (float)v140;
              v98 = a2->m128_i32[0];
              v166.m128_f32[2] = v153;
              v166.m128_i32[3] = 0;
              v162 = v140 + 1;
              v166 = _mm_mul_ps(v166, v173);
              v168.m128_f32[1] = ((double (__thiscall *)(__m128 *, __int32, int))*(_DWORD *)(v98 + 0x24))(
                                   a2,
                                   v152,
                                   v140 + 1);
              v99 = a2->m128_i32[0];
              *(float *)&v163 = v153 + fConstant_1;
              v168.m128_i32[0] = v147;
              v168.m128_f32[2] = *(float *)&v163;
              v168.m128_i32[3] = 0;
              v168 = _mm_mul_ps(v168, v173);
              v178[0].m128_f32[1] = ((double (__thiscall *)(__m128 *, __int32, int))*(_DWORD *)(v99 + 0x24))(
                                      a2,
                                      v152 + 1,
                                      v140);
              v178[0].m128_f32[0] = v172;
              v178[0].m128_u64[1] = LODWORD(v153);
              v100 = a2->m128_i32[0];
              v178[0] = _mm_mul_ps(v178[0], v173);
              v167.m128_f32[1] = ((double (__thiscall *)(__m128 *, __int32, int))*(_DWORD *)(v100 + 0x24))(
                                   a2,
                                   v152 + 1,
                                   v140 + 1);
              v101 = *(_DWORD *)(v94 + 4);
              v167.m128_f32[0] = v172;
              v102 = v101 + 1;
              v141 = v101;
              v103 = *(_DWORD *)(v94 + 8);
              v167.m128_u64[1] = v163;
              v104 = v103 & 0x3FFFFFFF;
              v167 = _mm_mul_ps(v167, v173);
              if ( v104 < v102 )
              {
                v105 = 2 * v104;
                if ( v141 + 1 >= v105 )
                  v105 = v141 + 1;
                sub_8A6E40((const void **)v94, v105, 0x10);
              }
              *(_DWORD *)(v94 + 4) = v141 + 1;
              sub_88FCC0((__m128 *)(*(_DWORD *)v94 + 0x10 * v141), a3, &v166);
              v154 = *(_DWORD *)(v94 + 4);
              v106 = *(_DWORD *)(v94 + 8) & 0x3FFFFFFF;
              if ( v106 < v154 + 1 )
              {
                v107 = 2 * v106;
                if ( v154 + 1 >= v107 )
                  v107 = v154 + 1;
                sub_8A6E40((const void **)v94, v107, 0x10);
              }
              *(_DWORD *)(v94 + 4) = v154 + 1;
              sub_88FCC0((__m128 *)(*(_DWORD *)v94 + 0x10 * v154), a3, &v168);
              v155 = *(_DWORD *)(v94 + 4);
              v108 = *(_DWORD *)(v94 + 8) & 0x3FFFFFFF;
              if ( v108 < v155 + 1 )
              {
                v109 = 2 * v108;
                if ( v155 + 1 >= v109 )
                  v109 = v155 + 1;
                sub_8A6E40((const void **)v94, v109, 0x10);
              }
              *(_DWORD *)(v94 + 4) = v155 + 1;
              sub_88FCC0((__m128 *)(*(_DWORD *)v94 + 0x10 * v155), a3, v178);
              v156 = *(_DWORD *)(v94 + 4);
              v110 = *(_DWORD *)(v94 + 8) & 0x3FFFFFFF;
              if ( v110 < v156 + 1 )
              {
                v111 = 2 * v110;
                if ( v156 + 1 >= v111 )
                  v111 = v156 + 1;
                sub_8A6E40((const void **)v94, v111, 0x10);
              }
              *(_DWORD *)(v94 + 4) = v156 + 1;
              sub_88FCC0((__m128 *)(*(_DWORD *)v94 + 0x10 * v156), a3, &v167);
              v112 = *(_BYTE *)(*(int (__thiscall **)(__m128 *, char *))(a2->m128_i32[0] + 0x28))(a2, &v171);
              v113 = *(_DWORD *)(v94 + 0x10);
              v91 = v112 == 0;
              v114 = *(_DWORD *)(v94 + 0x14);
              v115 = v113 + 1;
              v164 = v113;
              if ( v91 )
              {
                v124 = v114 & 0x3FFFFFFF;
                if ( v124 < v115 )
                {
                  v125 = 2 * v124;
                  if ( v115 >= 2 * v124 )
                    v125 = v115;
                  sub_8A6E40((const void **)(v94 + 0xC), v125, 0xC);
                  v113 = v164;
                }
                v126 = v141;
                *(_DWORD *)(v94 + 0x10) = v113 + 1;
                v127 = (_DWORD *)(*v97 + 0xC * v113);
                v127[1] = v141 + 1;
                v169 = v141 + 1;
                *v127 = v141;
                v127[2] = v141 + 2;
                v177 = v141 + 2;
                v128 = *(_DWORD *)(v94 + 0x10);
                v129 = *(_DWORD *)(v94 + 0x14) & 0x3FFFFFFF;
                v165 = v128;
                if ( v129 < v128 + 1 )
                {
                  v130 = 2 * v129;
                  if ( v128 + 1 >= v130 )
                    v130 = v128 + 1;
                  sub_8A6E40((const void **)(v94 + 0xC), v130, 0xC);
                  v126 = v141;
                  v128 = v165;
                }
                *(_DWORD *)(v94 + 0x10) = v128 + 1;
                v131 = (_DWORD *)(*v97 + 0xC * v128);
                v132 = v177;
                *v131 = v126 + 3;
                v133 = v169;
                v131[1] = v132;
                v131[2] = v133;
              }
              else
              {
                v116 = v114 & 0x3FFFFFFF;
                if ( v116 < v115 )
                {
                  v117 = 2 * v116;
                  if ( v115 >= 2 * v116 )
                    v117 = v115;
                  sub_8A6E40((const void **)(v94 + 0xC), v117, 0xC);
                  v113 = v164;
                }
                *(_DWORD *)(v94 + 0x10) = v113 + 1;
                v118 = (_DWORD *)(*v97 + 0xC * v113);
                v119 = v141;
                v118[1] = v141 + 1;
                v118[2] = v141 + 3;
                *v118 = v141;
                v120 = *(_DWORD *)(v94 + 0x10) + 1;
                v157 = *(_DWORD *)(v94 + 0x10);
                v121 = *(_DWORD *)(v94 + 0x14) & 0x3FFFFFFF;
                if ( v121 < v120 )
                {
                  v122 = 2 * v121;
                  if ( v120 >= 2 * v121 )
                    v122 = *(_DWORD *)(v94 + 0x10) + 1;
                  sub_8A6E40((const void **)(v94 + 0xC), v122, 0xC);
                  v119 = v141;
                }
                *(_DWORD *)(v94 + 0x10) = v157 + 1;
                v123 = (_DWORD *)(*v97 + 0xC * v157);
                *v123 = v119;
                v123[1] = v119 + 3;
                v123[2] = v119 + 2;
              }
              v140 = v162;
            }
            while ( v162 < a2[1].m128_i32[0] - 1 );
          }
          result = (__m128 *)++v152;
        }
        while ( v152 < a2->m128_i32[3] - 1 );
      }
      return result;
    case 0x17:
      (*(void (__thiscall **)(__m128 *, __int128 *, int, __m128 *))(a2->m128_i32[0] + 0xC))(
        a2,
        xmmword_B2F090,
        0x3A83126F,
        v178);
      v15 = _mm_sub_ps(v178[1], v178[0]);
      v173 = 0;
      v166 = _mm_and_ps(v15, (__m128)xmmword_A372D0);
      if ( v166.m128_f32[0] >= (double)v166.m128_f32[1] )
      {
        if ( v166.m128_f32[0] >= (double)v166.m128_f32[2] )
          v16 = 0;
        else
          v16 = 2;
      }
      else if ( v166.m128_f32[1] >= (double)v166.m128_f32[2] )
      {
        v16 = 1;
      }
      else
      {
        v16 = 2;
      }
      v17 = dword_BA7D98;
      v167 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), v15);
      v18 = _mm_add_ps(v167, v178[0]);
      v173.m128_i32[v16] = 0x3F800000;
      v168 = v18;
      v19 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v17 + 0x10))(v17, 0xA0, 8);
      v19[2] = 0xA0;
      v7 = sub_94D710(v19, (__m128 *)a2[1].m128_f32, &v173, &v168, &v167);
      sub_539980(v7 + 1, a3);
      v8 = a4;
      result = (__m128 *)((unsigned int)a4[2] & 0x3FFFFFFF);
      if ( a4[1] == result )
      {
LABEL_18:
        sub_8A6EE0(a4, 4);
        *((_DWORD *)*a4 + (_DWORD)a4[1]) = v7;
        result = (__m128 *)((char *)a4[1] + 1);
        a4[1] = result;
      }
      else
      {
LABEL_21:
        *((_DWORD *)*v8 + (_DWORD)v8[1]) = v7;
        v8[1] = (char *)v8[1] + 1;
      }
      break;
    case 0x19:
      sub_8B1F70(&v173, a3, a2 + 2);
      result = (__m128 *)sub_94A630(this, (__m128 *)a2->m128_i32[3], &v173, a4);
      break;
    default:
      result = (__m128 *)dword_BA9510;
      for ( k = 0; k < *(_DWORD *)(dword_BA9510 + 0xC); ++k )
      {
        v134 = result->m128_i32[2] + 8 * k;
        if ( *(_DWORD *)(v134 + 4) == (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 8))(a2) )
          (*(void (__cdecl **)(__m128 *, __m128 *, const void **, int *))v134)(a2, a3, a4, this);
        result = (__m128 *)dword_BA9510;
      }
      break;
  }
  return result;
}
