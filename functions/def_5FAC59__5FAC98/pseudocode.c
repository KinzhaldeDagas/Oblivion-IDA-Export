int __userpurge def_5FAC59@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, float a4, float a5)
{
  int v5; // ecx
  SInt32 BaseCalcAVi; // eax
  int v7; // ecx
  double v8; // st7
  double v9; // st6
  double v10; // st7
  int v11; // eax
  int result; // eax
  int v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+14h] [ebp-8h]
  float delta; // [esp+18h] [ebp-4h]
  float deltaa; // [esp+18h] [ebp-4h]
  float retaddr; // [esp+1Ch] [ebp+0h]
  float v19; // [esp+20h] [ebp+4h]
  float v20; // [esp+24h] [ebp+8h]
  float v21; // [esp+24h] [ebp+8h]
  float v22; // [esp+24h] [ebp+8h]
  float v23; // [esp+28h] [ebp+Ch]

  v19 = MEMORY[0xB375F0] * a4; /*0x5faca2*/
  if ( v19 > 0.0 ) /*0x5facb5*/
  {
    delta = -v19; /*0x5facbc*/
    Actor_ApplyNegativeFatigueDeltaClamped((Actor *)a3, delta); /*0x5facbf*/
  }
  if ( (PlayerCharacter *)a3 == reference ) /*0x5facce*/
  {
    v5 = *(_DWORD *)(a3 + 0x58); /*0x5facd0*/
    if ( v5 ) /*0x5facd5*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x2D0))(v5) == 5 ) /*0x5face4*/
      {
        BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a3, a1, a2, a3, 0x1C); /*0x5facea*/
        if ( Calc_MasteryFromSkill(BaseCalcAVi) == kSkillMastery_Novice ) /*0x5facf0*/
        {
          v23 = g_GameSettingStringPointers_B36CD8[0xCE] * a5; /*0x5fad09*/
          deltaa = -v23; /*0x5fad13*/
          Actor_ApplyNegativeFatigueDeltaClamped((Actor *)a3, deltaa); /*0x5fad16*/
        }
      }
    }
  }
  sub_5F2720((Actor *)a3, a1, a2, a5); /*0x5fad25*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(a3 + 0x5C) + 0x30))(a3 + 0x5C) ) /*0x5fad33*/
  {
    if ( (PlayerCharacter *)a3 == reference ) /*0x5fad4b*/
    {
      Player_GetAVModifierf((float *)reference, 0, 9); /*0x5fad50*/
    }
    else
    {
      v7 = *(_DWORD *)(a3 + 0x58); /*0x5fad57*/
      if ( v7 ) /*0x5fad5c*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x468))(v7, 9); /*0x5fad68*/
    }
    Actor_GetBaseCalcAVi((int *)a3, a1, a2, a3, 9); /*0x5fad72*/
    v20 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 0x288))(a3); /*0x5fad95*/
    v8 = v20; /*0x5fad99*/
    v21 = (float)Double_To_SInt32(v20); /*0x5fadac*/
    v9 = v8 - v21; /*0x5fadb8*/
    v10 = v21; /*0x5fadb8*/
    if ( v9 < dbl_A2FC68 ) /*0x5fadc5*/
      v10 = v10 - dbl_A2F928; /*0x5fadc7*/
    v22 = v10; /*0x5fadcd*/
    if ( retaddr > (double)v22 ) /*0x5fade2*/
    {
      v15 = retaddr; /*0x5faded*/
      v14 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x284))(a3, 0x39)); /*0x5fadf6*/
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x284))(a3); /*0x5fae03*/
      retaddr = Calc_MagickaReturnRate(v11, 2, v14) * COERCE_FLOAT(9); /*0x5fae12*/
      if ( retaddr > 0.0 ) /*0x5fae25*/
      {
        v13 = 0; /*0x5fae2f*/
        (*(void (__thiscall **)(int, int, float))(*(_DWORD *)a3 + 0x2A4))(a3, 9, COERCE_FLOAT(LODWORD(retaddr))); /*0x5fae39*/
      }
    }
  }
  sub_5E7A60((int *)a3, *(float *)&v13); /*0x5fae49*/
  if ( reference->isSleeping ) /*0x5fae53*/
    sub_5F2530((PlayerCharacter *)a3, a1, a2, v13); /*0x5fae66*/
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x2D8))(a3, v13); /*0x5fae7d*/
  *(float *)(a3 + 0xBC) = v15; /*0x5fae83*/
  return result; /*0x5fae8d*/
}
