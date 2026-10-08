// Constructs Oblivion ExtraXTarget (type 0x4D) with a null target.
_BYTE *__thiscall ExtraXTarget_ctor(_BYTE *this)
{
  *(this + 4) = 0x4D; /*0x42a824*/
  *((_DWORD *)this + 2) = 0; /*0x42a828*/
  *(_DWORD *)this = &ExtraXTarget::`vftable'; /*0x42a82b*/
  *((_DWORD *)this + 3) = 0; /*0x42a831*/
  return this; /*0x42a834*/
}
