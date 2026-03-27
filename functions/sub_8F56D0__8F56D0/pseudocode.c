_BYTE *__thiscall sub_8F56D0(int *this, int a2, int a3, int a4)
{
  int v4; // edx
  _BYTE *result; // eax
  _BYTE *(__thiscall **v6)(int, int, char *); // edx
  char v7[32]; // [esp+4h] [ebp-2Ch] BYREF
  int v8; // [esp+24h] [ebp-Ch]

  v4 = *this;
  v8 = *(_DWORD *)(a4 + 4);
  result = (_BYTE *)(*(int (__thiscall **)(int *, char *, int, char *))(v4 + 0x14))(this, &v7[0xB], a2, &v7[0xC]);
  if ( *result )
  {
    v6 = *(_BYTE *(__thiscall ***)(int, int, char *))a4;
    *(__m128 *)&v7[0xC] = _mm_add_ps(
                            _mm_add_ps(
                              _mm_mul_ps(
                                *(__m128 *)*(_DWORD *)(a3 + 8),
                                _mm_shuffle_ps(*(__m128 *)&v7[0xC], *(__m128 *)&v7[0xC], 0)),
                              _mm_mul_ps(
                                *(__m128 *)(*(_DWORD *)(a3 + 8) + 0x10),
                                _mm_shuffle_ps(*(__m128 *)&v7[0xC], *(__m128 *)&v7[0xC], 0x55))),
                            _mm_mul_ps(
                              *(__m128 *)(*(_DWORD *)(a3 + 8) + 0x20),
                              _mm_shuffle_ps(*(__m128 *)&v7[0xC], *(__m128 *)&v7[0xC], 0xAA)));
    return (*v6)(a4, a3, &v7[0xC]);
  }
  return result;
}
