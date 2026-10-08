signed int __thiscall InterfaceManager::GetTopVisibleMenuID(_DWORD *this)
{
  signed int result; // eax
  _DWORD *i; // edx

  result = 0; /*0x57cf60*/
  for ( i = this + 0x38; *i; ++i ) /*0x57cf62*/
  {
    if ( ++result >= 0xA ) /*0x57cf76*/
      return *(this + 0x41); /*0x57cf7e*/
  }
  if ( result ) /*0x57cf8d*/
    return *(this + result + 0x37); /*0x57cf90*/
  return result; /*0x57cf7e*/
}
