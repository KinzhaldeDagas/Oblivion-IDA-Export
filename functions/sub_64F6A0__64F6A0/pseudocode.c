// 3DTheft decode 2026-05-17: process procedure-slot advance helper. Adds delta to current/editor slot, clamps to row length, and queues package-done event 0x400 only if the clamped slot resolves to DONE.
void __thiscall sub_64F6A0(HighProcess *this, int a2, int a3)
{
  TESPackage *v4; // ebx
  eProcedure v5; // edi
  UInt32 procedureArrayIndex; // edi

  v4 = this->GetCurrentPackage(this); /*0x64f6ae*/
  ((void (__thiscall *)(HighProcess *, _DWORD))this->Unk_15B)(this, 0); /*0x64f6bc*/
  if ( this->currentPackage ) /*0x64f6be*/
    this->currentPackProcedure += a3; /*0x64f6cb*/
  else
    this->editorPackProcedure += a3; /*0x64f6d7*/
  if ( this->editorPackProcedure < kProcedure_TRAVEL ) /*0x64f6de*/
    this->editorPackProcedure = kProcedure_TRAVEL; /*0x64f6e0*/
  if ( v4 ) /*0x64f6e9*/
  {
    v5 = sub_673980(v4->members.procedureArrayIndex); /*0x64f6f7*/
    if ( this->GetCurrentPackProcedure(this) >= v5 ) /*0x64f708*/
    {
      this->SetCurrentPackProcedure(this, (eProcedure)(v5 - 1)); /*0x64f718*/
      procedureArrayIndex = v4->members.procedureArrayIndex; /*0x64f722*/
      if ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) + 4 * this->GetCurrentPackProcedure(this)) == 0x2C ) /*0x64f734*/
        Script_AddEventToExtraScript(v4, a2 + 0x44, 0x400); /*0x64f744*/
    }
  }
}
