BSExtraData *__thiscall sub_41F9F0(ExtraDataList *this, _DWORD *a2, _DWORD *a3)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_CellCanopyShadowMask); /*0x41f9f2*/
  *a2 = 0; /*0x41fa01*/
  *a3 = 0; /*0x41fa07*/
  if ( result ) /*0x41fa0d*/
  {
    *a2 = *(_DWORD *)&result[1].members.type; /*0x41fa16*/
    *a3 = (char *)result + 0x14; /*0x41fa1b*/
    return (BSExtraData *)result[1].vtbl; /*0x41fa1d*/
  }
  return result; /*0x41fa0f*/
}
