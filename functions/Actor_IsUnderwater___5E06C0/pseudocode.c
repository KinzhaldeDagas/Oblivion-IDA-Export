char __thiscall Actor_IsUnderwater__(void *this, int a2, ExtraDataList *a3, float a4)
{
  double WaterHeight; // st7
  char result; // al
  double v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+18h] [ebp+8h]

  if ( !a3 ) /*0x5e06cd*/
    return 0; /*0x5e06cd*/
  v8 = Actor_GetScaledCollisionHeight(this) * a4; /*0x5e06de*/
  v7 = *(float *)(a2 + 8) + v8; /*0x5e06e9*/
  WaterHeight = TESObjectCELL_GetWaterHeight(a3); /*0x5e06ed*/
  result = 1; /*0x5e06f8*/
  if ( WaterHeight <= v7 ) /*0x5e06fd*/
    return 0; /*0x5e06ff*/
  return result; /*0x5e0701*/
}
