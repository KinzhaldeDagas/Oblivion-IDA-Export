_DWORD *__thiscall sub_88C600(__m128 *this, __m128 *a2)
{
  int (__thiscall *v3)(__m128 *); // edx
  __m128 v4; // xmm0
  int v5; // edi
  __m128 v6; // xmm0
  _DWORD *result; // eax
  int v8; // ecx
  _DWORD *v9[7]; // [esp+18h] [ebp-4Ch] BYREF
  __m128 v10; // [esp+34h] [ebp-30h] BYREF
  unsigned int v11; // [esp+60h] [ebp-4h]

  v9[0] = 0; /*0x88c63b*/
  v9[1] = 0; /*0x88c643*/
  v9[2] = (_DWORD *)0x80000000; /*0x88c64b*/
  v3 = *(int (__thiscall **)(__m128 *))(this->m128_i32[0] + 0x58); /*0x88c65c*/
  v4 = _mm_sub_ps(*a2, *(this + 5)); /*0x88c65f*/
  v11 = 0; /*0x88c662*/
  v10 = v4; /*0x88c66a*/
  v5 = v3(this); /*0x88c671*/
  (*(void (__thiscall **)(__m128 *))(this->m128_i32[0] + 0x58))(this); /*0x88c67a*/
  (*(void (__thiscall **)(_DWORD, __m128 *, _DWORD **, _DWORD **))(**(_DWORD **)(v5 + 0x64) + 0x34))( /*0x88c693*/
    *(_DWORD *)(v5 + 0x64),
    &v10,
    &v9[3],
    v9);
  v6 = *(__m128 *)&v9[3]; /*0x88c695*/
  *(this + 5) = _mm_add_ps(*(this + 5), *(__m128 *)&v9[3]); /*0x88c6a1*/
  *(__m128 *)(v5 + 0x280) = _mm_add_ps(*(__m128 *)(v5 + 0x280), v6); /*0x88c6af*/
  *(__m128 *)(v5 + 0x290) = _mm_add_ps(*(__m128 *)(v5 + 0x290), *(__m128 *)&v9[3]); /*0x88c6c5*/
  (*(void (__thiscall **)(__m128 *))(this->m128_i32[0] + 0x58))(this); /*0x88c6d3*/
  result = v9[2]; /*0x88c6d5*/
  v11 = 0xFFFFFFFF; /*0x88c6db*/
  if ( (int)v9[2] >= 0 ) /*0x88c6e3*/
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x88c6f5*/
    if ( !v8 ) /*0x88c6fd*/
      v8 = unk_BA7D9C; /*0x88c6ff*/
    return (_DWORD *)sub_8A75D0(v8, v9[0], 4 * (int)v9[2], 0x14); /*0x88c716*/
  }
  return result; /*0x88c71b*/
}
