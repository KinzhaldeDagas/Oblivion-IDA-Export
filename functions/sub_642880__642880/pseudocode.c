void __thiscall sub_642880(float *this, Concurrency::details::SchedulerBase *a2, float a3)
{
  if ( sub_572EA0(2) <= *(float *)&SrcStr
    && !(*(unsigned __int8 (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x19C))(a2)
    && (Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(a2) != (struct Concurrency::details::ScheduleGroupBase *)4
     || !Actor_IsGhost((Actor *)a2)) )
  {
    ((void (__thiscall *)(float *, Concurrency::details::SchedulerBase *))loc_6411E0)(this, a2);
    BSSimpleList_Clear(dword_B3B94C);
    *(this + 0x81) = fDetectionTimerSetting + a3;
  }
}
