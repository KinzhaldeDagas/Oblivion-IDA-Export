_DWORD *__thiscall sub_4324D0(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v4; // ecx

  result = (_DWORD *)FormHeapAlloc(0x14u);
  if ( !result )
    return 0;
  v4 = *(this + 4);
  result[2] = v4 + 8 * a2 + 4;
  *result = this;
  result[1] = 8 * a2 + v4;
  result[3] = 0;
  result[4] = 0;
  return result;
}
