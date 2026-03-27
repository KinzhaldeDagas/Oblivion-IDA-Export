unsigned int __thiscall sub_8AD150(char *this, int a2, int a3)
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
  double v21; // st7
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
  int v39; // edi
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
  _DWORD *v61; // ebp
  int v62; // ecx
  char *v63; // edi
  int v64; // eax
  _DWORD *v65; // edx
  _DWORD *v66; // ecx
  __m128 *v68; // [esp+10h] [ebp-2Ch]
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
  int v81; // [esp+44h] [ebp+8h]

  for ( i = 0; i < *((_DWORD *)this + 0x24); ++i )
    sub_8A6300(*(int **)(*((_DWORD *)this + 0x23) + 4 * i), (int)(this + 8));
  v5 = *((_DWORD *)this + 0x27);
  v6 = 0;
  *((_DWORD *)this + 0x24) = 0;
  if ( v5 > 0 )
  {
    do
      sub_8DE670(*(_DWORD **)(*((_DWORD *)this + 0x26) + 4 * v6++), (int)(this + 0xC));
    while ( v6 < *((_DWORD *)this + 0x27) );
  }
  v7 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  *((_DWORD *)this + 0x27) = 0;
  v9 = *(_DWORD **)(v7 + 0x19C);
  v10 = *(_DWORD *)(a2 + 0x14);
  v70 = 3.4028235e38;
  v76 = v7;
  if ( !v9 )
    v9 = (_DWORD *)dword_BA7D9C;
  v11 = v9[8];
  v12 = v11 + ((0x30 * v10 + 0x10) & 0xFFFFFFF0);
  if ( v12 > v9[0xB] )
  {
    v13 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v9 + 0xC))(v9, (0x30 * v10 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v9[8] = v12;
    v13 = v11;
  }
  v14 = *(_DWORD *)(a2 + 0x14);
  v79 = (__m128 *)v13;
  v78 = v10 | 0x80000000;
  v77 = v14;
  if ( v14 > 0 )
  {
    v15 = (_DWORD *)(v13 + 0x20);
    v16 = 0xFFFFFFE0 - v13;
    do
    {
      v17 = (int)v15 + v16 + *(_DWORD *)(a2 + 0x10);
      *((_OWORD *)v15 + 0xFFFFFFFE) = *(_OWORD *)v17;
      *((_OWORD *)v15 + 0xFFFFFFFF) = *(_OWORD *)(v17 + 0x10);
      *v15 = *(_DWORD *)(v17 + 0x20);
      v15[1] = *(_DWORD *)(v17 + 0x24);
      v15[2] = *(_DWORD *)(v17 + 0x28);
      v15[3] = *(_DWORD *)(v17 + 0x2C);
      if ( *((float *)v15 + 0xFFFFFFFF) < (double)v70 )
        v70 = *((float *)v15 + 0xFFFFFFFF);
      v15 += 0xC;
      --v14;
    }
    while ( v14 );
  }
  v18 = *((_DWORD *)this + 0x1E) - 1;
  if ( v18 >= 0 )
  {
    v69 = 0x30 * v18;
    v73 = *((_DWORD *)this + 0x1E);
    do
    {
      v19 = 0;
      v72 = 0xFFFFFFFF;
      v71 = 1.1;
      v20 = *((_DWORD *)this + 0x1D) + v69;
      if ( v77 <= 0 )
        goto LABEL_29;
      v68 = v79;
      do
      {
        v21 = sub_8ABF70((float *)this, v68, (__m128 *)v20);
        if ( v21 < v71 )
        {
          v71 = v21;
          v72 = v19;
        }
        ++v19;
        v68 += 3;
      }
      while ( v19 < v77 );
      if ( v72 < 0 )
      {
LABEL_29:
        for ( j = *((_DWORD *)this + 0x21) - 1; j >= 0; --j )
        {
          v29 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * j);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 0xC))(v29, v20);
        }
        v30 = *((_DWORD *)this + 0x1D);
        v31 = *((_DWORD *)this + 0x1E) - 1;
        *((_DWORD *)this + 0x1E) = v31;
        v32 = v30 + 0x30 * v31;
        *(_OWORD *)(v30 + v69) = *(_OWORD *)v32;
        *(_OWORD *)(v30 + v69 + 0x10) = *(_OWORD *)(v32 + 0x10);
        *(_DWORD *)(v30 + v69 + 0x20) = *(_DWORD *)(v32 + 0x20);
        *(_DWORD *)(v30 + v69 + 0x24) = *(_DWORD *)(v32 + 0x24);
        *(_DWORD *)(v30 + v69 + 0x28) = *(_DWORD *)(v32 + 0x28);
        *(_DWORD *)(v30 + v69 + 0x2C) = *(_DWORD *)(v32 + 0x2C);
      }
      else
      {
        v22 = &v79[3 * v72];
        if ( v22[2].m128_i32[2] != *(_DWORD *)(v20 + 0x28) )
        {
          for ( k = *((_DWORD *)this + 0x21) - 1; k >= 0; --k )
          {
            v24 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * k);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 0xC))(v24, v20);
          }
          for ( m = *((_DWORD *)this + 0x21) - 1; m >= 0; --m )
          {
            v26 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * m);
            (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v26 + 8))(v26, v22);
          }
        }
        *(__m128 *)v20 = *v22;
        *(__m128 *)(v20 + 0x10) = v22[1];
        *(_DWORD *)(v20 + 0x20) = v22[2].m128_i32[0];
        *(_DWORD *)(v20 + 0x24) = v22[2].m128_i32[1];
        *(_DWORD *)(v20 + 0x28) = v22[2].m128_i32[2];
        *(_DWORD *)(v20 + 0x2C) = v22[2].m128_i32[3];
        --v77;
        v27 = &v79[3 * v77];
        *v22 = *v27;
        v22[1] = v27[1];
        v22[2].m128_i32[0] = v27[2].m128_i32[0];
        v22[2].m128_i32[1] = v27[2].m128_i32[1];
        v22[2].m128_i32[2] = v27[2].m128_i32[2];
        v22[2].m128_i32[3] = v27[2].m128_i32[3];
      }
      v33 = v73 == 1;
      v69 -= 0x30;
      --v73;
    }
    while ( !v33 );
  }
  if ( v77 > 0 )
  {
    v34 = v79 + 1;
    v74 = v77;
    do
    {
      if ( v34->m128_f32[3] == v70 && (int)sub_8AC640((float *)this, v34 + 0xFFFFFFFF) < 0 )
      {
        for ( n = *((_DWORD *)this + 0x21) - 1; n >= 0; --n )
        {
          v36 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * n);
          (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v36 + 8))(v36, v34 + 0xFFFFFFFF);
        }
        if ( *((_DWORD *)this + 0x1E) == (*((_DWORD *)this + 0x1F) & 0x3FFFFFFF) )
          sub_8A6EE0((const void **)this + 0x1D, 0x30);
        v37 = *((_DWORD *)this + 0x1E);
        v38 = *((_DWORD *)this + 0x1D) + 0x30 * v37;
        *((_DWORD *)this + 0x1E) = v37 + 1;
        *(__m128 *)v38 = v34[0xFFFFFFFF];
        *(__m128 *)(v38 + 0x10) = *v34;
        *(_DWORD *)(v38 + 0x20) = v34[1].m128_i32[0];
        *(_DWORD *)(v38 + 0x24) = v34[1].m128_i32[1];
        *(_DWORD *)(v38 + 0x28) = v34[1].m128_i32[2];
        *(_DWORD *)(v38 + 0x2C) = v34[1].m128_i32[3];
      }
      v34 += 3;
      --v74;
    }
    while ( v74 );
  }
  if ( *(int *)(a3 + 0x14) > 0 )
  {
    v39 = *(_DWORD *)(a3 + 0x10);
    if ( sub_8AC640((float *)this, (__m128 *)v39) == 0xFFFFFFFF )
    {
      for ( ii = *((_DWORD *)this + 0x21) - 1; ii >= 0; --ii )
      {
        v41 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * ii);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v41 + 8))(v41, v39);
      }
      if ( *((_DWORD *)this + 0x1E) == (*((_DWORD *)this + 0x1F) & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)this + 0x1D, 0x30);
      v42 = *((_DWORD *)this + 0x1E);
      v43 = *((_DWORD *)this + 0x1D) + 0x30 * v42;
      *((_DWORD *)this + 0x1E) = v42 + 1;
      *(_OWORD *)v43 = *(_OWORD *)v39;
      *(_OWORD *)(v43 + 0x10) = *(_OWORD *)(v39 + 0x10);
      *(_DWORD *)(v43 + 0x20) = *(_DWORD *)(v39 + 0x20);
      *(_DWORD *)(v43 + 0x24) = *(_DWORD *)(v39 + 0x24);
      *(_DWORD *)(v43 + 0x28) = *(_DWORD *)(v39 + 0x28);
      *(_DWORD *)(v43 + 0x2C) = *(_DWORD *)(v39 + 0x2C);
    }
  }
  v44 = *((_DWORD *)this + 0x1E) - 1;
  if ( v44 > 0 )
  {
    v45 = 0x30 * v44;
    do
    {
      v46 = v44 - 1;
      v75 = v44 - 1;
      if ( v44 >= 1 )
      {
        v80 = (__m128 *)(*((_DWORD *)this + 0x1D) + v45);
        v47 = v80 + 0xFFFFFFFD;
        while ( sub_8ABF70((float *)this, v80, v47) >= flt_A2FAAC )
        {
          --v46;
          v47 += 0xFFFFFFFD;
          if ( v46 < 0 )
            goto LABEL_60;
        }
        for ( jj = *((_DWORD *)this + 0x21) - 1; jj >= 0; --jj )
        {
          v49 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * jj);
          (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v49 + 0xC))(v49, v80);
        }
        v50 = *((_DWORD *)this + 0x1D);
        v51 = *((_DWORD *)this + 0x1E) - 1;
        *((_DWORD *)this + 0x1E) = v51;
        v52 = v50 + 0x30 * v51;
        *(_OWORD *)(v50 + v45) = *(_OWORD *)v52;
        *(_OWORD *)(v50 + v45 + 0x10) = *(_OWORD *)(v52 + 0x10);
        *(_DWORD *)(v50 + v45 + 0x20) = *(_DWORD *)(v52 + 0x20);
        *(_DWORD *)(v50 + v45 + 0x24) = *(_DWORD *)(v52 + 0x24);
        *(_DWORD *)(v50 + v45 + 0x28) = *(_DWORD *)(v52 + 0x28);
        *(_DWORD *)(v50 + v45 + 0x2C) = *(_DWORD *)(v52 + 0x2C);
      }
