bool __usercall sub_5F3C30@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int BaseCalcAVi; // eax

  if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xEC))(*(_DWORD *)(a1 + 0x58), 1)
    || (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF8))(*(_DWORD *)(a1 + 0x58), 1) )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, a2, a3, a1, 0xF);
    if ( Calc_MasteryFromSkill(BaseCalcAVi) < 3
      || !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF8))(*(_DWORD *)(a1 + 0x58), 1) )
    {
      return 0;
    }
  }
  else
  {
    v4 = Actor_GetBaseCalcAVi((int *)a1, a2, a3, a1, 0x11);
    if ( Calc_MasteryFromSkill(v4) < 3 )
      return 0;
  }
  return GetRandomLargeInteger_(0) % 0x64 <= dword_B37238;
}
