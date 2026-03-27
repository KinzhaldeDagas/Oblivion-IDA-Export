NonActorMagicCaster *__thiscall NonActorMagicCaster::NonActorMagicCaster(NonActorMagicCaster *this, int a2)
{
  _DWORD *v3; // edi

  *(_DWORD *)this = &BSExtraData::`vftable';
  *((_BYTE *)this + 4) = 0x39;
  *((_DWORD *)this + 2) = 0;
  v3 = (_DWORD *)((char *)this + 0xC);
  MagicCaster_constr((_DWORD *)this + 3);
  *((_DWORD *)this + 8) = a2;
  *(_DWORD *)this = &NonActorMagicCaster::`vftable'{for `NonActorMagicCaster'};
  *v3 = &NonActorMagicCaster::`vftable'{for `MagicCaster'};
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  return this;
}
