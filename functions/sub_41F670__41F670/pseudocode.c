void __thiscall sub_41F670(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script);
  if ( ExtraData )
    *(_DWORD *)&ExtraData[1].members.type = 0;
}
