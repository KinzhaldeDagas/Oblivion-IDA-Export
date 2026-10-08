void __thiscall sub_5E2E00(Actor *this)
{
  LowProcess *process; // ecx
  TESPackage *editorPackage; // ecx
  TargetData *target; // ecx

  process = this->members.super.process; /*0x5e2e00*/
  if ( process ) /*0x5e2e07*/
  {
    editorPackage = process->editorPackage; /*0x5e2e09*/
    if ( editorPackage ) /*0x5e2e0e*/
    {
      target = editorPackage->members.target; /*0x5e2e10*/
      if ( target ) /*0x5e2e15*/
        sub_569E60(target); /*0x5e2e17*/
    }
  }
}
