int __stdcall sub_8D4590(int a1, int a2, int a3, LPCRITICAL_SECTION lpCriticalSection)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // edi
  _DWORD *v12; // ecx
  _DWORD *v13; // edx
  char *v14; // ebx
  _DWORD *v15; // eax
  _DWORD *v16; // ecx
  int v17; // esi
  int v18; // edx
  unsigned int v19; // ebx
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // edx
  unsigned int v23; // esi
  int v24; // esi
  _DWORD *v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  int v28; // eax
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  int v31; // ebx
  int v32; // ecx
  __m128 *v33; // edi
  _DWORD *v34; // eax
  double v35; // st7
  __m128 v36; // xmm2
  __m128 v37; // xmm0
  __m128 v38; // xmm3
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  int v41; // eax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  _DWORD *v44; // ecx
  bool v45; // zf
  _DWORD *v46; // ecx
  _DWORD *v47; // esi
  _DWORD *v48; // ecx
  unsigned __int64 v49; // rax
  _DWORD *v50; // ecx
  unsigned __int64 v51; // rax
  int v52; // eax
  int v53; // ecx
  unsigned int v54; // ecx
  _DWORD *v55; // ecx
  unsigned __int64 v56; // rax
  int v57; // eax
  int (__thiscall ***v58)(_DWORD, int *, int, int); // eax
  _DWORD *v59; // ecx
  unsigned __int64 v60; // rax
  _DWORD *v61; // ecx
  int v62; // eax
  _DWORD *v63; // ecx
  int v64; // eax
  int result; // eax
  int v66; // [esp+30h] [ebp-50h]
  float v67; // [esp+34h] [ebp-4Ch]
  int v68; // [esp+38h] [ebp-48h]
  int v69; // [esp+3Ch] [ebp-44h]
  float v70; // [esp+44h] [ebp-3Ch]
  unsigned int v71; // [esp+48h] [ebp-38h]
  int v72; // [esp+4Ch] [ebp-34h]
  _DWORD *v73; // [esp+50h] [ebp-30h] BYREF
  signed __int64 v74; // [esp+54h] [ebp-2Ch]
  __int64 v75; // [esp+5Ch] [ebp-24h] BYREF
  int v76; // [esp+64h] [ebp-1Ch]
  signed int v77; // [esp+68h] [ebp-18h]
  int v78; // [esp+6Ch] [ebp-14h]
  __m128 v79; // [esp+70h] [ebp-10h]

  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LtBroadPhase";
    v8[3] = "InitMem";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  v10 = *(_DWORD *)(a3 + 0x2A8);
  v11 = ThreadLocalStoragePointer[v4];
  v12 = *(_DWORD **)(v11 + 0x19C);
  v73 = 0;
  v74 = 0x8000000000000000uLL;
  v13 = (_DWORD *)v12[8];
  v14 = (char *)v13 + ((8 * v10 + 0x10) & 0xFFFFFFF0);
  v72 = v11;
  if ( (unsigned int)v14 > v12[0xB] )
  {
    v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, (8 * v10 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v12[8] = v14;
    v15 = v13;
  }
  v16 = *(_DWORD **)(v11 + 0x19C);
  v73 = v15;
  v75 = (unsigned int)v15;
  HIDWORD(v74) = v10 | 0x80000000;
  v17 = *(_DWORD *)(a3 + 0x2A8);
  v76 = 0;
  v77 = 0x80000000;
  v18 = v16[8];
  v19 = v18 + ((8 * v17 + 0x10) & 0xFFFFFFF0);
  if ( v19 > v16[0xB] )
  {
    v20 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v16 + 0xC))(v16, (8 * v17 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v16[8] = v19;
    v20 = v18;
  }
  v21 = *(_DWORD **)(v11 + 0x19C);
  HIDWORD(v75) = v20;
  v78 = v20;
  v77 = v17 | 0x80000000;
  v22 = v21[8];
  v23 = v22 + ((0x20 * a2 + 0x10) & 0xFFFFFFF0);
  if ( v23 > v21[0xB] )
  {
    v24 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v21 + 0xC))(v21, (0x20 * a2 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v21[8] = v23;
    v24 = v22;
  }
  v25 = *(_DWORD **)(v11 + 0x19C);
  v26 = v25[8];
  v27 = (4 * a2 + 0x10) & 0xFFFFFFF0;
  v69 = v24;
  if ( v26 + v27 > v25[0xB] )
  {
    v66 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v25 + 0xC))(v25, v27);
  }
  else
  {
    v25[8] = v26 + v27;
    v66 = v26;
  }
  v28 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v67 = *(float *)(*(_DWORD *)(a3 + 0x74) + 8) * flt_A3D65C;
  if ( *(_DWORD *)(v28 + 0x1A4) < *(_DWORD *)(v28 + 0x1A8) )
  {
    v29 = *(_DWORD **)(v11 + 0x1A4);
    *v29 = "StCalcAabbs";
    v30 = __rdtsc();
    v29[1] = v30;
    *(_DWORD *)(v11 + 0x1A4) = v29 + 3;
  }
  v31 = a1;
  if ( a2 - 1 >= 0 )
  {
    v32 = v66 - a1;
    v79 = 0;
    v68 = a2;
    while ( 1 )
    {
      v33 = *(__m128 **)(*(_DWORD *)v31 + 0x1C);
      v34 = (_DWORD *)(*(_DWORD *)v31 + 0x14);
      v35 = v33[9].m128_f32[3] * v33[0xA].m128_f32[0];
      *(_DWORD *)(v32 + v31) = *(_DWORD *)v31 + 0x28;
      v70 = v35 + v67;
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*v34 + 0xC))(*v34, v34[2], LODWORD(v70), v24);
      v36 = v33[5];
      *(float *)&v71 = v67 + v33[0xA].m128_f32[0];
      v24 += 0x20;
      v37 = _mm_shuffle_ps((__m128)v71, (__m128)v71, 0);
      *(__m128 *)(v24 - 0x20) = _mm_max_ps(*(__m128 *)(v24 - 0x20), _mm_sub_ps(v36, v37));
      v38 = *(__m128 *)(v24 - 0x20);
      *(__m128 *)(v24 - 0x10) = _mm_min_ps(*(__m128 *)(v24 - 0x10), _mm_add_ps(v36, v37));
      v39 = _mm_sub_ps(v33[4], v33[5]);
      v40 = v79;
      *(__m128 *)(v24 - 0x20) = _mm_add_ps(v38, _mm_min_ps(v79, v39));
      *(__m128 *)(v24 - 0x10) = _mm_add_ps(*(__m128 *)(v24 - 0x10), _mm_max_ps(v40, v39));
      v31 += 4;
      if ( !--v68 )
        break;
      v32 = v66 - a1;
    }
    v11 = v72;
    v24 = v69;
  }
  v41 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v41 + 0x1A4) < *(_DWORD *)(v41 + 0x1A8) )
  {
    v42 = *(_DWORD **)(v11 + 0x1A4);
    *v42 = "St3AxisSweep";
    v43 = __rdtsc();
    v42[1] = v43;
    *(_DWORD *)(v11 + 0x1A4) = v42 + 3;
  }
  if ( lpCriticalSection )
    sub_8A7720(lpCriticalSection);
  (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD **, char *))(**(_DWORD **)(a3 + 0x64) + 0x18))(
    *(_DWORD *)(a3 + 0x64),
    v66,
    v24,
    a2,
    &v73,
    (char *)&v75 + 4);
  v44 = *(_DWORD **)(v11 + 0x19C);
  v45 = v66 == v44[0xA];
  v44[8] = v66;
  if ( v45 )
    (*(void (__thiscall **)(_DWORD *, int))(*v44 + 0x10))(v44, v66);
  v46 = *(_DWORD **)(v11 + 0x19C);
  v45 = v24 == v46[0xA];
  v46[8] = v24;
  if ( v45 )
    (*(void (__thiscall **)(_DWORD *, int))(*v46 + 0x10))(v46, v24);
  v47 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( (int)v74 + v76 > 0 )
  {
    if ( *(_DWORD *)(v47[TlsIndex] + 0x1A4) < *(_DWORD *)(v47[TlsIndex] + 0x1A8) )
    {
      v48 = *(_DWORD **)(v11 + 0x1A4);
      *v48 = "StRemoveDup";
      v49 = __rdtsc();
      v48[1] = v49;
      *(_DWORD *)(v11 + 0x1A4) = v48 + 3;
    }
    sub_8D84F0((int)&v73, (int *)&v75 + 1);
    if ( *(_DWORD *)(v47[TlsIndex] + 0x1A4) < *(_DWORD *)(v47[TlsIndex] + 0x1A8) )
    {
      v50 = *(_DWORD **)(v11 + 0x1A4);
      *v50 = "StRemoveAgt";
      v51 = __rdtsc();
      v50[1] = v51;
      *(_DWORD *)(v11 + 0x1A4) = v50 + 3;
    }
    sub_8D83E0(*(_DWORD ***)(a3 + 0x68), (_DWORD *)HIDWORD(v75), v76);
    v52 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
    v53 = *(_DWORD *)(dword_BA7D98 + 8);
    if ( v53 > v52 )
      v54 = v53 - v52;
    else
      v54 = 0;
    if ( 0x3E8 * (int)v74 <= v54 )
    {
      if ( *(_DWORD *)(v47[TlsIndex] + 0x1A4) < *(_DWORD *)(v47[TlsIndex] + 0x1A8) )
      {
        v55 = *(_DWORD **)(v11 + 0x1A4);
        *v55 = "StAddAgt";
        v56 = __rdtsc();
        v55[1] = v56;
        *(_DWORD *)(v11 + 0x1A4) = v55 + 3;
      }
      v57 = *(_DWORD *)(a3 + 0x78);
      if ( v57 )
        v58 = (int (__thiscall ***)(_DWORD, int *, int, int))(v57 + 8);
      else
        v58 = 0;
      sub_8D8370(*(_DWORD ***)(a3 + 0x68), v73, v74, v58);
    }
    else
    {
      *(_DWORD *)(dword_BA7D98 + 4) = 1;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( *(_DWORD *)(v47[TlsIndex] + 0x1A4) < *(_DWORD *)(v47[TlsIndex] + 0x1A8) )
  {
    v59 = *(_DWORD **)(v11 + 0x1A4);
    *v59 = "lt";
    v60 = __rdtsc();
    v59[1] = v60;
    *(_DWORD *)(v11 + 0x1A4) = v59 + 3;
  }
  v61 = *(_DWORD **)(v11 + 0x19C);
  v62 = v78;
  v45 = v78 == v61[0xA];
  v61[8] = v78;
  if ( v45 )
    (*(void (__thiscall **)(_DWORD *, int))(*v61 + 0x10))(v61, v62);
  if ( v77 >= 0 )
    sub_8A75D0(*(_DWORD *)(v11 + 0x19C), (_DWORD *)HIDWORD(v75), 8 * v77, 0x14);
  v63 = *(_DWORD **)(v11 + 0x19C);
  v64 = v75;
  v45 = (_DWORD)v75 == v63[0xA];
  v63[8] = v75;
  if ( v45 )
    (*(void (__thiscall **)(_DWORD *, int))(*v63 + 0x10))(v63, v64);
  result = HIDWORD(v74);
  if ( v74 >= 0 )
    return sub_8A75D0(*(_DWORD *)(v11 + 0x19C), v73, 8 * HIDWORD(v74), 0x14);
  return result;
}
