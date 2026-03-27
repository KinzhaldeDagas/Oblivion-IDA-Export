int __userpurge def_5FAC59@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, float a4, float a5)
{
  int v5; // ecx
  int BaseCalcAVi; // eax
  int v7; // ecx
  double v8; // st7
  double v9; // st6
  double v10; // st7
  int v11; // eax
  int result; // eax
  int v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]
  float v17; // [esp+18h] [ebp-4h]
  float retaddr; // [esp+1Ch] [ebp+0h]
  float v19; // [esp+20h] [ebp+4h]
  float v20; // [esp+24h] [ebp+8h]
  float v21; // [esp+24h] [ebp+8h]
  float v22; // [esp+24h] [ebp+8h]
  float v23; // [esp+28h] [ebp+Ch]

  v19 = fPerkAthleticsNoviceFatigueMult * a4;
  if ( v19 > 0.0 )
  {
    v16 = -v19;
    Actor_ModFatigue_((void *)a3, v16);
  }
  if ( (PlayerCharacter *)a3 == TESDataHandler_g_PlayerRef )
  {
    v5 = *(_DWORD *)(a3 + 0x58);
    if ( v5 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x2D0))(v5) == 5 )
      {
        BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a3, a1, a2, a3, 0x1C);
        if ( !Calc_MasteryFromSkill(BaseCalcAVi) )
        {
          v23 = fMarksmanFatigueBurnPerSecond * a5;
          v17 = -v23;
          Actor_ModFatigue_((void *)a3, v17);
        }
      }
    }
  }
  sub_5F2720((PlayerCharacter *)a3, a1, a2, a5);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(a3 + 0x5C) + 0x30))(a3 + 0x5C) )
  {
    if ( (PlayerCharacter *)a3 == TESDataHandler_g_PlayerRef )
    {
      Player_GetAVModifierf((float *)TESDataHandler_g_PlayerRef, 0, 9);
    }
    else
    {
      v7 = *(_DWORD *)(a3 + 0x58);
      if ( v7 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x468))(v7, 9);
    }
    Actor_GetBaseCalcAVi((int *)a3, a1, a2, a3, 9);
    v20 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 0x288))(a3);
    v8 = v20;
    v21 = (float)Double_To_SInt32(v20);
    v9 = v8 - v21;
    v10 = v21;
    if ( v9 < dbl_A2FC68 )
      v10 = v10 - dbl_A2F928;
    v22 = v10;
    if ( retaddr > (double)v22 )
    {
      v15 = retaddr;
      v14 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x284))(a3, 0x39));
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x284))(a3);
      retaddr = Calc_MagickaReturnRate(v11, 2, v14) * COERCE_FLOAT(9);
      if ( retaddr > 0.0 )
      {
        v13 = 0;
        (*(void (__thiscall **)(int, int, float))(*(_DWORD *)a3 + 0x2A4))(a3, 9, COERCE_FLOAT(LODWORD(retaddr)));
      }
    }
  }
  sub_5E7A60((int *)a3, *(float *)&v13);
  if ( TESDataHandler_g_PlayerRef->isSleeping )
    sub_5F2530((PlayerCharacter *)a3, a1, a2, v13);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x2D8))(a3, v13);
  *(float *)(a3 + 0xBC) = v15;
  return result;
}
