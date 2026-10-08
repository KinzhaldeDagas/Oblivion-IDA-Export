int __cdecl __strgtold12_l(int a1, char **a2, char *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ecx
  char *v9; // edi
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
  unsigned int *v35; // esi
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // ebx
  __int16 v39; // di
  unsigned int v40; // ecx
  unsigned int v41; // esi
  unsigned int v42; // ecx
  int v43; // esi
  unsigned int v44; // ecx
  unsigned int v45; // ebx
  unsigned int v46; // ecx
  __int16 v47; // cx
  int v48; // esi
  unsigned int v49; // edx
  __int16 v50; // ax
  int v51; // [esp-4h] [ebp-8Ch]
  int v52; // [esp-4h] [ebp-8Ch]
  int v53; // [esp+10h] [ebp-78h]
  __int16 v54; // [esp+14h] [ebp-74h]
  char *v55; // [esp+18h] [ebp-70h]
  int v56; // [esp+1Ch] [ebp-6Ch]
  int v57; // [esp+20h] [ebp-68h]
  int v58; // [esp+20h] [ebp-68h]
  int v59; // [esp+24h] [ebp-64h]
  int v60; // [esp+24h] [ebp-64h]
  int v61; // [esp+28h] [ebp-60h]
  unsigned __int16 *v62; // [esp+28h] [ebp-60h]
  int v63; // [esp+2Ch] [ebp-5Ch]
  unsigned __int16 *v64; // [esp+2Ch] [ebp-5Ch]
  int v65; // [esp+30h] [ebp-58h]
  int i; // [esp+30h] [ebp-58h]
  char *v67; // [esp+34h] [ebp-54h]
  int v68; // [esp+34h] [ebp-54h]
  int v69; // [esp+38h] [ebp-50h]
  int v70; // [esp+38h] [ebp-50h]
  unsigned int v71; // [esp+3Ch] [ebp-4Ch]
  char *v72; // [esp+3Ch] [ebp-4Ch]
  __int64 v73; // [esp+40h] [ebp-48h] BYREF
  int v74; // [esp+48h] [ebp-40h]
  unsigned int v75[7]; // [esp+4Ch] [ebp-3Ch] BYREF
  char v76[23]; // [esp+68h] [ebp-20h] BYREF
  char v77; // [esp+7Fh] [ebp-9h]

  v8 = 0; /*0x994eee*/
  v9 = v76; /*0x994ef7*/
  v54 = 0; /*0x994efa*/
  v57 = 1; /*0x994efd*/
  v71 = 0; /*0x994f00*/
  v65 = 0; /*0x994f03*/
  v63 = 0; /*0x994f06*/
  v61 = 0; /*0x994f09*/
  v59 = 0; /*0x994f0c*/
  v69 = 0; /*0x994f0f*/
  v56 = 0; /*0x994f12*/
  if ( !a8 ) /*0x994f15*/
  {
    *_errno() = 0x16; /*0x994f21*/
    _invalid_parameter(0, (int)v76, 1); /*0x994f27*/
    return 0; /*0x994f31*/
  }
  v11 = a3; /*0x994f36*/
  v67 = a3; /*0x994f39*/
  while ( 1 ) /*0x994f3c*/
  {
    v12 = *v11; /*0x994f3c*/
    if ( *v11 != 0x20 && v12 != 9 && v12 != 0xA && v12 != 0xD ) /*0x994f4c*/
      break; /*0x994f4c*/
    ++v11; /*0x994f4e*/
  }
  while ( 2 )
  {
    v13 = *v11++; /*0x994f53*/
    switch ( v8 )
    {
      case 0:
        if ( (unsigned __int8)(v13 - 0x31) <= 8u ) /*0x994f6e*/
          goto LABEL_11; /*0x994f6e*/
        if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 0xBC) ) /*0x994f85*/
          goto LABEL_14; /*0x994f85*/
        v14 = v13 - 0x2B; /*0x994f8f*/
        if ( !v14 ) /*0x994f92*/
        {
          v54 = 0; /*0x994fb1*/
          v8 = 2; /*0x994fb7*/
          continue; /*0x994fb8*/
        }
        v15 = v14 - 2; /*0x994f95*/
        if ( !v15 ) /*0x994f96*/
        {
          v8 = 2; /*0x994fa7*/
          v54 = 0x8000; /*0x994fa8*/
          continue; /*0x994faf*/
        }
        if ( v15 != 3 ) /*0x994f9b*/
          goto LABEL_75; /*0x994f9b*/
        goto LABEL_19; /*0x994f9b*/
      case 1:
        v65 = 1; /*0x994fc2*/
        if ( (unsigned __int8)(v13 - 0x31) <= 8u ) /*0x994fc5*/
          goto LABEL_11; /*0x994fc5*/
        if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 0xBC) ) /*0x994fd6*/
          goto LABEL_24; /*0x994fd6*/
        if ( v13 == 0x2B || v13 == 0x2D ) /*0x994fe2*/
          goto LABEL_33; /*0x994fe2*/
        if ( v13 == 0x30 ) /*0x994fe6*/
          goto LABEL_19; /*0x994fe6*/
