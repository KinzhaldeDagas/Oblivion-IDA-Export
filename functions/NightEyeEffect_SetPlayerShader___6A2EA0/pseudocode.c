void NightEyeEffect_SetPlayerShader_()
{
  int v0; // eax
  float v1; // [esp+Ch] [ebp-8h]
  float v2; // [esp+10h] [ebp-4h]

  v0 = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
         (Actor *)TESDataHandler_g_PlayerRef,
         kActorVal_NightEyeBonus);
  v2 = 0.0;
  v1 = 0.0;
  if ( v0 <= 0 )
  {
    sub_7F4DE0(0.0, 0.0, v1, v2);
    flt_B46924 = 0.0;
  }
  else
  {
    sub_7F4DE0(1.0, 0.0, v1, v2);
    flt_B46924 = fMagicNightEyeAmbient;
  }
}
