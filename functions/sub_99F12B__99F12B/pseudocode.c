signed int __cdecl sub_99F12B(unsigned __int16 *a1, int *a2)
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

  v2 = a1[5]; /*0x99f139*/
  v63 = v2 & 0x8000; /*0x99f141*/
  v60 = *(_DWORD *)(a1 + 3); /*0x99f147*/
  v3 = (v2 & 0x7FFF) - 0x3FFF; /*0x99f156*/
  v4 = *a1 << 0x10; /*0x99f15c*/
  v61 = *(_DWORD *)(a1 + 1); /*0x99f166*/
  v62 = v4; /*0x99f169*/
  if ( v3 != 0xFFFFC001 ) /*0x99f16c*/
  {
    v68 = 0; /*0x99f195*/
    v57 = v60; /*0x99f1a0*/
    v58 = v61; /*0x99f1a1*/
    v59 = v62; /*0x99f1a2*/
    v8 = dword_B320F4 - 1; /*0x99f1a9*/
    v64 = v3; /*0x99f1c0*/
    v65 = dword_B320F4 / 0x20; /*0x99f1c3*/
    v9 = &v60 + dword_B320F4 / 0x20; /*0x99f1cd*/
    v66 = 0x1F - dword_B320F4 % 0x20; /*0x99f1db*/
    if ( ((1 << (0x1F - dword_B320F4 % 0x20)) & *v9) != 0 ) /*0x99f1e0*/
    {
      v10 = v65; /*0x99f1e6*/
      for ( i = (~(0xFFFFFFFF << (0x1F - dword_B320F4 % 0x20)) & *(&v60 + v65)) == 0; i; i = *(&v60 + v10) == 0 ) /*0x99f1f0*/
      {
        if ( ++v10 >= 3 ) /*0x99f201*/
          goto LABEL_22; /*0x99f201*/
      }
      v12 = v8 / 0x20; /*0x99f20f*/
      v67 = 0; /*0x99f21f*/
      v13 = 1 << (0x1F - v8 % 0x20); /*0x99f228*/
      v14 = &v60 + v8 / 0x20; /*0x99f22a*/
      v69 = v13 + *v14; /*0x99f232*/
      if ( v69 >= *v14 ) /*0x99f23a*/
      {
        v15 = v69 < v13; /*0x99f23c*/
        goto LABEL_18; /*0x99f23f*/
      }
LABEL_19:
      v67 = 1; /*0x99f25e*/
      while ( 1 ) /*0x99f265*/
      {
        --v12; /*0x99f265*/
        *v14 = v69; /*0x99f269*/
        if ( v12 < 0 || !v67 ) /*0x99f243*/
          break; /*0x99f243*/
        v67 = 0; /*0x99f245*/
        v14 = &v60 + v12; /*0x99f249*/
        v16 = *v14 + 1; /*0x99f24f*/
        v69 = v16; /*0x99f254*/
        if ( v16 >= *v14 ) /*0x99f257*/
        {
          v15 = v16 == 0; /*0x99f259*/
LABEL_18:
          if ( !v15 ) /*0x99f25c*/
            continue; /*0x99f25c*/
        }
        goto LABEL_19; /*0x99f25c*/
      }
      v68 = v67; /*0x99f270*/
    }
LABEL_22:
    *v9 &= 0xFFFFFFFF << v66; /*0x99f273*/
    if ( v65 + 1 < 3 ) /*0x99f284*/
      memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1))); /*0x99f291*/
    if ( v68 ) /*0x99f297*/
      ++v3; /*0x99f299*/
    if ( v3 >= dword_B320F0 - dword_B320F4 ) /*0x99f2a9*/
    {
      if ( v3 > dword_B320F0 ) /*0x99f2ba*/
      {
        if ( v3 < dword_B320EC ) /*0x99f4db*/
        {
          v60 &= ~0x80000000; /*0x99f593*/
          v5 = dword_B32100 + v3; /*0x99f59a*/
          v50 = dword_B320F8 / 0x20; /*0x99f5a6*/
          v51 = dword_B320F8 % 0x20; /*0x99f5b5*/
          v65 = 0; /*0x99f5b6*/
          v74 = 0; /*0x99f5ba*/
          v67 = 0x20 - dword_B320F8 % 0x20; /*0x99f5cc*/
          do /*0x99f5ff*/
          {
            v52 = *(&v60 + v74); /*0x99f5d4*/
            v64 = ~(0xFFFFFFFF << v51) & v52; /*0x99f5dc*/
            *(&v60 + v74++) = v65 | (v52 >> v51); /*0x99f5e9*/
            v65 = v64 << v67; /*0x99f5fc*/
          }
          while ( v74 < 3 ); /*0x99f5ff*/
          v53 = 2; /*0x99f60b*/
          v54 = (unsigned int *)(&v62 - v50); /*0x99f60c*/
          do /*0x99f625*/
          {
            if ( v53 < v50 ) /*0x99f610*/
              *(&v60 + v53) = 0; /*0x99f61a*/
            else
              *(&v60 + v53) = *v54; /*0x99f614*/
            --v53; /*0x99f61f*/
            v54 += 0xFFFFFFFF; /*0x99f620*/
          }
          while ( v53 >= 0 ); /*0x99f625*/
          result = 0; /*0x99f627*/
        }
        else
        {
          v61 = 0; /*0x99f4e7*/
          v62 = 0; /*0x99f4e8*/
          v60 = 0x80000000; /*0x99f4e9*/
          v43 = dword_B320F8 / 0x20; /*0x99f4fa*/
          v44 = dword_B320F8 % 0x20; /*0x99f509*/
          v65 = 0; /*0x99f50a*/
          v73 = 0; /*0x99f50e*/
          v67 = 0x20 - dword_B320F8 % 0x20; /*0x99f520*/
          do /*0x99f550*/
          {
            v45 = (int *)(&v60 + v73); /*0x99f528*/
            v46 = *v45; /*0x99f52c*/
            v64 = ~(0xFFFFFFFF << v44) & *v45; /*0x99f532*/
            v47 = v67; /*0x99f539*/
            *v45 = v65 | (v46 >> v44); /*0x99f53f*/
            ++v73; /*0x99f546*/
            v65 = v64 << v47; /*0x99f54d*/
          }
          while ( v73 < 3 ); /*0x99f550*/
          v48 = 2; /*0x99f55c*/
          v49 = (unsigned int *)(&v62 - v43); /*0x99f55d*/
          do /*0x99f576*/
          {
            if ( v48 < v43 ) /*0x99f561*/
              *(&v60 + v48) = 0; /*0x99f56b*/
            else
              *(&v60 + v48) = *v49; /*0x99f565*/
            --v48; /*0x99f570*/
            v49 += 0xFFFFFFFF; /*0x99f571*/
          }
          while ( v48 >= 0 ); /*0x99f576*/
          v5 = dword_B32100 + dword_B320EC; /*0x99f583*/
          result = 1; /*0x99f588*/
        }
        goto LABEL_79; /*0x99f589*/
      }
      v60 = v57; /*0x99f2cb*/
      v61 = v58; /*0x99f2d2*/
      v17 = (int)(dword_B320F0 - v64) / 0x20; /*0x99f2d5*/
      v62 = v59; /*0x99f2de*/
      v18 = (int)(dword_B320F0 - v64) % 0x20; /*0x99f2e5*/
      v65 = 0; /*0x99f2e6*/
      v70 = 0; /*0x99f2ea*/
      v67 = 0x20 - v18; /*0x99f2fc*/
      do /*0x99f32c*/
      {
        v19 = (int *)(&v60 + v70); /*0x99f304*/
        v20 = *v19; /*0x99f308*/
        v64 = ~(0xFFFFFFFF << v18) & *v19; /*0x99f30e*/
        v21 = v67; /*0x99f315*/
        *v19 = v65 | (v20 >> v18); /*0x99f31b*/
        ++v70; /*0x99f322*/
        v65 = v64 << v21; /*0x99f329*/
      }
      while ( v70 < 3 ); /*0x99f32c*/
      v22 = 2; /*0x99f338*/
      v23 = (unsigned int *)(&v62 - v17); /*0x99f339*/
      do /*0x99f352*/
      {
        if ( v22 < v17 ) /*0x99f33d*/
          *(&v60 + v22) = 0; /*0x99f347*/
        else
          *(&v60 + v22) = *v23; /*0x99f341*/
        --v22; /*0x99f34c*/
        v23 += 0xFFFFFFFF; /*0x99f34d*/
      }
      while ( v22 >= 0 ); /*0x99f352*/
      v24 = dword_B320F4 - 1; /*0x99f35a*/
      v25 = dword_B320F4 / 0x20; /*0x99f366*/
      v65 = dword_B320F4 / 0x20; /*0x99f371*/
      v26 = &v60 + dword_B320F4 / 0x20; /*0x99f385*/
      v64 = 0x1F - dword_B320F4 % 0x20; /*0x99f389*/
      if ( ((1 << (0x1F - dword_B320F4 % 0x20)) & *v26) != 0 ) /*0x99f38e*/
      {
        for ( j = (~(0xFFFFFFFF << (0x1F - dword_B320F4 % 0x20)) & *(&v60 + v25)) == 0; j; j = *(&v60 + v25) == 0 ) /*0x99f39b*/
        {
          if ( ++v25 >= 3 ) /*0x99f3ac*/
            goto LABEL_52; /*0x99f3ac*/
        }
        v28 = v24 / 0x20; /*0x99f3ba*/
        v71 = 0; /*0x99f3ca*/
        v29 = 1 << (0x1F - v24 % 0x20); /*0x99f3d3*/
        v30 = &v60 + v24 / 0x20; /*0x99f3d5*/
        v31 = *v30 + v29; /*0x99f3db*/
        if ( v31 < *v30 || v31 < v29 ) /*0x99f3e4*/
          v71 = 1; /*0x99f3e6*/
        *v30 = v31; /*0x99f3ed*/
        for ( k = v71; --v28 >= 0 && k; k = v35 ) /*0x99f3ef*/
        {
          v33 = &v60 + v28; /*0x99f3f8*/
          v34 = *v33 + 1; /*0x99f3fe*/
          v35 = 0; /*0x99f401*/
          if ( v34 < *v33 || *v33 == 0xFFFFFFFF ) /*0x99f40a*/
            v35 = 1; /*0x99f40e*/
          *v33 = v34; /*0x99f40f*/
        }
      }
LABEL_52:
      *v26 &= 0xFFFFFFFF << v64; /*0x99f416*/
      if ( v65 + 1 < 3 ) /*0x99f427*/
        memset(&v60 + v65 + 1, 0, 4 * (3 - (v65 + 1))); /*0x99f434*/
      v36 = (dword_B320F8 + 1) / 0x20; /*0x99f447*/
      v37 = (dword_B320F8 + 1) % 0x20; /*0x99f456*/
      v65 = 0; /*0x99f457*/
      v72 = 0; /*0x99f45b*/
      v67 = 0x20 - v37; /*0x99f46d*/
      do /*0x99f49d*/
      {
        v38 = (int *)(&v60 + v72); /*0x99f475*/
        v39 = *v38; /*0x99f479*/
        v64 = ~(0xFFFFFFFF << v37) & *v38; /*0x99f47f*/
        v40 = v67; /*0x99f486*/
        *v38 = v65 | (v39 >> v37); /*0x99f48c*/
        ++v72; /*0x99f493*/
        v65 = v64 << v40; /*0x99f49a*/
      }
      while ( v72 < 3 ); /*0x99f49d*/
      v41 = 2; /*0x99f4a9*/
      v42 = (unsigned int *)(&v62 - v36); /*0x99f4aa*/
      do /*0x99f4c3*/
      {
        if ( v41 < v36 ) /*0x99f4ae*/
          *(&v60 + v41) = 0; /*0x99f4b8*/
        else
          *(&v60 + v41) = *v42; /*0x99f4b2*/
        --v41; /*0x99f4bd*/
        v42 += 0xFFFFFFFF; /*0x99f4be*/
      }
      while ( v41 >= 0 ); /*0x99f4c3*/
    }
    else
    {
      v60 = 0; /*0x99f2b0*/
      v61 = 0; /*0x99f2b1*/
      v62 = 0; /*0x99f2b2*/
    }
    v5 = 0; /*0x99f4c7*/
    result = 2; /*0x99f4c9*/
    goto LABEL_79; /*0x99f4ca*/
  }
  v5 = 0; /*0x99f16e*/
  v6 = 0; /*0x99f170*/
  while ( !*(&v60 + v6) ) /*0x99f176*/
  {
    if ( ++v6 >= 3 ) /*0x99f17c*/
    {
      result = 0; /*0x99f17e*/
      goto LABEL_79; /*0x99f180*/
    }
  }
  v60 = 0; /*0x99f18a*/
  v61 = 0; /*0x99f18b*/
  v62 = 0; /*0x99f18e*/
  result = 2; /*0x99f18f*/
LABEL_79:
  v55 = v60 | (v63 != 0 ? 0x80000000 : 0) | (v5 << (0x1F - dword_B320F8));
  if ( dword_B320FC == 0x40 ) /*0x99f650*/
  {
    v56 = v61; /*0x99f655*/
    a2[1] = v55; /*0x99f658*/
    *a2 = v56; /*0x99f65b*/
  }
  else if ( dword_B320FC == 0x20 ) /*0x99f662*/
  {
    *a2 = v55; /*0x99f667*/
  }
  return result; /*0x99f669*/
}
