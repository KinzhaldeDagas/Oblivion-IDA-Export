// PlayerCharacter ActorAnimData selector. false returns ordinary process/default ActorAnimData; true returns firstPersonAnimData at PlayerCharacter+0x5CC. Distinct from 0x6600D0, which selects ActorSkinInfo at +0x104/+0x5C8.
ActorAnimData *__thiscall PlayerCharacter_GetAnimDataByPerspective(PlayerCharacter *this, bool firstPerson)
{
  if ( firstPerson ) /*0x65d755*/
    return this->firstPersonAnimData; /*0x65d757*/
  else
    return TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x65d760*/
}
