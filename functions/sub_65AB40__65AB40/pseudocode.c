// TES4 authoritative: actor jump entry. Computes jump height from fJumpHeightMin/Max and proxy +0x310 scalar, then sub_890700 sets state=1 Jumping and jump impulse at +0x31C.
bhkCharacterProxy *__thiscall sub_65AB40(MobileObject *this)
{
  bhkCharacterProxy *result; // eax
  bhkCharacterProxy *v2; // esi
  float v3; // [esp+8h] [ebp-4h]

  result = MobileObject_GetCharProxy(this); /*0x65ab42*/
  v2 = result; /*0x65ab47*/
  if ( result ) /*0x65ab4b*/
  {
    v3 = (MEMORY[0xB374A0] - MEMORY[0xB37498]) * *((float *)result + 0xC4) + MEMORY[0xB37498]; /*0x65ab6a*/
    sub_890700((int)result, v3); /*0x65ab75*/
    return v2; /*0x65ab7a*/
  }
  return result; /*0x65ab7e*/
}
