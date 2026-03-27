char __stdcall sub_660E90(Concurrency::details::SchedulerBase *a1)
{
  char v1; // bl
  int v2; // eax
  char v3; // al

  v1 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::SchedulerBase *, _DWORD))(*(_DWORD *)a1 + 0x198))(
          a1,
          0)
    && (*((_DWORD *)a1 + 2) & 0x800) == 0
    && !(*(unsigned __int8 (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x1A0))(a1)
    && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(a1) != (struct Concurrency::details::ScheduleGroupBase *)5 )
  {
    v2 = sub_5E03A0(a1);
    if ( v2 )
    {
      v3 = *(_BYTE *)(v2 + 0x20);
      if ( (v3 == 1 || v3 == 7)
        && (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 0x16) + 0xCC))(*((_DWORD *)a1 + 0x16)) == TESDataHandler_g_PlayerRef
        && !sub_5E6BC0((_DWORD **)a1) )
      {
        return 1;
      }
    }
  }
  return v1;
}
