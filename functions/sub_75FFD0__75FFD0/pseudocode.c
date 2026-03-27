_DWORD *sub_75FFD0()
{
  _DWORD *result; // eax

  result = (_DWORD *)FormHeapAlloc(0x18u);
  if ( result )
  {
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 8;
    result[4] = 8;
    result[5] = 0;
    dword_B42044 = (int)result;
  }
  else
  {
    dword_B42044 = 0;
  }
  return result;
}
