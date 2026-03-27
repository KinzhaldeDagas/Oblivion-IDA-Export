bool __usercall sub_452330@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  signed int v4; // eax
  int OpenedMenuCode; // eax
  bool result; // al

  result = 0;
  if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)TESDataHandler_g_PlayerRef) != (struct Concurrency::details::ScheduleGroupBase *)2
    && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)TESDataHandler_g_PlayerRef) != (struct Concurrency::details::ScheduleGroupBase *)1
    && !sub_65D140(TESDataHandler_g_PlayerRef) )
  {
    v4 = sub_578FE0();
    if ( v4 == 0x40F || !v4 || v4 == 0x3F5 || v4 == 3 )
    {
      OpenedMenuCode = GetOpenedMenuCode(a1, a2, a3, a4);
      if ( OpenedMenuCode == 0x40F || !OpenedMenuCode || OpenedMenuCode == 0x3F5 || OpenedMenuCode == 3 )
        return 1;
    }
  }
  return result;
}
