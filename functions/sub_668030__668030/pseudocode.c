char __thiscall sub_668030(PlayerCharacter *this)
{
  int i; // esi
  int AVFromGroupOffset; // eax

  for ( i = 0; i < 0x15; ++i )
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i);
    if ( (unsigned int)(AVFromGroupOffset - 0xC) <= 0x14 )
    {
      LOBYTE(AVFromGroupOffset) = ActorValue_GetGroupOffsetFromAV(2, AVFromGroupOffset);
      this->skillExp[(char)AVFromGroupOffset] = 0.0;
    }
  }
  return AVFromGroupOffset;
}
