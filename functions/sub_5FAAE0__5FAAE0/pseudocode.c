void __userpurge sub_5FAAE0(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, float a5)
{
  double v5; // st7
  int v7; // ecx
  SInt32 BaseCalcAVi; // eax
  float v10; // [esp+18h] [ebp-10h]
  float v11; // [esp+20h] [ebp-8h]
  float retaddr; // [esp+28h] [ebp+0h]

  v5 = a5; /*0x5faae3*/
  v11 = a5 - *((float *)a1 + 0x2F); /*0x5faaf2*/
  if ( *((float *)a1 + 0x2F) > (double)a5 || *((float *)a1 + 0x2F) < 0.0 ) /*0x5fab12*/
  {
    *((float *)a1 + 0x2F) = a5; /*0x5fab16*/
    v11 = 0.0; /*0x5fab1e*/
    if ( v5 > 0.0 && flt_A3744C > v5 ) /*0x5fab38*/
    {
      *((float *)a1 + 0x2F) = 0.0; /*0x5fab3a*/
      v11 = a5; /*0x5fab40*/
    }
  }
  (*(void (__stdcall **)(float, int))(*a1 + 0x2E4))(COERCE_FLOAT(LODWORD(v11)), a4); /*0x5fab5a*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x198))(a1, 0) ) /*0x5fab68*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x330))(a1) ) /*0x5fab7c*/
    {
      if ( !reference->isInCharGen || !PlayerCharacter::IsSleeping_(reference) ) /*0x5fab91*/
      {
        (*(void (__thiscall **)(_DWORD *))(*a1 + 0x33C))(a1); /*0x5fabac*/
        ExtraDataList_UpdateFriendHitTimers((ExtraDataList *)(a1 + 0x11), a1); /*0x5fabb2*/
      }
    }
    if ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0x16] + 0x2C0))(a1[0x16]) & 0x200) != 0 ) /*0x5fabc8*/
    {
      v7 = a1[0x16]; /*0x5fabce*/
      if ( v7 ) /*0x5fabd3*/
      {
        if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x2C0))(v7) & 0xF) != 0 ) /*0x5fabe5*/
        {
          v10 = ((double (__thiscall *)(_DWORD *, _DWORD))*(_DWORD *)(*a1 + 0x288))(a1, 0); /*0x5fabfa*/
          retaddr = Calc_ActorBaseEncumbrance(v10); /*0x5fac04*/
          retaddr = (double)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x284))(a1, 0xB) / retaddr; /*0x5fac24*/
          Calc_FatigueRunMultiplier_(retaddr); /*0x5fac2f*/
          BaseCalcAVi = Actor_GetBaseCalcAVi(a1, a2, a3, (int)a1, 0xD); /*0x5fac43*/
          switch ( Calc_MasteryFromSkill(BaseCalcAVi) ) /*0x5fac59*/
          {
            case kSkillMastery_Apprentice: /*0x5fac59*/
              GameSetting_GetSafeFloatPointer(unk_B375F8); /*0x5fac65*/
              break; /*0x5fac6c*/
            case kSkillMastery_Journeyman: /*0x5fac59*/
              GameSetting_GetSafeFloatPointer(unk_B37600); /*0x5fac73*/
              break; /*0x5fac7a*/
            case kSkillMastery_Expert: /*0x5fac59*/
              GameSetting_GetSafeFloatPointer(MEMORY[0xB37608]); /*0x5fac81*/
              break; /*0x5fac88*/
            case kSkillMastery_Master: /*0x5fac59*/
              GameSetting_GetSafeFloatPointer(unk_B37610); /*0x5fac8f*/
              break; /*0x5fac96*/
            default:
              JUMPOUT(0x5FAC98); /*0x5fac98*/
          }
          JUMPOUT(0x5FAC9E); /*0x5fac9e*/
        }
      }
    }
    JUMPOUT(0x5FACC8); /*0x5facc8*/
  }
  JUMPOUT(0x5FAE7F); /*0x5fae7f*/
}
