UInt8 __thiscall HighProcess::RemoveFornitureInteraction_(HighProcess *this, Actor *a2)
{
  void (__thiscall *SetUnk278To0)(BaseProcess *__hidden); // edx
  UInt32 unk044; // eax
  UInt32 *p_unk03C; // edi
  int v6; // ebp
  UInt32 v7; // edi
  UInt32 v8; // edi
  float x; // eax

  this->Unk_2E(this, 0); /*0x650a11*/
  this->Unk_30(this, 1); /*0x650a1f*/
  SetUnk278To0 = this->SetUnk278To0; /*0x650a23*/
  this->follow = 0; /*0x650a2b*/
  SetUnk278To0(this); /*0x650a2e*/
  unk044 = this->unk044; /*0x650a30*/
  this->unk148 = 0; /*0x650a35*/
  if ( unk044 ) /*0x650a3b*/
    FormHeapFree(unk044); /*0x650a3e*/
  this->unk044 = 0; /*0x650a46*/
  this->unk169 = 0; /*0x650a49*/
  p_unk03C = &this->unk03C; /*0x650a4f*/
  while ( this->unk040 || *p_unk03C ) /*0x650a59*/
  {
    v6 = *p_unk03C; /*0x650a5b*/
    if ( *p_unk03C ) /*0x650a5b*/
      FormHeapFree(*p_unk03C); /*0x650a62*/
    BSSimpleList_Remove((int *)&this->unk03C, v6); /*0x650a6d*/
  }
  this->Unk_164(this, a2); /*0x650a83*/
  if ( this->unk0B4 ) /*0x650a85*/
  {
    do /*0x650aaa*/
    {
      v7 = *(_DWORD *)(this->unk0B4 + 4); /*0x650a96*/
      FormHeapFree(this->unk0B4); /*0x650a9a*/
      this->unk0B4 = v7; /*0x650aa4*/
    }
    while ( v7 ); /*0x650aaa*/
  }
  this->unk0B0 = 0; /*0x650aac*/
  if ( this->unk050 ) /*0x650ab2*/
  {
    do /*0x650acb*/
    {
      v8 = *(_DWORD *)(this->unk050 + 4); /*0x650aba*/
      FormHeapFree(this->unk050); /*0x650abe*/
      this->unk050 = v8; /*0x650ac8*/
    }
    while ( v8 ); /*0x650acb*/
  }
  this->unk04C = 0; /*0x650acd*/
  this->unk030 = 0; /*0x650ad0*/
  if ( !a2->vtbl->GetMountedHorse(a2) /*0x650b4b*/
    && (((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 4
     || ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 9)
    || !a2->vtbl->GetMountedHorse(a2)
    && (((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 4
     || ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 9) )
  {
    a2->vtbl->AddPackageWakeUp(a2); /*0x650b11*/
  }
  else
  {
    this->furniture = 0; /*0x650b5b*/
    sub_6FAEE0(&this->unk128, 0.0); /*0x650b61*/
    this->unk128.unkE = 0; /*0x650b66*/
    x = g_zeroNiPoint3.x; /*0x650b6c*/
    this->unk128.unk00.x = g_zeroNiPoint3.x; /*0x650b71*/
    this->unk128.unk00.y = g_zeroNiPoint3.y; /*0x650b79*/
    this->unk128.unk00.z = g_zeroNiPoint3.z; /*0x650b82*/
    this->furnitureMarkerIndex = 0x7F; /*0x650b86*/
  }
  return LOBYTE(x); /*0x650b13*/
}
