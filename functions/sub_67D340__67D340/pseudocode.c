// Verified package persistence virtual InitLoadGame from vtable slot E8, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
// Verified: base InitLoadGame then resolve nonzero saved IDs at44/48 to TESForm pointers. No stronger subclass RTTI cast observed.
void __thiscall TrespassPackage_InitLoadGame(TrespassPackage *self)
{
  TESPackage_InitLoadGame(&self->base); /*0x67d343*/
  if ( self->form44 ) /*0x67d348*/
    self->form44 = TESForm_LookupByFormID((UInt32)self->form44); /*0x67d358*/
  if ( self->form48 ) /*0x67d35b*/
    self->form48 = TESForm_LookupByFormID((UInt32)self->form48); /*0x67d36b*/
}
