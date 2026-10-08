// Pass222: NiPropertyState slot constructor callback; zeroes one dword smart-pointer slot.
void __thiscall Concurrency::details::_NonReentrantLock::_Release(Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0; /*0x7c88a0*/
}
