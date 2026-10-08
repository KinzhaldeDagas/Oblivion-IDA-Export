// Applies actor-dependent scene/node state through 0x471C00 and then calls ActorAnimData::ApplyActorAnimData. Called during NiNode generation, animation updates, body toggles, resurrection/fast travel, and first-person transitions.
void __thiscall sub_474510(ActorAnimData *this, TESObjectREFR *a2)
{
  sub_471C00(this, (Actor *)a2); /*0x474518*/
  ActorAnimData::ApplyActorAnimData(this); /*0x47451f*/
}
