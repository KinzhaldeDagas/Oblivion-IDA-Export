double __thiscall sub_8D96B0(__m128 *this, int a2, int a3)
{
  int *v3; // ebx
  bool v4; // zf
  __int32 v6; // esi
  int (__thiscall ***v7)(_DWORD, char *, int, int *); // ecx
  int (__thiscall **v8)(_DWORD, char *, int, int *); // edx
  __m128 *v9; // esi
  __m128 v10; // xmm3
  __int32 v11; // ecx
  __m128 v12; // xmm5
  __m128 v13; // xmm0
  __m128 *v14; // eax
  __m128 v15; // xmm4
  __m128 v16; // xmm2
  __m128 v17; // xmm5
  int v18; // ecx
  __m128 v19; // xmm3
  __m128 v20; // xmm5
  __m128 v21; // xmm0
  __m128 v22; // xmm4
  __m128 v23; // xmm1
  __m128 *v24; // eax
  char v26; // [esp+17h] [ebp-9h] BYREF
  int v27; // [esp+18h] [ebp-8h]
  int v28; // [esp+1Ch] [ebp-4h]

  v3 = (int *)(a2 + *(char *)(a2 + 5)); /*0x8d96c1*/
  v4 = *v3 == 0; /*0x8d96c5*/
  v27 = *v3; /*0x8d96cb*/
  if ( v4 ) /*0x8d96cf*/
    return *(float *)(this->m128_i32[3] + 0x14); /*0x8d96cf*/
  v6 = this->m128_i32[1]; /*0x8d96d8*/
  v7 = (int (__thiscall ***)(_DWORD, char *, int, int *))this->m128_i32[2]; /*0x8d96db*/
  v8 = *v7; /*0x8d96de*/
  v28 = 0x30 * a3; /*0x8d96e9*/
  if ( !*(_BYTE *)(*v8)(v7, &v26, 0x30 * a3 + v6, v3) ) /*0x8d96f5*/
    return *(float *)(this->m128_i32[3] + 0x14); /*0x8d985b*/
  v9 = (__m128 *)v3[2]; /*0x8d96fe*/
  v10 = v9[2]; /*0x8d9701*/
  v11 = this->m128_i32[1]; /*0x8d9705*/
  v12 = v9[1]; /*0x8d9717*/
  v13 = _mm_sub_ps(*(__m128 *)(v11 + v28), v9[3]); /*0x8d971b*/
  v14 = (__m128 *)(v11 + v28); /*0x8d971e*/
  v15 = _mm_shuffle_ps(v10, v10, 0x44); /*0x8d9724*/
  v16 = _mm_shuffle_ps(*v9, v12, 0xEE); /*0x8d9736*/
  v17 = _mm_shuffle_ps(*v9, v12, 0x44); /*0x8d973a*/
  v18 = v27; /*0x8d973d*/
  *(this + 1) = _mm_add_ps( /*0x8d9771*/
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v17, v15, 0x88), _mm_shuffle_ps(v13, v13, 0)),
                    _mm_mul_ps(_mm_shuffle_ps(v17, v15, 0xDD), _mm_shuffle_ps(v13, v13, 0x55))),
                  _mm_mul_ps(_mm_shuffle_ps(v16, _mm_shuffle_ps(v10, v10, 0xEE), 0x88), _mm_shuffle_ps(v13, v13, 0xAA)));
  v19 = v9[2]; /*0x8d9775*/
  v20 = v9[1]; /*0x8d9784*/
  v21 = _mm_sub_ps(v14[1], v9[3]); /*0x8d9788*/
  v22 = _mm_shuffle_ps(v19, v19, 0x44); /*0x8d9791*/
  v23 = _mm_shuffle_ps(*v9, v20, 0x44); /*0x8d979b*/
  *(this + 2) = _mm_add_ps( /*0x8d97da*/
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v23, v22, 0x88), _mm_shuffle_ps(v21, v21, 0)),
                    _mm_mul_ps(_mm_shuffle_ps(v23, v22, 0xDD), _mm_shuffle_ps(v21, v21, 0x55))),
                  _mm_mul_ps(
                    _mm_shuffle_ps(_mm_shuffle_ps(*v9, v20, 0xEE), _mm_shuffle_ps(v19, v19, 0xEE), 0x88),
                    _mm_shuffle_ps(v21, v21, 0xAA)));
  *((_DWORD *)this + 0xC) = v14[2].m128_i32[1]; /*0x8d97e1*/
  if ( *(_BYTE *)(*(int (__thiscall **)(int, char *, __m128 *, __int32))(*(_DWORD *)v18 + 0x14))( /*0x8d97f7*/
                   v27,
                   &v26,
                   this + 1,
                   this->m128_i32[3]) )
  {
    *(_DWORD *)(this->m128_i32[3] + 0x20) = v3; /*0x8d97ff*/
    v24 = (__m128 *)this->m128_i32[3]; /*0x8d9802*/
    *v24 = _mm_add_ps( /*0x8d9837*/
             _mm_add_ps(
               _mm_mul_ps(*v9, _mm_shuffle_ps(*v24, *v24, 0)),
               _mm_mul_ps(v9[1], _mm_shuffle_ps(*v24, *v24, 0x55))),
             _mm_mul_ps(v9[2], _mm_shuffle_ps(*v24, *v24, 0xAA)));
    return *(float *)(this->m128_i32[3] + 0x14); /*0x8d9846*/
  }
  return *(float *)(this->m128_i32[3] + 0x14); /*0x8d9840*/
}
