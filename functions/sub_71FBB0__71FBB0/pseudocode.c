_WORD *__thiscall sub_71FBB0(_WORD *this)
{
  sub_732DD0(this);
  *((_DWORD *)this + 0x11) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *(this + 0x28) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *(_DWORD *)this = &NiTriShapeData::`vftable';
  return this;
}
