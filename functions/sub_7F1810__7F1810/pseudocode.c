float *__thiscall sub_7F1810(float *this)
{
  int v2; // eax

  *(_DWORD *)this = &NiRefObject::`vftable';
  *(this + 1) = 0.0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &STLSPData::`vftable';
  v2 = FormHeapAlloc(0x300u);
  *((_DWORD *)this + 2) = v2;
  _memset(v2, 0, 0x300);
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  *(this + 5) = 0.0;
  return this;
}
