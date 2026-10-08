// Verified package persistence virtual GetSaveSize from vtable slot DC, matching paired implementations, package source-file diagnostics and BaseProcess dispatch. ECX object, no stack arguments. Previous indexed-vtable casts into TESForm components were caused by missing package-tail type.
unsigned __int16 __thiscall TrespassPackage_GetSaveSize(TrespassPackage *self)
{
  __int16 v1; // ax

  v1 = TESPackage_GetSaveSize(&self->base) + 0xC; /*0x67d503*/
  if ( g_TESSaveLoadGame->currentVersion < 0x6Cu ) /*0x67d506*/
    return v1 + 8; /*0x67d50c*/
  else
    return v1 + 0x10; /*0x67d508*/
}
