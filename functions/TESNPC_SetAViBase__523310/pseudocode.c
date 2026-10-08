// TESNPC_SetAViBase: skills 0x0C..0x20 are stored as single bytes at TESNPC +0xEC + ActorValue_GetGroupOffsetFromAV(2,av). This confirms both >255 overflow and <0 underflow can wrap base skills.
char __thiscall TESNPC_SetAViBase(TESForm *this, int a2, UInt32 a3)
{
  char result; // al

  result = a2; /*0x523310*/
  if ( (unsigned int)(a2 - 0xC) > 0x14 ) /*0x52331d*/
  {
    if ( (unsigned int)(a2 - 0x25) > 2 ) /*0x52334e*/
      return TESActorBase_SetAViBase((int)this, a2, a3); /*0x523358*/
  }
  else
  {
    *((_BYTE *)this + ActorValue_GetGroupOffsetFromAV(2, a2) + 0xEC) = a3; /*0x523338*/
    return TESForm_MarkAsModified(this, 0x200); /*0x52333f*/
  }
  return result; /*0x523344*/
}
