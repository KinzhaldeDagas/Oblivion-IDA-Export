void __userpurge sub_5FAAE0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, float a5)
{
  double v5; // st7
  int v7; // ecx
  int BaseCalcAVi; // eax
  float v10; // [esp+18h] [ebp-10h]
  float v11; // [esp+20h] [ebp-8h]
  float retaddr; // [esp+28h] [ebp+0h]

  v5 = a5;
  v11 = a5 - *(float *)(a1 + 0xBC);
  if ( *(float *)(a1 + 0xBC) > (double)a5 || *(float *)(a1 + 0xBC) < 0.0 )
  {
    *(float *)(a1 + 0xBC) = a5;
    v11 = 0.0;
    if ( v5 > 0.0 && flt_A3744C > v5 )
    {
      *(float *)(a1 + 0xBC) = 0.0;
      v11 = a5;
    }
  }
  (*(void (__stdcall **)(float, int))(*(_DWORD *)a1 + 0x2E4))(COERCE_FLOAT(LODWORD(v11)), a4);
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x330))(a1) )
    {
      if ( !TESDataHandler_g_PlayerRef->isInCharGen || !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x33C))(a1);
        sub_420E90((ExtraDataList *)(a1 + 0x44), a1);
      }
    }
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x58) + 0x2C0))(*(_DWORD *)(a1 + 0x58)) & 0x200) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 0x58);
      if ( v7 )
      {
        if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x2C0))(v7) & 0xF) != 0 )
        {
          v10 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)a1 + 0x288))(a1, 0);
          retaddr = Calc_ActorBaseEncumbrance(v10);
          retaddr = (double)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x284))(a1, 0xB) / retaddr;
          Calc_FatigueRunMultiplier_(retaddr);
          BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, a2, a3, a1, 0xD);
          switch ( Calc_MasteryFromSkill(BaseCalcAVi) )
          {
            case 1:
              GameSetting_GetSafeFloatPointer((int *)&unk_B375F8);
              break;
            case 2:
              GameSetting_GetSafeFloatPointer((int *)&unk_B37600);
              break;
            case 3:
              GameSetting_GetSafeFloatPointer((int *)&fPerkAthleticsExpertFatigueMult);
              break;
            case 4:
              GameSetting_GetSafeFloatPointer((int *)&unk_B37610);
              break;
            default:
              JUMPOUT(0x5FAC98);
          }
          JUMPOUT(0x5FAC9E);
        }
      }
    }
    JUMPOUT(0x5FACC8);
  }
  JUMPOUT(0x5FAE7F);
}
