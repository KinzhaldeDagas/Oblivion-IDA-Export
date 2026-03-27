char __thiscall Actor_IsUnderwater__(void *this, int a2, ExtraDataList *a3, float a4)
{
  double WaterHeight; // st7
  char result; // al
  double v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+18h] [ebp+8h]

  if ( !a3 )
    return 0;
  v8 = sub_5E0660(this) * a4;
  v7 = *(float *)(a2 + 8) + v8;
  WaterHeight = TESObjectCELL_GetWaterHeight(a3);
  result = 1;
  if ( WaterHeight <= v7 )
    return 0;
  return result;
}