LABEL_60:
      v44 = v75;
      v45 -= 0x30;
    }
    while ( v75 > 0 );
  }
  v81 = 0;
  if ( *((int *)this + 0x1E) > 0 )
  {
    v53 = 0;
    do
    {
      v54 = *(_DWORD *)(*((_DWORD *)this + 0x1D) + v53 + 0x28);
      if ( *(_BYTE *)(v54 + 0x18) == 1 )
      {
        v55 = (_DWORD *)(v54 + *(_DWORD *)(v54 + 0x10));
        if ( v55 )
        {
          v56 = *((_DWORD *)this + 0x24);
          v57 = this + 0x8C;
          v58 = 0;
          if ( v56 <= 0 )
            goto LABEL_71;
          v59 = *(_DWORD **)v57;
          while ( (_DWORD *)*v59 != v55 )
          {
            ++v58;
            ++v59;
            if ( v58 >= v56 )
              goto LABEL_71;
          }
          if ( v58 == 0xFFFFFFFF )
          {
LABEL_71:
            sub_8A6550(v55, (int)(this + 8));
            if ( *((_DWORD *)this + 0x24) == (*((_DWORD *)this + 0x25) & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)this + 0x23, 4);
            *(_DWORD *)(*(_DWORD *)v57 + 4 * (*((_DWORD *)this + 0x24))++) = v55;
          }
        }
      }
      v60 = *(_DWORD *)(*((_DWORD *)this + 0x1D) + v53 + 0x28);
      if ( *(_BYTE *)(v60 + 0x18) == 2 )
      {
        v61 = (_DWORD *)(v60 + *(_DWORD *)(v60 + 0x10));
        if ( v61 )
        {
          v62 = *((_DWORD *)this + 0x27);
          v63 = this + 0x98;
          v64 = 0;
          if ( v62 <= 0 )
            goto LABEL_82;
          v65 = *(_DWORD **)v63;
          while ( (_DWORD *)*v65 != v61 )
          {
            ++v64;
            ++v65;
            if ( v64 >= v62 )
              goto LABEL_82;
          }
          if ( v64 == 0xFFFFFFFF )
          {
LABEL_82:
            sub_8DE710(v61, (int)(this + 0xC));
            if ( *((_DWORD *)this + 0x27) == (*((_DWORD *)this + 0x28) & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)this + 0x26, 4);
            *(_DWORD *)(*(_DWORD *)v63 + 4 * (*((_DWORD *)this + 0x27))++) = v61;
          }
        }
      }
      v53 += 0x30;
      ++v81;
    }
    while ( v81 < *((_DWORD *)this + 0x1E) );
  }
  v66 = *(_DWORD **)(v76 + 0x19C);
  if ( !v66 )
    v66 = (_DWORD *)dword_BA7D9C;
  v33 = v79 == (__m128 *)v66[0xA];
  v66[8] = v79;
  if ( v33 )
    (*(void (__thiscall **)(_DWORD *, __m128 *))(*v66 + 0x10))(v66, v79);
  return v78;
}
