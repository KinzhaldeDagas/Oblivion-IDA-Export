int __thiscall sub_46AAB0(_DWORD *this, char a2)
{
  if ( a2 ) /*0x46aab5*/
    *(this + 2) |= 0x40u; /*0x46aab7*/
  else
    *(this + 2) &= ~0x40u; /*0x46aabd*/
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x40))(this, 1);
}
