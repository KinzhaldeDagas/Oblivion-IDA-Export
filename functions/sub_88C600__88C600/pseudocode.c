int __thiscall sub_88C600(__m128 *this, __m128 *a2)
{
  int (__thiscall *v3)(__m128 *); // edx
  __m128 v4; // xmm0
  int v5; // edi
  __m128 v6; // xmm0
  int result; // eax
  int v8; // ecx
  _BYTE v9[28]; // [esp+18h] [ebp-4Ch] BYREF
  __m128 v10; // [esp+34h] [ebp-30h] BYREF
  unsigned int v11; // [esp+60h] [ebp-4h]

  *(_QWORD *)v9 = 0;
  *(_DWORD *)&v9[8] = 0x80000000;
  v3 = *(int (__thiscall **)(__m128 *))(this->m128_i32[0] + 0x58);
  v4 = _mm_sub_ps(*a2, *(this + 5));
  v11 = 0;
  v10 = v4;
  v5 = v3(this);
  (*(void (__thiscall **)(__m128 *))(this->m128_i32[0] + 0x58))(this);
  (*(void (__thiscall **)(_DWORD, __m128 *, _BYTE *, _BYTE *))(**(_DWORD **)(v5 + 0x64) + 0x34))(
    *(_DWORD *)(v5 + 0x64),
    &v10,
    &v9[0xC],
    v9);
  v6 = *(__m128 *)&v9[0xC];
  *(this + 5) = _mm_add_ps(*(this + 5), *(__m128 *)&v9[0xC]);
  *(__m128 *)(v5 + 0x280) = _mm_add_ps(*(__m128 *)(v5 + 0x280), v6);
  *(__m128 *)(v5 + 0x290) = _mm_add_ps(*(__m128 *)(v5 + 0x290), *(__m128 *)&v9[0xC]);
  (*(void (__thiscall **)(__m128 *))(this->m128_i32[0] + 0x58))(this);
  result = *(_DWORD *)&v9[8];
  v11 = 0xFFFFFFFF;
  if ( *(int *)&v9[8] >= 0 )
  {
    v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v8 )
      v8 = dword_BA7D9C;
    return sub_8A75D0(v8, *(_DWORD **)v9, 4 * *(_DWORD *)&v9[8], 0x14);
  }
  return result;
}
