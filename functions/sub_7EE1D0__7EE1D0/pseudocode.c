_DWORD *__thiscall sub_7EE1D0(_DWORD *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 0x21); /*0x7ee1d0*/
  *(this + 0x24) = result; /*0x7ee1d8*/
  if ( result ) /*0x7ee1de*/
  {
    *(this + 0x24) = *result; /*0x7ee1e3*/
    return (_DWORD *)result[2]; /*0x7ee1e9*/
  }
  return result; /*0x7ee1e0*/
}
