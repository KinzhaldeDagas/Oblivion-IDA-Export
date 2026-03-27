_DWORD *__cdecl sub_6F16F0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a1;
  if ( a1 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = a2[3];
    a1[0xA] = 0xF;
    a1[9] = 0;
    *((_BYTE *)a1 + 0x14) = 0;
    return sub_414420((int)(a1 + 4), a2 + 4, 0, 0xFFFFFFFF);
  }
  return result;
}
