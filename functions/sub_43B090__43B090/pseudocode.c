void __thiscall sub_43B090(QueuedActor *a1)
{
  NiNode **unk04; // ecx
  _DWORD *unk08; // ecx

  if ( a1->super.super.super.members.unk0C != 6 )
  {
    sub_43B000(&a1->super);
    unk04 = (NiNode **)a1->unk04;
    if ( unk04 )
      sub_4353D0(unk04, (TESObjectREFR *)a1->super.refr, a1->super.refr->member.ActorSkinInfo);// This make sense only if refr is a Character*, as it's corrispond to ActorSkinInfo (don't this make more sense in Actor?). what about Creatures?
    unk08 = (_DWORD *)a1->unk08;
    if ( unk08 )
      sub_437B60(unk08);
  }
}
