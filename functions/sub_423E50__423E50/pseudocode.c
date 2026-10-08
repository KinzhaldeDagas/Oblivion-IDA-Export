void __thiscall ExtraDataList_ClearActionFlagBits(ExtraDataList *this, unsigned int mask)
{
  BSExtraData *ExtraData; // eax
  int vtbl_low; // ebx
  unsigned int v5; // ebx
  BSExtraData *Action; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x423e56*/
  if ( ExtraData ) /*0x423e5d*/
    vtbl_low = LOBYTE(ExtraData[1].vtbl); /*0x423e5f*/
  else
    vtbl_low = 1; /*0x423e65*/
  v5 = ~mask & vtbl_low; /*0x423e74*/
  Action = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x423e76*/
  if ( Action ) /*0x423e7d*/
  {
    if ( v5 == 1 && !*(_DWORD *)&Action[1].members.type ) /*0x423e9c*/
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)Action, 1); /*0x423ea6*/
      return; /*0x423ea6*/
    }
  }
  else
  {
    if ( v5 == 1 ) /*0x423e82*/
      return; /*0x423e82*/
    Action = ExtraDataList_GetOrCreateAction(this); /*0x423e86*/
  }
  if ( Action ) /*0x423e8d*/
    LOBYTE(Action[1].vtbl) = v5; /*0x423e8f*/
}
