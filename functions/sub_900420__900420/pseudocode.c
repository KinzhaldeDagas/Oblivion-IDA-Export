int __cdecl sub_900420(int *a1, int a2, int a3, int a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // ebx
  _DWORD *v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  _DWORD *v15; // edi
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // esi
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  int v25; // edx
  __m128 *v26; // eax
  int v27; // ecx
  double v28; // st7
  int v29; // eax
  _DWORD *v30; // ecx
  unsigned __int64 v31; // rax
  _DWORD *v32; // ecx
  int v33; // edx
  unsigned int v34; // esi
  int v35; // esi
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // ecx
  unsigned __int64 v39; // rax
  int v40; // edx
  float *v41; // ecx
  _DWORD *v42; // ecx
  bool v43; // zf
  _DWORD *v44; // ecx
  unsigned __int64 v45; // rax
  _DWORD *v46; // ecx
  int v48; // [esp+24h] [ebp-68h]
  int v49; // [esp+2Ch] [ebp-60h]
  int v50; // [esp+30h] [ebp-5Ch]
  int *v51; // [esp+34h] [ebp-58h]
  int v52; // [esp+38h] [ebp-54h] BYREF
  _DWORD v53[3]; // [esp+40h] [ebp-4Ch] BYREF
  __m128 v54[4]; // [esp+4Ch] [ebp-40h] BYREF

  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "LtHeightField";
    v8[3] = "GetSpheres";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  v10 = *a1;
  v51 = *(int **)a2;
  sub_8B1FF0(v54, *(__m128 **)(a2 + 8), (__m128 *)a1[2]);
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v10 + 0x1C))(v10, &v52);
  v11 = ThreadLocalStoragePointer[v4];
  v12 = *(_DWORD **)(v11 + 0x19C);
  v49 = v52;
  if ( !v12 )
    v12 = (_DWORD *)dword_BA7D9C;
  v13 = v12[8];
  v50 = 0x10 * v52;
  v14 = (0x10 * v52 + 0x10) & 0xFFFFFFF0;
  if ( v13 + v14 > v12[0xB] )
  {
    v48 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, v14);
  }
  else
  {
    v12[8] = v13 + v14;
    v48 = v13;
  }
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( *(_DWORD *)(v15[TlsIndex] + 0x1A4) < *(_DWORD *)(v15[TlsIndex] + 0x1A8) )
  {
    v16 = *(_DWORD **)(v11 + 0x1A4);
    *v16 = "StgetSpheres";
    v17 = __rdtsc();
    v16[1] = v17;
    *(_DWORD *)(v11 + 0x1A4) = v16 + 3;
  }
  v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x20))(v10, v48);
  if ( *(_DWORD *)(v15[TlsIndex] + 0x1A4) < *(_DWORD *)(v15[TlsIndex] + 0x1A8) )
  {
    v19 = *(_DWORD **)(v11 + 0x1A4);
    *v19 = "Sttransform";
    v20 = __rdtsc();
    v19[1] = v20;
    *(_DWORD *)(v11 + 0x1A4) = v19 + 3;
  }
  v21 = v54[0];
  v22 = v54[1];
  v23 = v54[2];
  v24 = v54[3];
  v25 = v49;
  v26 = (__m128 *)v18;
  v27 = v48 - v18;
  do
  {
    v28 = v26->m128_f32[3];
    *(__m128 *)((char *)v26 + v27) = _mm_add_ps(
                                       _mm_add_ps(
                                         _mm_mul_ps(v21, _mm_shuffle_ps(*v26, *v26, 0)),
                                         _mm_mul_ps(v22, _mm_shuffle_ps(*v26, *v26, 0x55))),
                                       _mm_add_ps(_mm_mul_ps(v23, _mm_shuffle_ps(*v26, *v26, 0xAA)), v24));
    *(float *)((char *)&v26->m128_f32[3] + v27) = v28;
    ++v26;
    --v25;
  }
  while ( v25 > 0 );
  v29 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) )
  {
    v30 = *(_DWORD **)(v11 + 0x1A4);
    *v30 = "StCollide";
    v31 = __rdtsc();
    v30[1] = v31;
    *(_DWORD *)(v11 + 0x1A4) = v30 + 3;
  }
  v32 = *(_DWORD **)(v11 + 0x19C);
  if ( !v32 )
    v32 = (_DWORD *)dword_BA7D9C;
  v33 = v32[8];
  v34 = v33 + ((v50 + 0x10) & 0xFFFFFFF0);
  if ( v34 > v32[0xB] )
  {
    v35 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v32 + 0xC))(v32, (v50 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v32[8] = v34;
    v35 = v33;
  }
  v53[2] = *(_DWORD *)(a3 + 8);
  v53[0] = v48;
  v36 = *v51;
  v53[1] = v49;
  (*(void (__thiscall **)(int *, _DWORD *, int))(v36 + 0x1C))(v51, v53, v35);
  v37 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) )
  {
    v38 = *(_DWORD **)(v11 + 0x1A4);
    *v38 = "StExamine";
    v39 = __rdtsc();
    v38[1] = v39;
    *(_DWORD *)(v11 + 0x1A4) = v38 + 3;
  }
  v40 = v49 - 1;
  if ( v49 - 1 >= 0 )
  {
    v41 = (float *)(v35 + 0xC);
    while ( *v41 >= (double)*(float *)&SrcStr )
    {
      v41 += 4;
      if ( --v40 < 0 )
        goto LABEL_29;
    }
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a4 + 4))(a4, a1, a2);
  }
LABEL_29:
  v42 = *(_DWORD **)(v11 + 0x19C);
  if ( !v42 )
    v42 = (_DWORD *)dword_BA7D9C;
  v43 = v35 == v42[0xA];
  v42[8] = v35;
  if ( v43 )
    (*(void (__thiscall **)(_DWORD *, int))(*v42 + 0x10))(v42, v35);
  v44 = *(_DWORD **)(v11 + 0x19C);
  if ( !v44 )
    v44 = (_DWORD *)dword_BA7D9C;
  v43 = v48 == v44[0xA];
  v44[8] = v48;
  if ( v43 )
    (*(void (__thiscall **)(_DWORD *, int))(*v44 + 0x10))(v44, v48);
  LODWORD(v45) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
  {
    v46 = *(_DWORD **)(v11 + 0x1A4);
    *v46 = "lt";
    v45 = __rdtsc();
    v46[1] = v45;
    *(_DWORD *)(v11 + 0x1A4) = v46 + 3;
  }
  return v45;
}
