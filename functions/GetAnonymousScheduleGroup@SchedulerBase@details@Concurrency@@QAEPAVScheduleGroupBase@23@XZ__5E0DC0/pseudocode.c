struct Concurrency::details::ScheduleGroupBase *__thiscall Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(
        Concurrency::details::SchedulerBase *this)
{
  return *((struct Concurrency::details::ScheduleGroupBase **)this + 0x2C);
}
