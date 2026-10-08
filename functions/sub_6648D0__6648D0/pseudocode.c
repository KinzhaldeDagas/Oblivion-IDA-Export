// Increment the current eight-byte governing-attribute bonus bucket for AttributeActorValue 0..7. Both major and non-major skill increases invoke this before any major-only rollover logic.
void __thiscall Player_IncrementAttributeBonus(PlayerCharacter *this, AttributeActorValue governingAttribute)
{
  int v3; // eax
  UInt8 **attributeBonuses; // eax
  _DWORD *v5; // eax
  UInt8 *v6; // esi
  char GroupOffsetFromAV; // al

  if ( !this->attributeBonuses ) /*0x6648d3*/
  {
    v3 = FormHeapAlloc(8u); /*0x6648de*/
    if ( v3 ) /*0x6648e8*/
    {
      *(_DWORD *)v3 = 0; /*0x6648ea*/
      *(_DWORD *)(v3 + 4) = 0; /*0x6648f0*/
    }
    else
    {
      v3 = 0; /*0x6648f9*/
    }
    this->attributeBonuses = (UInt8 **)v3; /*0x6648fb*/
  }
  attributeBonuses = this->attributeBonuses; /*0x664901*/
  if ( !attributeBonuses[1] && !*attributeBonuses ) /*0x66490d*/
  {
    v5 = (_DWORD *)FormHeapAlloc(8u); /*0x664914*/
    if ( v5 ) /*0x66491e*/
    {
      *v5 = 0; /*0x664922*/
      v5[1] = 0; /*0x664924*/
    }
    else
    {
      v5 = 0; /*0x664929*/
    }
    BSSimpleList_PushFront(this->attributeBonuses, (int)v5); /*0x664932*/
  }
  v6 = *this->attributeBonuses; /*0x66493d*/
  if ( v6 ) /*0x664941*/
  {
    if ( governingAttribute <= kAttribute_Luck ) /*0x66494a*/
    {
      GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(0, governingAttribute); /*0x66494f*/
      ++v6[GroupOffsetFromAV]; /*0x66495a*/
    }
  }
}
