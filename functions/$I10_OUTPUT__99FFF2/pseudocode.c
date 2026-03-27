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

  *(_DWORD *)v102 = a1;
  *(_DWORD *)&v102[4] = a2;
  *(_WORD *)&v102[8] = a3;
  v6 = a3 & 0x8000;
  v7 = a3 & 0x7FFF;
  v98 = 0xCCCCCCCC;
  v99 = 0xCCCCCCCC;
  v100 = 0x3FFBCCCC;
  v74 = a3 & 0x8000;
  if ( a3 >= 0 )
    *(_BYTE *)(a6 + 2) = 0x20;
  else
    *(_BYTE *)(a6 + 2) = 0x2D;
  v8 = *(_DWORD *)&v102[4];
  v9 = *(_DWORD *)v102;
  if ( !v7 && !*(_DWORD *)&v102[4] && !*(_DWORD *)v102 )
  {
    *(_WORD *)a6 = 0;
    *(_BYTE *)(a6 + 2) = v6 != (__int16)0xFFFF8000 ? 0x20 : 0x2D;
    *(_BYTE *)(a6 + 3) = 1;
    *(_BYTE *)(a6 + 4) = 0x30;
    *(_BYTE *)(a6 + 5) = 0;
    return 1;
  }
  if ( v7 == 0x7FFF )
  {
    *(_WORD *)a6 = 1;
    if ( (v8 != 0x80000000 || v9) && (v8 & 0x40000000) == 0 )
    {
      v11 = strcpy_s((char *)(a6 + 4), 0x16u, "1#SNAN");
LABEL_25:
      if ( v11 )
        _invoke_watson(v11, v12, v13, a6, v9, 0);
      *(_BYTE *)(a6 + 3) = 6;
      return 0;
    }
    if ( v6 && v8 == 0xC0000000 )
    {
      if ( !v9 )
      {
        v14 = strcpy_s((char *)(a6 + 4), 0x16u, "1#IND");
LABEL_21:
        if ( v14 )
          _invoke_watson(v14, v15, v16, a6, 0, 0);
        *(_BYTE *)(a6 + 3) = 5;
        return 0;
      }
    }
    else if ( v8 == 0x80000000 && !v9 )
    {
      v14 = strcpy_s((char *)(a6 + 4), 0x16u, "1#INF");
      goto LABEL_21;
    }
    v11 = strcpy_s((char *)(a6 + 4), 0x16u, "1#QNAN");
    goto LABEL_25;
  }
  v85 = (0x4D * (HIBYTE(v7) + 2 * HIBYTE(*(_DWORD *)&v102[4])) + 0x4D10 * (unsigned int)v7 - 0x134312F4) >> 0x10;
  v17 = -v85;
  WORD1(v101[1]) = a3 & 0x7FFF;
  *(_QWORD *)((char *)v101 + 2) = *(_QWORD *)v102;
  LOWORD(v101[0]) = 0;
  v75 = (char *)&unk_B32120 + 0xFFFFFFA0;
  if ( v85 )
  {
    if ( (__int16)((0x4D * (HIBYTE(v7) + 2 * HIBYTE(*(_DWORD *)&v102[4])) + 0x4D10 * (unsigned int)v7 - 0x134312F4) >> 0x10) > 0 )
    {
      v17 = (__int16)((0x4D * (HIBYTE(v7) + 2 * HIBYTE(*(_DWORD *)&v102[4])) + 0x4D10 * (unsigned int)v7 - 0x134312F4) >> 0x10);
      v75 = (char *)&unk_B32280 + 0xFFFFFFA0;
    }
    while ( v17 )
    {
      v75 += 0x54;
      v18 = v17 & 7;
      v17 >>= 3;
      if ( v18 )
      {
        v19 = &v75[0xC * v18];
        v76 = v19;
        if ( *(_WORD *)v19 >= 0x8000u )
        {
          v96 = *(_QWORD *)v19;
          v97 = *((_DWORD *)v19 + 2);
          --*(_DWORD *)((char *)&v96 + 2);
          v76 = (char *)&v96;
          v19 = (char *)&v96;
        }
        v20 = *((_WORD *)v19 + 5);
        v21 = WORD1(v101[1]) ^ v20;
        v22 = v20 & 0x7FFF;
        v87 = 0;
        memset(v102, 0, sizeof(v102));
        v23 = v21 & 0x8000;
        v24 = v22 + (WORD1(v101[1]) & 0x7FFF);
        if ( (WORD1(v101[1]) & 0x7FFF) == 0x7FFF || v22 >= 0x7FFFu || v24 > 0xBFFDu )
        {
LABEL_80:
          v101[0] = 0;
          LODWORD(v101[1]) = v23 != 0 ? 0xFFFF8000 : 0x7FFF8000;
          continue;
        }
        if ( v24 <= 0x3FBFu )
          goto LABEL_40;
        if ( (v101[1] & 0x7FFF0000LL) == 0 )
        {
          ++v24;
          if ( (v101[1] & 0x7FFFFFFF) == 0 && !v101[0] )
          {
            WORD1(v101[1]) = 0;
            continue;
          }
        }
        if ( v22 || (++v24, (*((_DWORD *)v76 + 2) & 0x7FFFFFFF) != 0) || *((_DWORD *)v76 + 1) || *(_DWORD *)v76 )
        {
          v25 = &v102[4];
          v77 = 0;
          v89 = &v102[4];
          for ( i = 5; i > 0; --i )
          {
            v83 = i;
            v79 = (unsigned __int16 *)v101 + v77;
            v81 = (unsigned __int16 *)(v76 + 8);
            do
            {
              v26 = *((_DWORD *)v25 + 0xFFFFFFFF);
              v27 = *v81 * *v79;
              v73 = 0;
              v28 = v26 + v27;
              if ( v26 + v27 < v26 || v28 < v27 )
                v73 = 1;
              v25 = v89;
              *((_DWORD *)v89 + 0xFFFFFFFF) = v28;
              if ( v73 )
                ++*v89;
              ++v79;
              v81 += 0xFFFFFFFF;
              --v83;
            }
            while ( v83 > 0 );
            v25 = v89 + 1;
            ++v77;
            ++v89;
          }
          v29 = v24 - 0x3FFE;
          if ( v29 <= 0 )
            goto LABEL_62;
          do
          {
            if ( *(int *)&v102[8] < 0 )
              break;
            v30 = *(_DWORD *)v102;
            *(_DWORD *)v102 *= 2;
            v31 = (v30 >> 0x1F) | (2 * *(_DWORD *)&v102[4]);
            v32 = *(__int64 *)&v102[4] >> 0x1F;
            --v29;
            *(_DWORD *)&v102[4] = v31;
            *(_DWORD *)&v102[8] = v32;
          }
          while ( v29 > 0 );
          if ( v29 <= 0 )
          {
LABEL_62:
            if ( --v29 < 0 )
            {
              v90 = (unsigned __int16)-v29;
              v29 = 0;
              do
              {
                if ( (v102[0] & 1) != 0 )
                  ++v87;
                v33 = *(_DWORD *)&v102[8];
                *(_DWORD *)&v102[8] >>= 1;
                v34 = (v33 << 0x1F) | (*(_DWORD *)&v102[4] >> 1);
                v35 = *(__int64 *)v102 >> 1;
                v36 = v90-- == 1;
                *(_DWORD *)&v102[4] = v34;
                *(_DWORD *)v102 = v35;
              }
              while ( !v36 );
              if ( v87 )
                *(_WORD *)v102 |= 1u;
            }
          }
          if ( *(_WORD *)v102 > 0x8000u || (*(_DWORD *)v102 & 0x1FFFF) == 0x18000 )
          {
            if ( *(_DWORD *)&v102[2] == 0xFFFFFFFF )
            {
              *(_DWORD *)&v102[2] = 0;
              if ( *(_DWORD *)&v102[6] == 0xFFFFFFFF )
              {
                *(_DWORD *)&v102[6] = 0;
                if ( *(_WORD *)&v102[0xA] == 0xFFFF )
                {
                  *(_WORD *)&v102[0xA] = 0x8000;
                  ++v29;
                }
                else
                {
                  ++*(_WORD *)&v102[0xA];
                }
              }
              else
              {
                ++*(_DWORD *)&v102[6];
              }
            }
            else
            {
              ++*(_DWORD *)&v102[2];
            }
          }
          if ( (unsigned __int16)v29 >= 0x7FFFu )
            goto LABEL_80;
          LOWORD(v101[0]) = *(_WORD *)&v102[2];
          *(_QWORD *)((char *)v101 + 2) = *(_QWORD *)&v102[4];
          WORD1(v101[1]) = v23 | v29;
        }
        else
        {
LABEL_40:
          memset(v101, 0, 0xC);
        }
      }
    }
  }
  if ( WORD1(v101[1]) >= 0x3FFFu )
  {
    ++v85;
    v37 = (WORD1(v101[1]) ^ HIWORD(v100)) & 0x8000;
    v80 = 0;
    memset(v102, 0, sizeof(v102));
    v38 = (HIWORD(v100) & 0x7FFF) + (WORD1(v101[1]) & 0x7FFF);
    if ( (WORD1(v101[1]) & 0x7FFF) == 0x7FFF || (HIWORD(v100) & 0x7FFF) == 0x7FFF || v38 > 0xBFFDu )
    {
      LODWORD(v101[1]) = (__int16)(WORD1(v101[1]) ^ HIWORD(v100)) < 0 ? 0xFFFF8000 : 0x7FFF8000;
    }
    else
    {
      if ( v38 > 0x3FBFu )
      {
        if ( (v101[1] & 0x7FFF0000LL) == 0 )
        {
          ++v38;
          if ( (v101[1] & 0x7FFFFFFF) == 0 && !v101[0] )
          {
            WORD1(v101[1]) = 0;
            goto LABEL_130;
          }
        }
        if ( (v100 & 0x7FFF0000) != 0 || (++v38, (v100 & 0x7FFFFFFF) != 0) || v99 || v98 )
        {
          v82 = 0;
          v39 = &v102[4];
          for ( j = 5; j > 0; --j )
          {
            v84 = j;
            v78 = &v100;
            v88 = (unsigned __int16 *)v101 + v82;
            do
            {
              v91 = 0;
              v40 = *v88 * *(unsigned __int16 *)v78;
              v41 = *((_DWORD *)v39 + 0xFFFFFFFF);
              v42 = v41 + v40;
              if ( v41 + v40 < v41 || v42 < v40 )
                v91 = 1;
              *((_DWORD *)v39 + 0xFFFFFFFF) = v42;
              if ( v91 )
                ++*v39;
              ++v88;
              v78 = (int *)((char *)v78 + 0xFFFFFFFE);
              --v84;
            }
            while ( v84 > 0 );
            ++v39;
            ++v82;
          }
          v43 = v38 - 0x3FFE;
          if ( v43 <= 0 )
            goto LABEL_109;
          do
          {
            if ( *(int *)&v102[8] < 0 )
              break;
            v44 = *(_DWORD *)v102;
            *(_DWORD *)v102 *= 2;
            v45 = (v44 >> 0x1F) | (2 * *(_DWORD *)&v102[4]);
            v46 = *(__int64 *)&v102[4] >> 0x1F;
            --v43;
            *(_DWORD *)&v102[4] = v45;
            *(_DWORD *)&v102[8] = v46;
          }
          while ( v43 > 0 );
          if ( v43 <= 0 )
          {
LABEL_109:
            if ( --v43 < 0 )
            {
              v47 = (unsigned __int16)-v43;
              v43 = 0;
              do
              {
                if ( (v102[0] & 1) != 0 )
                  ++v80;
                v48 = *(_DWORD *)&v102[8];
                *(_DWORD *)&v102[8] >>= 1;
                v49 = (v48 << 0x1F) | (*(_DWORD *)&v102[4] >> 1);
                v50 = *(__int64 *)v102 >> 1;
                --v47;
                *(_DWORD *)&v102[4] = v49;
                *(_DWORD *)v102 = v50;
              }
              while ( v47 );
              if ( v80 )
                *(_WORD *)v102 |= 1u;
            }
          }
          if ( *(_WORD *)v102 > 0x8000u || (*(_DWORD *)v102 & 0x1FFFF) == 0x18000 )
          {
            if ( *(_DWORD *)&v102[2] == 0xFFFFFFFF )
            {
              *(_DWORD *)&v102[2] = 0;
              if ( *(_DWORD *)&v102[6] == 0xFFFFFFFF )
              {
                *(_DWORD *)&v102[6] = 0;
                if ( *(_WORD *)&v102[0xA] == 0xFFFF )
                {
                  *(_WORD *)&v102[0xA] = 0x8000;
                  ++v43;
                }
                else
                {
                  ++*(_WORD *)&v102[0xA];
                }
              }
              else
              {
                ++*(_DWORD *)&v102[6];
              }
            }
            else
            {
              ++*(_DWORD *)&v102[2];
            }
          }
          if ( (unsigned __int16)v43 < 0x7FFFu )
          {
            LOWORD(v101[0]) = *(_WORD *)&v102[2];
            *(_QWORD *)((char *)v101 + 2) = *(_QWORD *)&v102[4];
            WORD1(v101[1]) = v37 | v43;
          }
          else
          {
            v101[0] = 0;
            LODWORD(v101[1]) = v37 != 0 ? 0xFFFF8000 : 0x7FFF8000;
          }
          goto LABEL_130;
        }
      }
      LODWORD(v101[1]) = 0;
    }
    v101[0] = 0;
  }
