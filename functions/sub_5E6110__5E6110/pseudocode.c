bool __thiscall sub_5E6110(Actor *this, char a2)
{
  int v3; // eax
  TESPackage *editorPackage; // eax
  UInt8 type; // al
  bool result; // al

  result = 0;
  if ( this->members.super.process )
  {
    if ( this->vtbl->GetMountedHorse(this)
      || !a2
      || (LOBYTE(v3) = this->members.super.process->GetSitSleepState(this->members.super.process), !v3) )
    {
      editorPackage = this->members.super.process->editorPackage;
      if ( editorPackage )
      {
        type = editorPackage->members.type;
        if ( type == 0xC || type == 0xD )
          return 1;
      }
    }
  }
  return result;
}
