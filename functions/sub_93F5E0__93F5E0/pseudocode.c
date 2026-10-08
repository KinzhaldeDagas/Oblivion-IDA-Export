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

  v5 = MEMORY[0xBA9DE4]; /*0x93f5ed*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93f5f5*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f5fc*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x93f611*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93f613*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x93f615*/
    *v9 = "LtGsk"; /*0x93f61b*/
    v9[3] = &off_AA1E60; /*0x93f621*/
    v10 = __rdtsc(); /*0x93f628*/
    v9[1] = v10; /*0x93f632*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x93f638*/
  }
  v11 = ThreadLocalStoragePointer[v5]; /*0x93f63e*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x93f64d*/
  {
    v12 = ThreadLocalStoragePointer[v5]; /*0x93f64f*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x93f651*/
    *v13 = "StSepNormal"; /*0x93f657*/
    v14 = __rdtsc(); /*0x93f65d*/
    v13[1] = v14; /*0x93f667*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x93f66d*/
  }
  v15 = *a3; /*0x93f676*/
  v16 = *a2; /*0x93f681*/
  sub_8B1FF0(v33, (__m128 *)a2[2], (__m128 *)a3[2]); /*0x93f68c*/
  v17 = *((char *)this + 0x14); /*0x93f699*/
  v18 = *((char *)this + 0x16); /*0x93f69d*/
  v28.m128_i32[1] = *((char *)this + 0x15); /*0x93f6a4*/
  v28.m128_i32[3] = *((char *)this + 0x17); /*0x93f6ac*/
  v29 = 1; /*0x93f6b6*/
  v28.m128_i32[0] = v17; /*0x93f6bb*/
  v28.m128_i32[2] = v18; /*0x93f6bf*/
  v30 = 0; /*0x93f6c3*/
  (*(void (__thiscall **)(int, unsigned __int32 *, __int32, char *))(*(_DWORD *)v16 + 0x28))( /*0x93f6d0*/
    v16,
    &this->m128_u32[3],
    v17,
    v31);
  (*(void (__thiscall **)(int, __int8 *, __int32, char *))(*(_DWORD *)v15 + 0x28))( /*0x93f6ec*/
    v15,
    &this->m128_i8[2 * v28.m128_i32[0] + 0xC],
    v28.m128_i32[1],
    v32);
  v25 = sub_93C690(&v28, (int *)v16, (int *)v15, v33, &v27); /*0x93f707*/
  if ( v30 ) /*0x93f711*/
    sub_93B660(&v28, (int)&this->m128_i32[3]); /*0x93f718*/
  if ( v25 ) /*0x93f723*/
  {
    *((_OWORD *)this + 2) = 0; /*0x93f79a*/
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a5 + 4))(a5, a2, a3); /*0x93f7a8*/
  }
  else
  {
    v19 = v27.m128_f32[3] - *(float *)(v16 + 0xC) - *(float *)(v15 + 0xC); /*0x93f73f*/
    *(this + 2) = _mm_add_ps( /*0x93f76d*/
                    _mm_add_ps(
                      _mm_mul_ps(*(__m128 *)a2[2], _mm_shuffle_ps(v27, v27, 0)),
                      _mm_mul_ps(*(__m128 *)(a2[2] + 0x10), _mm_shuffle_ps(v27, v27, 0x55))),
                    _mm_mul_ps(*(__m128 *)(a2[2] + 0x20), _mm_shuffle_ps(v27, v27, 0xAA)));
    *((float *)this + 0xB) = v19; /*0x93f771*/
    if ( v19 < *(float *)&SrcStr ) /*0x93f77f*/
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a5 + 4))(a5, a2, a3); /*0x93f78b*/
  }
  v20 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93f7ab*/
  LODWORD(v21) = v20[MEMORY[0xBA9DE4]]; /*0x93f7b8*/
  if ( *(_DWORD *)(v21 + 0x1A4) < *(_DWORD *)(v21 + 0x1A8) ) /*0x93f7c7*/
  {
    v22 = v20[MEMORY[0xBA9DE4]]; /*0x93f7c9*/
    v23 = *(_DWORD **)(v21 + 0x1A4); /*0x93f7cb*/
    *v23 = "lt"; /*0x93f7d1*/
    v21 = __rdtsc(); /*0x93f7d7*/
    v23[1] = v21; /*0x93f7e1*/
    *(_DWORD *)(v22 + 0x1A4) = v23 + 3; /*0x93f7e7*/
  }
  return v21; /*0x93f7ed*/
}
