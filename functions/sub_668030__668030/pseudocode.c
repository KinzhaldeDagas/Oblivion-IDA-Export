// Clears the 21-entry PlayerCharacter skill-use progress array for native skill AVs 0x0C..0x20.
void __thiscall Player_ClearAllSkillProgress(PlayerCharacter *this)
{
  int i; // esi
  int AVFromGroupOffset; // eax

  for ( i = 0; i < 0x15; ++i ) /*0x668034*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i); /*0x668039*/
    if ( (unsigned int)(AVFromGroupOffset - 0xC) <= 0x14 ) /*0x668047*/
      this->skillExp[ActorValue_GetGroupOffsetFromAV(2, AVFromGroupOffset)] = 0.0; /*0x668059*/
  }
}
