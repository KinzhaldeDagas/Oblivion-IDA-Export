int sub_A10D40()
{
  ArrayConstructor( /*0xa10d53*/
    (char *)unk_B42CF8,
    4u,
    0x11,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  return atexit(sub_A27080); /*0xa10d63*/
}
