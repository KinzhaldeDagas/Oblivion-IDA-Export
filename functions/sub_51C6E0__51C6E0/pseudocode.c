// Verified: returns TESActorBase size plus 3 bytes for changeMask 0x200 (skills) and 4 bytes for 0x400 (combat-style FormID). Confirmed by save/load partners 0x51DA50/0x51C710. Fallout 0x8240B4D0 shares only the skills extension.
unsigned __int16 __thiscall TESCreature_GetModifiedSize(TESCreature *self, ActorBaseSaveChangeMask changeMask)
{
  unsigned __int16 result; // ax

  result = TESActorBase_GetModifiedSize((TESActorBase *)self, changeMask); /*0x51c6f1*/
  if ( (changeMask & 0x200) != 0 ) /*0x51c6f4*/
    result += 3; /*0x51c6f6*/
  if ( (changeMask & 0x400) != 0 ) /*0x51c700*/
    result += 4; /*0x51c702*/
  return result; /*0x51c6ff*/
}
