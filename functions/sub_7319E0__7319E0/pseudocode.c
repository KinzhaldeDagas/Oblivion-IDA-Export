NiPropertyState *__thiscall sub_7319E0(NiPropertyState *this)
{
  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &NiPropertyState::`vftable';
  ArrayConstructor(
    (char *)this + 8,
    4u,
    0xA,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  sub_7317B0(this);
  return this;
}
