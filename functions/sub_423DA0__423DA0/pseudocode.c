void __thiscall sub_423DA0(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action);
  if ( ExtraData )
  {
    if ( a2 == 1 && !*(_DWORD *)&ExtraData[1].members.type )
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
      return;
    }
  }
  else
  {
    if ( a2 == 1 )
      return;
    ExtraData = sub_41EB90(this);
  }
  if ( ExtraData )
    LOBYTE(ExtraData[1].vtbl) = a2;
}
