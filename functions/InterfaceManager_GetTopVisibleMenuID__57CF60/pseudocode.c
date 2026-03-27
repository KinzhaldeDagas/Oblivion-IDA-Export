signed int __thiscall InterfaceManager::GetTopVisibleMenuID(_DWORD *this)
{
  signed int result; // eax
  _DWORD *i; // edx

  result = 0;
  for ( i = this + 0x38; *i; ++i )
  {
    if ( ++result >= 0xA )
      return *(this + 0x41);
  }
  if ( result )
    return *(this + result + 0x37);
  return result;
}
