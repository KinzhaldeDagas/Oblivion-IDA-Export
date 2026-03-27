_DWORD *__thiscall sub_92A4E0(_DWORD *this, char a2)
{
  *(this + 2) = &off_AA1AE4;
  *(this + 3) = &off_AA1ADC;
  *(this + 4) = &off_AA1AD4;
  *(this + 5) = &off_AA1AD0;
  *(this + 4) = &hkRayShapeCollectionFilter::`vftable';
  *(this + 3) = &hkShapeCollectionFilter::`vftable';
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this;
}