LABEL_130:
  *(_WORD *)a6 = v85;
  if ( (a5 & 1) != 0 )
  {
    a4 += v85;
    if ( a4 <= 0 )
    {
      *(_WORD *)a6 = 0;
      *(_BYTE *)(a6 + 3) = 1;
      *(_BYTE *)(a6 + 2) = v74 != (__int16)0x8000 ? 0x20 : 0x2D;
      *(_BYTE *)(a6 + 4) = 0x30;
      *(_BYTE *)(a6 + 5) = 0;
      return 1;
    }
  }
  if ( a4 > 0x15 )
    a4 = 0x15;
  v51 = WORD1(v101[1]) - 0x3FFE;
  WORD1(v101[1]) = 0;
  v52 = 8;
  do
  {
    v53 = v101[0];
    LODWORD(v101[0]) *= 2;
    v54 = (v53 >> 0x1F) | (2 * HIDWORD(v101[0]));
    v55 = *(_QWORD *)((char *)v101 + 4) >> 0x1F;
    --v52;
    HIDWORD(v101[0]) = v54;
    LODWORD(v101[1]) = v55;
  }
  while ( v52 );
  if ( v51 < 0 )
  {
    v56 = (unsigned __int8)-(char)v51;
    if ( v56 )
    {
      do
      {
        v57 = v101[1];
        LODWORD(v101[1]) >>= 1;
        --v56;
        v101[0] = __PAIR64__((unsigned int)(v57 << 0x1F) | (HIDWORD(v101[0]) >> 1), v101[0] >> 1);
      }
      while ( v56 > 0 );
    }
  }
  v58 = (_BYTE *)(a6 + 4);
  v95 = (_BYTE *)(a6 + 4);
  for ( k = a4 + 1; k > 0; BYTE3(v101[1]) = 0 )
  {
    v59 = v101[0];
    v96 = v101[0];
    v97 = v101[1];
    LODWORD(v101[0]) *= 2;
    v60 = v101[0];
    LODWORD(v101[0]) *= 2;
    v61 = __SPAIR64__(HIDWORD(v101[0]), v59) >> 0x1F;
    v62 = 2 * v61;
    v63 = (v61 >> 0x1F) | (2 * (*(_QWORD *)((char *)v101 + 4) >> 0x1F));
    v64 = (v60 >> 0x1F) | v62;
    v65 = v96 + LODWORD(v101[0]);
    if ( (unsigned int)(v96 + LODWORD(v101[0])) < LODWORD(v101[0]) || v65 < (unsigned int)v96 )
    {
      v66 = 0;
      if ( v64 + 1 < v64 || v64 == 0xFFFFFFFF )
        v66 = 1;
      ++v64;
      if ( v66 )
        ++v63;
    }
    v67 = HIDWORD(v96) + v64;
    v92 = HIDWORD(v96) + v64;
    if ( HIDWORD(v96) + v64 < v64 || v67 < HIDWORD(v96) )
      ++v63;
    LODWORD(v101[0]) = 2 * v65;
    LODWORD(v101[1]) = (v67 >> 0x1F) | (2 * (v97 + v63));
    *v58++ = BYTE3(v101[1]) + 0x30;
    --k;
    HIDWORD(v101[0]) = (v65 >> 0x1F) | (2 * v92);
  }
  v68 = v58 + 0xFFFFFFFF;
  v69 = *v68;
  v70 = v68 + 0xFFFFFFFF;
  if ( v69 >= 0x35 )
  {
    while ( v70 >= v95 && *v70 == 0x39 )
      *v70-- = 0x30;
    v71 = a6;
    if ( v70 < v95 )
    {
      ++v70;
      ++*(_WORD *)a6;
    }
    ++*v70;
  }
  else
  {
    while ( v70 >= v95 && *v70 == 0x30 )
      --v70;
    v71 = a6;
    if ( v70 < v95 )
    {
      *(_WORD *)a6 = 0;
      *(_BYTE *)(a6 + 3) = 1;
      *(_BYTE *)(a6 + 2) = v74 != (__int16)0x8000 ? 0x20 : 0x2D;
      *v95 = 0x30;
      *(_BYTE *)(a6 + 5) = 0;
      return 1;
    }
  }
  v72 = (_BYTE)v70 - v71 - 3;
  *(_BYTE *)(v71 + 3) = v72;
  *(_BYTE *)(v72 + v71 + 4) = 0;
  return 1;
}
