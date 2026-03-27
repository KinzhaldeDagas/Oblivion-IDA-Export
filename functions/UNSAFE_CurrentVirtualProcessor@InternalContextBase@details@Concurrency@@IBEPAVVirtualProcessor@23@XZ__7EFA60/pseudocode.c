struct Concurrency::details::VirtualProcessor *__thiscall Concurrency::details::InternalContextBase::UNSAFE_CurrentVirtualProcessor(
        Concurrency::details::InternalContextBase *this)
{
  return *((struct Concurrency::details::VirtualProcessor **)this + 0x28);
}
