_DWORD *__thiscall sub_7F2360(_DWORD *this)
{
  *this = &NiRefObject::`vftable';
  *(this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *this = &STSPData::`vftable';
  *(this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  return this;
}
