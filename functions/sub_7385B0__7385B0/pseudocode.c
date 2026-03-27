_DWORD *__thiscall sub_7385B0(_DWORD *this)
{
  *this = &NiRefObject::`vftable';
  *(this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *this = &NiShader::`vftable';
  *(this + 2) = 0;
  *(this + 3) = 0;
  return this;
}
