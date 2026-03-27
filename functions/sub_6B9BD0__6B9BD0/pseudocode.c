BSStringT *__thiscall sub_6B9BD0(BSStringT *this, char *a2, int a3)
{
  this->m_data = (char *)&NiRefObject::`vftable';
  *(_DWORD *)&this->m_dataLen = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  this->m_data = (char *)&AverageEntry::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 7) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) = &NiTPointerList<NiPointer<AverageEntry>>::`vftable';
  BSStringT_Set(this + 1, a2, 0);
  *((_DWORD *)this + 8) = a3;
  *((_DWORD *)this + 9) = 0;
  return this;
}
