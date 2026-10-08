bool __thiscall sub_5E6B70(_DWORD **this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x5e6b8d*/
  if ( *(this + 0x16) ) /*0x5e6b70*/
  {
    v1 = (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x184))(*(this + 0x16)); /*0x5e6b81*/
    if ( v1 ) /*0x5e6b85*/
    {
      if ( *(_BYTE *)(v1 + 0x20) == 0x13 ) /*0x5e6b8b*/
        return 1; /*0x5e6b74*/
    }
  }
  return result; /*0x5e6b8f*/
}
