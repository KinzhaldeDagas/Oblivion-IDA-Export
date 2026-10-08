// Verified cross-build layout divergence: Fallout NonActorMagicTarget has MagicTarget size 16 and total size 40; constructor places parent ref at +0x1C and BSSimpleList header at +0x20. Oblivion MagicTarget is 8 bytes and NonActorMagicTarget is 32 bytes, with parent at +0x14 and ActiveEffectList header at +0x18. Fallout's extra IsInvulnerable vtable slot is absent in Oblivion; do not transfer its later vtable offsets or data offsets.
NonActorMagicTarget *__thiscall NonActorMagicTarget_constr(NonActorMagicTarget *this, TESObjectREFR *parentReference)
{
  MagicTarget *p_magicTarget; // edi

  this->super.vtbl = (BSExtraDataVtbl *)&BSExtraData::`vftable'; /*0x6a333c*/
  this->super.members.type = 0x3A; /*0x6a3342*/
  this->super.members.next = 0; /*0x6a3346*/
  p_magicTarget = &this->magicTarget; /*0x6a3349*/
  MagicTarget_constr(&this->magicTarget); /*0x6a3352*/
  this->super.vtbl = (BSExtraDataVtbl *)&NonActorMagicTarget::`vftable'{for `NonActorMagicTarget'}; /*0x6a335b*/
  p_magicTarget->vtbl = (MagicTargetVtbl *)&NonActorMagicTarget::`vftable'{for `MagicTarget'}; /*0x6a3361*/
  this->activeEffectList = 0;                   // Verified active-effect list header is the two-pointer pair at outer-object +0x18/+0x1C. Slot +8 returns its address; ActiveEffect_Base_LinkAEList traverses each node as {ActiveEffect *item, node *next}. `BSSimpleList<ActiveEffect *>` is Probable by exact Fallout homolog/type metadata; Oblivion-side layout and traversal are directly established. /*0x6a3367*/
  this->? = 0; /*0x6a336a*/
  this->parentReference = parentReference;      // Verified NonActorMagicTarget parent TESObjectREFR pointer is stored at outer-object +0x14; slot +4 returns it and the setter writes the same offset. /*0x6a336d*/
  return this; /*0x6a3372*/
}
