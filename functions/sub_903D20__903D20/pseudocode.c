int __thiscall sub_903D20(int (__thiscall ***this)(void *, int))
{
  if ( *(this + 7) == (int (__thiscall **)(void *, int))0x1A )
    (*((void (__thiscall **)(_DWORD, _DWORD, _DWORD))**(this + 5) + 8))(*(this + 5), *(this + 3), *(this + 4));
  if ( *(this + 8) == (int (__thiscall **)(void *, int))0x1A )
    (*((void (__thiscall **)(_DWORD, _DWORD, _DWORD))**(this + 6) + 8))(*(this + 6), *(this + 4), *(this + 3));
  return (**this)(this, 1);
}