LABEL_28:
        if ( v13 <= 0x43 || v13 > 0x45 && (v13 <= 0x63 || v13 > 0x65) ) /*0x994ffe*/
          goto LABEL_75; /*0x994ffe*/
        v52 = 6; /*0x995004*/
        goto LABEL_15; /*0x995006*/
      case 2:
        if ( (unsigned __int8)(v13 - 0x31) <= 8u ) /*0x995018*/
        {
LABEL_11:
          v51 = 3; /*0x994f70*/
LABEL_12:
          v8 = v51; /*0x994f72*/
          --v11; /*0x994f73*/
        }
        else
        {
          if ( v13 == ***(_BYTE ***)(*(_DWORD *)a8 + 0xBC) ) /*0x99502d*/
          {
LABEL_14:
            v52 = 5; /*0x994f87*/
            goto LABEL_15; /*0x994f87*/
          }
          if ( v13 != 0x30 ) /*0x995035*/
          {
LABEL_37:
            v16 = v67; /*0x99503b*/
            goto LABEL_82; /*0x99503e*/
          }
LABEL_19:
          v8 = 1; /*0x994fa1*/
        }
        continue; /*0x994fa3*/
      case 3:
        v65 = 1; /*0x995043*/
        while ( v13 >= 0x30 && v13 <= 0x39 ) /*0x99504a*/
        {
          if ( v71 >= 0x19 ) /*0x995050*/
          {
            ++v69; /*0x99505c*/
          }
          else
          {
            ++v71; /*0x995052*/
            *v9++ = v13 - 0x30; /*0x995057*/
          }
          v13 = *v11++; /*0x99505f*/
        }
        if ( v13 != ***(_BYTE ***)(*(_DWORD *)a8 + 0xBC) ) /*0x995075*/
          goto LABEL_46; /*0x995075*/
LABEL_24:
        v52 = 4; /*0x994fd8*/
        goto LABEL_15; /*0x994fda*/
      case 4:
        v65 = 1; /*0x99508c*/
        v63 = 1; /*0x99508f*/
        if ( !v71 ) /*0x995092*/
        {
          while ( v13 == 0x30 ) /*0x99509e*/
          {
            --v69; /*0x995096*/
            v13 = *v11++; /*0x995099*/
          }
        }
        while ( v13 >= 0x30 && v13 <= 0x39 ) /*0x9950a4*/
        {
          if ( v71 < 0x19 ) /*0x9950aa*/
          {
            ++v71; /*0x9950ac*/
            *v9++ = v13 - 0x30; /*0x9950b1*/
            --v69; /*0x9950b4*/
          }
          v13 = *v11++; /*0x9950b7*/
        }
LABEL_46:
        if ( v13 != 0x2B && v13 != 0x2D ) /*0x995081*/
          goto LABEL_28; /*0x995081*/
LABEL_33:
        --v11; /*0x995008*/
        v52 = 0xB; /*0x995009*/
        goto LABEL_15; /*0x99500b*/
      case 5:
        v63 = 1; /*0x9950c4*/
        if ( (unsigned __int8)(v13 - 0x30) > 9u ) /*0x9950c7*/
          goto LABEL_37; /*0x9950c7*/
        v51 = 4; /*0x9950cd*/
        goto LABEL_12; /*0x9950cf*/
      case 6:
        v67 = v11 + 0xFFFFFFFE; /*0x9950d7*/
        if ( (unsigned __int8)(v13 - 0x31) <= 8u ) /*0x9950e2*/
          goto LABEL_63; /*0x9950e2*/
        v17 = v13 - 0x2B; /*0x9950ee*/
        if ( !v17 ) /*0x9950f1*/
          goto LABEL_70; /*0x9950f1*/
        v18 = v17 - 2; /*0x9950f4*/
        if ( !v18 ) /*0x9950f5*/
          goto LABEL_69; /*0x9950f5*/
        v19 = v18 == 3; /*0x9950f7*/
