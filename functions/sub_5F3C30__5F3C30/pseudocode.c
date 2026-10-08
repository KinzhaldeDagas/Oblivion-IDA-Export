// ODismemberment combat decode: block stagger perk chance helper using shield/weapon/hand-to-hand state, mastery gate, and iPerkBlockStaggerChance.
bool __usercall Actor_CheckBlockStaggerPerk@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  SInt32 v4; // eax
  SInt32 BaseCalcAVi; // eax

  if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xEC))(*(_DWORD *)(a1 + 0x58), 1) /*0x5f3c53*/
    || (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF8))(*(_DWORD *)(a1 + 0x58), 1) )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, a2, a3, a1, 0xF); /*0x5f3c78*/
    if ( Calc_MasteryFromSkill(BaseCalcAVi) < kSkillMastery_Expert /*0x5f3c98*/
      || !(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0x58) + 0xF8))(*(_DWORD *)(a1 + 0x58), 1) )
    {
      return 0; /*0x5f3c9c*/
    }
  }
  else
  {
    v4 = Actor_GetBaseCalcAVi((int *)a1, a2, a3, a1, 0x11); /*0x5f3c5d*/
    if ( Calc_MasteryFromSkill(v4) < kSkillMastery_Expert ) /*0x5f3c6e*/
      return 0; /*0x5f3c73*/
  }
  return Game_RandomLargeInteger(0) % 0x64 <= (int)MEMORY[0xB37238].value; /*0x5f3c72*/
}
