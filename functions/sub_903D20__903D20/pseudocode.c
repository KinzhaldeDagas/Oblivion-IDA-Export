int __thiscall sub_903D20(int (__thiscall ***this)(void *, int))
{
  if ( *(this + 7) == (int (__thiscall **)(void *, int))0x1A ) /*0x903d27*/
    (*((void (__thiscall **)(_DWORD, _DWORD, _DWORD))**(this + 5) + 8))(*(this + 5), *(this + 3), *(this + 4)); /*0x903d36*/
  if ( *(this + 8) == (int (__thiscall **)(void *, int))0x1A ) /*0x903d3d*/
    (*((void (__thiscall **)(_DWORD, _DWORD, _DWORD))**(this + 6) + 8))(*(this + 6), *(this + 4), *(this + 3)); /*0x903d4c*/
  return (**this)(this, 1); /*0x903d57*/
}
