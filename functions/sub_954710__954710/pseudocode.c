_DWORD *__thiscall sub_954710(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // esi
  _DWORD *v4; // ecx

  *(this + 0xE) = a2[0xA] - a2[9];
  *(this + 0xF) = a2[0xB];
  result = (_DWORD *)a2[0xB];
  v3 = 0;
  if ( (int)result > 0 )
  {
    v4 = this + 0x11;
    result = a2 + 0xC;
    do
    {
      v4[0xFFFFFFFF] = *result;
      *v4 = result[1] - *result;
      ++v3;
      ++result;
      ++v4;
    }
    while ( v3 < a2[0xB] );
  }
  return result;
}
