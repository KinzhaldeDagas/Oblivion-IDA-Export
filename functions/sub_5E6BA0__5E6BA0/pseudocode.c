bool __thiscall sub_5E6BA0(Actor *this)
{
  TESPackage *editorPackage; // eax

  editorPackage = this->members.super.process->editorPackage;
  return editorPackage && editorPackage->members.type == 0xF;
}
