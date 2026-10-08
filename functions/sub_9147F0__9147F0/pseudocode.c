_BYTE *__thiscall sub_9147F0(int *this, int a2, int a3, int a4)
{
  int v4; // edx
  _BYTE *result; // eax
  __m128 *v6; // eax
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  _BYTE *(__thiscall **v10)(int, int, char *); // eax
  char v11[28]; // [esp+4h] [ebp-2Ch] BYREF
  int v12; // [esp+20h] [ebp-10h]
  int v13; // [esp+24h] [ebp-Ch]

  v4 = *this; /*0x9147f9*/
  v13 = *(_DWORD *)(a4 + 4); /*0x914802*/
  result = (_BYTE *)(*(int (__thiscall **)(int *, char *, int, char *))(v4 + 0x14))(this, &v11[0xB], a2, &v11[0xC]); /*0x914814*/
  if ( *result ) /*0x914817*/
  {
    v6 = *(__m128 **)(a3 + 8); /*0x914824*/
    v12 = *(_DWORD *)(a3 + 4); /*0x914831*/
    v7 = _mm_mul_ps(v6[2], _mm_shuffle_ps(*(__m128 *)&v11[0xC], *(__m128 *)&v11[0xC], 0xAA)); /*0x91483d*/
    v8 = _mm_mul_ps(v6[1], _mm_shuffle_ps(*(__m128 *)&v11[0xC], *(__m128 *)&v11[0xC], 0x55)); /*0x914847*/
    v9 = *v6; /*0x914851*/
    v10 = *(_BYTE *(__thiscall ***)(int, int, char *))a4; /*0x914854*/
    *(__m128 *)&v11[0xC] = _mm_add_ps( /*0x914867*/
                             _mm_add_ps(
                               _mm_mul_ps(v9, _mm_shuffle_ps(*(__m128 *)&v11[0xC], *(__m128 *)&v11[0xC], 0)),
                               v8),
                             v7);
    return (*v10)(a4, a3, &v11[0xC]); /*0x91486c*/
  }
  return result; /*0x91486e*/
}
