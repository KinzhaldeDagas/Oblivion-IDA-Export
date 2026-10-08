int __cdecl _I10_OUTPUT(int a1, int a2, __int16 a3, int a4, char a5, int a6)
{
  __int16 v6; // cx
  unsigned __int16 v7; // dx
  int v8; // esi
  int v9; // edi
  errno_t v11; // eax
  int v12; // edx
  int v13; // ecx
  errno_t v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  int v18; // ecx
  char *v19; // ecx
  __int16 v20; // di
  __int16 v21; // cx
  unsigned __int16 v22; // di
  __int16 v23; // cx
  unsigned __int16 v24; // ax
  _BYTE *v25; // edi
  unsigned int v26; // edi
  unsigned int v27; // edx
  unsigned int v28; // esi
  __int16 v29; // ax
  unsigned int v30; // edx
  int v31; // edi
  int v32; // edx
  int v33; // edx
  int v34; // edi
  int v35; // edx
  bool v36; // zf
  __int16 v37; // cx
  unsigned __int16 v38; // di
  _WORD *v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // esi
  unsigned int v42; // ebx
  __int16 v43; // di
  unsigned int v44; // edx
  int v45; // ebx
  int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // ebx
  int v50; // edx
  int v51; // esi
  int v52; // ebx
  unsigned int v53; // eax
  int v54; // edi
  int v55; // eax
  int v56; // esi
  int v57; // eax
  _BYTE *v58; // ebx
  unsigned int v59; // edx
  unsigned int v60; // edi
  unsigned int v61; // ecx
  int v62; // esi
  int v63; // ecx
  unsigned int v64; // esi
  unsigned int v65; // edi
  int v66; // edx
  unsigned int v67; // edx
  char *v68; // ebx
  char v69; // al
  _BYTE *v70; // ebx
  int v71; // eax
  char v72; // bl
  int v73; // [esp+10h] [ebp-70h]
  __int16 v74; // [esp+14h] [ebp-6Ch]
  char *v75; // [esp+18h] [ebp-68h]
  char *v76; // [esp+1Ch] [ebp-64h]
  int v77; // [esp+24h] [ebp-5Ch]
  int *v78; // [esp+24h] [ebp-5Ch]
  unsigned __int16 *v79; // [esp+28h] [ebp-58h]
  int v80; // [esp+28h] [ebp-58h]
  unsigned __int16 *v81; // [esp+2Ch] [ebp-54h]
  int v82; // [esp+2Ch] [ebp-54h]
  int v83; // [esp+30h] [ebp-50h]
  int v84; // [esp+30h] [ebp-50h]
  __int16 v85; // [esp+34h] [ebp-4Ch]
  int k; // [esp+34h] [ebp-4Ch]
  int v87; // [esp+38h] [ebp-48h]
  unsigned __int16 *v88; // [esp+38h] [ebp-48h]
  _WORD *v89; // [esp+3Ch] [ebp-44h]
  int v90; // [esp+3Ch] [ebp-44h]
  int v91; // [esp+3Ch] [ebp-44h]
  unsigned int v92; // [esp+3Ch] [ebp-44h]
  int i; // [esp+40h] [ebp-40h]
  int j; // [esp+40h] [ebp-40h]
  _BYTE *v95; // [esp+40h] [ebp-40h]
  __int64 v96; // [esp+44h] [ebp-3Ch] BYREF
  int v97; // [esp+4Ch] [ebp-34h]
  unsigned int v98; // [esp+50h] [ebp-30h]
  unsigned int v99; // [esp+54h] [ebp-2Ch]
  int v100; // [esp+58h] [ebp-28h] BYREF
  _QWORD v101[2]; // [esp+60h] [ebp-20h] BYREF
  _BYTE v102[12]; // [esp+70h] [ebp-10h] BYREF

  *(_DWORD *)v102 = a1; /*0x9a000e*/
  *(_DWORD *)&v102[4] = a2; /*0x9a000f*/
  *(_WORD *)&v102[8] = a3; /*0x9a0010*/
  v6 = a3 & 0x8000; /*0x9a001c*/
  v7 = a3 & 0x7FFF; /*0x9a001e*/
  v98 = 0xCCCCCCCC; /*0x9a002a*/
  v99 = 0xCCCCCCCC; /*0x9a003a*/
  v100 = 0x3FFBCCCC; /*0x9a004a*/
  v74 = a3 & 0x8000; /*0x9a0061*/
  if ( a3 >= 0 ) /*0x9a0064*/
    *(_BYTE *)(a6 + 2) = 0x20; /*0x9a006c*/
  else
    *(_BYTE *)(a6 + 2) = 0x2D; /*0x9a0066*/
  v8 = *(_DWORD *)&v102[4]; /*0x9a0073*/
  v9 = *(_DWORD *)v102; /*0x9a0076*/
  if ( !v7 && !*(_DWORD *)&v102[4] && !*(_DWORD *)v102 )
  {
    *(_WORD *)a6 = 0; /*0x9a0083*/
    *(_BYTE *)(a6 + 2) = v6 != (__int16)0xFFFF8000 ? 0x20 : 0x2D;
    *(_BYTE *)(a6 + 3) = 1; /*0x9a0095*/
    *(_BYTE *)(a6 + 4) = 0x30; /*0x9a0099*/
    *(_BYTE *)(a6 + 5) = 0; /*0x9a009d*/
    return 1; /*0x9a00a4*/
  }
  if ( v7 == 0x7FFF ) /*0x9a00ae*/
  {
    *(_WORD *)a6 = 1; /*0x9a00bb*/
    if ( (v8 != 0x80000000 || v9) && (v8 & 0x40000000) == 0 ) /*0x9a00cc*/
    {
      v11 = strcpy_s((char *)(a6 + 4), 0x16u, "1#SNAN"); /*0x9a00d3*/
LABEL_25:
      if ( v11 ) /*0x9a0138*/
        _invoke_watson(v11, v12, v13, a6, v9, 0); /*0x9a013f*/
      *(_BYTE *)(a6 + 3) = 6; /*0x9a0147*/
      return 0; /*0x9a014d*/
    }
    if ( v6 && v8 == 0xC0000000 ) /*0x9a00e0*/
    {
      if ( !v9 ) /*0x9a00e4*/
      {
        v14 = strcpy_s((char *)(a6 + 4), 0x16u, "1#IND"); /*0x9a00eb*/
LABEL_21:
        if ( v14 ) /*0x9a010c*/
          _invoke_watson(v14, v15, v16, a6, 0, 0); /*0x9a0113*/
        *(_BYTE *)(a6 + 3) = 5; /*0x9a011b*/
        return 0; /*0x9a011f*/
      }
    }
    else if ( v8 == 0x80000000 && !v9 ) /*0x9a00f3*/
    {
      v14 = strcpy_s((char *)(a6 + 4), 0x16u, "1#INF"); /*0x9a0100*/
      goto LABEL_21; /*0x9a0100*/
    }
    v11 = strcpy_s((char *)(a6 + 4), 0x16u, "1#QNAN"); /*0x9a012c*/
    goto LABEL_25; /*0x9a012c*/
  }
  v85 = (0x4D * (HIBYTE(v7) + 2 * HIBYTE(*(_DWORD *)&v102[4])) + 0x4D10 * (unsigned int)v7 - 0x134312F4) >> 0x10; /*0x9a017b*/
  v17 = -v85; /*0x9a0185*/
  WORD1(v101[1]) = a3 & 0x7FFF; /*0x9a018c*/
  *(_DWORD *)((char *)v101 + 6) = *(_DWORD *)&v102[4]; /*0x9a0190*/
  *(_DWORD *)((char *)v101 + 2) = *(_DWORD *)v102; /*0x9a0193*/
  LOWORD(v101[0]) = 0; /*0x9a0196*/
  v75 = (char *)&unk_B32120 + 0xFFFFFFA0; /*0x9a019a*/
  if ( v85 )
  {
    if ( (__int16)((0x4D * (HIBYTE(v7) + 2 * HIBYTE(*(_DWORD *)&v102[4])) + 0x4D10 * (unsigned int)v7 - 0x134312F4) >> 0x10) > 0 ) /*0x9a01a3*/
    {
      v17 = (__int16)((0x4D * (HIBYTE(v7) + 2 * HIBYTE(*(_DWORD *)&v102[4])) + 0x4D10 * (unsigned int)v7 - 0x134312F4) >> 0x10); /*0x9a01aa*/
      v75 = (char *)&unk_B32280 + 0xFFFFFFA0; /*0x9a01af*/
    }
    while ( v17 )
    {
      v75 += 0x54; /*0x9a01ba*/
      v18 = v17 & 7; /*0x9a01c0*/
      v17 >>= 3; /*0x9a01c3*/
      if ( v18 )
      {
        v19 = &v75[0xC * v18]; /*0x9a01d1*/
        v76 = v19; /*0x9a01d9*/
        if ( *(_WORD *)v19 >= 0x8000u ) /*0x9a01dc*/
        {
          v96 = *(_QWORD *)v19; /*0x9a01e3*/
          v97 = *((_DWORD *)v19 + 2); /*0x9a01e8*/
          --*(_DWORD *)((char *)&v96 + 2); /*0x9a01e9*/
          v76 = (char *)&v96; /*0x9a01ec*/
          v19 = (char *)&v96; /*0x9a01ef*/
        }
        v20 = *((_WORD *)v19 + 5); /*0x9a01f1*/
        v21 = WORD1(v101[1]) ^ v20; /*0x9a0201*/
        v22 = v20 & 0x7FFF; /*0x9a0205*/
        v87 = 0; /*0x9a0207*/
        memset(v102, 0, sizeof(v102)); /*0x9a020a*/
        v23 = v21 & 0x8000; /*0x9a0213*/
        v24 = v22 + (WORD1(v101[1]) & 0x7FFF); /*0x9a021f*/
        if ( (WORD1(v101[1]) & 0x7FFF) == 0x7FFF || v22 >= 0x7FFFu || v24 > 0xBFFDu )
        {
LABEL_80:
          v101[0] = 0; /*0x9a042b*/
          LODWORD(v101[1]) = v23 != 0 ? 0xFFFF8000 : 0x7FFF8000;
          continue; /*0x9a0444*/
        }
        if ( v24 <= 0x3FBFu ) /*0x9a023f*/
          goto LABEL_40; /*0x9a023f*/
        if ( (v101[1] & 0x7FFF0000LL) == 0 ) /*0x9a0256*/
        {
          ++v24; /*0x9a0258*/
          if ( (v101[1] & 0x7FFFFFFF) == 0 && !v101[0] ) /*0x9a0265*/
          {
            WORD1(v101[1]) = 0; /*0x9a026c*/
            continue; /*0x9a0270*/
          }
        }
        if ( v22 || (++v24, (*((_DWORD *)v76 + 2) & 0x7FFFFFFF) != 0) || *((_DWORD *)v76 + 1) || *(_DWORD *)v76 ) /*0x9a028c*/
        {
          v25 = &v102[4]; /*0x9a029e*/
          v77 = 0; /*0x9a02a1*/
          v89 = &v102[4]; /*0x9a02a4*/
          for ( i = 5; i > 0; --i ) /*0x9a02a7*/
          {
            v83 = i; /*0x9a02b8*/
            v79 = (unsigned __int16 *)v101 + v77; /*0x9a02c1*/
            v81 = (unsigned __int16 *)(v76 + 8); /*0x9a02ca*/
            do /*0x9a0313*/
            {
              v26 = *((_DWORD *)v25 + 0xFFFFFFFF); /*0x9a02d9*/
              v27 = *v81 * *v79; /*0x9a02dc*/
              v73 = 0; /*0x9a02df*/
              v28 = v26 + v27; /*0x9a02e3*/
              if ( v26 + v27 < v26 || v28 < v27 ) /*0x9a02ec*/
                v73 = 1; /*0x9a02ee*/
              v25 = v89; /*0x9a02f9*/
              *((_DWORD *)v89 + 0xFFFFFFFF) = v28; /*0x9a02fc*/
              if ( v73 ) /*0x9a02ff*/
                ++*v89; /*0x9a0301*/
              ++v79; /*0x9a0304*/
              v81 += 0xFFFFFFFF; /*0x9a0308*/
              --v83; /*0x9a030c*/
            }
            while ( v83 > 0 ); /*0x9a0313*/
            v25 = v89 + 1; /*0x9a0316*/
            ++v77; /*0x9a0317*/
            ++v89; /*0x9a0321*/
          }
          v29 = v24 - 0x3FFE; /*0x9a0326*/
          if ( v29 <= 0 ) /*0x9a032e*/
            goto LABEL_62; /*0x9a032e*/
          do /*0x9a0364*/
          {
            if ( *(int *)&v102[8] < 0 ) /*0x9a0337*/
              break; /*0x9a0337*/
            v30 = *(_DWORD *)v102; /*0x9a0339*/
            *(_DWORD *)v102 *= 2; /*0x9a0342*/
            v31 = (v30 >> 0x1F) | (2 * *(_DWORD *)&v102[4]); /*0x9a034a*/
            v32 = *(__int64 *)&v102[4] >> 0x1F; /*0x9a0354*/
            --v29; /*0x9a0356*/
            *(_DWORD *)&v102[4] = v31; /*0x9a035e*/
            *(_DWORD *)&v102[8] = v32; /*0x9a0361*/
          }
          while ( v29 > 0 ); /*0x9a0364*/
          if ( v29 <= 0 ) /*0x9a0369*/
          {
LABEL_62:
            if ( --v29 < 0 ) /*0x9a0373*/
            {
              v90 = (unsigned __int16)-v29; /*0x9a037c*/
              v29 = 0; /*0x9a037f*/
              do /*0x9a03b0*/
              {
                if ( (v102[0] & 1) != 0 ) /*0x9a0385*/
                  ++v87; /*0x9a0387*/
                v33 = *(_DWORD *)&v102[8]; /*0x9a038a*/
                *(_DWORD *)&v102[8] >>= 1; /*0x9a0393*/
                v34 = (v33 << 0x1F) | (*(_DWORD *)&v102[4] >> 1); /*0x9a039b*/
                v35 = *(__int64 *)v102 >> 1; /*0x9a03a5*/
                v36 = v90-- == 1; /*0x9a03a7*/
                *(_DWORD *)&v102[4] = v34; /*0x9a03aa*/
                *(_DWORD *)v102 = v35; /*0x9a03ad*/
              }
              while ( !v36 ); /*0x9a03b0*/
              if ( v87 ) /*0x9a03b6*/
                *(_WORD *)v102 |= 1u; /*0x9a03b8*/
            }
          }
          if ( *(_WORD *)v102 > 0x8000u || (*(_DWORD *)v102 & 0x1FFFF) == 0x18000 ) /*0x9a03d4*/
          {
            if ( *(_DWORD *)&v102[2] == 0xFFFFFFFF ) /*0x9a03da*/
            {
              *(_DWORD *)&v102[2] = 0; /*0x9a03dc*/
              if ( *(_DWORD *)&v102[6] == 0xFFFFFFFF ) /*0x9a03e4*/
              {
                *(_DWORD *)&v102[6] = 0; /*0x9a03e6*/
                if ( *(_WORD *)&v102[0xA] == 0xFFFF ) /*0x9a03f0*/
                {
                  *(_WORD *)&v102[0xA] = 0x8000; /*0x9a03f2*/
                  ++v29; /*0x9a03f8*/
                }
                else
                {
                  ++*(_WORD *)&v102[0xA]; /*0x9a03fb*/
                }
              }
              else
              {
                ++*(_DWORD *)&v102[6]; /*0x9a0401*/
              }
            }
            else
            {
              ++*(_DWORD *)&v102[2]; /*0x9a0406*/
            }
          }
          if ( (unsigned __int16)v29 >= 0x7FFFu ) /*0x9a040d*/
            goto LABEL_80; /*0x9a040d*/
          LOWORD(v101[0]) = *(_WORD *)&v102[2]; /*0x9a0413*/
          *(_QWORD *)((char *)v101 + 2) = *(_QWORD *)&v102[4]; /*0x9a041d*/
          WORD1(v101[1]) = v23 | v29; /*0x9a0425*/
        }
        else
        {
LABEL_40:
          memset(v101, 0, 0xC); /*0x9a0249*/
        }
      }
    }
  }
  if ( WORD1(v101[1]) >= 0x3FFFu )
  {
    ++v85; /*0x9a046a*/
    v37 = (WORD1(v101[1]) ^ HIWORD(v100)) & 0x8000; /*0x9a0478*/
    v80 = 0; /*0x9a0484*/
    memset(v102, 0, sizeof(v102)); /*0x9a0487*/
    v38 = (HIWORD(v100) & 0x7FFF) + (WORD1(v101[1]) & 0x7FFF); /*0x9a0490*/
    if ( (WORD1(v101[1]) & 0x7FFF) == 0x7FFF || (HIWORD(v100) & 0x7FFF) == 0x7FFF || v38 > 0xBFFDu )
    {
      LODWORD(v101[1]) = (__int16)(WORD1(v101[1]) ^ HIWORD(v100)) < 0 ? 0xFFFF8000 : 0x7FFF8000;
    }
    else
    {
      if ( v38 > 0x3FBFu )
      {
        if ( (v101[1] & 0x7FFF0000LL) == 0 ) /*0x9a04bf*/
        {
          ++v38; /*0x9a04c1*/
          if ( (v101[1] & 0x7FFFFFFF) == 0 && !v101[0] ) /*0x9a04ce*/
          {
            WORD1(v101[1]) = 0; /*0x9a04d5*/
            goto LABEL_130; /*0x9a04d9*/
          }
        }
        if ( (v100 & 0x7FFF0000) != 0 || (++v38, (v100 & 0x7FFFFFFF) != 0) || v99 || v98 )
        {
          v82 = 0; /*0x9a04f7*/
          v39 = &v102[4]; /*0x9a04fb*/
          for ( j = 5; j > 0; --j ) /*0x9a04fe*/
          {
            v84 = j; /*0x9a050f*/
            v78 = &v100; /*0x9a051b*/
            v88 = (unsigned __int16 *)v101 + v82; /*0x9a051e*/
            do /*0x9a0564*/
            {
              v91 = 0; /*0x9a052d*/
              v40 = *v88 * *(unsigned __int16 *)v78; /*0x9a0531*/
              v41 = *((_DWORD *)v39 + 0xFFFFFFFF); /*0x9a0534*/
              v42 = v41 + v40; /*0x9a0537*/
              if ( v41 + v40 < v41 || v42 < v40 ) /*0x9a0540*/
                v91 = 1; /*0x9a0542*/
              *((_DWORD *)v39 + 0xFFFFFFFF) = v42; /*0x9a054d*/
              if ( v91 ) /*0x9a0550*/
                ++*v39; /*0x9a0552*/
              ++v88; /*0x9a0555*/
              v78 = (int *)((char *)v78 + 0xFFFFFFFE); /*0x9a0559*/
              --v84; /*0x9a055d*/
            }
            while ( v84 > 0 ); /*0x9a0564*/
            ++v39; /*0x9a0567*/
            ++v82; /*0x9a0568*/
          }
          v43 = v38 - 0x3FFE; /*0x9a0574*/
          if ( v43 <= 0 ) /*0x9a057f*/
            goto LABEL_109; /*0x9a057f*/
          do /*0x9a05b6*/
          {
            if ( *(int *)&v102[8] < 0 ) /*0x9a0588*/
              break; /*0x9a0588*/
            v44 = *(_DWORD *)v102; /*0x9a058a*/
            *(_DWORD *)v102 *= 2; /*0x9a0593*/
            v45 = (v44 >> 0x1F) | (2 * *(_DWORD *)&v102[4]); /*0x9a059b*/
            v46 = *(__int64 *)&v102[4] >> 0x1F; /*0x9a05a5*/
            --v43; /*0x9a05a7*/
            *(_DWORD *)&v102[4] = v45; /*0x9a05b0*/
            *(_DWORD *)&v102[8] = v46; /*0x9a05b3*/
          }
          while ( v43 > 0 ); /*0x9a05b6*/
          if ( v43 <= 0 ) /*0x9a05bb*/
          {
LABEL_109:
            if ( --v43 < 0 ) /*0x9a05c6*/
            {
              v47 = (unsigned __int16)-v43; /*0x9a05cc*/
              v43 = 0; /*0x9a05cf*/
              do /*0x9a05fe*/
              {
                if ( (v102[0] & 1) != 0 ) /*0x9a05d5*/
                  ++v80; /*0x9a05d7*/
                v48 = *(_DWORD *)&v102[8]; /*0x9a05da*/
                *(_DWORD *)&v102[8] >>= 1; /*0x9a05e3*/
                v49 = (v48 << 0x1F) | (*(_DWORD *)&v102[4] >> 1); /*0x9a05eb*/
                v50 = *(__int64 *)v102 >> 1; /*0x9a05f5*/
                --v47; /*0x9a05f7*/
                *(_DWORD *)&v102[4] = v49; /*0x9a05f8*/
                *(_DWORD *)v102 = v50; /*0x9a05fb*/
              }
              while ( v47 ); /*0x9a05fe*/
              if ( v80 ) /*0x9a0605*/
                *(_WORD *)v102 |= 1u; /*0x9a0607*/
            }
          }
          if ( *(_WORD *)v102 > 0x8000u || (*(_DWORD *)v102 & 0x1FFFF) == 0x18000 ) /*0x9a0623*/
          {
            if ( *(_DWORD *)&v102[2] == 0xFFFFFFFF ) /*0x9a0629*/
            {
              *(_DWORD *)&v102[2] = 0; /*0x9a062f*/
              if ( *(_DWORD *)&v102[6] == 0xFFFFFFFF ) /*0x9a0632*/
              {
                *(_DWORD *)&v102[6] = 0; /*0x9a063a*/
                if ( *(_WORD *)&v102[0xA] == 0xFFFF ) /*0x9a063d*/
                {
                  *(_WORD *)&v102[0xA] = 0x8000; /*0x9a063f*/
                  ++v43; /*0x9a0645*/
                }
                else
                {
                  ++*(_WORD *)&v102[0xA]; /*0x9a0648*/
                }
              }
              else
              {
                ++*(_DWORD *)&v102[6]; /*0x9a064e*/
              }
            }
            else
            {
              ++*(_DWORD *)&v102[2]; /*0x9a0653*/
            }
          }
          if ( (unsigned __int16)v43 < 0x7FFFu )
          {
            LOWORD(v101[0]) = *(_WORD *)&v102[2]; /*0x9a067f*/
            *(_QWORD *)((char *)v101 + 2) = *(_QWORD *)&v102[4]; /*0x9a0689*/
            WORD1(v101[1]) = v37 | v43; /*0x9a0691*/
          }
          else
          {
            v101[0] = 0; /*0x9a0663*/
            LODWORD(v101[1]) = v37 != 0 ? 0xFFFF8000 : 0x7FFF8000;
          }
          goto LABEL_130; /*0x9a0679*/
        }
      }
      LODWORD(v101[1]) = 0; /*0x9a04b4*/
    }
    v101[0] = 0; /*0x9a06ae*/
  }
LABEL_130:
  *(_WORD *)a6 = v85; /*0x9a06b1*/
  if ( (a5 & 1) != 0 )
  {
    a4 += v85; /*0x9a06c3*/
    if ( a4 <= 0 )
    {
      *(_WORD *)a6 = 0; /*0x9a06cb*/
      *(_BYTE *)(a6 + 3) = 1; /*0x9a06d5*/
      *(_BYTE *)(a6 + 2) = v74 != (__int16)0x8000 ? 0x20 : 0x2D;
      *(_BYTE *)(a6 + 4) = 0x30; /*0x9a06e5*/
      *(_BYTE *)(a6 + 5) = 0; /*0x9a06e9*/
      return 1; /*0x9a06ed*/
    }
  }
  if ( a4 > 0x15 ) /*0x9a06f8*/
    a4 = 0x15; /*0x9a06fa*/
  v51 = WORD1(v101[1]) - 0x3FFE; /*0x9a0705*/
  WORD1(v101[1]) = 0; /*0x9a070b*/
  v52 = 8; /*0x9a070f*/
  do /*0x9a0734*/
  {
    v53 = v101[0]; /*0x9a0710*/
    LODWORD(v101[0]) *= 2; /*0x9a0719*/
    v54 = (v53 >> 0x1F) | (2 * HIDWORD(v101[0])); /*0x9a0721*/
    v55 = *(_QWORD *)((char *)v101 + 4) >> 0x1F; /*0x9a072b*/
    --v52; /*0x9a072d*/
    HIDWORD(v101[0]) = v54; /*0x9a072e*/
    LODWORD(v101[1]) = v55; /*0x9a0731*/
  }
  while ( v52 ); /*0x9a0734*/
  if ( v51 < 0 ) /*0x9a0738*/
  {
    v56 = (unsigned __int8)-(char)v51; /*0x9a073c*/
    if ( v56 ) /*0x9a0742*/
    {
      do /*0x9a076a*/
      {
        v57 = v101[1]; /*0x9a0744*/
        LODWORD(v101[1]) >>= 1; /*0x9a074d*/
        --v56; /*0x9a0761*/
        v101[0] = __PAIR64__((unsigned int)(v57 << 0x1F) | (HIDWORD(v101[0]) >> 1), v101[0] >> 1); /*0x9a0767*/
      }
      while ( v56 > 0 ); /*0x9a076a*/
    }
  }
  v58 = (_BYTE *)(a6 + 4); /*0x9a0772*/
  v95 = (_BYTE *)(a6 + 4); /*0x9a0775*/
  for ( k = a4 + 1; k > 0; BYTE3(v101[1]) = 0 ) /*0x9a077b*/
  {
    v59 = v101[0]; /*0x9a0781*/
    v96 = v101[0]; /*0x9a078d*/
    v97 = v101[1]; /*0x9a078f*/
    LODWORD(v101[0]) *= 2; /*0x9a0790*/
    v60 = v101[0]; /*0x9a0793*/
    LODWORD(v101[0]) *= 2; /*0x9a0796*/
    v61 = (v59 >> 0x1F) | (2 * HIDWORD(v101[0])); /*0x9a079f*/
    v62 = 2 * v61; /*0x9a07af*/
    v63 = (v61 >> 0x1F) | (2 * (*(_QWORD *)((char *)v101 + 4) >> 0x1F)); /*0x9a07be*/
    v64 = (v60 >> 0x1F) | v62; /*0x9a07c3*/
    v65 = v96 + LODWORD(v101[0]); /*0x9a07c5*/
    if ( (unsigned int)(v96 + LODWORD(v101[0])) < LODWORD(v101[0]) || v65 < (unsigned int)v96 ) /*0x9a07ce*/
    {
      v66 = 0; /*0x9a07d3*/
      if ( v64 + 1 < v64 || v64 == 0xFFFFFFFF ) /*0x9a07dc*/
        v66 = 1; /*0x9a07e0*/
      ++v64; /*0x9a07e3*/
      if ( v66 ) /*0x9a07e5*/
        ++v63; /*0x9a07e7*/
    }
    v67 = HIDWORD(v96) + v64; /*0x9a07eb*/
    v92 = HIDWORD(v96) + v64; /*0x9a07f0*/
    if ( HIDWORD(v96) + v64 < v64 || v67 < HIDWORD(v96) ) /*0x9a07f7*/
      ++v63; /*0x9a07f9*/
    LODWORD(v101[0]) = 2 * v65; /*0x9a0807*/
    LODWORD(v101[1]) = (v67 >> 0x1F) | (2 * (v97 + v63)); /*0x9a080d*/
    *v58++ = BYTE3(v101[1]) + 0x30; /*0x9a081f*/
    --k; /*0x9a0822*/
    HIDWORD(v101[0]) = (v65 >> 0x1F) | (2 * v92); /*0x9a0829*/
  }
  v68 = v58 + 0xFFFFFFFF; /*0x9a0836*/
  v69 = *v68; /*0x9a0837*/
  v70 = v68 + 0xFFFFFFFF; /*0x9a0839*/
  if ( v69 >= 0x35 )
  {
    while ( v70 >= v95 && *v70 == 0x39 ) /*0x9a0846*/
      *v70-- = 0x30; /*0x9a0848*/
    v71 = a6; /*0x9a0854*/
    if ( v70 < v95 ) /*0x9a0857*/
    {
      ++v70; /*0x9a0859*/
      ++*(_WORD *)a6; /*0x9a085a*/
    }
    ++*v70; /*0x9a085d*/
  }
  else
  {
    while ( v70 >= v95 && *v70 == 0x30 ) /*0x9a0884*/
      --v70; /*0x9a0886*/
    v71 = a6; /*0x9a088d*/
    if ( v70 < v95 )
    {
      *(_WORD *)a6 = 0; /*0x9a0892*/
      *(_BYTE *)(a6 + 3) = 1; /*0x9a089c*/
      *(_BYTE *)(a6 + 2) = v74 != (__int16)0x8000 ? 0x20 : 0x2D;
      *v95 = 0x30; /*0x9a08ae*/
      *(_BYTE *)(a6 + 5) = 0; /*0x9a08b1*/
      return 1; /*0x9a08b5*/
    }
  }
  v72 = (_BYTE)v70 - v71 - 3; /*0x9a0861*/
  *(_BYTE *)(v71 + 3) = v72; /*0x9a0867*/
  *(_BYTE *)(v72 + v71 + 4) = 0; /*0x9a086a*/
  return 1; /*0x9a0872*/
}
