_BYTE *__thiscall sub_773240(_DWORD *this)
{
  _BYTE *result; // eax
  int v2; // edx

  result = this + 0x17;
  v2 = 8;
  do
  {
    result[0xFFFFFFD0] = 0;
    *result++ = 0;
    --v2;
  }
  while ( v2 );
  *(this + 0xD) = 0;
  *(this + 1) = 0;
  return result;
}
