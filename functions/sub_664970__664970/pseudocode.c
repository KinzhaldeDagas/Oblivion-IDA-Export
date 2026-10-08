// Returns the selected attribute's skill-increase count from the oldest queued eight-byte attribute-bonus bucket. The queue preserves separate bonus sets when multiple player levels are pending.
int __thiscall Player_GetAttributeBonusSkillIncreaseCount(PlayerCharacter *this, unsigned int attributeAV)
{
  UInt8 **attributeBonuses; // eax
  UInt8 *v4; // esi
  int v5; // eax
  UInt8 *v6; // eax
  UInt8 *v7; // ecx
  int result; // eax

  attributeBonuses = this->attributeBonuses; /*0x664975*/
  v4 = 0; /*0x66497d*/
  if ( attributeBonuses ) /*0x664981*/
  {
    do /*0x6649e8*/
    {
      v7 = attributeBonuses[1]; /*0x6649d7*/
      if ( !v7 && !*attributeBonuses ) /*0x6649de*/
        break; /*0x6649e0*/
      v4 = *attributeBonuses; /*0x6649e2*/
      attributeBonuses = (UInt8 **)attributeBonuses[1]; /*0x6649e4*/
    }
    while ( v7 ); /*0x6649e8*/
  }
  else
  {
    v5 = FormHeapAlloc(8u); /*0x664985*/
    if ( v5 ) /*0x66498f*/
    {
      *(_DWORD *)v5 = 0; /*0x664991*/
      *(_DWORD *)(v5 + 4) = 0; /*0x664993*/
    }
    else
    {
      v5 = 0; /*0x664998*/
    }
    this->attributeBonuses = (UInt8 **)v5; /*0x66499c*/
    v6 = (UInt8 *)FormHeapAlloc(8u); /*0x6649a2*/
    if ( v6 ) /*0x6649ac*/
    {
      *(_DWORD *)v6 = 0; /*0x6649b0*/
      *((_DWORD *)v6 + 1) = 0; /*0x6649b2*/
      v4 = v6; /*0x6649bc*/
      BSSimpleList_PushFront(this->attributeBonuses, (int)v6); /*0x6649be*/
    }
    else
    {
      v4 = 0; /*0x6649ce*/
      BSSimpleList_PushFront(this->attributeBonuses, 0); /*0x6649d0*/
    }
  }
  if ( !v4 ) /*0x6649ec*/
    return 0; /*0x664a10*/
  result = 0; /*0x6649f2*/
  if ( attributeAV <= 7 ) /*0x6649f7*/
    return (char)v4[ActorValue_GetGroupOffsetFromAV(0, attributeAV)]; /*0x664a06*/
  return result; /*0x664a0a*/
}
