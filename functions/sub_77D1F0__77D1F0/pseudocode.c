_DWORD *__cdecl sub_77D1F0(_DWORD *a1)
{
  _DWORD *result; // eax
  bool v2; // zf

  result = a1;
  v2 = a1[2] >= 0;
  a1[5] = 8;
  a1[6] = 1;
  if ( !v2 )
    a1[5] = 0x18;
  return result;
}
