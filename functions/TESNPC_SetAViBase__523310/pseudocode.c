char __thiscall TESNPC_SetAViBase(TESForm *this, int a2, UInt32 a3)
{
  char result; // al

  result = a2;
  if ( (unsigned int)(a2 - 0xC) > 0x14 )
  {
    if ( (unsigned int)(a2 - 0x25) > 2 )
      return TESActorBase_SetAViBase((int)this, a2, a3);
  }
  else
  {
    *((_BYTE *)this + ActorValue_GetGroupOffsetFromAV(2, a2) + 0xEC) = a3;
    return TESForm_MarkAsModified(this, 0x200);
  }
  return result;
}
