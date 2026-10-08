char __thiscall sub_607530(MobileObject *this)
{
  LowProcess *process; // ecx
  int v3; // eax
  HighProcess *v4; // eax
  HighProcess *v5; // edi
  LowProcess *v6; // ecx

  process = this->process; /*0x607555*/
  if ( !process || process->GetProcessLevel(process) ) /*0x607561*/
  {
    v3 = this->process->GetProcessLevel(this->process); /*0x607573*/
    sub_674550((int)this, v3); /*0x60757c*/
    v4 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x607586*/
    if ( v4 ) /*0x60759c*/
      v5 = HighProcess::HighProcess(v4); /*0x6075a5*/
    else
      v5 = 0; /*0x6075a9*/
    v5->Copy(v5, this->process); /*0x6075be*/
    v6 = this->process; /*0x6075c0*/
    if ( v6 ) /*0x6075c5*/
      ((void (__thiscall *)(LowProcess *, int))v6->Destructor)(v6, 1); /*0x6075cd*/
    this->process = v5; /*0x6075dd*/
    ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], this, 0, 0, 0, 0); /*0x6075e0*/
    ((void (__thiscall *)(MobileObject *, _DWORD))this->vtbl->super.Unk_5E)(this, 0); /*0x6075f1*/
    this->process->Unk_13(this->process); /*0x6075fb*/
  }
  return 1; /*0x6075ff*/
}
