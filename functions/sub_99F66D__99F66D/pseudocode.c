signed int __cdecl sub_99F66D(unsigned __int16 *a1, int *a2)
{
  unsigned __int16 v2; // bx
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  signed int result; // eax
  int v8; // esi
  unsigned int *v9; // edi
  int v10; // eax
  bool i; // zf
  int v12; // eax
  unsigned int v13; // edx
  unsigned int *v14; // ecx
  bool v15; // cf
  unsigned int v16; // esi
  int v17; // eax
  int v18; // edx
  int *v19; // ebx
  unsigned int v20; // esi
  char v21; // cl
  int v22; // edx
  unsigned int *v23; // ecx
  int v24; // esi
  int v25; // eax
  unsigned int *v26; // ebx
  bool j; // zf
  int v28; // eax
  unsigned int v29; // edx
  unsigned int *v30; // ecx
  unsigned int v31; // edi
  int k; // ecx
  unsigned int *v33; // ecx
  unsigned int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // edx
  int *v38; // ebx
  unsigned int v39; // esi
  char v40; // cl
  int v41; // edx
  unsigned int *v42; // ecx
  int v43; // eax
  int v44; // edx
  int *v45; // ebx
  unsigned int v46; // esi
  char v47; // cl
  int v48; // edx
  unsigned int *v49; // ecx
  int v50; // eax
  int v51; // edx
  unsigned int v52; // edi
  int v53; // edx
  unsigned int *v54; // ecx
  unsigned int v55; // ebx
  int v56; // edx
  unsigned int v57; // [esp+8h] [ebp-2Ch]
  int v58; // [esp+Ch] [ebp-28h]
  int v59; // [esp+10h] [ebp-24h]
  unsigned int v60; // [esp+14h] [ebp-20h] BYREF
  int v61; // [esp+18h] [ebp-1Ch]
  int v62; // [esp+1Ch] [ebp-18h] BYREF
  int v63; // [esp+20h] [ebp-14h]
  unsigned int v64; // [esp+24h] [ebp-10h]
  int v65; // [esp+28h] [ebp-Ch]
  int v66; // [esp+2Ch] [ebp-8h]
  int v67; // [esp+30h] [ebp-4h]
  int v68; // [esp+3Ch] [ebp+8h]
  unsigned int v69; // [esp+3Ch] [ebp+8h]
  int v70; // [esp+3Ch] [ebp+8h]
  int v71; // [esp+3Ch] [ebp+8h]
  int v72; // [esp+3Ch] [ebp+8h]
  int v73; // [esp+3Ch] [ebp+8h]
  int v74; // [esp+3Ch] [ebp+8h]

  v2 = a1[5]; /*0x99f67b*/
  v63 = v2 & 0x8000; /*0x99f683*/
  v60 = *(_DWORD *)(a1 + 3); /*0x99f689*/
  v3 = (v2 & 0x7FFF) - 0x3FFF; /*0x99f698*/
  v4 = *a1 << 0x10; /*0x99f69e*/
  v61 = *(_DWORD *)(a1 + 1); /*0x99f6a8*/
  v62 = v4; /*0x99f6ab*/
  if ( v3 != 0xFFFFC001 ) /*0x99f6ae*/
  {
    v68 = 0; /*0x99f6d7*/
    v57 = v60; /*0x99f6e2*/
    v58 = v61; /*0x99f6e3*/
    v59 = v62; /*0x99f6e4*/
    v8 = dword_B3210C - 1; /*0x99f6eb*/
    v64 = v3; /*0x99f702*/
    v65 = dword_B3210C / 0x20; /*0x99f705*/
    v9 = &v60 + dword_B3210C / 0x20; /*0x99f70f*/
    v66 = 0x1F - dword_B3210C % 0x20; /*0x99f71d*/
    if ( ((1 << (0x1F - dword_B3210C % 0x20)) & *v9) != 0 ) /*0x99f722*/
    {
      v10 = v65; /*0x99f728*/
      for ( i = (~(0xFFFFFFFF << (0x1F - dword_B3210C % 0x20)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 ) /*0x99f732*/
      {
        if ( ++v10 >= 3 ) /*0x99f743*/
          goto LABEL_22; /*0x99f743*/
      }
      v12 = v8 / 0x20; /*0x99f751*/
      v67 = 0; /*0x99f761*/
      v13 = 1 << (0x1F - v8 % 0x20); /*0x99f76a*/
      v14 = &v60 + v8 / 0x20; /*0x99f76c*/
      v69 = v13 + *v14; /*0x99f774*/
      if ( v69 >= *v14 ) /*0x99f77c*/
      {
        v15 = v69 < v13; /*0x99f77e*/
        goto LABEL_18; /*0x99f781*/
      }
LABEL_19:
      v67 = 1; /*0x99f7a0*/
      while ( 1 ) /*0x99f7a7*/
      {
        --v12; /*0x99f7a7*/
        *v14 = v69; /*0x99f7ab*/
        if ( v12 < 0 || !v67 ) /*0x99f785*/
          break; /*0x99f785*/
        v67 = 0; /*0x99f787*/
        v14 = &v60 + v12; /*0x99f78b*/
        v16 = *v14 + 1; /*0x99f791*/
        v69 = v16; /*0x99f796*/
        if ( v16 >= *v14 ) /*0x99f799*/
        {
          v15 = v16 == 0; /*0x99f79b*/
LABEL_18:
          if ( !v15 ) /*0x99f79e*/
            continue; /*0x99f79e*/
        }
        goto LABEL_19; /*0x99f79e*/
      }
      v68 = v67; /*0x99f7b2*/
    }
LABEL_22:
    *v9 &= 0xFFFFFFFF << v66; /*0x99f7b5*/
    if ( v65 + 1 < 3 ) /*0x99f7c6*/
      memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1))); /*0x99f7d3*/
    if ( v68 ) /*0x99f7d9*/
      ++v3; /*0x99f7db*/
    if ( v3 >= dword_B32108 - dword_B3210C ) /*0x99f7eb*/
    {
      if ( v3 > dword_B32108 ) /*0x99f7fc*/
      {
        if ( v3 < dword_B32104 ) /*0x99fa1d*/
        {
          v60 &= ~0x80000000; /*0x99fad5*/
          v5 = dword_B32118 + v3; /*0x99fadc*/
          v50 = dword_B32110 / 0x20; /*0x99fae8*/
          v51 = dword_B32110 % 0x20; /*0x99faf7*/
          v65 = 0; /*0x99faf8*/
          v74 = 0; /*0x99fafc*/
          v67 = 0x20 - dword_B32110 % 0x20; /*0x99fb0e*/
          do /*0x99fb41*/
          {
            v52 = *(&v60 + v74); /*0x99fb16*/
            v64 = ~(0xFFFFFFFF << v51) & v52; /*0x99fb1e*/
            *(&v60 + v74++) = v65 | (v52 >> v51); /*0x99fb2b*/
            v65 = v64 << v67; /*0x99fb3e*/
          }
          while ( v74 < 3 ); /*0x99fb41*/
          v53 = 2; /*0x99fb4d*/
          v54 = (unsigned int *)(&v62 - v50); /*0x99fb4e*/
          do /*0x99fb67*/
          {
            if ( v53 < v50 ) /*0x99fb52*/
              *(&v60 + v53) = 0; /*0x99fb5c*/
            else
              *(&v60 + v53) = *v54; /*0x99fb56*/
            --v53; /*0x99fb61*/
            v54 += 0xFFFFFFFF; /*0x99fb62*/
          }
          while ( v53 >= 0 ); /*0x99fb67*/
          result = 0; /*0x99fb69*/
        }
        else
        {
          v61 = 0; /*0x99fa29*/
          v62 = 0; /*0x99fa2a*/
          v60 = 0x80000000; /*0x99fa2b*/
          v43 = dword_B32110 / 0x20; /*0x99fa3c*/
          v44 = dword_B32110 % 0x20; /*0x99fa4b*/
          v65 = 0; /*0x99fa4c*/
          v73 = 0; /*0x99fa50*/
          v67 = 0x20 - dword_B32110 % 0x20; /*0x99fa62*/
          do /*0x99fa92*/
          {
            v45 = (int *)(&v60 + v73); /*0x99fa6a*/
            v46 = *v45; /*0x99fa6e*/
            v64 = ~(0xFFFFFFFF << v44) & *v45; /*0x99fa74*/
            v47 = v67; /*0x99fa7b*/
            *v45 = v65 | (v46 >> v44); /*0x99fa81*/
            ++v73; /*0x99fa88*/
            v65 = v64 << v47; /*0x99fa8f*/
          }
          while ( v73 < 3 ); /*0x99fa92*/
          v48 = 2; /*0x99fa9e*/
          v49 = (unsigned int *)(&v62 - v43); /*0x99fa9f*/
          do /*0x99fab8*/
          {
            if ( v48 < v43 ) /*0x99faa3*/
              *(&v60 + v48) = 0; /*0x99faad*/
            else
              *(&v60 + v48) = *v49; /*0x99faa7*/
            --v48; /*0x99fab2*/
            v49 += 0xFFFFFFFF; /*0x99fab3*/
          }
          while ( v48 >= 0 ); /*0x99fab8*/
          v5 = dword_B32118 + dword_B32104; /*0x99fac5*/
          result = 1; /*0x99faca*/
        }
        goto LABEL_79; /*0x99facb*/
      }
      v60 = v57; /*0x99f80d*/
      v61 = v58; /*0x99f814*/
      v17 = (int)(dword_B32108 - v64) / 0x20; /*0x99f817*/
      v62 = v59; /*0x99f820*/
      v18 = (int)(dword_B32108 - v64) % 0x20; /*0x99f827*/
      v65 = 0; /*0x99f828*/
      v70 = 0; /*0x99f82c*/
      v67 = 0x20 - v18; /*0x99f83e*/
      do /*0x99f86e*/
      {
        v19 = (int *)(&v60 + v70); /*0x99f846*/
        v20 = *v19; /*0x99f84a*/
        v64 = ~(0xFFFFFFFF << v18) & *v19; /*0x99f850*/
        v21 = v67; /*0x99f857*/
        *v19 = v65 | (v20 >> v18); /*0x99f85d*/
        ++v70; /*0x99f864*/
        v65 = v64 << v21; /*0x99f86b*/
      }
      while ( v70 < 3 ); /*0x99f86e*/
      v22 = 2; /*0x99f87a*/
      v23 = (unsigned int *)(&v62 - v17); /*0x99f87b*/
      do /*0x99f894*/
      {
        if ( v22 < v17 ) /*0x99f87f*/
          *(&v60 + v22) = 0; /*0x99f889*/
        else
          *(&v60 + v22) = *v23; /*0x99f883*/
        --v22; /*0x99f88e*/
        v23 += 0xFFFFFFFF; /*0x99f88f*/
      }
      while ( v22 >= 0 ); /*0x99f894*/
      v24 = dword_B3210C - 1; /*0x99f89c*/
      v25 = dword_B3210C / 0x20; /*0x99f8a8*/
      v65 = dword_B3210C / 0x20; /*0x99f8b3*/
      v26 = &v60 + dword_B3210C / 0x20; /*0x99f8c7*/
      v64 = 0x1F - dword_B3210C % 0x20; /*0x99f8cb*/
      if ( ((1 << (0x1F - dword_B3210C % 0x20)) & *v26) != 0 ) /*0x99f8d0*/
      {
        for ( j = (~(0xFFFFFFFF << (0x1F - dword_B3210C % 0x20)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 ) /*0x99f8dd*/
        {
          if ( ++v25 >= 3 ) /*0x99f8ee*/
            goto LABEL_52; /*0x99f8ee*/
        }
        v28 = v24 / 0x20; /*0x99f8fc*/
        v71 = 0; /*0x99f90c*/
        v29 = 1 << (0x1F - v24 % 0x20); /*0x99f915*/
        v30 = &v60 + v24 / 0x20; /*0x99f917*/
        v31 = *v30 + v29; /*0x99f91d*/
        if ( v31 < *v30 || v31 < v29 ) /*0x99f926*/
          v71 = 1; /*0x99f928*/
        *v30 = v31; /*0x99f92f*/
        for ( k = v71; --v28 >= 0 && k; k = v35 ) /*0x99f931*/
        {
          v33 = &v60 + v28; /*0x99f93a*/
          v34 = *v33 + 1; /*0x99f940*/
          v35 = 0; /*0x99f943*/
          if ( v34 < *v33 || *v33 == 0xFFFFFFFF ) /*0x99f94c*/
            v35 = 1; /*0x99f950*/
          *v33 = v34; /*0x99f951*/
        }
      }
LABEL_52:
      *v26 &= 0xFFFFFFFF << v64; /*0x99f958*/
      if ( v65 + 1 < 3 ) /*0x99f969*/
        memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1))); /*0x99f976*/
      v36 = (dword_B32110 + 1) / 0x20; /*0x99f989*/
      v37 = (dword_B32110 + 1) % 0x20; /*0x99f998*/
      v65 = 0; /*0x99f999*/
      v72 = 0; /*0x99f99d*/
      v67 = 0x20 - v37; /*0x99f9af*/
      do /*0x99f9df*/
      {
        v38 = (int *)(&v60 + v72); /*0x99f9b7*/
        v39 = *v38; /*0x99f9bb*/
        v64 = ~(0xFFFFFFFF << v37) & *v38; /*0x99f9c1*/
        v40 = v67; /*0x99f9c8*/
        *v38 = v65 | (v39 >> v37); /*0x99f9ce*/
        ++v72; /*0x99f9d5*/
        v65 = v64 << v40; /*0x99f9dc*/
      }
      while ( v72 < 3 ); /*0x99f9df*/
      v41 = 2; /*0x99f9eb*/
      v42 = (unsigned int *)(&v62 - v36); /*0x99f9ec*/
      do /*0x99fa05*/
      {
        if ( v41 < v36 ) /*0x99f9f0*/
          *(&v60 + v41) = 0; /*0x99f9fa*/
        else
          *(&v60 + v41) = *v42; /*0x99f9f4*/
        --v41; /*0x99f9ff*/
        v42 += 0xFFFFFFFF; /*0x99fa00*/
      }
      while ( v41 >= 0 ); /*0x99fa05*/
    }
    else
    {
      v60 = 0; /*0x99f7f2*/
      v61 = 0; /*0x99f7f3*/
      v62 = 0; /*0x99f7f4*/
    }
    v5 = 0; /*0x99fa09*/
    result = 2; /*0x99fa0b*/
    goto LABEL_79; /*0x99fa0c*/
  }
  v5 = 0; /*0x99f6b0*/
  v6 = 0; /*0x99f6b2*/
  while ( !*(&v60 + v6) ) /*0x99f6b8*/
  {
    if ( ++v6 >= 3 ) /*0x99f6be*/
    {
      result = 0; /*0x99f6c0*/
      goto LABEL_79; /*0x99f6c2*/
    }
  }
  v60 = 0; /*0x99f6cc*/
  v61 = 0; /*0x99f6cd*/
  v62 = 0; /*0x99f6d0*/
  result = 2; /*0x99f6d1*/
LABEL_79:
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (0x1F - dword_B32110));
  if ( dword_B32114 == 0x40 ) /*0x99fb92*/
  {
    v56 = v61; /*0x99fb97*/
    a2[1] = v55; /*0x99fb9a*/
    *a2 = v56; /*0x99fb9d*/
  }
  else if ( dword_B32114 == 0x20 ) /*0x99fba4*/
  {
    *a2 = v55; /*0x99fba9*/
  }
  return result; /*0x99fbab*/
}
