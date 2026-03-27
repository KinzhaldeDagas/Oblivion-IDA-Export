void __userpurge sub_60E390(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        int a4,
        int a5)
{
  if ( *((_DWORD *)a1 + 0x16) )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::SchedulerBase *, int))(*(_DWORD *)a1 + 0x284))(a1, 0x45) )
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)a1 + 0x16) + 0x31C))(*((_DWORD *)a1 + 0x16), 1);
  }
  Actor_LinkModifiedForm(a1, a2, a3, a4, a5);
}
