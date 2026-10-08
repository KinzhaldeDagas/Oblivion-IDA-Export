// Verified: TESCreature TESActorBaseData override, vslot +0x30. Tests component flags +4 bit 0x1000 (NoBloodDecal); incoming this is complete TESCreature +0x24. Fallout 0x8240A830 GetNoBloodDecal corroborates meaning, not layout.
bool __thiscall TESCreature_GetNoBloodDecal(TESActorBaseData *__shifted(TESCreature,0x24) self)
{
  return (ADJ(self)->super.actorBaseData.flags & 0x1000) != 0; /*0x51ccc8*/
}
