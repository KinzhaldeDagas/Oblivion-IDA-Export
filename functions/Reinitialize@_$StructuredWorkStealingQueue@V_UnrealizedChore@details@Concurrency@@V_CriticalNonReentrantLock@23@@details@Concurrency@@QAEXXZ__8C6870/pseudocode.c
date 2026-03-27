void __thiscall Concurrency::details::StructuredWorkStealingQueue<Concurrency::details::_UnrealizedChore,Concurrency::details::_CriticalNonReentrantLock>::Reinitialize(
        _DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
}
