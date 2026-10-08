int __thiscall sub_8A7210(_DWORD *this)
{
  int result; // eax

  if ( (*(this + 5))-- == 1 ) /*0x8a7210*/
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 8))(this, 1); /*0x8a7219*/
  return result; /*0x8a721c*/
}
