double __thiscall sub_4CCE00(ExtraDataList *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = 0.0; /*0x4cce07*/
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4cce0a*/
    return ExtraDataList_GetNorthRotation(this + 2); /*0x4cce14*/
  return v2; /*0x4cce1b*/
}
