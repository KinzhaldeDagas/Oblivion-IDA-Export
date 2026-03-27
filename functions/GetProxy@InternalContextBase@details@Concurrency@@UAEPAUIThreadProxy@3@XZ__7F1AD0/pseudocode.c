struct Concurrency::IThreadProxy *__thiscall Concurrency::details::InternalContextBase::GetProxy(
        Concurrency::details::InternalContextBase *this)
{
  return *((struct Concurrency::IThreadProxy **)this + 0x27);
}
