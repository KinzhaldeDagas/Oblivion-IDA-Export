int __thiscall TESNPC_GetAViBase(unsigned __int8 *this, int a2)
{
  int result; // eax

  result = 0; /*0x5232da*/
  if ( (unsigned int)(a2 - 0xC) <= 0x14 ) /*0x5232df*/
    return *(this + ActorValue_GetGroupOffsetFromAV(2, a2) + 0xEC); /*0x5232ec*/
  if ( (unsigned int)(a2 - 0x25) > 2 ) /*0x523301*/
    return TESActorBase_GetAViBase((int)this, a2); /*0x523306*/
  return result; /*0x5232f7*/
}
