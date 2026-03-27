_DWORD *__thiscall sub_74A750(_DWORD *this)
{
  *this = &NiRefObject::`vftable';
  *(this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *this = &NiPSysMeshEmitter::NiSkinnedEmitterData::`vftable';
  *(this + 2) = 0;
  return this;
}
