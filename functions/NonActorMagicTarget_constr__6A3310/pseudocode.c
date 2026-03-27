char *__thiscall NonActorMagicTarget_constr(char *this, int a2)
{
  _DWORD *v3; // edi

  *(_DWORD *)this = &BSExtraData::`vftable';
  *(this + 4) = 0x3A;
  *((_DWORD *)this + 2) = 0;
  v3 = this + 0xC;
  MagicTarget_constr(this + 0xC);
  *(_DWORD *)this = &NonActorMagicTarget::`vftable'{for `NonActorMagicTarget'};
  *v3 = &NonActorMagicTarget::`vftable'{for `MagicTarget'};
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = a2;
  return this;
}
