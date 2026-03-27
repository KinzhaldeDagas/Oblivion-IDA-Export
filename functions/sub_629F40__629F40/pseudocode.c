int __thiscall sub_629F40(
        void *this,
        Concurrency::details::SchedulerBase *a2,
        float a3,
        float a4,
        float a5,
        char a6,
        char a7)
{
  int v8; // ebx
  double v9; // st7
  int result; // eax

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x2C0))(this);
  v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x184))(this);
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(a2) == (struct Concurrency::details::ScheduleGroupBase *)5
    || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(a2) == (struct Concurrency::details::ScheduleGroupBase *)3 )
  {
    return 0;
  }
  if ( *((_BYTE *)a2 + 0xC8)
    || v8 && (*(_DWORD *)(v8 + 0x1C) & 0x2000) != 0
    || (*(unsigned __int8 (__thiscall **)(Concurrency::details::SchedulerBase *, int))(*(_DWORD *)a2 + 0x334))(a2, 1)
    || a6 )
  {
    return 0x201;
  }
  if ( !a7 )
  {
    v9 = a3;
    if ( ((*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x2C0))(this) & 0x200) != 0 )
    {
      if ( a4 <= v9 )
        return 0x201;
    }
    else
    {
      result = 0x201;
      if ( a5 < v9 )
        return result;
    }
  }
  return 0x101;
}
