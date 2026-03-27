int __usercall ActiveEffect_Base_ProcessEffect_::TestEdible@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>)
{
  char IsEdible; // al

  if ( a3 )
  {
    IsEdible = (*(_BYTE *)(a3 + 0x7C) & 2) != 0;
  }
  else
  {
    if ( !a1 )
      return ActiveEffect_Base_ProcessEffect_::TestMenuMode(a2, a4, a5, a6, a7);
    IsEdible = AlchemyItem_IsEdible(a1);
  }
  if ( !IsEdible )
    return ActiveEffect_Base_ProcessEffect_::TestMenuMode(a2, a4, a5, a6, a7);
  return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList_(a1);
}
