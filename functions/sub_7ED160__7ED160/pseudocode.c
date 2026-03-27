_DWORD *__thiscall sub_7ED160(_DWORD *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 0x1C);
  *(this + 0x1F) = result;
  if ( result )
  {
    *(this + 0x1F) = *result;
    return (_DWORD *)result[2];
  }
  return result;
}
