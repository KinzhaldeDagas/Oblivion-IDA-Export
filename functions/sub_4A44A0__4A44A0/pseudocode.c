char __thiscall sub_4A44A0(_DWORD *this)
{
  char result; // al

  if ( this ) /*0x4a44a5*/
  {
    while ( *this ) /*0x4a44ab*/
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x1C))(*this); /*0x4a44b2*/
      if ( !result ) /*0x4a44b6*/
        return result; /*0x4a44b6*/
    }
  }
  return 1; /*0x4a44b8*/
}
