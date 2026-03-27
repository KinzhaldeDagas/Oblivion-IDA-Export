_DWORD *__thiscall sub_709E60(_DWORD *this)
{
  *this = &NiRefObject::`vftable';
  *(this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *((_BYTE *)this + 8) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *this = &NiDynamicEffectState::`vftable';
  return this;
}
