char __thiscall sub_607620(MobileObject *this)
{
  LowProcess *process; // ecx
  int v3; // eax
  MiddleHighProcess *v4; // eax
  MiddleHighProcess *v5; // edi
  LowProcess *v6; // ecx

  process = this->process; /*0x607645*/
  if ( !process || process->GetProcessLevel(process) != 1 ) /*0x607656*/
  {
    v3 = this->process->GetProcessLevel(this->process); /*0x607664*/
    sub_674550((int)this, v3); /*0x60766d*/
    v4 = (MiddleHighProcess *)FormHeapAlloc(0x18Cu); /*0x607677*/
    if ( v4 ) /*0x60768d*/
      v5 = MiddleHighProcess::MiddleHighProcess(v4); /*0x607696*/
    else
      v5 = 0; /*0x60769a*/
    v5->Copy(v5, this->process); /*0x6076af*/
    v6 = this->process; /*0x6076b1*/
    if ( v6 ) /*0x6076b6*/
      ((void (__thiscall *)(LowProcess *, int))v6->Destructor)(v6, 1); /*0x6076be*/
    this->process = v5; /*0x6076ce*/
    ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], this, 1, 0, 0, 0); /*0x6076d1*/
    ((void (__thiscall *)(MobileObject *, _DWORD))this->vtbl->super.Unk_5E)(this, 0); /*0x6076e2*/
    this->process->Unk_13(this->process); /*0x6076ec*/
  }
  return 1; /*0x6076f0*/
}
