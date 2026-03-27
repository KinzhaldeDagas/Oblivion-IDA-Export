void __thiscall sub_64F6A0(HighProcess *this, int a2, int a3)
{
  TESPackage *v4; // ebx
  eProcedure v5; // edi
  UInt32 procedureArrayIndex; // edi

  v4 = this->GetCurrentPackage(this);
  ((void (__thiscall *)(HighProcess *, _DWORD))this->Unk_15B)(this, 0);
  if ( this->currentPackage )
    this->currentPackProcedure += a3;
  else
    this->editorPackProcedure += a3;
  if ( this->editorPackProcedure < kProcedure_TRAVEL )
    this->editorPackProcedure = kProcedure_TRAVEL;
  if ( v4 )
  {
    v5 = sub_673980(v4->members.procedureArrayIndex);
    if ( this->GetCurrentPackProcedure(this) >= v5 )
    {
      this->SetCurrentPackProcedure(this, (eProcedure)(v5 - 1));
      procedureArrayIndex = v4->members.procedureArrayIndex;
      if ( *(_DWORD *)(*(_DWORD *)(4 * procedureArrayIndex + 0xB152B0) + 4 * this->GetCurrentPackProcedure(this)) == 0x2C )
        Script_AddEventToExtraScript(v4, a2 + 0x44, 0x400);
    }
  }
}
