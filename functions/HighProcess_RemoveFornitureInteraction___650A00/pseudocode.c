UInt8 __thiscall HighProcess::RemoveFornitureInteraction_(HighProcess *this, Actor *a2)
{
  void (__thiscall *SetUnk278To0)(BaseProcess *__hidden); // edx
  UInt32 unk044; // eax
  UInt32 *p_unk03C; // edi
  int v6; // ebp
  UInt32 v7; // edi
  UInt32 v8; // edi
  float v9; // eax

  this->Unk_2E(this, 0);
  this->Unk_30(this, 1);
  SetUnk278To0 = this->SetUnk278To0;
  this->follow = 0;
  SetUnk278To0(this);
  unk044 = this->unk044;
  this->unk148 = 0;
  if ( unk044 )
    FormHeapFree(unk044);
  this->unk044 = 0;
  this->unk169 = 0;
  p_unk03C = &this->unk03C;
  while ( this->unk040 || *p_unk03C )
  {
    v6 = *p_unk03C;
    if ( *p_unk03C )
      FormHeapFree(*p_unk03C);
    BSSimpleList_Remove(&this->unk03C, v6);
  }
  this->Unk_164(this, a2);
  if ( this->unk0B4 )
  {
    do
    {
      v7 = *(_DWORD *)(this->unk0B4 + 4);
      FormHeapFree(this->unk0B4);
      this->unk0B4 = v7;
    }
    while ( v7 );
  }
  this->unk0B0 = 0;
  if ( this->unk050 )
  {
    do
    {
      v8 = *(_DWORD *)(this->unk050 + 4);
      FormHeapFree(this->unk050);
      this->unk050 = v8;
    }
    while ( v8 );
  }
  this->unk04C = 0;
  this->unk030 = 0;
  if ( !a2->vtbl->GetMountedHorse(a2)
    && (((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 4
     || ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 9)
    || !a2->vtbl->GetMountedHorse(a2)
    && (((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 4
     || ((int (__thiscall *)(HighProcess *))this->GetSitSleepState)(this) == 9) )
  {
    a2->vtbl->AddPackageWakeUp(a2);
  }
  else
  {
    this->furniture = 0;
    sub_6FAEE0(&this->unk128, 0.0);
    this->unk128.unkE = 0;
    v9 = Vector3_InitValue_;
    this->unk128.unk00.x = Vector3_InitValue_;
    this->unk128.unk00.y = *(&Vector3_InitValue_ + 1);
    this->unk128.unk00.z = dword_B3F9B0;
    this->furnitureMarkerIndex = 0x7F;
  }
  return LOBYTE(v9);
}
