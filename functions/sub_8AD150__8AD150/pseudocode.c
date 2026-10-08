unsigned int __thiscall sub_8AD150(char *this, int a2, __m128 *a3)
{
  int i; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  _DWORD *v9; // ecx
  int v10; // edi
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // ecx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // ebx
  double matched; // st7
  __m128 *v22; // edi
  int k; // ebp
  int v24; // ecx
  int m; // ebp
  int v26; // ecx
  __m128 *v27; // eax
  int j; // edi
  int v29; // ecx
  int v30; // ecx
  int v31; // ebx
  int v32; // eax
  bool v33; // zf
  __m128 *v34; // edi
  int n; // ebx
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  __int32 v39; // edi
  int ii; // ebx
  int v41; // ecx
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // edi
  int v46; // ebp
  __m128 *v47; // ebx
  int jj; // ebx
  int v49; // ecx
  int v50; // ecx
  int v51; // ebp
  int v52; // eax
  int v53; // ebx
  int v54; // eax
  _DWORD *v55; // ebp
  int v56; // ecx
  char *v57; // edi
  int v58; // eax
  _DWORD *v59; // edx
  int v60; // eax
  const void **v61; // ebp
  int v62; // ecx
  char *v63; // edi
  int v64; // eax
  const void ***v65; // edx
  _DWORD *v66; // ecx
  __m128 *candidate; // [esp+10h] [ebp-2Ch]
  int v69; // [esp+14h] [ebp-28h]
  float v70; // [esp+18h] [ebp-24h]
  float v71; // [esp+1Ch] [ebp-20h]
  int v72; // [esp+20h] [ebp-1Ch]
  int v73; // [esp+24h] [ebp-18h]
  int v74; // [esp+24h] [ebp-18h]
  int v75; // [esp+24h] [ebp-18h]
  int v76; // [esp+28h] [ebp-14h]
  int v77; // [esp+30h] [ebp-Ch]
  unsigned int v78; // [esp+34h] [ebp-8h]
  __m128 *v79; // [esp+40h] [ebp+4h]
  __m128 *v80; // [esp+44h] [ebp+8h]
  __m128 *v81; // [esp+44h] [ebp+8h]

  for ( i = 0; i < *((_DWORD *)this + 0x24); ++i ) /*0x8ad163*/
    sub_8A6300(*(int **)(*((_DWORD *)this + 0x23) + 4 * i), (int)(this + 8)); /*0x8ad17a*/
  v5 = *((_DWORD *)this + 0x27); /*0x8ad18a*/
  v6 = 0; /*0x8ad190*/
  *((_DWORD *)this + 0x24) = 0; /*0x8ad194*/
  if ( v5 > 0 ) /*0x8ad19a*/
  {
    do /*0x8ad1b8*/
      sub_8DE670(*(int **)(*((_DWORD *)this + 0x26) + 4 * v6++), (int)(this + 0xC)); /*0x8ad1aa*/
    while ( v6 < *((_DWORD *)this + 0x27) ); /*0x8ad1b8*/
  }
  v7 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8ad1c6*/
  *((_DWORD *)this + 0x27) = 0; /*0x8ad1cd*/
  v9 = *(_DWORD **)(v7 + 0x19C); /*0x8ad1d7*/
  v10 = *(_DWORD *)(a2 + 0x14); /*0x8ad1df*/
  v70 = 3.4028235e38; /*0x8ad1e2*/
  v76 = v7; /*0x8ad1ea*/
  if ( !v9 ) /*0x8ad1ee*/
    v9 = (_DWORD *)unk_BA7D9C; /*0x8ad1f0*/
  v11 = v9[8]; /*0x8ad1f6*/
  v12 = v11 + ((0x30 * v10 + 0x10) & 0xFFFFFFF0); /*0x8ad205*/
  if ( v12 > v9[0xB] ) /*0x8ad20b*/
  {
    v13 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v9 + 0xC))(v9, (0x30 * v10 + 0x10) & 0xFFFFFFF0); /*0x8ad217*/
  }
  else
  {
    v9[8] = v12; /*0x8ad20d*/
    v13 = v11; /*0x8ad210*/
  }
  v14 = *(_DWORD *)(a2 + 0x14); /*0x8ad21a*/
  v79 = (__m128 *)v13; /*0x8ad225*/
  v78 = v10 | 0x80000000; /*0x8ad229*/
  v77 = v14; /*0x8ad22d*/
  if ( v14 > 0 ) /*0x8ad231*/
  {
    v15 = (_DWORD *)(v13 + 0x20); /*0x8ad238*/
    v16 = 0xFFFFFFE0 - v13; /*0x8ad23b*/
    do /*0x8ad288*/
    {
      v17 = (int)v15 + v16 + *(_DWORD *)(a2 + 0x10); /*0x8ad24a*/
      *((_OWORD *)v15 + 0xFFFFFFFE) = *(_OWORD *)v17; /*0x8ad24c*/
      *((_OWORD *)v15 + 0xFFFFFFFF) = *(_OWORD *)(v17 + 0x10); /*0x8ad254*/
      *v15 = *(_DWORD *)(v17 + 0x20); /*0x8ad25b*/
      v15[1] = *(_DWORD *)(v17 + 0x24); /*0x8ad260*/
      v15[2] = *(_DWORD *)(v17 + 0x28); /*0x8ad266*/
      v15[3] = *(_DWORD *)(v17 + 0x2C); /*0x8ad26c*/
      if ( *((float *)v15 + 0xFFFFFFFF) < (double)v70 ) /*0x8ad27b*/
        v70 = *((float *)v15 + 0xFFFFFFFF); /*0x8ad280*/
      v15 += 0xC; /*0x8ad284*/
      --v14; /*0x8ad287*/
    }
    while ( v14 ); /*0x8ad288*/
  }
  v18 = *((_DWORD *)this + 0x1E) - 1; /*0x8ad28d*/
  if ( v18 >= 0 ) /*0x8ad28e*/
  {
    v69 = 0x30 * v18; /*0x8ad29b*/
    v73 = *((_DWORD *)this + 0x1E); /*0x8ad29f*/
    do /*0x8ad447*/
    {
      v19 = 0; /*0x8ad2ae*/
      v72 = 0xFFFFFFFF; /*0x8ad2b2*/
      v71 = 1.1; /*0x8ad2ba*/
      v20 = *((_DWORD *)this + 0x1D) + v69; /*0x8ad2c2*/
      if ( v77 <= 0 ) /*0x8ad2c5*/
        goto LABEL_29; /*0x8ad2c5*/
      candidate = v79; /*0x8ad2cf*/
      do /*0x8ad309*/
      {
        matched = hkpCharacterProxy_ComputeContactMatchError((float *)this, candidate, (__m128 *)v20); /*0x8ad2db*/
        if ( matched < v71 ) /*0x8ad2e9*/
        {
          v71 = matched; /*0x8ad2eb*/
          v72 = v19; /*0x8ad2ef*/
        }
        ++v19; /*0x8ad2ff*/
        candidate += 3; /*0x8ad305*/
      }
      while ( v19 < v77 ); /*0x8ad309*/
      if ( v72 < 0 ) /*0x8ad311*/
      {
LABEL_29:
        for ( j = *((_DWORD *)this + 0x21) - 1; j >= 0; --j ) /*0x8ad3dd*/
        {
          v29 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * j); /*0x8ad3e6*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 0xC))(v29, v20); /*0x8ad3ec*/
        }
        v30 = *((_DWORD *)this + 0x1D); /*0x8ad3f5*/
        v31 = *((_DWORD *)this + 0x1E) - 1; /*0x8ad3f8*/
        *((_DWORD *)this + 0x1E) = v31; /*0x8ad3f9*/
        v32 = v30 + 0x30 * v31; /*0x8ad408*/
        *(_OWORD *)(v30 + v69) = *(_OWORD *)v32; /*0x8ad40a*/
        *(_OWORD *)(v30 + v69 + 0x10) = *(_OWORD *)(v32 + 0x10); /*0x8ad412*/
        *(_DWORD *)(v30 + v69 + 0x20) = *(_DWORD *)(v32 + 0x20); /*0x8ad41a*/
        *(_DWORD *)(v30 + v69 + 0x24) = *(_DWORD *)(v32 + 0x24); /*0x8ad421*/
        *(_DWORD *)(v30 + v69 + 0x28) = *(_DWORD *)(v32 + 0x28); /*0x8ad428*/
        *(_DWORD *)(v30 + v69 + 0x2C) = *(_DWORD *)(v32 + 0x2C); /*0x8ad42f*/
      }
      else
      {
        v22 = &v79[3 * v72]; /*0x8ad325*/
        if ( v22[2].m128_i32[2] != *(_DWORD *)(v20 + 0x28) ) /*0x8ad32b*/
        {
          for ( k = *((_DWORD *)this + 0x21) - 1; k >= 0; --k ) /*0x8ad334*/
          {
            v24 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * k); /*0x8ad346*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 0xC))(v24, v20); /*0x8ad34c*/
          }
          for ( m = *((_DWORD *)this + 0x21) - 1; m >= 0; --m ) /*0x8ad359*/
          {
            v26 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * m); /*0x8ad366*/
            (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v26 + 8))(v26, v22); /*0x8ad36c*/
          }
        }
        *(__m128 *)v20 = *v22; /*0x8ad375*/
        *(__m128 *)(v20 + 0x10) = v22[1]; /*0x8ad37c*/
        *(_DWORD *)(v20 + 0x20) = v22[2].m128_i32[0]; /*0x8ad383*/
        *(_DWORD *)(v20 + 0x24) = v22[2].m128_i32[1]; /*0x8ad389*/
        *(_DWORD *)(v20 + 0x28) = v22[2].m128_i32[2]; /*0x8ad393*/
        *(_DWORD *)(v20 + 0x2C) = v22[2].m128_i32[3]; /*0x8ad399*/
        --v77; /*0x8ad3a1*/
        v27 = &v79[3 * v77]; /*0x8ad3af*/
        *v22 = *v27; /*0x8ad3b1*/
        v22[1] = v27[1]; /*0x8ad3b8*/
        v22[2].m128_i32[0] = v27[2].m128_i32[0]; /*0x8ad3bf*/
        v22[2].m128_i32[1] = v27[2].m128_i32[1]; /*0x8ad3c5*/
        v22[2].m128_i32[2] = v27[2].m128_i32[2]; /*0x8ad3cb*/
        v22[2].m128_i32[3] = v27[2].m128_i32[3]; /*0x8ad3d1*/
      }
      v33 = v73 == 1; /*0x8ad43e*/
      v69 -= 0x30; /*0x8ad43f*/
      --v73; /*0x8ad443*/
    }
    while ( !v33 ); /*0x8ad447*/
  }
  if ( v77 > 0 ) /*0x8ad453*/
  {
    v34 = v79 + 1; /*0x8ad45d*/
    v74 = v77; /*0x8ad460*/
    do /*0x8ad502*/
    {
      if ( v34->m128_f32[3] == v70 /*0x8ad485*/
        && (int)hkpCharacterProxy_FindMatchingManifoldContact((float *)this, v34 + 0xFFFFFFFF) < 0 )
      {
        for ( n = *((_DWORD *)this + 0x21) - 1; n >= 0; --n ) /*0x8ad48e*/
        {
          v36 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * n); /*0x8ad496*/
          (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v36 + 8))(v36, v34 + 0xFFFFFFFF); /*0x8ad49c*/
        }
        if ( *((_DWORD *)this + 0x1E) == (*((_DWORD *)this + 0x1F) & 0x3FFFFFFF) ) /*0x8ad4b2*/
          sub_8A6EE0((const void **)this + 0x1D, 0x30); /*0x8ad4b7*/
        v37 = *((_DWORD *)this + 0x1E); /*0x8ad4bf*/
        v38 = *((_DWORD *)this + 0x1D) + 0x30 * v37; /*0x8ad4ca*/
        *((_DWORD *)this + 0x1E) = v37 + 1; /*0x8ad4cd*/
        *(__m128 *)v38 = v34[0xFFFFFFFF]; /*0x8ad4d4*/
        *(__m128 *)(v38 + 0x10) = *v34; /*0x8ad4da*/
        *(_DWORD *)(v38 + 0x20) = v34[1].m128_i32[0]; /*0x8ad4e1*/
        *(_DWORD *)(v38 + 0x24) = v34[1].m128_i32[1]; /*0x8ad4e7*/
        *(_DWORD *)(v38 + 0x28) = v34[1].m128_i32[2]; /*0x8ad4ed*/
        *(_DWORD *)(v38 + 0x2C) = v34[1].m128_i32[3]; /*0x8ad4f3*/
      }
      v34 += 3; /*0x8ad4fa*/
      --v74; /*0x8ad4fe*/
    }
    while ( v74 ); /*0x8ad502*/
  }
  if ( a3[1].m128_i32[1] > 0 ) /*0x8ad511*/
  {
    v39 = a3[1].m128_i32[0]; /*0x8ad517*/
    if ( hkpCharacterProxy_FindMatchingManifoldContact((float *)this, (__m128 *)v39) == 0xFFFFFFFF ) /*0x8ad525*/
    {
      for ( ii = *((_DWORD *)this + 0x21) - 1; ii >= 0; --ii ) /*0x8ad52e*/
      {
        v41 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * ii); /*0x8ad536*/
        (*(void (__thiscall **)(int, __int32))(*(_DWORD *)v41 + 8))(v41, v39); /*0x8ad53c*/
      }
      if ( *((_DWORD *)this + 0x1E) == (*((_DWORD *)this + 0x1F) & 0x3FFFFFFF) ) /*0x8ad552*/
        sub_8A6EE0((const void **)this + 0x1D, 0x30); /*0x8ad557*/
      v42 = *((_DWORD *)this + 0x1E); /*0x8ad55f*/
      v43 = *((_DWORD *)this + 0x1D) + 0x30 * v42; /*0x8ad56a*/
      *((_DWORD *)this + 0x1E) = v42 + 1; /*0x8ad56d*/
      *(_OWORD *)v43 = *(_OWORD *)v39; /*0x8ad573*/
      *(_OWORD *)(v43 + 0x10) = *(_OWORD *)(v39 + 0x10); /*0x8ad57a*/
      *(_DWORD *)(v43 + 0x20) = *(_DWORD *)(v39 + 0x20); /*0x8ad581*/
      *(_DWORD *)(v43 + 0x24) = *(_DWORD *)(v39 + 0x24); /*0x8ad587*/
      *(_DWORD *)(v43 + 0x28) = *(_DWORD *)(v39 + 0x28); /*0x8ad58d*/
      *(_DWORD *)(v43 + 0x2C) = *(_DWORD *)(v39 + 0x2C); /*0x8ad593*/
    }
  }
  v44 = *((_DWORD *)this + 0x1E) - 1; /*0x8ad599*/
  if ( v44 > 0 ) /*0x8ad59c*/
  {
    v45 = 0x30 * v44; /*0x8ad5a5*/
    do /*0x8ad65d*/
    {
      v46 = v44 - 1; /*0x8ad5b3*/
      v75 = v44 - 1; /*0x8ad5b6*/
      if ( v44 >= 1 ) /*0x8ad5ba*/
      {
        v80 = (__m128 *)(*((_DWORD *)this + 0x1D) + v45); /*0x8ad5c6*/
        v47 = v80 + 0xFFFFFFFD; /*0x8ad5ca*/
        while ( hkpCharacterProxy_ComputeContactMatchError((float *)this, v80, v47) >= kFaceEarNormalMatchRadius ) /*0x8ad5e8*/
        {
          --v46; /*0x8ad5ea*/
          v47 += 0xFFFFFFFD; /*0x8ad5eb*/
          if ( v46 < 0 ) /*0x8ad5f0*/
            goto LABEL_60; /*0x8ad5f0*/
        }
        for ( jj = *((_DWORD *)this + 0x21) - 1; jj >= 0; --jj ) /*0x8ad5fb*/
        {
          v49 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * jj); /*0x8ad607*/
          (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v49 + 0xC))(v49, v80); /*0x8ad60d*/
        }
        v50 = *((_DWORD *)this + 0x1D); /*0x8ad616*/
        v51 = *((_DWORD *)this + 0x1E) - 1; /*0x8ad619*/
        *((_DWORD *)this + 0x1E) = v51; /*0x8ad61a*/
        v52 = v50 + 0x30 * v51; /*0x8ad629*/
        *(_OWORD *)(v50 + v45) = *(_OWORD *)v52; /*0x8ad62b*/
        *(_OWORD *)(v50 + v45 + 0x10) = *(_OWORD *)(v52 + 0x10); /*0x8ad633*/
        *(_DWORD *)(v50 + v45 + 0x20) = *(_DWORD *)(v52 + 0x20); /*0x8ad63b*/
        *(_DWORD *)(v50 + v45 + 0x24) = *(_DWORD *)(v52 + 0x24); /*0x8ad642*/
        *(_DWORD *)(v50 + v45 + 0x28) = *(_DWORD *)(v52 + 0x28); /*0x8ad649*/
        *(_DWORD *)(v50 + v45 + 0x2C) = *(_DWORD *)(v52 + 0x2C); /*0x8ad650*/
      }
