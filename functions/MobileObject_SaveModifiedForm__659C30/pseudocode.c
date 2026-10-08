// Verified: writes one-byte process level from process GetProcessLevel(+8), or FF when no process; calls TESObjectREFR save, then process SaveGame(+0x3F4) with changeMask and MobileObject owner. RET4; prior floating-point prototype parameters were artifacts.
void __thiscall MobileObject_SaveModifiedForm(MobileObject *self, unsigned int changeMask)
{
  bool v3; // zf
  char source; // [esp+Bh] [ebp-1h] BYREF

  v3 = self->process == 0; /*0x659c34*/
  source = 0xFF; /*0x659c39*/
  if ( !v3 ) /*0x659c3e*/
    source = self->process->GetProcessLevel(self->process); /*0x659c4a*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &source, 1u); /*0x659c57*/
  TESObjectREFR_SaveModifiedForm((TESObjectREFR *)self, changeMask); /*0x659c63*/
  if ( self->process ) /*0x659c68*/
    self->process->SaveGame(self->process, changeMask, self); /*0x659c7b*/
}
