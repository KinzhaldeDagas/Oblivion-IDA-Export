void __thiscall sub_5E2E00(Actor *this)
{
  LowProcess *process; // ecx
  TESPackage *editorPackage; // ecx
  TargetData *target; // ecx

  process = this->members.super.process;
  if ( process )
  {
    editorPackage = process->editorPackage;
    if ( editorPackage )
    {
      target = editorPackage->members.target;
      if ( target )
        sub_569E60(target);
    }
  }
}
