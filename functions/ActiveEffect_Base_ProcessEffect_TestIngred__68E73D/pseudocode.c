int __usercall ActiveEffect_Base_ProcessEffect_::TestIngred@<eax>(
        char a1@<bpl>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  int v5; // eax

  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 0x18))(*(_DWORD *)(a2 + 8)) == 8
    && (v5 = *(_DWORD *)(a2 + 8)) != 0 )
  {
    return ActiveEffect_Base_ProcessEffect_::TestPotion(a1, v5 - 0x24, a2, a3, a4, a5);
  }
  else
  {
    return ActiveEffect_Base_ProcessEffect_::TestPotion(a1, 0, a2, a3, a4, a5);
  }
}
