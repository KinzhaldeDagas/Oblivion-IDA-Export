int __usercall ActiveEffect_Base_ProcessEffect_::TestEdible@<eax>(
        int a1@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        float a5)
{
  char IsEdible; // al

  if ( a2 ) /*0x68e77a*/
  {
    IsEdible = (*(_BYTE *)(a2 + 0x7C) & 2) != 0; /*0x68e781*/
  }
  else
  {
    if ( !a1 ) /*0x68e787*/
      return ActiveEffect_Base_ProcessEffect_::TestMenuMode(a3, a4, a5); /*0x68e787*/
    IsEdible = AlchemyItem_IsEdible(a1); /*0x68e789*/
  }
  if ( !IsEdible ) /*0x68e790*/
    return ActiveEffect_Base_ProcessEffect_::TestMenuMode(a3, a4, a5); /*0x68e791*/
  return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList_(a3, a4, a5);
}
