void __thiscall Concurrency::details::_NonReentrantLock::_Release(Concurrency::details::_NonReentrantLock *this)
{
  *(_DWORD *)this = 0;
}
