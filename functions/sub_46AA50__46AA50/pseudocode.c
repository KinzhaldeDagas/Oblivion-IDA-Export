int __thiscall sub_46AA50(_DWORD *this, char a2)
{
  if ( a2 ) /*0x46aa55*/
    *(this + 2) |= 0x2000u; /*0x46aa57*/
  else
    *(this + 2) &= ~0x2000u; /*0x46aa60*/
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 1);
}
