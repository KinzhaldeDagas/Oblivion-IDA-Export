char *__thiscall sub_5FAA70(_BYTE *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // edi
  char *v5; // esi
  SInt32 BaseCalcAVi; // eax

  v2 = 0; /*0x5faa7d*/
  v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this); /*0x5faa81*/
  if ( v3 ) /*0x5faa85*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x190))(this) ) /*0x5faa91*/
      v2 = v3; /*0x5faa97*/
  }
  v4 = *(unsigned __int16 *)(v2 + 0x30); /*0x5faa99*/
  v5 = (char *)ExtraDataList_GetInvestmentGold((ExtraDataList *)(this + 0x44)) + (unsigned __int16)v4; /*0x5faab2*/
  BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, v3, v4, (int)v5, 0x1D); /*0x5faab4*/
  if ( Calc_MasteryFromSkill(BaseCalcAVi) == kSkillMastery_Master ) /*0x5faac5*/
    v5 += (unsigned int)MEMORY[0xB375E8].value; /*0x5faac7*/
  return v5; /*0x5faacd*/
}
