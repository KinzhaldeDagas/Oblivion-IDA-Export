_DWORD *__thiscall ExtraStartingPosition_constr(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax

  *((_BYTE *)this + 4) = 0x14;
  *(this + 2) = 0;
  *this = &ExtraStartingPosition::`vftable';
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x174))(a2);
  *(this + 3) = *v3;
  *(this + 4) = v3[1];
  *(this + 5) = v3[2];
  *(this + 6) = a2[8];
  *(this + 7) = a2[9];
  *(this + 8) = a2[0xA];
  return this;
}
