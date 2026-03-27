void __thiscall sub_423EB0(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action);
  if ( ExtraData )
  {
    if ( LOBYTE(ExtraData[1].vtbl) == 1 && !a2 )
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
      return;
    }
  }
  else
  {
    if ( !a2 )
      return;
    ExtraData = sub_41EB90(this);
  }
  if ( ExtraData )
    *(_DWORD *)&ExtraData[1].members.type = a2;
}
