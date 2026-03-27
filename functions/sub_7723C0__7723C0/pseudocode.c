_DWORD *sub_7723C0()
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
    dword_B4275C = (int)result;
  }
  else
  {
    dword_B4275C = 0;
  }
  return result;
}
