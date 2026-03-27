_BYTE *__thiscall ExtraCellWaterType_Constructor(_BYTE *this)
{
  *(this + 4) = 5;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraCellWaterType::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
