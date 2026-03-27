_DWORD *__cdecl sub_6F2460(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; i += 8 )
  {
    *i = *a3;
    result = sub_414420((int)(i + 1), a3 + 1, 0, 0xFFFFFFFF);
  }
  return result;
}
