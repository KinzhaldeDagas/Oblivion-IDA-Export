_DWORD *__cdecl sub_6F24A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; i += 0xB )
  {
    *i = *a3;
    i[1] = a3[1];
    i[2] = a3[2];
    i[3] = a3[3];
    result = sub_414420((int)(i + 4), a3 + 4, 0, 0xFFFFFFFF);
  }
  return result;
}
