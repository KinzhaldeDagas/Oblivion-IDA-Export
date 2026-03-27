int __thiscall sub_93F5E0(__m128 *this, int *a2, int *a3, int a4, int a5)
{
  int v5; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // ebx
  int v16; // edi
  __int32 v17; // eax
  __int32 v18; // edx
  double v19; // st7
  _DWORD *v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // esi
  _DWORD *v23; // ecx
  signed int v25; // [esp+20h] [ebp-1D8h]
  __m128 v27; // [esp+28h] [ebp-1D0h] BYREF
  __m128 v28; // [esp+38h] [ebp-1C0h] BYREF
  char v29; // [esp+48h] [ebp-1B0h]
  int v30; // [esp+4Ch] [ebp-1ACh]
  char v31[192]; // [esp+58h] [ebp-1A0h] BYREF
  char v32[160]; // [esp+118h] [ebp-E0h] BYREF
  __m128 v33[4]; // [esp+1B8h] [ebp-40h] BYREF

  v5 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "LtGsk";
    v9[3] = &off_AA1E60;
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
  }
  v11 = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
  {
    v12 = ThreadLocalStoragePointer[v5];
    v13 = *(_DWORD **)(v11 + 0x1A4);
    *v13 = "StSepNormal";
    v14 = __rdtsc();
    v13[1] = v14;
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3;
  }
  v15 = *a3;
  v16 = *a2;
  sub_8B1FF0(v33, (__m128 *)a2[2], (__m128 *)a3[2]);
  v17 = *((char *)this + 0x14);
  v18 = *((char *)this + 0x16);
  v28.m128_i32[1] = *((char *)this + 0x15);
  v28.m128_i32[3] = *((char *)this + 0x17);
  v29 = 1;
  v28.m128_i32[0] = v17;
  v28.m128_i32[2] = v18;
  v30 = 0;
  (*(void (__thiscall **)(int, float *, __int32, char *))(*(_DWORD *)v16 + 0x28))(v16, &this->m128_f32[3], v17, v31);
  (*(void (__thiscall **)(int, __int8 *, __int32, char *))(*(_DWORD *)v15 + 0x28))(
    v15,
    &this->m128_i8[2 * v28.m128_i32[0] + 0xC],
    v28.m128_i32[1],
    v32);
  v25 = sub_93C690(&v28, (int *)v16, (int *)v15, v33, &v27);
  if ( v30 )
    sub_93B660(&v28, (int)&this->m128_i32[3]);
  if ( v25 )
  {
    *((_OWORD *)this + 2) = 0;
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a5 + 4))(a5, a2, a3);
  }
  else
  {
    v19 = v27.m128_f32[3] - *(float *)(v16 + 0xC) - *(float *)(v15 + 0xC);
    *(this + 2) = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(*(__m128 *)a2[2], _mm_shuffle_ps(v27, v27, 0)),
                      _mm_mul_ps(*(__m128 *)(a2[2] + 0x10), _mm_shuffle_ps(v27, v27, 0x55))),
                    _mm_mul_ps(*(__m128 *)(a2[2] + 0x20), _mm_shuffle_ps(v27, v27, 0xAA)));
    *((float *)this + 0xB) = v19;
    if ( v19 < *(float *)&SrcStr )
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a5 + 4))(a5, a2, a3);
  }
  v20 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v21) = v20[TlsIndex];
  if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) )
  {
    v22 = v20[TlsIndex];
    v23 = *(_DWORD **)(v21 + 0x1A4);
    *v23 = "lt";
    v21 = __rdtsc();
    v23[1] = v21;
    *(_DWORD *)(v22 + 0x1A4) = v23 + 3;
  }
  return v21;
}
