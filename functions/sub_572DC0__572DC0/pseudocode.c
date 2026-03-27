_DWORD *__thiscall sub_572DC0(_DWORD *this)
{
  _DWORD *result; // eax
  int *v2; // edx

  result = this;
  *this = 0;
  *(this + 1) = 0;
  v2 = &dword_B12DD0;
  do
  {
    *((float *)v2 + 1) = 0.0;
    *((_BYTE *)v2 + 0xFFFFFFF8) = 0;
    *v2 = 0;
    v2 += 6;
  }
  while ( (int)v2 < (int)&dword_B12E18 );
  return result;
}
