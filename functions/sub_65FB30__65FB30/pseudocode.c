// Normal Oblivion skill-level path creates a new empty attribute-bonus bucket whenever majorSkillAdvances is divisible by iLevelUpSkillCount (default 10). The just-earned skill's governing-attribute increment occurs before this major-only rollover.
void __thiscall Player_MaybeStartNextAttributeBonusBucket(PlayerCharacter *this)
{                                               // Modulo divisor is g_iLevelUpSkillCount.value (native default 10).
  int v2; // eax
  _DWORD *v3; // eax

  if ( !((signed int)this->majorSkillAdvances % g_iLevelUpSkillCount.value) ) /*0x65fb3a*/
  {
    if ( !this->attributeBonuses ) /*0x65fb44*/
    {
      v2 = FormHeapAlloc(8u); /*0x65fb4e*/
      if ( v2 ) /*0x65fb58*/
      {
        *(_DWORD *)v2 = 0; /*0x65fb5a*/
        *(_DWORD *)(v2 + 4) = 0; /*0x65fb60*/
      }
      else
      {
        v2 = 0; /*0x65fb69*/
      }
      this->attributeBonuses = (UInt8 **)v2; /*0x65fb6b*/
    }
    v3 = (_DWORD *)FormHeapAlloc(8u); /*0x65fb73*/
    if ( v3 ) /*0x65fb7d*/
    {
      *v3 = 0; /*0x65fb81*/
      v3[1] = 0; /*0x65fb83*/
      BSSimpleList_PushFront(this->attributeBonuses, (int)v3); /*0x65fb8d*/
    }
    else
    {
      BSSimpleList_PushFront(this->attributeBonuses, 0); /*0x65fb9d*/
    }
  }
}
