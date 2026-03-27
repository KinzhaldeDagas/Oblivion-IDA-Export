char __thiscall sub_62A010(_BYTE *this, Concurrency::details::SchedulerBase *a2)
{
  struct Concurrency::details::ScheduleGroupBase *AnonymousScheduleGroup; // eax
  ActorAnimData *v7; // ebx
  _BYTE *v8; // eax
  UInt32 v9; // edi
  UInt32 v10; // eax

  AnonymousScheduleGroup = Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(a2);
  if ( AnonymousScheduleGroup != (struct Concurrency::details::ScheduleGroupBase *)5 )
  {
    LOBYTE(AnonymousScheduleGroup) = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x1A0))(a2);
    if ( !(_BYTE)AnonymousScheduleGroup )
    {
      AnonymousScheduleGroup = Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(a2);
      if ( AnonymousScheduleGroup != (struct Concurrency::details::ScheduleGroupBase *)3 )
      {
        LOBYTE(AnonymousScheduleGroup) = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x19C))(a2);
        if ( !(_BYTE)AnonymousScheduleGroup )
        {
          if ( !sub_5E0380((Actor *)a2)
            || (AnonymousScheduleGroup = (struct Concurrency::details::ScheduleGroupBase *)sub_5E0380((Actor *)a2),
                (*((_BYTE *)AnonymousScheduleGroup + 0x1F) & 1) == 0) )
          {
            AnonymousScheduleGroup = (struct Concurrency::details::ScheduleGroupBase *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x164))(a2);
            v7 = (ActorAnimData *)AnonymousScheduleGroup;
            if ( AnonymousScheduleGroup )
            {
              LOBYTE(AnonymousScheduleGroup) = sub_472EA0(AnonymousScheduleGroup);
              if ( (_BYTE)AnonymousScheduleGroup )
              {
                v8 = (_BYTE *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0xCC))(this);
                AnonymousScheduleGroup = (struct Concurrency::details::ScheduleGroupBase *)sub_521450(
                                                                                             (TESObjectREFR *)g_idleAnimationMap,
                                                                                             (TESObjectREFR *)a2,
                                                                                             v8);
                v9 = (UInt32)AnonymousScheduleGroup;
                if ( AnonymousScheduleGroup )
                {
                  v10 = sub_520200(AnonymousScheduleGroup);
                  LOBYTE(AnonymousScheduleGroup) = sub_477DB0(v7, v9, (TESObjectREFR *)a2, v10, 2);
                  this[0xC8] = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)AnonymousScheduleGroup;
}
