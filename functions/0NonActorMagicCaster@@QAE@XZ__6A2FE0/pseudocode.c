NonActorMagicCaster *__thiscall NonActorMagicCaster::NonActorMagicCaster(NonActorMagicCaster *this, int a2)
{
  _DWORD *v3; // edi

  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x6a300c*/
  *((_BYTE *)this + 4) = 0x39; /*0x6a3012*/
  *((_DWORD *)this + 2) = 0; /*0x6a3016*/
  v3 = (_DWORD *)((char *)this + 0xC); /*0x6a3019*/
  MagicCaster_constr((_DWORD *)this + 3); /*0x6a3022*/
  *((_DWORD *)this + 8) = a2; /*0x6a302b*/
  *(_DWORD *)this = &NonActorMagicCaster::`vftable'{for `NonActorMagicCaster'}; /*0x6a302e*/
  *v3 = &NonActorMagicCaster::`vftable'{for `MagicCaster'}; /*0x6a3034*/
  *((_DWORD *)this + 6) = 0; /*0x6a303a*/
  *((_DWORD *)this + 7) = 0; /*0x6a303d*/
  return this; /*0x6a3042*/
}
