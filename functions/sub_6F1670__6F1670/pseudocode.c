_DWORD *__cdecl sub_6F1670(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a1;
  if ( a1 )
  {
    *a1 = *a2;
    a1[7] = 0xF;
    a1[6] = 0;
    *((_BYTE *)a1 + 8) = 0;
    return sub_414420((int)(a1 + 1), a2 + 1, 0, 0xFFFFFFFF);
  }
  return result;
}
