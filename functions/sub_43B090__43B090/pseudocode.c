void __thiscall sub_43B090(QueuedActor *a1)
{
  NiNode **unk04; // ecx
  _DWORD *unk08; // ecx

  if ( a1->super.super.super.members.unk0C != 6 ) /*0x43b097*/
  {
    sub_43B000(&a1->super); /*0x43b099*/
    unk04 = (NiNode **)a1->unk04; /*0x43b09e*/
    if ( unk04 ) /*0x43b0a3*/
      sub_4353D0(unk04, (TESObjectREFR *)a1->super.refr, a1->super.refr->member.skinInfo);// This make sense only if refr is a Character*, as it's corrispond to ActorSkinInfo (don't this make more sense in Actor?). what about Creatures? /*0x43b0b0*/
    unk08 = (_DWORD *)a1->unk08; /*0x43b0b5*/
    if ( unk08 ) /*0x43b0ba*/
      sub_437B60(unk08); /*0x43b0bd*/
  }
}
