_DWORD *__thiscall sub_42A1A0(_DWORD *this, int a2, int a3, int a4, char a5, char a6)
{
  *(this + 3) = a2;
  *(this + 4) = a3;
  *(this + 5) = a4;
  *((_BYTE *)this + 4) = 0x1F;
  *(this + 2) = 0;
  *this = &ExtraPackage::`vftable';
  *((_BYTE *)this + 0x18) = a5;
  *((_BYTE *)this + 0x19) = a6;
  return this;
}
