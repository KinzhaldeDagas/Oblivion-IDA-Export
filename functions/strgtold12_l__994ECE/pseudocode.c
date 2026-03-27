int __cdecl __strgtold12_l(int a1, char **a2, char *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ecx
  _BYTE *v9; // edi
  char *v11; // edx
  char v12; // al
  char v13; // al
  int v14; // eax
  int v15; // eax
  char *v16; // edx
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  char *v24; // esi
  char v25; // al
  int v26; // eax
  char *v27; // eax
  char *v28; // ebx
  __int16 v29; // dx
  __int16 v30; // ax
  unsigned __int16 v31; // dx
  __int16 v32; // ax
  unsigned __int16 v33; // di
  unsigned int v34; // eax
  _WORD *v35; // esi
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // ebx
  __int16 v39; // di
  unsigned int v40; // ecx
  int v41; // esi
  int v42; // ecx
  int v43; // esi
  unsigned int v44; // ecx
  int v45; // ebx
  int v46; // ecx
  __int16 v47; // cx
  unsigned __int64 v48; // kr00_8
  __int16 v49; // ax
  int v50; // [esp-4h] [ebp-8Ch]
  int v51; // [esp-4h] [ebp-8Ch]
  int v52; // [esp+10h] [ebp-78h]
  __int16 v53; // [esp+14h] [ebp-74h]
  char *v54; // [esp+18h] [ebp-70h]
  int v55; // [esp+1Ch] [ebp-6Ch]
  int v56; // [esp+20h] [ebp-68h]
  int v57; // [esp+20h] [ebp-68h]
  int v58; // [esp+24h] [ebp-64h]
  int v59; // [esp+24h] [ebp-64h]
  int v60; // [esp+28h] [ebp-60h]
  unsigned __int16 *v61; // [esp+28h] [ebp-60h]
  int v62; // [esp+2Ch] [ebp-5Ch]
  unsigned __int16 *v63; // [esp+2Ch] [ebp-5Ch]
  int v64; // [esp+30h] [ebp-58h]
  int i; // [esp+30h] [ebp-58h]
  char *v66; // [esp+34h] [ebp-54h]
  int v67; // [esp+34h] [ebp-54h]
  int v68; // [esp+38h] [ebp-50h]
  int v69; // [esp+38h] [ebp-50h]
  unsigned int v70; // [esp+3Ch] [ebp-4Ch]
  char *v71; // [esp+3Ch] [ebp-4Ch]
  __int64 v72; // [esp+40h] [ebp-48h] BYREF
  int v73; // [esp+48h] [ebp-40h]
  _DWORD v74[7]; // [esp+4Ch] [ebp-3Ch] BYREF
  _BYTE v75[23]; // [esp+68h] [ebp-20h] BYREF
  char v76; // [esp+7Fh] [ebp-9h]

  v8 = 0;
  v9 = v75;
  v53 = 0;
  v56 = 1;
  v70 = 0;
  v64 = 0;
  v62 = 0;
  v60 = 0;
  v58 = 0;
  v68 = 0;
  v55 = 0;
  if ( !a8 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)v75, 1);
    return 0;
  }
  v11 = a3;
  v66 = a3;
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 != 0x20 && v12 != 9 && v12 != 0xA && v12 != 0xD )
      break;
    ++v11;
  }
  while ( 2 )
  {
    v13 = *v11++;
    switch ( v8 )
    {
      case 0:
        if ( (unsigned __int8)(v13 - 0x31) <= 8u )
          goto LABEL_11;
        if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 0xBC) )
          goto LABEL_14;
        v14 = v13 - 0x2B;
        if ( !v14 )
        {
          v53 = 0;
          v8 = 2;
          continue;
        }
        v15 = v14 - 2;
        if ( !v15 )
        {
          v8 = 2;
          v53 = 0x8000;
          continue;
        }
        if ( v15 != 3 )
          goto LABEL_75;
        goto LABEL_19;
      case 1:
        v64 = 1;
        if ( (unsigned __int8)(v13 - 0x31) <= 8u )
          goto LABEL_11;
        if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 0xBC) )
          goto LABEL_24;
        if ( v13 == 0x2B || v13 == 0x2D )
          goto LABEL_33;
        if ( v13 == 0x30 )
          goto LABEL_19;
