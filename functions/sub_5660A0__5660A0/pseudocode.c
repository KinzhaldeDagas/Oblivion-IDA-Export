// Verified flag predicate: TESPackage packageFlags bit800. BaseProcess_LoadGame uses it to retire an existing package through load-manager DeleteForm. Name describes observed runtime-package marker; no ownership transfer implied by predicate alone.
// Confidence refinement: Verified predicate is flag800 and BaseProcess load deletion use. Probable semantic label RuntimePackage; original getter spelling Unknown.
bool __thiscall TESPackage_IsRuntimePackage(TESPackage *self)
{
  return (self->members.packageFlags & 0x800) != 0; /*0x5660a8*/
}
