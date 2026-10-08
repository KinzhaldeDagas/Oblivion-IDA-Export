int __thiscall sub_46AAD0(_DWORD *this, char a2)
{
  if ( a2 ) /*0x46aad5*/
    *(this + 2) |= 0x10000u; /*0x46aad7*/
  else
    *(this + 2) &= ~0x10000u; /*0x46aae0*/
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 1);
}
