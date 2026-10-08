NiObjectNET *__thiscall sub_9A1BB0(NiObjectNET *this)
{
  NiObjectNET::NiObjectNET(this); /*0x9a1bd9*/
  this->vtbl = (NiObjectVtbl **)&NiTexture::`vftable'; /*0x9a1bde*/
  *((_DWORD *)this + 6) = 6; /*0x9a1be4*/
  *((_DWORD *)this + 7) = 3; /*0x9a1beb*/
  *((_DWORD *)this + 8) = 2; /*0x9a1bf2*/
  *((_DWORD *)this + 9) = 0; /*0x9a1bfd*/
  sub_701B00((NiSourceTexture *)this); /*0x9a1c00*/
  *((_DWORD *)this + 0xC) = 0; /*0x9a1c05*/
  this->vtbl = (NiObjectVtbl **)&NiRenderedCubeMap::`vftable'; /*0x9a1c1e*/
  ArrayConstructor( /*0x9a1c24*/
    (char *)this + 0x44,
    4u,
    6,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x10) = 0; /*0x9a1c29*/
  return this; /*0x9a1c2e*/
}
