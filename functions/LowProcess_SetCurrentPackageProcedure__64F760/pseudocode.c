void __thiscall LowProcess_SetCurrentPackageProcedure(HighProcess *this, eProcedure a2)
{
  TESPackage *v3; // eax
  eProcedure v4; // edi

  v3 = this->GetCurrentPackage(this);
  if ( this->currentPackage )
    this->currentPackProcedure = a2;
  else
    this->editorPackProcedure = a2;
  if ( v3 )
  {
    v4 = sub_673980(v3->members.procedureArrayIndex);
    if ( this->GetCurrentPackProcedure(this) >= v4 )
      this->SetCurrentPackProcedure(this, (eProcedure)(v4 - 1));
  }
}
