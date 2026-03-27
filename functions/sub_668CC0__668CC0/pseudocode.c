int __usercall sub_668CC0@<eax>(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>)
{
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 0x16) + 0x320))(*((_DWORD *)a1 + 0x16))
    && sub_57A310() )
  {
    sub_664E60(a1, a2, a3, a4);
  }
  return (*(int (__thiscall **)(_DWORD, Concurrency::details::SchedulerBase *))(**((_DWORD **)a1 + 0x16) + 0x318))(
           *((_DWORD *)a1 + 0x16),
           a1);
}
