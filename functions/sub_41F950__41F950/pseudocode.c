int __thiscall sub_41F950(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataMembr *p_members; // eax
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0; /*0x41f958*/
  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Havok); /*0x41f95c*/
  if ( ExtraData ) /*0x41f963*/
  {
    p_members = &ExtraData[1].members; /*0x41f969*/
  }
  else
  {
    v4 = 0; /*0x41f970*/
    p_members = (BSExtraDataMembr *)&v4; /*0x41f974*/
  }
  return *(_DWORD *)&p_members->type; /*0x41f9a2*/
}
