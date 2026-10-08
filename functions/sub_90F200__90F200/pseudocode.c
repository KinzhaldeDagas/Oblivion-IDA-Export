int __thiscall sub_90F200(__m128 *this, __m128 *a2, __m128 *a3, int a4, int a5)
{
  int v6; // ecx
  __int32 v7; // edx
  __int32 v8; // ecx
  int v9; // eax
  __int32 v10; // ecx
  int result; // eax
  int v12; // edi
  float v13; // [esp+0h] [ebp-78h]
  _DWORD v14[7]; // [esp+Ch] [ebp-6Ch] BYREF
  __m128 v15; // [esp+28h] [ebp-50h] BYREF
  __m128 v16; // [esp+38h] [ebp-40h]
  __m128 v17[2]; // [esp+48h] [ebp-30h] BYREF
  int i; // [esp+68h] [ebp-10h]
  int v19; // [esp+70h] [ebp-8h]

  v6 = *((_DWORD *)this + 5); /*0x90f217*/
  v7 = this->m128_i32[2]; /*0x90f21f*/
  *(this + 0xA) = *a2; /*0x90f222*/
  v13 = *(float *)(*(_DWORD *)(v7 + 0x74) + 8) * kHeadBodyNormalMatchRadius + a3[1].m128_f32[1]; /*0x90f23e*/
  (*(void (__stdcall **)(__m128 *, _DWORD, __m128 *))(*(_DWORD *)v6 + 0xC))(this + 7, LODWORD(v13), &v15); /*0x90f242*/
  *(__m128 *)&v14[3] = _mm_sub_ps(*a3, *a2); /*0x90f25c*/
  v15 = _mm_add_ps(v15, _mm_min_ps((__m128)0LL, *(__m128 *)&v14[3])); /*0x90f276*/
  v16 = _mm_add_ps(v16, _mm_max_ps((__m128)0LL, *(__m128 *)&v14[3])); /*0x90f27b*/
  sub_8DE950(this, (int)&v15); /*0x90f280*/
  v8 = this->m128_i32[2]; /*0x90f285*/
  i = 0x34000000; /*0x90f288*/
  v9 = *(_DWORD *)(v8 + 0x74); /*0x90f290*/
  v17[0].m128_u64[0] = *(_QWORD *)v9; /*0x90f297*/
  v17[0].m128_i32[2] = *(_DWORD *)(v9 + 8); /*0x90f2a5*/
  v10 = a3[1].m128_i32[1]; /*0x90f2ac*/
  v17[0].m128_i32[3] = *(_DWORD *)(v9 + 0xC); /*0x90f2af*/
  v19 = *(_DWORD *)(v9 + 0x20); /*0x90f2c0*/
  sub_8D9870(v17, (__m128 *)&v14[3], v10); /*0x90f2c4*/
  result = a3[1].m128_i32[0]; /*0x90f2c9*/
  v12 = *((_DWORD *)this + 0x49) - 1; /*0x90f2d2*/
  for ( i = result; v12 >= 0; --v12 ) /*0x90f2d7*/
    result = (*(int (__thiscall **)(_DWORD, char *, _DWORD, __m128 *, int, int))(**(_DWORD **)(*((_DWORD *)this + 0x48) /*0x90f302*/
                                                                                             + 8 * v12)
                                                                               + 0x10))(
               *(_DWORD *)(*((_DWORD *)this + 0x48) + 8 * v12),
               (char *)this + 0x14,
               *(_DWORD *)(*((_DWORD *)this + 0x48) + 8 * v12 + 4),
               v17,
               a4,
               a5);
  return result; /*0x90f30a*/
}
