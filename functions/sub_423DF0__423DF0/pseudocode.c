void __thiscall sub_423DF0(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  int vtbl_low; // ebx
  int v5; // ebx
  BSExtraData *v6; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action);
  if ( ExtraData )
    vtbl_low = LOBYTE(ExtraData[1].vtbl);
  else
    vtbl_low = 1;
  v5 = a2 | vtbl_low;
  v6 = BaseExtraList_GetExtraData(this, kExtraData_Action);
  if ( v6 )
  {
    if ( v5 == 1 && !*(_DWORD *)&v6[1].members.type )
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)v6, 1);
      return;
    }
  }
  else
  {
    if ( v5 == 1 )
      return;
    v6 = sub_41EB90(this);
  }
  if ( v6 )
    LOBYTE(v6[1].vtbl) = v5;
}
