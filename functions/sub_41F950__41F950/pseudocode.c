int __thiscall sub_41F950(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataMembr *p_members; // eax
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Havok);
  if ( ExtraData )
  {
    p_members = &ExtraData[1].members;
  }
  else
  {
    v4 = 0;
    p_members = (BSExtraDataMembr *)&v4;
  }
  return *(_DWORD *)&p_members->type;
}
