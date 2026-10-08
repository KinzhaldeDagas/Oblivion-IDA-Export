char __thiscall sub_4E8AF0(_DWORD **this, _DWORD *a2)
{
  char result; // al

  result = 0; /*0x4e8af4*/
  if ( a2 ) /*0x4e8af8*/
  {
    if ( *a2 == dword_B05E20 ) /*0x4e8b04*/
    {
      if ( (unsigned int)(a2[3] - 4) > 1 ) /*0x4e8b0f*/
        return (*(char (__thiscall **)(_DWORD, _DWORD *))(**(this + 0xB) + 0x30))(*(this + 0xB), a2); /*0x4e8b22*/
      else
        return 1; /*0x4e8b11*/
    }
  }
  return result; /*0x4e8b13*/
}
