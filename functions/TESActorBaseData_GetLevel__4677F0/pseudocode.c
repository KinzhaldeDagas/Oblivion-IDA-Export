__int16 __thiscall TESActorBaseData_GetLevel(TESActorBaseData *this)
{
  TESNPC *v2; // eax
  __int16 result; // ax
  UInt16 minLevel; // cx
  SInt16 level; // [esp+4h] [ebp-4h]

  level = this->level; /*0x467801*/
  if ( (this->flags & kFlag_PCLevelOffset) == 0 ) /*0x467805*/
    return level;                               // 3DTheft decode 2026-05-13: TESActorBaseData::GetLevel tests kFlag_PCLevelOffset (0x80) in flags +0x04, confirming actor-base flag field semantics. /*0x467805*/
  v2 = (TESNPC *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x467815*/
  if ( !v2 || v2 == (TESNPC *)-0x24 ) /*0x467820*/
    result = level; /*0x46782d*/
  else
    result = v2->member.super.actorBaseData.level + level; /*0x467827*/
  minLevel = this->minLevel; /*0x467832*/
  if ( minLevel && result < (int)minLevel ) /*0x467845*/
    return minLevel; /*0x467845*/
  minLevel = this->maxLevel; /*0x467851*/
  if ( minLevel ) /*0x467858*/
  {
    if ( result > (int)minLevel ) /*0x467862*/
      return minLevel; /*0x467850*/
  }
  if ( result < 1 ) /*0x467868*/
    return 1; /*0x467872*/
  return result; /*0x46784e*/
}