LABEL_28:
        if ( v13 <= 0x43 || v13 > 0x45 && (v13 <= 0x63 || v13 > 0x65) )
          goto LABEL_75;
        v51 = 6;
        goto LABEL_15;
      case 2:
        if ( (unsigned __int8)(v13 - 0x31) <= 8u )
        {
LABEL_11:
          v50 = 3;
LABEL_12:
          v8 = v50;
          --v11;
        }
        else
        {
          if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 0xBC) )
          {
LABEL_14:
            v51 = 5;
            goto LABEL_15;
          }
          if ( v13 != 0x30 )
          {
LABEL_37:
            v16 = v66;
            goto LABEL_82;
          }
LABEL_19:
          v8 = 1;
        }
        continue;
      case 3:
        v64 = 1;
        while ( v13 >= 0x30 && v13 <= 0x39 )
        {
          if ( v70 >= 0x19 )
          {
            ++v68;
          }
          else
          {
            ++v70;
            *v9++ = v13 - 0x30;
          }
          v13 = *v11++;
        }
        if ( v13 != ***(_BYTE ***)(*(_DWORD *)a8 + 0xBC) )
          goto LABEL_46;
LABEL_24:
        v51 = 4;
        goto LABEL_15;
      case 4:
        v64 = 1;
        v62 = 1;
        if ( !v70 )
        {
          while ( v13 == 0x30 )
          {
            --v68;
            v13 = *v11++;
          }
        }
        while ( v13 >= 0x30 && v13 <= 0x39 )
        {
          if ( v70 < 0x19 )
          {
            ++v70;
            *v9++ = v13 - 0x30;
            --v68;
          }
          v13 = *v11++;
        }
LABEL_46:
        if ( v13 != 0x2B && v13 != 0x2D )
          goto LABEL_28;
LABEL_33:
        --v11;
        v51 = 0xB;
        goto LABEL_15;
      case 5:
        v62 = 1;
        if ( (unsigned __int8)(v13 - 0x30) > 9u )
          goto LABEL_37;
        v50 = 4;
        goto LABEL_12;
      case 6:
        v66 = v11 + 0xFFFFFFFE;
        if ( (unsigned __int8)(v13 - 0x31) <= 8u )
          goto LABEL_63;
        v17 = v13 - 0x2B;
        if ( !v17 )
          goto LABEL_70;
        v18 = v17 - 2;
        if ( !v18 )
          goto LABEL_69;
        v19 = v18 == 3;
LABEL_67:
        if ( !v19 )
          goto LABEL_37;
        v51 = 8;
        goto LABEL_15;
      case 7:
        if ( (unsigned __int8)(v13 - 0x31) <= 8u )
          goto LABEL_63;
        v19 = v13 == 0x30;
        goto LABEL_67;
      case 8:
        v60 = 1;
        while ( v13 == 0x30 )
          v13 = *v11++;
        if ( (unsigned __int8)(v13 - 0x31) > 8u )
          goto LABEL_75;
LABEL_63:
        v50 = 9;
        goto LABEL_12;
      case 9:
        v60 = 1;
        v21 = 0;
        while ( 2 )
        {
          if ( v13 >= 0x30 && v13 <= 0x39 )
          {
            v21 = 0xA * v21 + v13 - 0x30;
            if ( v21 <= 0x1450 )
            {
              v13 = *v11++;
              continue;
            }
            v21 = 0x1451;
          }
          break;
        }
        v58 = v21;
        while ( v13 >= 0x30 && v13 <= 0x39 )
          v13 = *v11++;
