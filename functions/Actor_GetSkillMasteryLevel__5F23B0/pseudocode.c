int __userpurge Actor_GetSkillMasteryLevel@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int result; // eax
  int BaseCalcAVi; // eax

  result = 0;
  if ( (unsigned int)(a4 - 0xC) <= 0x14 )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(a1, a2, a3, a4 - 0xC, a4);
    return Calc_MasteryFromSkill(BaseCalcAVi);
  }
  return result;
}
