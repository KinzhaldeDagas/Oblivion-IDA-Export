char __thiscall sub_62A010(_BYTE *this, Concurrency::details::SchedulerBase *a2)
{
  struct Concurrency::details::ScheduleGroupBase *AnonymousScheduleGroup; // eax
  ActorAnimData *v4; // ebx
  TESObjectREFR *v5; // eax
  UInt32 v6; // edi
  UInt32 v7; // eax

  AnonymousScheduleGroup = Actor::GetDeadState(a2); /*0x62a01a*/
  if ( AnonymousScheduleGroup != (struct Concurrency::details::ScheduleGroupBase *)5 ) /*0x62a022*/
  {
    LOBYTE(AnonymousScheduleGroup) = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x1A0))(a2); /*0x62a032*/
    if ( !(_BYTE)AnonymousScheduleGroup ) /*0x62a036*/
    {
      AnonymousScheduleGroup = Actor::GetDeadState(a2); /*0x62a03e*/
      if ( AnonymousScheduleGroup != (struct Concurrency::details::ScheduleGroupBase *)3 ) /*0x62a046*/
      {
        LOBYTE(AnonymousScheduleGroup) = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x19C))(a2); /*0x62a056*/
        if ( !(_BYTE)AnonymousScheduleGroup ) /*0x62a05a*/
        {
          if ( !Actor::GetCurrentPackage((Actor *)a2) /*0x62a072*/
            || (AnonymousScheduleGroup = (struct Concurrency::details::ScheduleGroupBase *)Actor::GetCurrentPackage((Actor *)a2),
                (*((_BYTE *)AnonymousScheduleGroup + 0x1F) & 1) == 0) )
          {
            AnonymousScheduleGroup = (struct Concurrency::details::ScheduleGroupBase *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x164))(a2); /*0x62a07f*/
            v4 = (ActorAnimData *)AnonymousScheduleGroup; /*0x62a081*/
            if ( AnonymousScheduleGroup ) /*0x62a085*/
            {
              LOBYTE(AnonymousScheduleGroup) = ActorAnimData_IsIdleInactive(AnonymousScheduleGroup); /*0x62a089*/
              if ( (_BYTE)AnonymousScheduleGroup ) /*0x62a090*/
              {
                v5 = (TESObjectREFR *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0xCC))(this); /*0x62a09e*/
                AnonymousScheduleGroup = (struct Concurrency::details::ScheduleGroupBase *)TESIdleForm_FindIdleForActor( /*0x62a0a8*/
                                                                                             (TESObjectREFR *)MEMORY[0xB362C0],
                                                                                             (TESObjectREFR *)a2,
                                                                                             v5);
                v6 = (UInt32)AnonymousScheduleGroup; /*0x62a0ad*/
                if ( AnonymousScheduleGroup ) /*0x62a0b1*/
                {
                  v7 = TESIdleForm_GetQueuedAnimType(AnonymousScheduleGroup); /*0x62a0b7*/
                  LOBYTE(AnonymousScheduleGroup) = ActorAnimData_QueueIdle(v4, v6, (TESObjectREFR *)a2, v7, 2); /*0x62a0c1*/
                  *(this + 0xC8) = 0; /*0x62a0c6*/
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)AnonymousScheduleGroup; /*0x62a0cf*/
}
