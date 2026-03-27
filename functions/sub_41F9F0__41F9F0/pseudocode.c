BSExtraData *__thiscall sub_41F9F0(ExtraDataList *this, _DWORD *a2, _DWORD *a3)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_CellCanopyShadowMask);
  *a2 = 0;
  *a3 = 0;
  if ( result )
  {
    *a2 = *(_DWORD *)&result[1].members.type;
    *a3 = (char *)result + 0x14;
    return (BSExtraData *)result[1].vtbl;
  }
  return result;
}
