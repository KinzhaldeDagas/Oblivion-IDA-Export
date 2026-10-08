// Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
ActorSkinInfo *__thiscall Actor_GetSkinInfoByPerspective(Actor *this, bool firstPerson)
{
  if ( firstPerson ) /*0x6600d5*/
    return *((ActorSkinInfo **)this + 0x172); /*0x6600d7*/
  else
    return *((ActorSkinInfo **)this + 0x41); /*0x6600e0*/
}
