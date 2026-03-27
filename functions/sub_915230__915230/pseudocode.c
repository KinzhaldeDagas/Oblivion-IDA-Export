_BYTE *__thiscall sub_915230(int *this, int a2, int a3, int a4)
{
  int v4; // edx
  _BYTE *result; // eax
  char v6; // [esp+Fh] [ebp-21h] BYREF
  __m128 v7; // [esp+10h] [ebp-20h] BYREF
  int v8; // [esp+24h] [ebp-Ch]

  v4 = *this;
  v8 = *(_DWORD *)(a4 + 4);
  result = (_BYTE *)(*(int (__thiscall **)(int *, char *, int, __m128 *))(v4 + 0x14))(this, &v6, a2, &v7);
  if ( *result )
  {
    sub_88FE00(&v7, *(__m128 **)(a3 + 8), &v7);
    return (**(_BYTE *(__thiscall ***)(int, int, __m128 *))a4)(a4, a3, &v7);
  }
  return result;
}
