int __thiscall sub_8BA2C0(_DWORD *this, int *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  __int128 *v12; // esi
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm3
  __m128 *v16; // eax
  int v17; // ecx
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  int v20; // eax
  _DWORD *v21; // ecx
  int v22; // edx
  unsigned int v23; // eax
  _DWORD *v25; // ecx
  bool v26; // zf
  unsigned __int64 v27; // rax
  _DWORD *v28; // ecx
  int v30; // [esp+10h] [ebp-30h]
  int v31; // [esp+14h] [ebp-2Ch]
  int v33; // [esp+1Ch] [ebp-24h]
  __m128 v34; // [esp+20h] [ebp-20h] BYREF
  __m128 v35; // [esp+30h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "TtRayCastGroup";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3;
  }
  v12 = (__int128 *)a3;
  v13 = *(__m128 *)(a3 + 0x10);
  v14 = _mm_min_ps(*(__m128 *)a3, v13);
  v15 = _mm_max_ps(*(__m128 *)a3, v13);
  v34 = v14;
  v35 = v15;
  v16 = (__m128 *)(a3 + 0x30);
  if ( a4 - 2 >= 0 )
  {
    v17 = a4 - 2 + 1;
    do
    {
      v18 = *v16;
      v19 = v16[1];
      v16 += 3;
      --v17;
      v14 = _mm_min_ps(_mm_min_ps(v14, v19), v18);
      v15 = _mm_max_ps(_mm_max_ps(v15, v19), v18);
    }
    while ( v17 );
    v35 = v15;
    v34 = v14;
  }
  v20 = (*(int (__thiscall **)(int *))(*a2 + 0x3C))(a2);
  v33 = ThreadLocalStoragePointer[TlsIndex];
  v21 = *(_DWORD **)(v33 + 0x19C);
  if ( !v21 )
    v21 = (_DWORD *)dword_BA7D9C;
  v22 = v21[8];
  v23 = (v20 + 0x10) & 0xFFFFFFF0;
  if ( v22 + v23 > v21[0xB] )
  {
    v30 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v21 + 0xC))(v21, v23);
    (*(void (__thiscall **)(int *, __m128 *, int))(*a2 + 0x40))(a2, &v34, v30);
  }
  else
  {
    v21[8] = v22 + v23;
    v30 = v22;
    (*(void (__thiscall **)(int *, __m128 *, int))(*a2 + 0x40))(a2, &v34, v22);
  }
  if ( a4 - 1 >= 0 )
  {
    v31 = a4;
    do
    {
      sub_8BA1B0(this, a2, v12, a5, v30, a6);
      v12 += 3;
      a6 += a7;
      --v31;
    }
    while ( v31 );
  }
  v25 = *(_DWORD **)(v33 + 0x19C);
  if ( !v25 )
    v25 = (_DWORD *)dword_BA7D9C;
  v26 = v30 == v25[0xA];
  v25[8] = v30;
  if ( v26 )
    (*(void (__thiscall **)(_DWORD *, int))(*v25 + 0x10))(v25, v30);
  LODWORD(v27) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
  {
    v28 = *(_DWORD **)(v33 + 0x1A4);
    *v28 = "Et";
    v27 = __rdtsc();
    v28[1] = v27;
    *(_DWORD *)(v33 + 0x1A4) = v28 + 3;
  }
  return v27;
}
