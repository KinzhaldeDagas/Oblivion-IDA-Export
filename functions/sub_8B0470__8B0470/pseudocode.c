_DWORD *__thiscall sub_8B0470(_DWORD *this, int a2)
{
  int v2; // eax
  _DWORD *result; // eax

  if ( this && (v2 = *(this + 2)) != 0 )
    result = *(_DWORD **)(v2 + 0xC);
  else
    result = 0;
  if ( result )
  {
    result = (_DWORD *)result[2];
    if ( result )
      return (*(_DWORD *(__thiscall **)(_DWORD *, int))(*result + 0x90))(result, a2);
  }
  return result;
}
