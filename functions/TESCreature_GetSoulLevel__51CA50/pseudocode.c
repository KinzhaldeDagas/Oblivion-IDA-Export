UInt32 __thiscall TESCreature::GetSoulLevel(TESCreature *this)
{
  UInt32 result; // eax
  __int16 Level; // ax

  result = *(unsigned __int16 *)&this->soulLevel;
  if ( (this->super.actorBaseData.flags & kFlag_PCLevelOffset) != 0 )
  {
    Level = TESActorBaseData_GetLevel(&this->super.actorBaseData);
    if ( Level > 1 )
    {
      if ( Level >= 7 )
      {
        if ( Level >= 13 )
          return (Level >= 18) + 4;
        else
          return 3;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
