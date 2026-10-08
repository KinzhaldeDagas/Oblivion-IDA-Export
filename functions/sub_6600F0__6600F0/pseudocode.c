// Returns the player's active render root. If PlayerCharacter+0x588 selects third person, or firstPersonNiNode +0x5D0 is null, returns ordinary TESObjectREFR NiNode; otherwise returns firstPersonNiNode.
NiNode *__thiscall PlayerCharacter_GetActiveNode(PlayerCharacter *this)
{
  NiNode *result; // eax

  if ( this->isThirdPerson ) /*0x6600f0*/
    return TESObjectREFR::GetNiNode((TESObjectREFR *)this); /*0x6600f0*/
  result = this->firstPersonNiNode; /*0x6600f9*/
  if ( !result ) /*0x660101*/
    return TESObjectREFR::GetNiNode((TESObjectREFR *)this); /*0x660103*/
  return result; /*0x660108*/
}
