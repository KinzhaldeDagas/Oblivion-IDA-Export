int __thiscall sub_91A000(float *this, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // edi
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  unsigned __int64 v13; // rax
  int v14; // edx
  int v15; // ebx
  float *v16; // esi
  int v17; // edi
  int v18; // ebx
  int v19; // eax
  _WORD *v20; // edi
  void (__thiscall ***v21)(_DWORD, _DWORD); // edi
  int v22; // eax
  _WORD *v23; // edi
  int v24; // edi
  int v25; // ebx
  int v26; // ecx
  double v27; // st7
  long double v28; // st7
  long double v29; // st6
  long double v30; // st6
  long double v31; // st5
  long double v32; // st5
  long double v33; // st5
  int v34; // edx
  int v35; // ecx
  __m128 *v36; // eax
  __m128 v37; // xmm0
  _OWORD *v38; // ecx
  _DWORD *v39; // edi
  int v40; // ebx
  int v41; // eax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // eax
  int v45; // edi
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  int v48; // ebx
  int v49; // edi
  int v50; // ebx
  int v51; // eax
  _WORD *v52; // edi
  int v53; // ecx
  char *v54; // eax
  int v55; // edx
  __int16 v56; // di
  void (__thiscall ***v57)(_DWORD, _DWORD); // edi
  int v58; // eax
  _WORD *v59; // edi
  int v60; // edi
  int v61; // eax
  int v62; // eax
  int v63; // ecx
  _DWORD *v64; // esi
  int v65; // edi
  int v66; // eax
  int v67; // ebx
  _DWORD *v68; // ecx
  unsigned __int64 v69; // rax
  int v70; // eax
  int v71; // ebx
  _DWORD *v72; // ecx
  unsigned __int64 v73; // rax
  int result; // eax
  int v75; // ecx
  int v76; // [esp+10h] [ebp-C0h]
  int v77; // [esp+10h] [ebp-C0h]
  int v78; // [esp+10h] [ebp-C0h]
  float v79; // [esp+10h] [ebp-C0h]
  float v80; // [esp+10h] [ebp-C0h]
  int v81; // [esp+10h] [ebp-C0h]
  int v82; // [esp+10h] [ebp-C0h]
  int v83; // [esp+10h] [ebp-C0h]
  int v84; // [esp+14h] [ebp-BCh]
  int v85; // [esp+14h] [ebp-BCh]
  int v86; // [esp+18h] [ebp-B8h]
  int v87; // [esp+18h] [ebp-B8h]
  float *v88; // [esp+1Ch] [ebp-B4h]
  _DWORD *v89; // [esp+20h] [ebp-B0h] BYREF
  int v90; // [esp+24h] [ebp-ACh]
  float v91; // [esp+28h] [ebp-A8h]
  float v92; // [esp+2Ch] [ebp-A4h]
  __int128 v93; // [esp+30h] [ebp-A0h] BYREF
  __m128 v94; // [esp+40h] [ebp-90h] BYREF
  float v95[10]; // [esp+50h] [ebp-80h] BYREF
  float v96; // [esp+78h] [ebp-58h]
  __m128 v97; // [esp+80h] [ebp-50h] BYREF
  __m128 v98[3]; // [esp+90h] [ebp-40h] BYREF
  __m128 v99; // [esp+C0h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  v88 = this;
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TthkRigidBodyInertiaViewer";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
    this = v88;
  }
  v10 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) )
  {
    v11 = ThreadLocalStoragePointer[v5];
    v12 = *(_DWORD **)(v10 + 0x1A4);
    *v12 = "TtgetProps";
    v13 = __rdtsc();
    v12[1] = v13;
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3;
  }
  v14 = *((_DWORD *)this + 2);
  v15 = *((_DWORD *)this + 5);
  v16 = this + 4;
  v84 = v14;
  if ( v14 >= v15 )
  {
    v86 = *((_DWORD *)v16 + 2);
    if ( v14 > (v86 & 0x3FFFFFFF) )
    {
      v19 = 2 * (v86 & 0x3FFFFFFF);
      if ( v14 >= v19 )
        v19 = v14;
      *(float *)&v93 = *v16;
      *v16 = 0.0;
      v16[1] = 0.0;
      v16[2] = -0.0;
      if ( v19 > 0 )
        sub_8A6E40((const void **)v16, v19 < 0 ? 0 : v19, 0x70);
      v20 = *(_WORD **)v16;
      if ( v15 > 0 )
      {
        LODWORD(v92) = v93 - (_DWORD)v20;
        v76 = v15;
        do
        {
          if ( v20 )
            sub_919F20(v20, (int)v20 + LODWORD(v92));
          v20 += 0x38;
          --v76;
        }
        while ( v76 );
      }
      *((_DWORD *)v16 + 1) = v15;
      if ( v15 > 0 )
      {
        v21 = (void (__thiscall ***)(_DWORD, _DWORD))v93;
        v77 = v15;
        do
        {
          (**v21)(v21, 0);
          v21 += 0x1C;
          --v77;
        }
        while ( v77 );
      }
      if ( v86 >= 0 )
      {
        v22 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v22 )
          v22 = dword_BA7D9C;
        sub_8A75D0(v22, (_DWORD *)v93, 0x70 * (v86 & 0x3FFFFFFF), 0x14);
      }
    }
    if ( v15 < v84 )
    {
      v23 = (_WORD *)(*(_DWORD *)v16 + 0x70 * v15);
      v78 = v84 - v15;
      do
      {
        if ( v23 )
          sub_949D00(v23);
        v23 += 0x38;
        --v78;
      }
      while ( v78 );
    }
  }
  else
  {
    v17 = 0x70 * v14;
    v18 = v15 - v14;
    do
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(_DWORD *)v16 + v17))(v17 + *(_DWORD *)v16, 0);
      v17 += 0x70;
      --v18;
    }
    while ( v18 );
  }
  *((_DWORD *)v16 + 1) = v84;
  v24 = 0;
  v85 = 0;
  if ( *((int *)v88 + 2) > 0 )
  {
    v25 = 0;
    do
    {
      v79 = sub_89DA90((float *)*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v88 + 1) + 4 * v24) + 0x50));
      if ( v79 != *(float *)&SrcStr )
      {
        v26 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v88 + 1) + 4 * v24) + 0x50);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v26 + 0x28))(v26, v95);
        v80 = fConstant_1 / v79;
        v27 = (v95[0] - v95[5] + v96) * v80 * flt_A5977C;
        v92 = v27;
        if ( v27 >= *(float *)&SrcStr )
          v28 = sqrt(v92);
        else
          v28 = *(float *)&SrcStr;
        v29 = v95[0] * v80 * flt_A2F918 - v92;
        if ( v29 >= *(float *)&SrcStr )
          v30 = sqrt(v29);
        else
          v30 = *(float *)&SrcStr;
        v31 = v96 * v80 * flt_A2F918 - v92;
        if ( v31 >= *(float *)&SrcStr )
          v32 = sqrt(v31);
        else
          v32 = *(float *)&SrcStr;
        v33 = v32 * flt_A9D394;
        v34 = *((_DWORD *)v88 + 1);
        HIDWORD(v93) = 0;
        *(float *)&v93 = v33;
        v35 = v34 + 4 * v24;
        *((float *)&v93 + 1) = v28 * flt_A9D394;
        *((float *)&v93 + 2) = v30 * flt_A9D394;
        v36 = *(__m128 **)(*(_DWORD *)v35 + 0x50);
        v37 = v36[1];
        ++v36;
        v98[0] = v37;
        v98[1] = v36[1];
        v98[2] = v36[2];
        v99 = v36[3];
        v97 = *(__m128 *)(*(_DWORD *)(*(_DWORD *)v35 + 0x50) + 0x90);
        sub_88FE00(&v94, v98, &v97);
        v38 = (_OWORD *)(v25 + *(_DWORD *)v16);
        ++v85;
        v94 = _mm_add_ps(v94, v99);
        v99 = v94;
        v25 += 0x70;
        sub_949D50(v38, &v93, v98);
      }
      ++v24;
    }
    while ( v24 < *((_DWORD *)v88 + 2) );
  }
  v39 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v40 = TlsIndex;
  v41 = v39[TlsIndex];
  if ( *(_DWORD *)(v41 + 0x1A4) < *(_DWORD *)(v41 + 0x1A8) )
  {
    v42 = *(_DWORD **)(v41 + 0x1A4);
    *v42 = "Et";
    v43 = __rdtsc();
    v42[1] = v43;
    *(_DWORD *)(v39[v40] + 0x1A4) = v42 + 3;
  }
  v44 = v39[v40];
  if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) )
  {
    v45 = v39[v40];
    v46 = *(_DWORD **)(v44 + 0x1A4);
    *v46 = "TtsendProps";
    v47 = __rdtsc();
    v46[1] = v47;
    *(_DWORD *)(v45 + 0x1A4) = v46 + 3;
  }
  v48 = *((_DWORD *)v16 + 1);
  if ( v85 >= v48 )
  {
    v87 = *((_DWORD *)v16 + 2);
    if ( v85 > (v87 & 0x3FFFFFFF) )
    {
      v51 = 2 * (v87 & 0x3FFFFFFF);
      if ( v85 >= v51 )
        v51 = v85;
      *(float *)&v93 = *v16;
      *v16 = 0.0;
      v16[1] = 0.0;
      v16[2] = -0.0;
      if ( v51 > 0 )
        sub_8A6E40((const void **)v16, v51 < 0 ? 0 : v51, 0x70);
      v52 = *(_WORD **)v16;
      if ( v48 > 0 )
      {
        v53 = v93 + 0x40;
        v54 = (char *)(v52 + 0x10);
        v55 = v93 - (_DWORD)v52;
        v81 = v48;
        do
        {
          if ( v54 != (char *)0x20 )
          {
            *((_DWORD *)v54 + 0xFFFFFFF8) = &hkReferencedObject::`vftable';
            *((_WORD *)v54 + 0xFFFFFFF2) = *(_WORD *)(v53 - 0x3C);
            v56 = *(_WORD *)(v53 - 0x3A);
            *((_DWORD *)v54 + 0xFFFFFFF8) = &off_A9B2F4;
            *((_WORD *)v54 + 0xFFFFFFF3) = v56;
            *((_OWORD *)v54 + 0xFFFFFFFF) = *(_OWORD *)(v53 - 0x30);
            *(_OWORD *)v54 = *(_OWORD *)&v54[v55];
            *((_OWORD *)v54 + 1) = *(_OWORD *)(v53 - 0x10);
            *((_OWORD *)v54 + 2) = *(_OWORD *)v53;
            *((_DWORD *)v54 + 0xC) = *(_DWORD *)(v53 + 0x10);
            *((_DWORD *)v54 + 0xD) = *(_DWORD *)(v53 + 0x14);
            *((_DWORD *)v54 + 0xFFFFFFF8) = &off_A9D378;
            *((_OWORD *)v54 + 4) = *(_OWORD *)(v53 + 0x20);
          }
          v54 += 0x70;
          v53 += 0x70;
          --v81;
        }
        while ( v81 );
      }
      *((_DWORD *)v16 + 1) = v48;
      if ( v48 > 0 )
      {
        v57 = (void (__thiscall ***)(_DWORD, _DWORD))v93;
        v82 = v48;
        do
        {
          (**v57)(v57, 0);
          v57 += 0x1C;
          --v82;
        }
        while ( v82 );
      }
      if ( v87 >= 0 )
      {
        v58 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v58 )
          v58 = dword_BA7D9C;
        sub_8A75D0(v58, (_DWORD *)v93, 0x70 * (v87 & 0x3FFFFFFF), 0x14);
      }
    }
    if ( v48 < v85 )
    {
      v59 = (_WORD *)(*(_DWORD *)v16 + 0x70 * v48);
      v83 = v85 - v48;
      do
      {
        if ( v59 )
          sub_949D00(v59);
        v59 += 0x38;
        --v83;
      }
      while ( v83 );
    }
  }
  else
  {
    v49 = 0x70 * v85;
    v50 = v48 - v85;
    do
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(_DWORD *)v16 + v49))(*(_DWORD *)v16 + v49, 0);
      v49 += 0x70;
      --v50;
    }
    while ( v50 );
  }
  *((_DWORD *)v16 + 1) = v85;
  v60 = *((_DWORD *)v88 + 5);
  v61 = 0;
  v89 = 0;
  v90 = 0;
  v91 = -0.0;
  if ( v60 > 0 )
  {
    LOBYTE(v61) = v60 < 0;
    sub_8A6E40((const void **)&v89, v60 & (v61 - 1), 4);
  }
  v62 = *((_DWORD *)v88 + 5) - 1;
  v90 = v60;
  if ( v62 >= 0 )
  {
    v63 = 0x70 * v62;
    do
    {
      v89[v62--] = v63 + *(_DWORD *)v16;
      v63 -= 0x70;
    }
    while ( v62 >= 0 );
  }
  (*(void (__thiscall **)(_DWORD, _DWORD **, unsigned int, int))(**((_DWORD **)v88 + 0xFFFFFFFB) + 0x24))(
    *((_DWORD *)v88 + 0xFFFFFFFB),
    &v89,
    0xFFFF00FF,
    dword_BA841C);
  v64 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v65 = TlsIndex;
  v66 = v64[TlsIndex];
  if ( *(_DWORD *)(v66 + 0x1A4) < *(_DWORD *)(v66 + 0x1A8) )
  {
    v67 = v64[TlsIndex];
    v68 = *(_DWORD **)(v66 + 0x1A4);
    *v68 = "Et";
    v69 = __rdtsc();
    v68[1] = v69;
    *(_DWORD *)(v67 + 0x1A4) = v68 + 3;
  }
  v70 = v64[v65];
  if ( *(_DWORD *)(v70 + 0x1A4) < *(_DWORD *)(v70 + 0x1A8) )
  {
    v71 = v64[v65];
    v72 = *(_DWORD **)(v70 + 0x1A4);
    *v72 = "Et";
    v73 = __rdtsc();
    v72[1] = v73;
    *(_DWORD *)(v71 + 0x1A4) = v72 + 3;
  }
  result = LODWORD(v91);
  if ( v91 >= 0.0 )
  {
    v75 = *(_DWORD *)(v64[v65] + 0x19C);
    if ( !v75 )
      v75 = dword_BA7D9C;
    return sub_8A75D0(v75, v89, 4 * LODWORD(v91), 0x14);
  }
  return result;
}
