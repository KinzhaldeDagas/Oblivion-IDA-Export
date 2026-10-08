// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Block control 6 held drives first-person block/aim FOV behavior.
void __thiscall SetAimingZoom(PlayerCharacter *a1, float a2)
{
  InputGlobal *input; // edi
  double v4; // st7
  double v5; // st7
  double worldFoV; // st7
  bool v7; // c0
  bool v8; // c3
  float v9; // [esp+0h] [ebp-24h]
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch]
  double v14; // [esp+1Ch] [ebp-8h]
  float a2a; // [esp+28h] [ebp+4h]
  float a2b; // [esp+28h] [ebp+4h]

  if ( !byte_B14F48 ) /*0x66667d*/
    return; /*0x66667d*/
  v10 = g_DefaulFOV; /*0x666695*/
  input = MEMORY[0xB33398]->input; /*0x6666a0*/
  v12 = g_GameSettingStringPointers_B36CD8[0xF2]; /*0x6666a3*/
  v11 = g_GameSettingStringPointers_B36CD8[0xF4]; /*0x6666ad*/
  v13 = g_GameSettingStringPointers_B36CD8[0xF6]; /*0x6666b7*/
  if ( a1->isThirdPerson || MEMORY[0xB3BB04] ) /*0x6666c1*/
  {
    v5 = v10; /*0x6667fd*/
    if ( v10 == *((float *)g_WorldSceneReceiverRoot + 0x3B) ) /*0x666802*/
      return; /*0x666802*/
    goto LABEL_18; /*0x666802*/
  }
  if ( ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetCurrentAction)(a1->super.super.super.process) != 5 ) /*0x6666e4*/
  {
    if ( InputGlobals::QueryControlState(input, 6, 0) && LOBYTE(unk_B3BAEA.vtbl) ) /*0x666798*/
      return; /*0x66679f*/
LABEL_14:
    worldFoV = a1->worldFoV; /*0x6667a1*/
    v7 = v10 < worldFoV; /*0x6667ab*/
    v8 = v10 == worldFoV; /*0x6667ab*/
    v4 = v10; /*0x6667af*/
    if ( v7 || v8 ) /*0x6667b1*/
      return; /*0x6667b4*/
    a2a = a2 / v11 * (v4 - v12) + a1->worldFoV; /*0x6667cc*/
    if ( a2a <= v4 ) /*0x6667db*/
      goto LABEL_11; /*0x6667db*/
    goto LABEL_16; /*0x6667db*/
  }
  if ( !InputGlobals::QueryControlState(input, 6, 0) ) /*0x6666f1*/
    goto LABEL_14; /*0x6666f1*/
  if ( LOBYTE(unk_B3BAEA.vtbl) ) /*0x6666f7*/
  {
    if ( Actor_GetSkillMasteryLevel((Actor *)a1, kSkillAV_Marksman) >= kSkillMastery_Journeyman /*0x666727*/
      && v13 <= (double)*(float *)&unk_B3BAFC.vtbl )
    {
      v14 = a1->worldFoV; /*0x666738*/
      if ( *GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xF2]) < v14 ) /*0x66674c*/
      {
        v4 = v12; /*0x666774*/
        a2a = v10 + (v12 - v10) * ((*(float *)&unk_B3BAFC.vtbl - v13) / v11); /*0x666776*/
        if ( a2a >= (double)v12 ) /*0x666785*/
        {
LABEL_11:
          v5 = a2a; /*0x666787*/
LABEL_18:
          v9 = v5; /*0x666804*/
          SetCameraFOV((float *)a1, v9); /*0x66680a*/
          return; /*0x66680a*/
        }
LABEL_16:
        a2b = v4; /*0x6667dd*/
        v5 = a2b; /*0x6667e1*/
        goto LABEL_18; /*0x6667e5*/
      }
    }
  }
}
