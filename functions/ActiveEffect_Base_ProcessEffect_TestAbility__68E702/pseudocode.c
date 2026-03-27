int __usercall ActiveEffect_Base_ProcessEffect_::TestAbility@<eax>(
        int a1@<esi>,
        int eax0@<eax>,
        char a3@<bpl>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  if ( *(_DWORD *)(a1 + 0x28) == 4 )
    return ActiveEffect_Base_ProcessEffect_::TestShieldType(eax0, a3, a1, a4, a5);
  else
    return ActiveEffect_Base_ProcessEffect_::TestIngred(a3, a1, a4, a5, a6);
}