LABEL_67:
        if ( !v19 ) /*0x9950fa*/
          goto LABEL_37; /*0x9950fa*/
        v52 = 8; /*0x995100*/
        goto LABEL_15; /*0x995102*/
      case 7:
        if ( (unsigned __int8)(v13 - 0x31) <= 8u ) /*0x995137*/
          goto LABEL_63; /*0x995137*/
        v19 = v13 == 0x30; /*0x995139*/
        goto LABEL_67; /*0x99513b*/
      case 8:
        v61 = 1; /*0x99511a*/
        while ( v13 == 0x30 ) /*0x995124*/
          v13 = *v11++; /*0x99511f*/
        if ( (unsigned __int8)(v13 - 0x31) > 8u ) /*0x99512a*/
          goto LABEL_75; /*0x99512a*/
LABEL_63:
        v51 = 9; /*0x9950e4*/
        goto LABEL_12; /*0x9950e6*/
      case 9:
        v61 = 1; /*0x995199*/
        v21 = 0; /*0x99519c*/
        while ( 2 ) /*0x9951a2*/
        {
          if ( v13 >= 0x30 && v13 <= 0x39 ) /*0x9951a2*/
          {
            v21 = 0xA * v21 + v13 - 0x30; /*0x9951aa*/
            if ( v21 <= 0x1450 ) /*0x9951b4*/
            {
              v13 = *v11++; /*0x9951b6*/
              continue; /*0x9951b8*/
            }
            v21 = 0x1451; /*0x9951bf*/
          }
          break;
        }
        v59 = v21; /*0x9951c4*/
        while ( v13 >= 0x30 && v13 <= 0x39 ) /*0x9951cb*/
          v13 = *v11++; /*0x9951d1*/
LABEL_75:
        v16 = v11 + 0xFFFFFFFF; /*0x99512c*/
        goto LABEL_82; /*0x99512d*/
      case 0xB:
        if ( a7 ) /*0x995141*/
        {
          v20 = v13 - 0x2B; /*0x995146*/
          v67 = v11 + 0xFFFFFFFF; /*0x99514c*/
          if ( v20 ) /*0x99514f*/
          {
            if ( v20 != 2 ) /*0x995153*/
            {
              v16 = v11 + 0xFFFFFFFF; /*0x995155*/
              goto LABEL_82; /*0x995155*/
            }
LABEL_69:
            v57 = 0xFFFFFFFF; /*0x995107*/
            v8 = 7; /*0x99510d*/
          }
          else
          {
LABEL_70:
            v52 = 7; /*0x995113*/
LABEL_15:
            v8 = v52; /*0x994f89*/
          }
          continue; /*0x99510e*/
        }
        v16 = v11 + 0xFFFFFFFF; /*0x99518d*/
