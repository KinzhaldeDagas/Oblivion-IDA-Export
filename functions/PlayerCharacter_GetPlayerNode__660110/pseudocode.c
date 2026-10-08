// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused CULLING audit confirms true selects firstPersonNiNode(+0x5D0); false tail-calls normal reference-node getter. Main renderer invokes this selector with true before separate call 0x40CE48. Its third-person node at +0x3C is not the root selected at that callsite.
NiNode *__thiscall PlayerCharacter_GetNodeByPerspective(PlayerCharacter *this, bool firstPerson)
{
  NiNode *result; // eax

  if ( firstPerson ) /*0x660115*/
    return this->firstPersonNiNode; /*0x660117*/
  return result; /*0x660120*/
}
