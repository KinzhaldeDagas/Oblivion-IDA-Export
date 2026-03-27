int __thiscall sub_919490(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // esi
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // edi
  const void **v9; // ebx
  int v10; // esi
  int v11; // edi
  _WORD *v12; // esi
  char *v13; // eax
  char *v14; // esi
  int v15; // eax
  _WORD *v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ebx
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  int v25; // esi
  _DWORD *v26; // esi
  int i; // edi
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // edi
  const void **v35; // ebx
  int v36; // esi
  int v37; // edi
  _WORD *v38; // esi
  char *v39; // eax
  char *v40; // esi
  int v41; // eax
  _WORD *v42; // esi
  int v43; // esi
  int v44; // eax
  int v45; // ecx
  int v46; // ebx
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  _DWORD *v49; // esi
  double v50; // st7
  int j; // edi
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  _DWORD *ThreadLocalStoragePointer; // ecx
  unsigned __int64 v57; // rax
  int v58; // esi
  _DWORD *v59; // ecx
  int v61; // [esp+30h] [ebp-90h]
  int v62; // [esp+30h] [ebp-90h]
  int v63; // [esp+30h] [ebp-90h]
  int v64; // [esp+30h] [ebp-90h]
  int v65; // [esp+30h] [ebp-90h]
  int v66; // [esp+30h] [ebp-90h]
  char *v67; // [esp+34h] [ebp-8Ch]
  char *v68; // [esp+34h] [ebp-8Ch]
  float v69; // [esp+34h] [ebp-8Ch]
  int v70; // [esp+38h] [ebp-88h]
  int v71; // [esp+38h] [ebp-88h]
  int v72; // [esp+38h] [ebp-88h]
  int v73; // [esp+38h] [ebp-88h]
  int v74; // [esp+3Ch] [ebp-84h]
  int v75; // [esp+3Ch] [ebp-84h]
  int v76; // [esp+3Ch] [ebp-84h]
  int v77; // [esp+3Ch] [ebp-84h]
  const void *v79[8]; // [esp+44h] [ebp-7Ch] BYREF
  char *v80; // [esp+64h] [ebp-5Ch] BYREF
  int v81; // [esp+68h] [ebp-58h]
  int v82; // [esp+6Ch] [ebp-54h]
  __m128 v83; // [esp+70h] [ebp-50h] BYREF
  __m128 v84; // [esp+80h] [ebp-40h]
  __m128 v85; // [esp+90h] [ebp-30h]
  __m128 v86; // [esp+A0h] [ebp-20h] BYREF
  __m128 v87; // [esp+B0h] [ebp-10h]

  v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v3 + 0x1A4) < *(_DWORD *)(v3 + 0x1A8) )
  {
    v4 = v3;
    v5 = *(_DWORD **)(v3 + 0x1A4);
    *v5 = "TthkSimulationIslandViewer";
    v6 = __rdtsc();
    v5[1] = v6;
    *(_DWORD *)(v4 + 0x1A4) = v5 + 3;
  }
  if ( *(_BYTE *)(this + 4) )
  {
    v7 = *(_DWORD *)(a2 + 0x3C);
    v61 = v7;
    if ( v7 > *(_DWORD *)(this + 0x18) )
    {
      v8 = *(_DWORD *)(this + 0x18);
      v9 = (const void **)(this + 0x14);
      if ( v7 >= v8 )
      {
        v74 = *(_DWORD *)(this + 0x1C);
        if ( v7 > (v74 & 0x3FFFFFFF) )
        {
          if ( v7 < 2 * (v74 & 0x3FFFFFFF) )
            v7 = 2 * (v74 & 0x3FFFFFFF);
          v79[3] = *v9;
          *v9 = 0;
          *(_DWORD *)(this + 0x18) = 0;
          *(_DWORD *)(this + 0x1C) = 0x80000000;
          if ( v7 > 0 )
            sub_8A6E40(v9, v7 < 0 ? 0 : v7, 0x80);
          v12 = *v9;
          if ( v8 > 0 )
          {
            v13 = (char *)((char *)v79[3] - (char *)v12);
            v67 = (char *)((char *)v79[3] - (char *)v12);
            v70 = v8;
            do
            {
              if ( v12 )
              {
                sub_9193A0(v12, (int)&v13[(_DWORD)v12]);
                v13 = v67;
              }
              v12 += 0x40;
              --v70;
            }
            while ( v70 );
          }
          *(_DWORD *)(this + 0x18) = v8;
          if ( v8 > 0 )
          {
            v14 = (char *)v79[3];
            v71 = v8;
            do
            {
              (**(void (__thiscall ***)(const void *, _DWORD))v14)(v14, 0);
              v14 += 0x80;
              --v71;
            }
            while ( v71 );
          }
          if ( v74 >= 0 )
          {
            v15 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
            if ( !v15 )
              v15 = dword_BA7D9C;
            sub_8A75D0(v15, (_DWORD *)v79[3], v74 << 7, 0x14);
          }
        }
        if ( v8 < v61 )
        {
          v16 = (char *)*v9 + 0x80 * v8;
          v75 = v61 - v8;
          do
          {
            if ( v16 )
              sub_949300(v16);
            v16 += 0x40;
            --v75;
          }
          while ( v75 );
        }
      }
      else
      {
        v10 = v7 << 7;
        v11 = v8 - v7;
        do
        {
          (**(void (__thiscall ***)(int, _DWORD))((char *)*v9 + v10))((int)*v9 + v10, 0);
          v10 += 0x80;
          --v11;
        }
        while ( v11 );
      }
      *(_DWORD *)(this + 0x18) = v61;
    }
    v17 = *(_DWORD *)(a2 + 0x3C);
    v18 = 0;
    v79[0] = 0;
    v79[1] = 0;
    v79[2] = (const void *)0x80000000;
    if ( v17 > 0 )
    {
      LOBYTE(v18) = v17 < 0;
      sub_8A6E40(v79, v17 & (v18 - 1), 4);
    }
    v19 = 0;
    v79[1] = (const void *)v17;
    v20 = *(_DWORD *)(a2 + 0x3C);
    v80 = 0;
    v81 = 0;
    v82 = 0x80000000;
    if ( v20 > 0 )
    {
      LOBYTE(v19) = v20 < 0;
      sub_8A6E40((const void **)&v80, v20 & (v19 - 1), 0x20);
    }
    v21 = *(_DWORD *)(a2 + 0x3C);
    v22 = 0;
    v81 = v20;
    if ( v21 > 0 )
    {
      v23 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0);
      v24 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
      v84 = v23;
      v85 = v24;
      v62 = 0;
      v72 = 0;
      while ( 1 )
      {
        v25 = *(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * v22);
        *(__m128 *)&v80[v72 + 0x10] = v23;
        *(__m128 *)&v80[v72] = v24;
        v26 = (_DWORD *)(v25 + 0x34);
        *(__m128 *)&v79[3] = v23;
        v83 = v24;
        for ( i = 0; i < v26[1]; ++i )
        {
          v28 = *(_DWORD *)(*v26 + 4 * i);
          v29 = *(_DWORD *)(v28 + 0x14);
          v30 = v28 + 0x14;
          if ( v29 )
          {
            (*(void (__thiscall **)(_DWORD, int, __m128 *))(**(_DWORD **)(a2 + 0x64) + 0x24))(
              *(_DWORD *)(a2 + 0x64),
              v30 + 0x14,
              &v86);
            *(__m128 *)&v79[3] = _mm_max_ps(*(__m128 *)&v79[3], v87);
            v83 = _mm_min_ps(v83, v86);
          }
        }
        sub_9492E0((_OWORD *)(v62 + *(_DWORD *)(this + 0x14)), &v83, &v79[3]);
        v72 += 0x20;
        *((_DWORD *)v79[0] + v22++) = v62 + *(_DWORD *)(this + 0x14);
        v62 += 0x80;
        if ( v22 >= *(_DWORD *)(a2 + 0x3C) )
          break;
        v23 = v84;
        v24 = v85;
      }
    }
    (*(void (__thiscall **)(_DWORD, const void **, unsigned int, int))(**(_DWORD **)(this - 0x10) + 0x24))(
      *(_DWORD *)(this - 0x10),
      v79,
      0xFF0000FF,
      dword_BA8418);
    if ( v82 >= 0 )
    {
      v31 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v31 )
        v31 = dword_BA7D9C;
      sub_8A75D0(v31, v80, 0x20 * v82, 0x14);
    }
    if ( (int)v79[2] >= 0 )
    {
      v32 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v32 )
        v32 = dword_BA7D9C;
      sub_8A75D0(v32, (_DWORD *)v79[0], 4 * (int)v79[2], 0x14);
    }
  }
  if ( *(_BYTE *)(this + 5) )
  {
    v33 = *(_DWORD *)(a2 + 0x48);
    v73 = v33;
    if ( v33 > *(_DWORD *)(this + 0xC) )
    {
      v34 = *(_DWORD *)(this + 0xC);
      v35 = (const void **)(this + 8);
      if ( v33 >= v34 )
      {
        v76 = *(_DWORD *)(this + 0x10);
        if ( v33 > (v76 & 0x3FFFFFFF) )
        {
          if ( v33 < 2 * (v76 & 0x3FFFFFFF) )
            v33 = 2 * (v76 & 0x3FFFFFFF);
          v79[3] = *v35;
          *v35 = 0;
          *(_DWORD *)(this + 0xC) = 0;
          *(_DWORD *)(this + 0x10) = 0x80000000;
          if ( v33 > 0 )
            sub_8A6E40(v35, v33 < 0 ? 0 : v33, 0x80);
          v38 = *v35;
          if ( v34 > 0 )
          {
            v39 = (char *)((char *)v79[3] - (char *)v38);
            v68 = (char *)((char *)v79[3] - (char *)v38);
            v63 = v34;
            do
            {
              if ( v38 )
              {
                sub_9193A0(v38, (int)&v39[(_DWORD)v38]);
                v39 = v68;
              }
              v38 += 0x40;
              --v63;
            }
            while ( v63 );
          }
          *(_DWORD *)(this + 0xC) = v34;
          if ( v34 > 0 )
          {
            v40 = (char *)v79[3];
            v64 = v34;
            do
            {
              (**(void (__thiscall ***)(const void *, _DWORD))v40)(v40, 0);
              v40 += 0x80;
              --v64;
            }
            while ( v64 );
          }
          if ( v76 >= 0 )
          {
            v41 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
            if ( !v41 )
              v41 = dword_BA7D9C;
            sub_8A75D0(v41, (_DWORD *)v79[3], v76 << 7, 0x14);
          }
        }
        if ( v34 < v73 )
        {
          v42 = (char *)*v35 + 0x80 * v34;
          v65 = v73 - v34;
          do
          {
            if ( v42 )
              sub_949300(v42);
            v42 += 0x40;
            --v65;
          }
          while ( v65 );
        }
      }
      else
      {
        v36 = v33 << 7;
        v37 = v34 - v33;
        do
        {
          (**(void (__thiscall ***)(int, _DWORD))((char *)*v35 + v36))((int)*v35 + v36, 0);
          v36 += 0x80;
          --v37;
        }
        while ( v37 );
      }
      *(_DWORD *)(this + 0xC) = v73;
    }
    v43 = *(_DWORD *)(a2 + 0x48);
    v44 = 0;
    v79[0] = 0;
    v79[1] = 0;
    v79[2] = (const void *)0x80000000;
    if ( v43 > 0 )
    {
      LOBYTE(v44) = v43 < 0;
      sub_8A6E40(v79, v43 & (v44 - 1), 4);
    }
    v45 = *(_DWORD *)(a2 + 0x48);
    v46 = 0;
    v79[1] = (const void *)v43;
    v66 = 0;
    if ( v45 > 0 )
    {
      v47 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0);
      v48 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
      v85 = v47;
      v84 = v48;
      v77 = 0;
      while ( 1 )
      {
        v49 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x44) + 4 * v46) + 0x34);
        v50 = *(float *)(*(_DWORD *)(a2 + 0x74) + 8) * flt_A3D65C;
        v83 = v47;
        *(__m128 *)&v79[3] = v48;
        for ( j = 0; j < v49[1]; ++j )
        {
          v52 = *(_DWORD *)(*v49 + 4 * j);
          v53 = *(_DWORD *)(v52 + 0x14);
          v54 = v52 + 0x14;
          if ( v53 )
          {
            v69 = v50;
            (*(void (__thiscall **)(int, _DWORD, _DWORD, __m128 *))(*(_DWORD *)v53 + 0xC))(
              v53,
              *(_DWORD *)(v54 + 8),
              LODWORD(v69),
              &v86);
            v46 = v66;
            v83 = _mm_max_ps(v83, v87);
            *(__m128 *)&v79[3] = _mm_min_ps(*(__m128 *)&v79[3], v86);
          }
        }
        sub_9492E0((_OWORD *)(v77 + *(_DWORD *)(this + 8)), &v79[3], &v83);
        *((_DWORD *)v79[0] + v46++) = v77 + *(_DWORD *)(this + 8);
        v66 = v46;
        v77 += 0x80;
        if ( v46 >= *(_DWORD *)(a2 + 0x48) )
          break;
        v47 = v85;
        v48 = v84;
      }
    }
    (*(void (__thiscall **)(_DWORD, const void **, unsigned int, int))(**(_DWORD **)(this - 0x10) + 0x24))(
      *(_DWORD *)(this - 0x10),
      v79,
      0xFF008000,
      dword_BA8418);
    if ( (int)v79[2] >= 0 )
    {
      v55 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v55 )
        v55 = dword_BA7D9C;
      sub_8A75D0(v55, (_DWORD *)v79[0], 4 * (int)v79[2], 0x14);
    }
  }
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v57) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v57 + 0x1A4) < *(_DWORD *)(v57 + 0x1A8) )
  {
    v58 = ThreadLocalStoragePointer[TlsIndex];
    v59 = *(_DWORD **)(v57 + 0x1A4);
    *v59 = "Et";
    v57 = __rdtsc();
    v59[1] = v57;
    *(_DWORD *)(v58 + 0x1A4) = v59 + 3;
  }
  return v57;
}
