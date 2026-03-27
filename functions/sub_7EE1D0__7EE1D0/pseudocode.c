_DWORD *__thiscall sub_7EE1D0(_DWORD *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 0x21);
  *(this + 0x24) = result;
  if ( result )
  {
    *(this + 0x24) = *result;
    return (_DWORD *)result[2];
  }
  return result;
}
