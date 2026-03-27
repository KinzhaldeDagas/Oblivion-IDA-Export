bool __stdcall ReanimateEffect_ValidTarget(int a1)
{
  void *v1; // eax
  Concurrency::details::SchedulerBase *v2; // esi

  v1 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  v2 = (Concurrency::details::SchedulerBase *)OblivionDynamicCast(
                                                v1,
                                                0,
                                                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                                &Character `RTTI Type Descriptor',
                                                0);
  return v2
      && (*(unsigned __int8 (__thiscall **)(Concurrency::details::SchedulerBase *, _DWORD))(*(_DWORD *)v2 + 0x198))(
           v2,
           0)
      && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v2) != (struct Concurrency::details::ScheduleGroupBase *)4
      && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v2) != (struct Concurrency::details::ScheduleGroupBase *)6;
}
