// Verified: TESCreature TESActorBaseData override, vslot +0x28. Tests component flags +4 bit 0x800 (NoBloodSpray); incoming this is complete TESCreature +0x24. Fallout 0x8240A810 GetNoBloodSpray corroborates meaning, not layout.
bool __thiscall TESCreature_GetNoBloodSpray(TESActorBaseData *__shifted(TESCreature,0x24) self)
{
  return (ADJ(self)->super.actorBaseData.flags & 0x800) != 0; /*0x51cc88*/
}
