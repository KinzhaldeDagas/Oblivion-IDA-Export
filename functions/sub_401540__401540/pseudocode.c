int (__cdecl *__thiscall sub_401540(_DWORD *this, int a2))(_DWORD, _DWORD, _DWORD)
{
  int (__cdecl *result)(_DWORD, _DWORD, _DWORD); // eax

  *(this + 0x13) += a2;
  result = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))*(this + 0x13);
  if ( a2 )
  {
    ++*(this + 0x12);
    if ( (int)result > *(this + 0x14) )
      *(this + 0x14) = result;
    result = dword_B02184;
    if ( dword_B02184 )
      return (int (__cdecl *)(_DWORD, _DWORD, _DWORD))dword_B02184(1, a2, 0);
  }
  else
  {
    --*(this + 0x12);
  }
  return result;
}
