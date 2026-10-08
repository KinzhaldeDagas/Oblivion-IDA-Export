TESPackage *__thiscall sub_5E6190(Actor *this)
{
  LowProcess *process; // eax
  TESPackage *result; // eax

  process = this->members.super.process; /*0x5e6190*/
  if ( !process ) /*0x5e6195*/
    return 0; /*0x5e6195*/
  result = process->editorPackage; /*0x5e6197*/
  if ( !result || result->members.type != kPackageType_Combat ) /*0x5e61a2*/
    return 0; /*0x5e61a4*/
  return result; /*0x5e61a6*/
}
