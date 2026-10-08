NiNode *__thiscall Alchemy_MatchPotion(TESHealthForm **this, int a2)
{
  unsigned int Health; // esi
  int v3; // eax
  const unsigned __int8 *v4; // ecx
  const unsigned __int8 *v5; // eax

  Health = TESHealthForm_GetHealth(*this); /*0x44a759*/
  if ( !Health ) /*0x44a75d*/
    return 0; /*0x44a7c0*/
  while ( 1 )
  {
    if ( *(_BYTE *)(Health + 4) == 0x28 && (*(_DWORD *)(Health + 8) & 0x20) == 0 )
    {
      v3 = a2 ? a2 + 0x30 : 0;
      if ( !(unsigned __int8)EffectItemList_CompareTo(v3) ) /*0x44a782*/
      {
        v4 = *(const unsigned __int8 **)(a2 + 0x28); /*0x44a790*/
        if ( !v4 ) /*0x44a792*/
          v4 = (const unsigned __int8 *)EmptyString; /*0x44a794*/
        v5 = *(const unsigned __int8 **)(Health + 0x28); /*0x44a799*/
        if ( !v5 ) /*0x44a79e*/
          v5 = (const unsigned __int8 *)EmptyString; /*0x44a7a0*/
        if ( !_mbscmp(v5, v4) ) /*0x44a7a7*/
          break; /*0x44a7a7*/
      }
    }
    Health = TESObject_GetNextObject((_DWORD *)Health); /*0x44a7ba*/
    if ( !Health ) /*0x44a7be*/
      return 0; /*0x44a7be*/
  }
  return (NiNode *)Health; /*0x44a7c0*/
}
