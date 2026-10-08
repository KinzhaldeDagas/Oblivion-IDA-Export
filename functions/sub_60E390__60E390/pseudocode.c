void __thiscall sub_60E390(Concurrency::details::SchedulerBase *this, int a2, int a3)
{
  if ( *((_DWORD *)this + 0x16) ) /*0x60e393*/
  {
    if ( (*(int (__thiscall **)(Concurrency::details::SchedulerBase *, int))(*(_DWORD *)this + 0x284))(this, 0x45) ) /*0x60e3a3*/
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x16) + 0x31C))(*((_DWORD *)this + 0x16), 1); /*0x60e3b6*/
  }
  Actor_LinkModifiedForm(this, a2, a3); /*0x60e3c4*/
}
