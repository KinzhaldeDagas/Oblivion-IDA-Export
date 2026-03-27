NiObjectNET *__thiscall sub_9A1BB0(NiObjectNET *this)
{
  NiObjectNET::NiObjectNET(this);
  this->vtbl = (NiObjectVtbl **)&NiTexture::`vftable';
  *((_DWORD *)this + 6) = 6;
  *((_DWORD *)this + 7) = 3;
  *((_DWORD *)this + 8) = 2;
  *((_DWORD *)this + 9) = 0;
  sub_701B00((NiSourceTexture *)this);
  *((_DWORD *)this + 0xC) = 0;
  this->vtbl = (NiObjectVtbl **)&NiRenderedCubeMap::`vftable';
  ArrayConstructor(
    (char *)this + 0x44,
    4u,
    6,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x10) = 0;
  return this;
}
