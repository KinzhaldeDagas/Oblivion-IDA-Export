bool __thiscall sub_5E6110(Actor *this, char a2)
{
  int v3; // eax
  TESPackage *editorPackage; // eax
  TESPackageType type; // al
  bool result; // al

  result = 0; /*0x5e6153*/
  if ( this->members.super.process ) /*0x5e6113*/
  {
    if ( this->vtbl->GetMountedHorse(this) /*0x5e613c*/
      || !a2
      || (LOBYTE(v3) = this->members.super.process->GetSitSleepState(this->members.super.process), !v3) )
    {
      editorPackage = this->members.super.process->editorPackage; /*0x5e6141*/
      if ( editorPackage ) /*0x5e6146*/
      {
        type = editorPackage->members.type; /*0x5e6148*/
        if ( type == kPackageType_Combat || type == kPackageType_CombatLow ) /*0x5e6151*/
          return 1; /*0x5e6117*/
      }
    }
  }
  return result; /*0x5e6155*/
}
