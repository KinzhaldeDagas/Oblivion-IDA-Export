char __cdecl sub_4F7370(Concurrency::details::SchedulerBase *a1, int a2, int a3, double *a4)
{
  char *Name; // eax
  char *v9; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x190))(a1) )
    {
      if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(a1) == (struct Concurrency::details::ScheduleGroupBase *)3 )
        *a4 = 1.0;
      if ( IsConsoleMode )
      {
        if ( 0.0 != *a4 )
        {
          Name = TESObjectREFR_GetName((TESObjectREFR *)a1);
          Interface_ConsolePrint("%s is unconscious", Name);
          return 1;
        }
        v9 = TESObjectREFR_GetName((TESObjectREFR *)a1);
        Interface_ConsolePrint("%s is not unconscious", v9);
      }
    }
  }
  return 1;
}
