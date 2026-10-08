// Returns TESPackageNames[currentPackage->members.type] when Actor.process and process.currentPackage exist; otherwise null.
const char *__thiscall Actor::GetCurrentPackageTypeName(Actor *this)
{
  LowProcess *process; // eax
  TESPackage *editorPackage; // eax

  process = this->members.super.process; /*0x5e4080*/
  if ( process && (editorPackage = process->editorPackage) != 0 ) /*0x5e408c*/
    return *(const char **)(4 * editorPackage->members.type + 0xB12988); /*0x5e4092*/
  else
    return 0; /*0x5e409a*/
}
