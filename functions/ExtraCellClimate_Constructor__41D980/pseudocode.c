_BYTE *__thiscall ExtraCellClimate_Constructor(_BYTE *this, int a2)
{
  *(this + 4) = 0xC;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraCellClimate::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
