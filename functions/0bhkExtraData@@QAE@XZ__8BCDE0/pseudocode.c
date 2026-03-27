bhkExtraData *__thiscall bhkExtraData::bhkExtraData(bhkExtraData *this)
{
  sub_721350((NiObject *)this);
  *(_DWORD *)this = &bhkExtraData::`vftable';
  *((_DWORD *)this + 3) = &NiTLargeArray<NiPointer<NiTimeController>>::`vftable';
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 4) = 0;
  sub_721440((unsigned int *)this, off_A98390);
  return this;
}
