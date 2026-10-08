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

  v4 = MEMORY[0xBA9DE4]; /*0x8d459a*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d45a2*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d45a9*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8d45b8*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8d45ba*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8d45bc*/
    *v8 = "LtBroadPhase"; /*0x8d45c2*/
    v8[3] = "InitMem"; /*0x8d45c8*/
    v9 = __rdtsc(); /*0x8d45cf*/
    v8[1] = v9; /*0x8d45d9*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x8d45df*/
  }
  v10 = *(_DWORD *)(a3 + 0x2A8); /*0x8d45e8*/
  v11 = ThreadLocalStoragePointer[v4]; /*0x8d45ee*/
  v12 = *(_DWORD **)(v11 + 0x19C); /*0x8d45f1*/
  v73 = 0; /*0x8d45f9*/
  v74 = 0x8000000000000000uLL; /*0x8d45fd*/
  v13 = (_DWORD *)v12[8]; /*0x8d4609*/
  v14 = (char *)v13 + ((8 * v10 + 0x10) & 0xFFFFFFF0); /*0x8d4616*/
  v72 = v11; /*0x8d461c*/
  if ( (unsigned int)v14 > v12[0xB] ) /*0x8d4620*/
  {
    v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, (8 * v10 + 0x10) & 0xFFFFFFF0); /*0x8d462c*/
  }
  else
  {
    v12[8] = v14; /*0x8d4622*/
    v15 = v13; /*0x8d4625*/
  }
  v16 = *(_DWORD **)(v11 + 0x19C); /*0x8d462f*/
  v73 = v15; /*0x8d4635*/
  v75 = (unsigned int)v15; /*0x8d4639*/
  HIDWORD(v74) = v10 | 0x80000000; /*0x8d4646*/
  v17 = *(_DWORD *)(a3 + 0x2A8); /*0x8d464a*/
  v76 = 0; /*0x8d4656*/
  v77 = 0x80000000; /*0x8d465a*/
  v18 = v16[8]; /*0x8d4662*/
  v19 = v18 + ((8 * v17 + 0x10) & 0xFFFFFFF0); /*0x8d466f*/
  if ( v19 > v16[0xB] ) /*0x8d4675*/
  {
    v20 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v16 + 0xC))(v16, (8 * v17 + 0x10) & 0xFFFFFFF0); /*0x8d4681*/
  }
  else
  {
    v16[8] = v19; /*0x8d4677*/
    v20 = v18; /*0x8d467a*/
  }
  v21 = *(_DWORD **)(v11 + 0x19C); /*0x8d4687*/
  HIDWORD(v75) = v20; /*0x8d468d*/
  v78 = v20; /*0x8d4691*/
  v77 = v17 | 0x80000000; /*0x8d46a0*/
  v22 = v21[8]; /*0x8d46a4*/
  v23 = v22 + ((0x20 * a2 + 0x10) & 0xFFFFFFF0); /*0x8d46ad*/
  if ( v23 > v21[0xB] ) /*0x8d46b3*/
  {
    v24 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v21 + 0xC))(v21, (0x20 * a2 + 0x10) & 0xFFFFFFF0); /*0x8d46c2*/
  }
  else
  {
    v21[8] = v23; /*0x8d46b5*/
    v24 = v22; /*0x8d46b8*/
  }
  v25 = *(_DWORD **)(v11 + 0x19C); /*0x8d46c4*/
  v26 = v25[8]; /*0x8d46ca*/
  v27 = (4 * a2 + 0x10) & 0xFFFFFFF0; /*0x8d46d4*/
  v69 = v24; /*0x8d46dd*/
  if ( v26 + v27 > v25[0xB] ) /*0x8d46e1*/
  {
    v66 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v25 + 0xC))(v25, v27); /*0x8d46f2*/
  }
  else
  {
    v25[8] = v26 + v27; /*0x8d46e3*/
    v66 = v26; /*0x8d46e6*/
  }
  v28 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d4711*/
  v67 = *(float *)(*(_DWORD *)(a3 + 0x74) + 8) * kHeadBodyNormalMatchRadius; /*0x8d4720*/
  if ( *(_DWORD *)(v28 + 0x1A4) < *(_DWORD *)(v28 + 0x1A8) ) /*0x8d4726*/
  {
    v29 = *(_DWORD **)(v11 + 0x1A4); /*0x8d4728*/
    *v29 = "StCalcAabbs"; /*0x8d472e*/
    v30 = __rdtsc(); /*0x8d4734*/
    v29[1] = v30; /*0x8d473e*/
    *(_DWORD *)(v11 + 0x1A4) = v29 + 3; /*0x8d4744*/
  }
  v31 = a1; /*0x8d474e*/
  if ( a2 - 1 >= 0 ) /*0x8d4751*/
  {
    v32 = v66 - a1; /*0x8d475b*/
    v79 = 0; /*0x8d4761*/
    v68 = a2; /*0x8d476a*/
    while ( 1 ) /*0x8d4776*/
    {
      v33 = *(__m128 **)(*(_DWORD *)v31 + 0x1C); /*0x8d4776*/
      v34 = (_DWORD *)(*(_DWORD *)v31 + 0x14); /*0x8d477f*/
      v35 = v33[9].m128_f32[3] * v33[0xA].m128_f32[0]; /*0x8d4782*/
      *(_DWORD *)(v32 + v31) = *(_DWORD *)v31 + 0x28; /*0x8d478b*/
      v70 = v35 + v67; /*0x8d479d*/
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*v34 + 0xC))(*v34, v34[2], LODWORD(v70), v24); /*0x8d47ac*/
      v36 = v33[5]; /*0x8d47c1*/
      *(float *)&v71 = v67 + v33[0xA].m128_f32[0]; /*0x8d47c4*/
      v24 += 0x20; /*0x8d47c8*/
      v37 = _mm_shuffle_ps((__m128)v71, (__m128)v71, 0); /*0x8d47d1*/
      *(__m128 *)(v24 - 0x20) = _mm_max_ps(*(__m128 *)(v24 - 0x20), _mm_sub_ps(v36, v37)); /*0x8d47e2*/
      v38 = *(__m128 *)(v24 - 0x20); /*0x8d47ea*/
      *(__m128 *)(v24 - 0x10) = _mm_min_ps(*(__m128 *)(v24 - 0x10), _mm_add_ps(v36, v37)); /*0x8d47f1*/
      v39 = _mm_sub_ps(v33[4], v33[5]); /*0x8d47fd*/
      v40 = v79; /*0x8d4800*/
      *(__m128 *)(v24 - 0x20) = _mm_add_ps(v38, _mm_min_ps(v79, v39)); /*0x8d480e*/
      *(__m128 *)(v24 - 0x10) = _mm_add_ps(*(__m128 *)(v24 - 0x10), _mm_max_ps(v40, v39)); /*0x8d481c*/
      v31 += 4; /*0x8d4820*/
      if ( !--v68 ) /*0x8d4828*/
        break; /*0x8d4828*/
      v32 = v66 - a1; /*0x8d4770*/
    }
    v11 = v72; /*0x8d482e*/
    v24 = v69; /*0x8d4832*/
  }
  v41 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8d4843*/
  if ( *(_DWORD *)(v41 + 0x1A4) < *(_DWORD *)(v41 + 0x1A8) ) /*0x8d4852*/
  {
    v42 = *(_DWORD **)(v11 + 0x1A4); /*0x8d4854*/
    *v42 = "St3AxisSweep"; /*0x8d485a*/
    v43 = __rdtsc(); /*0x8d4860*/
    v42[1] = v43; /*0x8d486a*/
    *(_DWORD *)(v11 + 0x1A4) = v42 + 3; /*0x8d4870*/
  }
  if ( lpCriticalSection ) /*0x8d487b*/
    sub_8A7720(lpCriticalSection); /*0x8d487d*/
  (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD **, char *))(**(_DWORD **)(a3 + 0x64) + 0x18))( /*0x8d489e*/
    *(_DWORD *)(a3 + 0x64),
    v66,
    v24,
    a2,
    &v73,
    (char *)&v75 + 4);
  v44 = *(_DWORD **)(v11 + 0x19C); /*0x8d48a1*/
  v45 = v66 == v44[0xA]; /*0x8d48ab*/
  v44[8] = v66; /*0x8d48ae*/
  if ( v45 ) /*0x8d48b1*/
    (*(void (__thiscall **)(_DWORD *, int))(*v44 + 0x10))(v44, v66); /*0x8d48b6*/
  v46 = *(_DWORD **)(v11 + 0x19C); /*0x8d48b9*/
  v45 = v24 == v46[0xA]; /*0x8d48bf*/
  v46[8] = v24; /*0x8d48c2*/
  if ( v45 ) /*0x8d48c5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v46 + 0x10))(v46, v24); /*0x8d48ca*/
  v47 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d48d5*/
  if ( (int)v74 + v76 > 0 ) /*0x8d48e0*/
  {
    if ( *(_DWORD *)(v47[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v47[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d48fa*/
    {
      v48 = *(_DWORD **)(v11 + 0x1A4); /*0x8d48fc*/
      *v48 = "StRemoveDup"; /*0x8d4902*/
      v49 = __rdtsc(); /*0x8d4908*/
      v48[1] = v49; /*0x8d4912*/
      *(_DWORD *)(v11 + 0x1A4) = v48 + 3; /*0x8d4918*/
    }
    sub_8D84F0((const void **)&v73, (int *)&v75 + 1); /*0x8d4928*/
    if ( *(_DWORD *)(v47[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v47[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d4947*/
    {
      v50 = *(_DWORD **)(v11 + 0x1A4); /*0x8d4949*/
      *v50 = "StRemoveAgt"; /*0x8d494f*/
      v51 = __rdtsc(); /*0x8d4955*/
      v50[1] = v51; /*0x8d495f*/
      *(_DWORD *)(v11 + 0x1A4) = v50 + 3; /*0x8d4965*/
    }
    sub_8D83E0(*(_DWORD ***)(a3 + 0x68), (_DWORD *)HIDWORD(v75), v76); /*0x8d4978*/
    v52 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8d4989*/
    v53 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8d498b*/
    if ( v53 > v52 ) /*0x8d4990*/
      v54 = v53 - v52; /*0x8d4996*/
    else
      v54 = 0; /*0x8d4992*/
    if ( 0x3E8 * (int)v74 <= v54 ) /*0x8d49a4*/
    {
      if ( *(_DWORD *)(v47[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v47[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d49c4*/
      {
        v55 = *(_DWORD **)(v11 + 0x1A4); /*0x8d49c6*/
        *v55 = "StAddAgt"; /*0x8d49cc*/
        v56 = __rdtsc(); /*0x8d49d2*/
        v55[1] = v56; /*0x8d49dc*/
        *(_DWORD *)(v11 + 0x1A4) = v55 + 3; /*0x8d49e2*/
      }
      v57 = *(_DWORD *)(a3 + 0x78); /*0x8d49e8*/
      if ( v57 ) /*0x8d49ed*/
        v58 = (int (__thiscall ***)(_DWORD, int *, int, int))(v57 + 8); /*0x8d49ef*/
      else
        v58 = 0; /*0x8d49f4*/
      sub_8D8370(*(_DWORD ***)(a3 + 0x68), v73, v74, v58); /*0x8d4a04*/
    }
    else
    {
      *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x8d49a6*/
    }
  }
  if ( lpCriticalSection ) /*0x8d4a0e*/
    LeaveCriticalSection(lpCriticalSection); /*0x8d4a11*/
  if ( *(_DWORD *)(v47[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v47[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x8d4a2b*/
  {
    v59 = *(_DWORD **)(v11 + 0x1A4); /*0x8d4a2d*/
    *v59 = "lt"; /*0x8d4a33*/
    v60 = __rdtsc(); /*0x8d4a39*/
    v59[1] = v60; /*0x8d4a43*/
    *(_DWORD *)(v11 + 0x1A4) = v59 + 3; /*0x8d4a49*/
  }
  v61 = *(_DWORD **)(v11 + 0x19C); /*0x8d4a4f*/
  v62 = v78; /*0x8d4a55*/
  v45 = v78 == v61[0xA]; /*0x8d4a59*/
  v61[8] = v78; /*0x8d4a5c*/
  if ( v45 ) /*0x8d4a5f*/
    (*(void (__thiscall **)(_DWORD *, int))(*v61 + 0x10))(v61, v62); /*0x8d4a64*/
  if ( v77 >= 0 ) /*0x8d4a6d*/
    sub_8A75D0(*(_DWORD *)(v11 + 0x19C), (_DWORD *)HIDWORD(v75), 8 * v77, 0x14); /*0x8d4a85*/
  v63 = *(_DWORD **)(v11 + 0x19C); /*0x8d4a8a*/
  v64 = v75; /*0x8d4a90*/
  v45 = (_DWORD)v75 == v63[0xA]; /*0x8d4a94*/
  v63[8] = v75; /*0x8d4a97*/
  if ( v45 ) /*0x8d4a9a*/
    (*(void (__thiscall **)(_DWORD *, int))(*v63 + 0x10))(v63, v64); /*0x8d4a9f*/
  result = HIDWORD(v74); /*0x8d4aa2*/
  if ( v74 >= 0 ) /*0x8d4aa8*/
    return sub_8A75D0(*(_DWORD *)(v11 + 0x19C), v73, 8 * HIDWORD(v74), 0x14); /*0x8d4ac0*/
  return result; /*0x8d4ac5*/
}