LABEL_60:
      v44 = v75; /*0x8ad654*/
      v45 -= 0x30; /*0x8ad658*/
    }
    while ( v75 > 0 ); /*0x8ad65d*/
  }
  v81 = 0; /*0x8ad668*/
  if ( *((int *)this + 0x1E) > 0 ) /*0x8ad670*/
  {
    v53 = 0; /*0x8ad676*/
    do /*0x8ad768*/
    {
      v54 = *(_DWORD *)(*((_DWORD *)this + 0x1D) + v53 + 0x28); /*0x8ad683*/
      if ( *(_BYTE *)(v54 + 0x18) == 1 ) /*0x8ad68b*/
      {
        v55 = (_DWORD *)(v54 + *(_DWORD *)(v54 + 0x10)); /*0x8ad690*/
        if ( v55 ) /*0x8ad692*/
        {
          v56 = *((_DWORD *)this + 0x24); /*0x8ad694*/
          v57 = this + 0x8C; /*0x8ad69a*/
          v58 = 0; /*0x8ad6a0*/
          if ( v56 <= 0 ) /*0x8ad6a4*/
            goto LABEL_71; /*0x8ad6a4*/
          v59 = *(_DWORD **)v57; /*0x8ad6a6*/
          while ( (_DWORD *)*v59 != v55 ) /*0x8ad6aa*/
          {
            ++v58; /*0x8ad6ac*/
            ++v59; /*0x8ad6ad*/
            if ( v58 >= v56 ) /*0x8ad6b2*/
              goto LABEL_71; /*0x8ad6b2*/
          }
          if ( v58 == 0xFFFFFFFF ) /*0x8ad6b9*/
          {
LABEL_71:
            sub_8A6550(v55, (int)(this + 8)); /*0x8ad6bb*/
            if ( *((_DWORD *)this + 0x24) == (*((_DWORD *)this + 0x25) & 0x3FFFFFFF) ) /*0x8ad6d3*/
              sub_8A6EE0((const void **)this + 0x23, 4); /*0x8ad6d8*/
            *(_DWORD *)(*(_DWORD *)v57 + 4 * (*((_DWORD *)this + 0x24))++) = v55; /*0x8ad6e5*/
          }
        }
      }
      v60 = *(_DWORD *)(*((_DWORD *)this + 0x1D) + v53 + 0x28); /*0x8ad6ee*/
      if ( *(_BYTE *)(v60 + 0x18) == 2 ) /*0x8ad6f6*/
      {
        v61 = (const void **)(v60 + *(_DWORD *)(v60 + 0x10)); /*0x8ad6fb*/
        if ( v61 ) /*0x8ad6fd*/
        {
          v62 = *((_DWORD *)this + 0x27); /*0x8ad6ff*/
          v63 = this + 0x98; /*0x8ad705*/
          v64 = 0; /*0x8ad70b*/
          if ( v62 <= 0 ) /*0x8ad70f*/
            goto LABEL_82; /*0x8ad70f*/
          v65 = *(const void ****)v63; /*0x8ad711*/
          while ( *v65 != v61 ) /*0x8ad715*/
          {
            ++v64; /*0x8ad717*/
            ++v65; /*0x8ad718*/
            if ( v64 >= v62 ) /*0x8ad71d*/
              goto LABEL_82; /*0x8ad71d*/
          }
          if ( v64 == 0xFFFFFFFF ) /*0x8ad724*/
          {
LABEL_82:
            sub_8DE710(v61, (int)(this + 0xC)); /*0x8ad726*/
            if ( *((_DWORD *)this + 0x27) == (*((_DWORD *)this + 0x28) & 0x3FFFFFFF) ) /*0x8ad73f*/
              sub_8A6EE0((const void **)this + 0x26, 4); /*0x8ad744*/
            *(_DWORD *)(*(_DWORD *)v63 + 4 * (*((_DWORD *)this + 0x27))++) = v61; /*0x8ad751*/
          }
        }
      }
      v53 += 0x30; /*0x8ad75f*/
      v81 = (__m128 *)((char *)v81 + 1); /*0x8ad764*/
    }
    while ( (int)v81 < *((_DWORD *)this + 0x1E) ); /*0x8ad768*/
  }
  v66 = *(_DWORD **)(v76 + 0x19C); /*0x8ad772*/
  if ( !v66 ) /*0x8ad77a*/
    v66 = (_DWORD *)unk_BA7D9C; /*0x8ad77c*/
  v33 = v79 == (__m128 *)v66[0xA]; /*0x8ad786*/
  v66[8] = v79; /*0x8ad789*/
  if ( v33 ) /*0x8ad78c*/
    (*(void (__thiscall **)(_DWORD *, __m128 *))(*v66 + 0x10))(v66, v79); /*0x8ad791*/
  return v78; /*0x8ad7c4*/
}
