TESPackage *__thiscall sub_5E6190(Actor *this)
{
  LowProcess *process; // eax
  TESPackage *result; // eax

  process = this->members.super.process;
  if ( !process )
    return 0;
  result = process->editorPackage;
  if ( !result || result->members.type != 0xC )
    return 0;
  return result;
}
