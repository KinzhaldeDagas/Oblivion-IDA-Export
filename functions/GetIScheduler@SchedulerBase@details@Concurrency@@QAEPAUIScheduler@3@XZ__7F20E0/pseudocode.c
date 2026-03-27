struct Concurrency::IScheduler *__thiscall Concurrency::details::SchedulerBase::GetIScheduler(
        Concurrency::details::SchedulerBase *this)
{
  return *((struct Concurrency::IScheduler **)this + 0x3C);
}
