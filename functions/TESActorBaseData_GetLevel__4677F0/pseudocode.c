__int16 __thiscall TESActorBaseData_GetLevel(TESActorBaseData *this)
{
  TESNPC *v2; // eax
  __int16 result; // ax
  UInt16 minLevel; // cx
  SInt16 level; // [esp+4h] [ebp-4h]

  level = this->level;
  if ( (this->flags & kFlag_PCLevelOffset) == 0 )
    return level;
  v2 = (TESNPC *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  if ( !v2 || v2 == (TESNPC *)-0x24 )
    result = level;
  else
    result = v2->member.super.actorBaseData.level + level;
  minLevel = this->minLevel;
  if ( minLevel && result < (int)minLevel )
    return minLevel;
  minLevel = this->maxLevel;
  if ( minLevel )
  {
    if ( result > (int)minLevel )
      return minLevel;
  }
  if ( result < 1 )
    return 1;
  return result;
}
