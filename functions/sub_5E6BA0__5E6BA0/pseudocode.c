bool __thiscall sub_5E6BA0(Actor *this)
{
  TESPackage *editorPackage; // eax

  editorPackage = this->members.super.process->editorPackage; /*0x5e6ba3*/
  return editorPackage && editorPackage->members.type == kPackageType_Alarm; /*0x5e6bb2*/
}
