unsigned int __thiscall Concurrency::details::SchedulerProxy::GetNumBorrowedCores(
        Concurrency::details::SchedulerProxy *this)
{
  return *((_DWORD *)this + 0x2A);
}
