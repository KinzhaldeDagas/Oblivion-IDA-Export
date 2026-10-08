// 3DTheft: SetCurrentPackProcedure clamps the stored procedure slot against the active package procedureArrayIndex row length.
void __thiscall LowProcess_SetCurrentPackageProcedure(HighProcess *this, eProcedure a2)
{
  TESPackage *v3; // eax
  eProcedure v4; // edi

  v3 = this->GetCurrentPackage(this); /*0x64f76b*/
  if ( this->currentPackage )                   // 3DTheft decode: current/editor PackProcedure stores a procedure-row slot index, not the eProcedure enum value. The clamp compares the stored slot against row length from procedureArrayIndex. /*0x64f76d*/
    this->currentPackProcedure = a2; /*0x64f77a*/
  else
    this->editorPackProcedure = a2; /*0x64f786*/
  if ( v3 ) /*0x64f78b*/
  {
    v4 = sub_673980(v3->members.procedureArrayIndex); /*0x64f797*/
    if ( this->GetCurrentPackProcedure(this) >= v4 ) /*0x64f7aa*/
      this->SetCurrentPackProcedure(this, (eProcedure)(v4 - 1)); /*0x64f7ba*/
  }
}
