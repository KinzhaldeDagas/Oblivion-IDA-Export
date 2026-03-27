unsigned int __cdecl sub_742370(_DWORD *a1)
{
  _DWORD *v1; // eax

  if ( !a1 )
    return 0xFFFFFFFE;
  v1 = (_DWORD *)a1[7];
  if ( !v1 )
    return 0xFFFFFFFE;
  v1[6] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[6] = 0;
  *v1 = 0;
  v1[1] = 0;
  v1[3] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[0xC] = 0;
  v1[0xD] = 0;
  v1[0x19] = v1 + 0x14A;
  v1[0x12] = v1 + 0x14A;
  v1[0x11] = v1 + 0x14A;
  return 0;
}
