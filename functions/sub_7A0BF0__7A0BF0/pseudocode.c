_DWORD *__cdecl sub_7A0BF0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; i += 4 )
    result = sub_79FB80(i, a3);
  return result;
}
