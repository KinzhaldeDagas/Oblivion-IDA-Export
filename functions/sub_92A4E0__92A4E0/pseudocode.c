_DWORD *__thiscall sub_92A4E0(_DWORD *this, char a2)
{
  *(this + 2) = &off_AA1AE4; /*0x92a4e8*/
  *(this + 3) = &off_AA1ADC; /*0x92a4ef*/
  *(this + 4) = &off_AA1AD4; /*0x92a4f6*/
  *(this + 5) = &off_AA1AD0; /*0x92a4fd*/
  *(this + 4) = &hkRayShapeCollectionFilter::`vftable'; /*0x92a504*/
  *(this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x92a50b*/
  *this = &hkBaseObject::`vftable'; /*0x92a512*/
  if ( (a2 & 1) != 0 ) /*0x92a518*/
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92a52a*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x92a52f*/
}
