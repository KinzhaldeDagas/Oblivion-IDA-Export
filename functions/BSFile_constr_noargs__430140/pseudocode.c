_DWORD *__thiscall BSFile_constr_noargs(_DWORD *this)
{
  NiBinaryStream_constr(this); /*0x430143*/
  *(this + 8) = 0; /*0x43014a*/
  *(this + 3) = 0; /*0x43014d*/
  *(this + 4) = 0; /*0x430150*/
  *(this + 5) = 0; /*0x430153*/
  *(this + 6) = 0; /*0x430156*/
  *(this + 7) = 0; /*0x430159*/
  *((_BYTE *)this + 0x3C) = 0; /*0x43015c*/
  *(this + 0x51) = 0; /*0x43015f*/
  *(this + 0x50) = 0; /*0x430165*/
  *(this + 0x52) = 0; /*0x43016b*/
  *(this + 0x53) = 0; /*0x430171*/
  *((_BYTE *)this + 0x28) = 0; /*0x430177*/
  *(this + 0xB) = 0; /*0x43017a*/
  *(this + 0xD) = 0; /*0x43017d*/
  *(this + 0xE) = 0; /*0x430180*/
  *((_BYTE *)this + 0x24) = 0; /*0x430183*/
  *this = &BSFile::`vftable'; /*0x430186*/
  *(this + 0xC) = 0xFFFFFFFF; /*0x43018c*/
  return this; /*0x430195*/
}
