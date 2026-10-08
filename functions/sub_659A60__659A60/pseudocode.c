char __thiscall sub_659A60(MobileObject *this)
{
  int v6; // eax
  HighProcess *v7; // eax
  HighProcess *v8; // edi
  _DWORD *v9; // ecx

  v6 = this->process->GetProcessLevel(this->process); /*0x659a8d*/
  sub_674550((int)this, v6); /*0x659a96*/
  v7 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x659aa0*/
  if ( v7 ) /*0x659ab6*/
    v8 = HighProcess::HighProcess(v7); /*0x659abf*/
  else
    v8 = 0; /*0x659ac3*/
  v8->Copy(v8, this->process); /*0x659ad8*/
  v9 = &this->process->__vftable; /*0x659ada*/
  if ( v9 ) /*0x659adf*/
    (*(void (__thiscall **)(_DWORD *, int))*v9)(v9, 1); /*0x659ae7*/
  this->process = v8; /*0x659af7*/
  ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], this, 0, 0, 0, 0); /*0x659afa*/
  ((void (__thiscall *)(MobileObject *, _DWORD))this->vtbl->super.Unk_5E)(this, 0); /*0x659b0b*/
  this->process->Unk_13(this->process); /*0x659b15*/
  return 1; /*0x659b19*/
}
