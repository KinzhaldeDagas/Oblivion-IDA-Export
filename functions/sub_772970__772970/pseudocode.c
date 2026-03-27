_DWORD *sub_772970()
{
  _DWORD *v0; // eax
  _DWORD *result; // eax

  v0 = (_DWORD *)FormHeapAlloc(0x18u);
  if ( v0 )
  {
    *v0 = 0;
    v0[1] = 0;
    v0[2] = 0;
    v0[3] = 8;
    v0[4] = 8;
    v0[5] = 0;
    dword_B427A8 = (int)v0;
  }
  else
  {
    dword_B427A8 = 0;
  }
  result = (_DWORD *)FormHeapAlloc(0x18u);
  if ( result )
  {
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[5] = 0;
    result[3] = 0x10;
    result[4] = 0x10;
    dword_B427AC = (int)result;
  }
  else
  {
    dword_B427AC = 0;
  }
  return result;
}
