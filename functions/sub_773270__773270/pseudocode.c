_BYTE *__thiscall sub_773270(_DWORD *this)
{
  _BYTE *result; // eax
  int v2; // esi

  result = this + 0x29;
  v2 = 5;
  do
  {
    result[0xFFFFFFDC] = 0;
    *result = 0;
    result[0xC] = 0;
    ++result;
    --v2;
  }
  while ( v2 );
  *(this + 0x22) = 0;
  *(this + 0x19) = 0;
  *(this + 0x2B) = 0;
  return result;
}