LABEL_75:
        v16 = v11 + 0xFFFFFFFF;
        goto LABEL_82;
      case 0xB:
        if ( a7 )
        {
          v20 = v13 - 0x2B;
          v66 = v11 + 0xFFFFFFFF;
          if ( v20 )
          {
            if ( v20 != 2 )
            {
              v16 = v11 + 0xFFFFFFFF;
              goto LABEL_82;
            }
LABEL_69:
            v56 = 0xFFFFFFFF;
            v8 = 7;
          }
          else
          {
LABEL_70:
            v51 = 7;
LABEL_15:
            v8 = v51;
          }
          continue;
        }
        v16 = v11 + 0xFFFFFFFF;
LABEL_82:
        *a2 = v16;
        if ( !v64 )
        {
          v55 = 4;
LABEL_174:
          v47 = 0;
          v49 = 0;
          v48 = 0;
          goto LABEL_175;
        }
        if ( v70 > 0x18 )
        {
          if ( v76 >= 5 )
            ++v76;
          --v9;
          ++v68;
          v70 = 0x18;
        }
        if ( !v70 )
          goto LABEL_174;
        while ( !*--v9 )
        {
          --v70;
          ++v68;
        }
        __mtold12(v75, v70, v74);
        v22 = v58;
        if ( v56 < 0 )
          v22 = -v58;
        v23 = v68 + v22;
        if ( !v60 )
          v23 += a5;
        if ( !v62 )
          v23 -= a6;
        if ( v23 > 0x1450 )
        {
          v49 = 0x7FFF;
          v47 = 0;
          v55 = 2;
          v48 = 0x8000000000000000uLL;
          goto LABEL_175;
        }
        if ( v23 < (int)0xFFFFEBB0 )
        {
          v55 = 1;
          goto LABEL_174;
        }
        v24 = (char *)&unk_B32120 + 0xFFFFFFA0;
        v67 = v23;
        if ( v23 )
        {
          if ( v23 < 0 )
          {
            v67 = -v23;
            v24 = (char *)&unk_B32280 + 0xFFFFFFA0;
          }
          if ( !a4 )
            LOWORD(v74[0]) = 0;
          while ( v67 )
          {
            v25 = v67;
            v67 >>= 3;
            v24 += 0x54;
            v26 = v25 & 7;
            v71 = v24;
            if ( v26 )
            {
              v27 = &v24[0xC * v26];
              v28 = v27;
              v54 = v27;
              if ( *(_WORD *)v27 >= 0x8000u )
              {
                v72 = *(_QWORD *)v27;
                v73 = *((_DWORD *)v27 + 2);
                --*(_DWORD *)((char *)&v72 + 2);
                v28 = (char *)&v72;
                v54 = (char *)&v72;
              }
              v29 = *((_WORD *)v28 + 5);
              v69 = 0;
              memset(&v74[4], 0, 0xC);
              v30 = HIWORD(v74[2]) ^ v29;
              v31 = v29 & 0x7FFF;
              v32 = v30 & 0x8000;
              v33 = v31 + (HIWORD(v74[2]) & 0x7FFF);
              if ( (HIWORD(v74[2]) & 0x7FFF) == 0x7FFF || v31 >= 0x7FFFu || v33 > 0xBFFDu )
              {
LABEL_167:
                v74[1] = 0;
                v34 = v32 != 0 ? 0xFFFF8000 : 0x7FFF8000;
                v74[0] = 0;
                goto LABEL_168;
              }
              if ( v33 <= 0x3FBFu )
              {
                v34 = 0;
                v74[1] = 0;
                v74[0] = 0;
LABEL_168:
                v74[2] = v34;
                continue;
              }
              if ( (v74[2] & 0x7FFF0000) != 0 || (++v33, (v74[2] & 0x7FFFFFFF) != 0) || v74[1] || v74[0] )
              {
                if ( v31 || (++v33, (*((_DWORD *)v28 + 2) & 0x7FFFFFFF) != 0) || *((_DWORD *)v28 + 1) || *(_DWORD *)v28 )
                {
                  v57 = 0;
                  v35 = &v74[5];
                  for ( i = 5; i > 0; --i )
                  {
                    v59 = i;
                    v63 = (unsigned __int16 *)v74 + v57;
                    v61 = (unsigned __int16 *)(v28 + 8);
                    do
                    {
                      v52 = 0;
                      v36 = *v63 * *v61;
                      v37 = *((_DWORD *)v35 + 0xFFFFFFFF);
                      v38 = v37 + v36;
                      if ( v37 + v36 < v37 || v38 < v36 )
                        v52 = 1;
                      *((_DWORD *)v35 + 0xFFFFFFFF) = v38;
                      if ( v52 )
                        ++*v35;
                      ++v63;
                      v61 += 0xFFFFFFFF;
                      --v59;
                    }
                    while ( v59 > 0 );
                    v28 = v54;
                    ++v35;
                    ++v57;
                  }
                  v39 = v33 - 0x3FFE;
                  if ( v39 <= 0 )
                    goto LABEL_149;
                  do
                  {
                    if ( v74[6] < 0 )
                      break;
                    v40 = v74[4];
                    v74[4] *= 2;
                    v41 = (v40 >> 0x1F) | (2 * v74[5]);
                    v42 = *(__int64 *)&v74[5] >> 0x1F;
                    --v39;
                    v74[5] = v41;
                    v74[6] = v42;
                  }
                  while ( v39 > 0 );
                  if ( v39 <= 0 )
                  {
LABEL_149:
                    if ( --v39 < 0 )
                    {
                      v43 = (unsigned __int16)-v39;
                      v39 = 0;
                      do
                      {
                        if ( (v74[4] & 1) != 0 )
                          ++v69;
                        v44 = v74[6];
                        v74[6] >>= 1;
                        v45 = __SPAIR64__(v44, v74[5]) >> 1;
                        v46 = *(__int64 *)&v74[4] >> 1;
                        --v43;
                        v74[5] = v45;
                        v74[4] = v46;
                      }
                      while ( v43 );
                      if ( v69 )
                        LOWORD(v74[4]) |= 1u;
                    }
                  }
                  if ( LOWORD(v74[4]) > 0x8000u || (v74[4] & 0x1FFFF) == 0x18000 )
                  {
                    if ( *(_DWORD *)((char *)&v74[4] + 2) == 0xFFFFFFFF )
                    {
                      *(_DWORD *)((char *)&v74[4] + 2) = 0;
                      if ( *(_DWORD *)((char *)&v74[5] + 2) == 0xFFFFFFFF )
                      {
                        *(_DWORD *)((char *)&v74[5] + 2) = 0;
                        if ( HIWORD(v74[6]) == 0xFFFF )
                        {
                          HIWORD(v74[6]) = 0x8000;
                          ++v39;
                        }
                        else
                        {
                          ++HIWORD(v74[6]);
                        }
                      }
                      else
                      {
                        ++*(_DWORD *)((char *)&v74[5] + 2);
                      }
                    }
                    else
                    {
                      ++*(_DWORD *)((char *)&v74[4] + 2);
                    }
                  }
                  v24 = v71;
                  if ( (unsigned __int16)v39 >= 0x7FFFu )
                    goto LABEL_167;
                  LOWORD(v74[0]) = HIWORD(v74[4]);
                  *(_QWORD *)((char *)v74 + 2) = *(_QWORD *)&v74[5];
                  HIWORD(v74[2]) = v32 | v39;
                }
                else
                {
                  memset(v74, 0, 0xC);
                }
              }
              else
              {
                HIWORD(v74[2]) = 0;
              }
            }
          }
        }
        v47 = v74[0];
        v48 = *(_QWORD *)((char *)v74 + 2);
        v49 = HIWORD(v74[2]);
LABEL_175:
        *(_WORD *)a1 = v47;
        *(_WORD *)(a1 + 0xA) = v53 | v49;
        *(_QWORD *)(a1 + 2) = v48;
        return v55;
    }
  }
}