LABEL_82:
        *a2 = v16; /*0x995157*/
        if ( !v65 ) /*0x995160*/
        {
          v56 = 4; /*0x99550b*/
LABEL_174:
          v47 = 0; /*0x995532*/
          v50 = 0; /*0x995534*/
          v49 = 0; /*0x995536*/
          v48 = 0; /*0x995538*/
          goto LABEL_175; /*0x995538*/
        }
        if ( v71 > 0x18 ) /*0x99516c*/
        {
          if ( v77 >= 5 ) /*0x995172*/
            ++v77; /*0x995174*/
          --v9; /*0x995177*/
          ++v69; /*0x995178*/
          v71 = 0x18; /*0x99517b*/
        }
        if ( !v71 ) /*0x995182*/
          goto LABEL_174; /*0x995182*/
        while ( !*--v9 ) /*0x9951e3*/
        {
          --v71; /*0x9951dd*/
          ++v69; /*0x9951e0*/
        }
        __mtold12(v76, v71, v75); /*0x9951f4*/
        v22 = v59; /*0x9951f9*/
        if ( v57 < 0 ) /*0x995204*/
          v22 = -v59; /*0x995206*/
        v23 = v69 + v22; /*0x995208*/
        if ( !v61 ) /*0x99520e*/
          v23 += a5; /*0x995210*/
        if ( !v63 ) /*0x995216*/
          v23 -= a6; /*0x995218*/
        if ( v23 > 0x1450 ) /*0x995220*/
        {
          v48 = 0; /*0x995514*/
          v50 = 0x7FFF; /*0x995516*/
          v49 = 0x80000000; /*0x99551b*/
          v47 = 0; /*0x995520*/
          v56 = 2; /*0x995522*/
          goto LABEL_175; /*0x995529*/
        }
        if ( v23 < (int)0xFFFFEBB0 ) /*0x99522b*/
        {
          v56 = 1; /*0x99552b*/
          goto LABEL_174; /*0x99552b*/
        }
        v24 = (char *)&unk_B32120 + 0xFFFFFFA0; /*0x995236*/
        v68 = v23; /*0x99523b*/
        if ( v23 )
        {
          if ( v23 < 0 ) /*0x995244*/
          {
            v68 = -v23; /*0x99524d*/
            v24 = (char *)&unk_B32280 + 0xFFFFFFA0; /*0x995250*/
          }
          if ( !a4 ) /*0x995256*/
            LOWORD(v75[0]) = 0; /*0x995258*/
          while ( v68 )
          {
            v25 = v68; /*0x995265*/
            v68 >>= 3; /*0x995268*/
            v24 += 0x54; /*0x99526c*/
            v26 = v25 & 7; /*0x99526f*/
            v72 = v24; /*0x995274*/
            if ( v26 )
            {
              v27 = &v24[0xC * v26]; /*0x995280*/
              v28 = v27; /*0x995282*/
              v55 = v27; /*0x995289*/
              if ( *(_WORD *)v27 >= 0x8000u ) /*0x99528c*/
              {
                v73 = *(_QWORD *)v27; /*0x995293*/
                v74 = *((_DWORD *)v27 + 2); /*0x995295*/
                --*(_DWORD *)((char *)&v73 + 2); /*0x995296*/
                v28 = (char *)&v73; /*0x99529c*/
                v55 = (char *)&v73; /*0x99529f*/
              }
              v29 = *((_WORD *)v28 + 5); /*0x9952a2*/
              v70 = 0; /*0x9952ab*/
              memset(&v75[4], 0, 0xC); /*0x9952ae*/
              v30 = HIWORD(v75[2]) ^ v29; /*0x9952be*/
              v31 = v29 & 0x7FFF; /*0x9952c2*/
              v32 = v30 & 0x8000; /*0x9952c4*/
              v33 = v31 + (HIWORD(v75[2]) & 0x7FFF); /*0x9952d1*/
              if ( (HIWORD(v75[2]) & 0x7FFF) == 0x7FFF || v31 >= 0x7FFFu || v33 > 0xBFFDu )
              {
LABEL_167:
                v75[1] = 0; /*0x9954d5*/
                v34 = v32 != 0 ? 0xFFFF8000 : 0x7FFF8000;
                v75[0] = 0; /*0x9954e8*/
                goto LABEL_168; /*0x9954e8*/
              }
              if ( v33 <= 0x3FBFu ) /*0x9952f5*/
              {
                v34 = 0; /*0x9952f7*/
                v75[1] = 0; /*0x9952f9*/
                v75[0] = 0; /*0x9952fc*/
LABEL_168:
                v75[2] = v34; /*0x9954ec*/
                continue; /*0x9954ec*/
              }
              if ( (v75[2] & 0x7FFF0000) != 0 || (++v33, (v75[2] & 0x7FFFFFFF) != 0) || v75[1] || v75[0] ) /*0x99531d*/
              {
                if ( v31 || (++v33, (*((_DWORD *)v28 + 2) & 0x7FFFFFFF) != 0) || *((_DWORD *)v28 + 1) || *(_DWORD *)v28 ) /*0x99533e*/
                {
                  v58 = 0; /*0x995350*/
                  v35 = &v75[5]; /*0x995353*/
                  for ( i = 5; i > 0; --i ) /*0x995356*/
                  {
                    v60 = i; /*0x995367*/
                    v64 = (unsigned __int16 *)v75 + v58; /*0x995373*/
                    v62 = (unsigned __int16 *)(v28 + 8); /*0x995376*/
                    do /*0x9953bc*/
                    {
                      v53 = 0; /*0x995385*/
                      v36 = *v64 * *v62; /*0x995389*/
                      v37 = v35[0xFFFFFFFF]; /*0x99538c*/
                      v38 = v37 + v36; /*0x99538f*/
                      if ( v37 + v36 < v37 || v38 < v36 ) /*0x995398*/
                        v53 = 1; /*0x99539a*/
                      v35[0xFFFFFFFF] = v38; /*0x9953a5*/
                      if ( v53 ) /*0x9953a8*/
                        ++*(_WORD *)v35; /*0x9953aa*/
                      ++v64; /*0x9953ad*/
                      v62 += 0xFFFFFFFF; /*0x9953b1*/
                      --v60; /*0x9953b5*/
                    }
                    while ( v60 > 0 ); /*0x9953bc*/
                    v28 = v55; /*0x9953be*/
                    v35 = (unsigned int *)((char *)v35 + 2); /*0x9953c2*/
                    ++v58; /*0x9953c3*/
                  }
                  v39 = v33 - 0x3FFE; /*0x9953cf*/
                  if ( v39 <= 0 ) /*0x9953d8*/
                    goto LABEL_149; /*0x9953d8*/
                  do /*0x99540e*/
                  {
                    if ( (int)v75[6] < 0 ) /*0x9953e1*/
                      break; /*0x9953e1*/
                    v40 = v75[4]; /*0x9953e6*/
                    v75[4] *= 2; /*0x9953e9*/
                    v41 = (v40 >> 0x1F) | (2 * v75[5]); /*0x9953f3*/
                    v42 = *(__int64 *)&v75[5] >> 0x1F; /*0x9953fd*/
                    --v39; /*0x9953ff*/
                    v75[5] = v41; /*0x995408*/
                    v75[6] = v42; /*0x99540b*/
                  }
                  while ( v39 > 0 ); /*0x99540e*/
                  if ( v39 <= 0 ) /*0x995413*/
                  {
LABEL_149:
                    if ( --v39 < 0 ) /*0x99541e*/
                    {
                      v43 = (unsigned __int16)-v39; /*0x995424*/
                      v39 = 0; /*0x995427*/
                      do /*0x995456*/
                      {
                        if ( (v75[4] & 1) != 0 ) /*0x99542d*/
                          ++v70; /*0x99542f*/
                        v44 = v75[6]; /*0x995432*/
                        v75[6] >>= 1; /*0x99543b*/
                        v45 = __SPAIR64__(v44, v75[5]) >> 1; /*0x995443*/
                        v46 = *(__int64 *)&v75[4] >> 1; /*0x99544d*/
                        --v43; /*0x99544f*/
                        v75[5] = v45; /*0x995450*/
                        v75[4] = v46; /*0x995453*/
                      }
                      while ( v43 ); /*0x995456*/
                      if ( v70 ) /*0x99545c*/
                        LOWORD(v75[4]) |= 1u; /*0x99545e*/
                    }
                  }
                  if ( LOWORD(v75[4]) > 0x8000u || (v75[4] & 0x1FFFF) == 0x18000 ) /*0x99547a*/
                  {
                    if ( *(unsigned int *)((char *)&v75[4] + 2) == 0xFFFFFFFF ) /*0x995480*/
                    {
                      *(unsigned int *)((char *)&v75[4] + 2) = 0; /*0x995482*/
                      if ( *(unsigned int *)((char *)&v75[5] + 2) == 0xFFFFFFFF ) /*0x99548a*/
                      {
                        *(unsigned int *)((char *)&v75[5] + 2) = 0; /*0x99548c*/
                        if ( HIWORD(v75[6]) == 0xFFFF ) /*0x995496*/
                        {
                          HIWORD(v75[6]) = 0x8000; /*0x995498*/
                          ++v39; /*0x99549e*/
                        }
                        else
                        {
                          ++HIWORD(v75[6]); /*0x9954a1*/
                        }
                      }
                      else
                      {
                        ++*(unsigned int *)((char *)&v75[5] + 2); /*0x9954a7*/
                      }
                    }
                    else
                    {
                      ++*(unsigned int *)((char *)&v75[4] + 2); /*0x9954ac*/
                    }
                  }
                  v24 = v72; /*0x9954b4*/
                  if ( (unsigned __int16)v39 >= 0x7FFFu ) /*0x9954b7*/
                    goto LABEL_167; /*0x9954b7*/
                  LOWORD(v75[0]) = HIWORD(v75[4]); /*0x9954bd*/
                  *(_QWORD *)((char *)v75 + 2) = *(_QWORD *)&v75[5]; /*0x9954c7*/
                  HIWORD(v75[2]) = v32 | v39; /*0x9954cf*/
                }
                else
                {
                  memset(v75, 0, 0xC); /*0x995348*/
                }
              }
              else
              {
                HIWORD(v75[2]) = 0; /*0x99531f*/
              }
            }
          }
        }
        v47 = v75[0]; /*0x9954f9*/
        v48 = *(unsigned int *)((char *)v75 + 2); /*0x995500*/
        v49 = *(unsigned int *)((char *)&v75[1] + 2); /*0x995503*/
        v50 = HIWORD(v75[2]); /*0x995506*/
LABEL_175:
        *(_WORD *)a1 = v47; /*0x99553a*/
        *(_WORD *)(a1 + 0xA) = v54 | v50; /*0x995543*/
        *(_DWORD *)(a1 + 2) = v48; /*0x99554a*/
        *(_DWORD *)(a1 + 6) = v49; /*0x99554d*/
        return v56;
    }
  }
}
