char *__thiscall sub_5FAA70(_BYTE *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // edi
  char *v5; // esi
  int BaseCalcAVi; // eax

  v2 = 0;
  v3 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x190))(this) )
      v2 = v3;
  }
  v4 = *(unsigned __int16 *)(v2 + 0x30);
  v5 = (char *)sub_41E980((ExtraDataList *)(this + 0x44)) + (unsigned __int16)v4;
  BaseCalcAVi = Actor_GetBaseCalcAVi((int *)TESDataHandler_g_PlayerRef, v3, v4, (int)v5, 0x1D);
  if ( Calc_MasteryFromSkill(BaseCalcAVi) == 4 )
    v5 += iPerkExtraBarterGoldMaster;
  return v5;
}
