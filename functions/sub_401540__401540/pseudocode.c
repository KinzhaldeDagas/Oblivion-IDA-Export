int (__cdecl *__thiscall sub_401540(_DWORD *this, int a2))(_DWORD, _DWORD, _DWORD)
{
  int (__cdecl *result)(_DWORD, _DWORD, _DWORD); // eax

  *(this + 0x13) += a2; /*0x401544*/
  result = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))*(this + 0x13); /*0x401549*/
  if ( a2 ) /*0x40154c*/
  {
    ++*(this + 0x12); /*0x40154e*/
    if ( (int)result > *(this + 0x14) ) /*0x401555*/
      *(this + 0x14) = result; /*0x401557*/
    result = dword_B02184; /*0x40155a*/
    if ( dword_B02184 ) /*0x401561*/
      return (int (__cdecl *)(_DWORD, _DWORD, _DWORD))dword_B02184(1, a2, 0); /*0x401568*/
  }
  else
  {
    --*(this + 0x12); /*0x401570*/
  }
  return result; /*0x40156d*/
}
