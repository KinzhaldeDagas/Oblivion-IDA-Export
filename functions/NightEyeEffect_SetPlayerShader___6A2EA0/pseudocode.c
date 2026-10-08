// MoonSugarEffect decode: NightEye player shader path sets NightEye active state from player actor value kActorVal_NightEyeBonus; do not hijack for Moon Sugar.
void NightEyeEffect_SetPlayerShader_()
{
  int v0; // eax
  float v1; // [esp+Ch] [ebp-8h]
  float v2; // [esp+10h] [ebp-4h]

  v0 = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_NightEyeBonus); /*0x6a2eb0*/
  v2 = 0.0; /*0x6a2eb7*/
  v1 = 0.0; /*0x6a2ebd*/
  if ( v0 <= 0 ) /*0x6a2ec1*/
  {
    sub_7F4DE0(0.0, 0.0, v1, v2); /*0x6a2ee8*/
    unk_B46924 = 0.0; /*0x6a2ef2*/
  }
  else
  {
    sub_7F4DE0(1.0, 0.0, v1, v2); /*0x6a2ecc*/
    unk_B46924 = flt_B37ED0[0x74]; /*0x6a2ed7*/
  }
}
