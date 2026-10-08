// Pass222: Constructs 0x30-byte NiPropertyState with ten managed smart-pointer slots at +0x08..+0x2C.
NiPropertyState *__thiscall sub_7319E0(NiPropertyState *this)
{
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x731a0d*/
  *((_DWORD *)this + 1) = 0; /*0x731a13*/
  InterlockedIncrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x731a1a*/
  *(_DWORD *)this = &NiPropertyState::`vftable'; /*0x731a3a*/
  ArrayConstructor( /*0x731a40*/
    (char *)this + 8,
    4u,
    0xA,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);// Fog property propagation decode: NiPropertyState constructor creates ten managed slots at +0x08..+0x2C, including fog slot +0x0C.
  sub_7317B0(this);                             // Fog property propagation decode: default-slot initializer runs after zeroing; it leaves fog slot +0x0C null. /*0x731a4c*/
  return this; /*0x731a53*/
}
