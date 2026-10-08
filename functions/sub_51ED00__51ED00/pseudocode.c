// Verified scalar deleting destructor: calls TESCreature_Destructor(0x51E9A0), frees self with FormHeapFree only when flags bit 0 is set, returns self.
TESCreature *__thiscall TESCreature_ScalarDeletingDestructor(TESCreature *self, unsigned int flags)
{
  TESCreature_Destructor(self); /*0x51ed03*/
  if ( (flags & 1) != 0 ) /*0x51ed0d*/
    FormHeapFree((unsigned int)self); /*0x51ed10*/
  return self; /*0x51ed1a*/
}
