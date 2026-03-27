_DWORD *__thiscall BSFile_constr_noargs(_DWORD *this)
{
  NiBinaryStream_constr(this);
  *(this + 8) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *((_BYTE *)this + 0x3C) = 0;
  *(this + 0x51) = 0;
  *(this + 0x50) = 0;
  *(this + 0x52) = 0;
  *(this + 0x53) = 0;
  *((_BYTE *)this + 0x28) = 0;
  *(this + 0xB) = 0;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  *((_BYTE *)this + 0x24) = 0;
  *this = &BSFile::`vftable';
  *(this + 0xC) = 0xFFFFFFFF;
  return this;
}
