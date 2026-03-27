void __thiscall sub_625220(Actor *this)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  if ( !OblivionDynamicCast(
          ActorBaseForm,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
          &TESCreature `RTTI Type Descriptor',
          0) )
    Actor_GetHandReachDistance(this);
}
