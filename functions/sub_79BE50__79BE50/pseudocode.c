_DWORD *__cdecl sub_79BE50(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; i += 4 )
    result = sub_79B2F0(i, a3);
  return result;
}
