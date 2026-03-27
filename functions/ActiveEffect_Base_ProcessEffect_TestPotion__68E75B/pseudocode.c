int __usercall ActiveEffect_Base_ProcessEffect_::TestPotion@<eax>(
        char a1@<bpl>,
        int a2@<edi>,
        int a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  int v6; // eax

  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 0x18))(*(_DWORD *)(a3 + 8)) == 7
    && (v6 = *(_DWORD *)(a3 + 8)) != 0 )
  {
    return ActiveEffect_Base_ProcessEffect_::TestEdible(v6 - 0x24, a1, a2, a3, a4, a5, a6);
  }
  else
  {
    return ActiveEffect_Base_ProcessEffect_::TestEdible(0, a1, a2, a3, a4, a5, a6);
  }
}
