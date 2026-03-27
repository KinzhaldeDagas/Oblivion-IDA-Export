_DWORD *__thiscall sub_77FEA0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this + 0x48;
  v2 = 0x100;
  do
  {
    result[1] = *result;
    result += 2;
    --v2;
  }
  while ( v2 );
  return result;
}
