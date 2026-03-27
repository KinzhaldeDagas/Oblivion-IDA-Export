int __thiscall TESNPC_GetAViBase(unsigned __int8 *this, int a2)
{
  int result; // eax

  result = 0;
  if ( (unsigned int)(a2 - 0xC) <= 0x14 )
    return *(this + ActorValue_GetGroupOffsetFromAV(2, a2) + 0xEC);
  if ( (unsigned int)(a2 - 0x25) > 2 )
    return TESActorBase_GetAViBase((int)this, a2);
  return result;
}
