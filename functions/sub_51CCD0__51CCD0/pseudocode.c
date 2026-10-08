// Verified: component vslot +0x34 sets/clears only NoBloodDecal (0x1000), then tail-dispatches MarkAsModified(+0x50) with changeMask 0x10. Complete creature flags offset +0x28.
// Verified persistence link: MarkAsModified mask 0x10 is consumed by TESActorBaseData size/save/load 0x467A20/0x467AF0/0x467CA0, which transfer the 16-byte base-data block including this flag. Runtime setter persistence is now linked to actual save payload.
void __thiscall TESCreature_SetNoBloodDecal(TESActorBaseData *__shifted(TESCreature,0x24) self, bool disabled)
{
  if ( disabled ) /*0x51ccd5*/
    ADJ(self)->super.actorBaseData.flags |= 0x1000u; /*0x51ccd7*/
  else
    ADJ(self)->super.actorBaseData.flags &= ~0x1000u; /*0x51cce0*/
  ADJ(self)->super.actorBaseData.vtbl->MarkAsModified(self, 0x10u); /*0x51ccf4*/
}
