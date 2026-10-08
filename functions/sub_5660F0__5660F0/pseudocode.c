// Verified package persistence virtual InitLoadGame from vtable slot E8, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
void __thiscall TESPackage_InitLoadGame(TESPackage *self)
{
  LocationData *location; // ecx
  TargetData *target; // ecx

  location = self->members.location; /*0x5660f3*/
  if ( location ) /*0x5660f8*/
    sub_569AB0(location); /*0x5660fa*/
  target = self->members.target; /*0x5660ff*/
  if ( target ) /*0x566105*/
  {
    if ( target->targetType <= 1u ) /*0x56a086*/
      target->target.objectCode = (UInt32)TESForm_LookupByFormID(target->target.objectCode); /*0x56a094*/
  }
}
