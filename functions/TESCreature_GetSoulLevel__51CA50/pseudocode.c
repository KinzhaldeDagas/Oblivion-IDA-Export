UInt32 __thiscall TESCreature::GetSoulLevel(TESCreature *this)
{
  UInt32 result; // eax
  __int16 Level; // ax

  result = *(unsigned __int16 *)&this->soulLevel; /*0x51ca53*/
  if ( (this->super.actorBaseData.flags & kFlag_PCLevelOffset) != 0 ) /*0x51ca60*/
  {
    Level = TESActorBaseData_GetLevel(&this->super.actorBaseData); /*0x51ca65*/
    if ( Level > 1 ) /*0x51ca71*/
    {
      if ( Level >= 7 ) /*0x51ca7d*/
      {
        if ( Level >= 13 ) /*0x51ca89*/
          return (Level >= 18) + 4; /*0x51ca9d*/
        else
          return 3; /*0x51ca8b*/
      }
      else
      {
        return 2; /*0x51ca7f*/
      }
    }
    else
    {
      return 1; /*0x51ca73*/
    }
  }
  return result; /*0x51ca78*/
}
