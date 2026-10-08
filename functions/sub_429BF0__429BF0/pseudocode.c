// Constructs the Oblivion ExtraLeveledCreature marker (type 0x35).
_BYTE *__thiscall ExtraLeveledCreature_ctor(_BYTE *this)
{
  *(this + 4) = 0x35; /*0x429bf2*/
  *((_DWORD *)this + 2) = 0; /*0x429bf6*/
  *(_DWORD *)this = &ExtraLeveledCreature::`vftable'; /*0x429bfd*/
  return this; /*0x429c03*/
}
