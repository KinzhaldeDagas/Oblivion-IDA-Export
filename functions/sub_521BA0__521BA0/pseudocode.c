// Verified: TESActorBase size +21 bytes for 0x200 skills +4 bytes for 0x400 combat-style FormID; matches NPC save/load partners. Creature uses the same masks but only three skill bytes.
unsigned __int16 __thiscall TESNPC_GetModifiedSize(TESNPC *self, ActorBaseSaveChangeMask changeMask)
{
  unsigned __int16 result; // ax

  result = TESActorBase_GetModifiedSize((TESActorBase *)self, changeMask); /*0x521bb1*/
  if ( (changeMask & 0x200) != 0 ) /*0x521bb4*/
    result += 0x15; /*0x521bb6*/
  if ( (changeMask & 0x400) != 0 ) /*0x521bc0*/
    result += 4; /*0x521bc2*/
  return result; /*0x521bbf*/
}
