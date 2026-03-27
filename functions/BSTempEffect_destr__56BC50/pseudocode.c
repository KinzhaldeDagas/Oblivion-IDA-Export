LONG __thiscall BSTempEffect_destr(_DWORD *this)
{
  *((float *)this + 2) = 0.0;
  *this = &BSTempEffect::`vftable';
  *((float *)this + 4) = 0.0;
  *(this + 3) = 0;
  *((_BYTE *)this + 0x14) = 0;
  return NiRefObject_destr(this);
}
