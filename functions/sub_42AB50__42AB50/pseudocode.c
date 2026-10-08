// Constructs Oblivion ExtraHasNoRumors: type 0x5A, vtable, null next link, and boolean payload at +0x0C.
_BYTE *__thiscall ExtraHasNoRumors_ctor(_BYTE *this, char a2)
{
  *(this + 4) = 0x5A; /*0x42ab56*/
  *((_DWORD *)this + 2) = 0; /*0x42ab5a*/
  *(_DWORD *)this = &ExtraHasNoRumors::`vftable'; /*0x42ab61*/
  *(this + 0xC) = a2; /*0x42ab67*/
  return this; /*0x42ab6a*/
}
