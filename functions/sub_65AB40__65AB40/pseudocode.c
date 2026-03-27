bhkCharacterProxy *__thiscall sub_65AB40(MobileObject *this)
{
  bhkCharacterProxy *result; // eax
  bhkCharacterProxy *v2; // esi
  float v3; // [esp+8h] [ebp-4h]

  result = MobileObject_GetCharProxy(this);
  v2 = result;
  if ( result )
  {
    v3 = (fJumpHeightMax - fJumpHeightMin) * *((float *)result + 0xC4) + fJumpHeightMin;
    sub_890700((int)result, v3);
    return v2;
  }
  return result;
}
