// OR action flag mask into existing byte (default byte 1 when absent), creating state as needed. ONAM calls this with 0x08.
void __thiscall ExtraDataList_SetActionFlagBits(ExtraDataList *this, unsigned int mask)
{
  BSExtraData *ExtraData; // eax
  int vtbl_low; // ebx
  unsigned int v5; // ebx
  BSExtraData *Action; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x423df6*/
  if ( ExtraData ) /*0x423dfd*/
    vtbl_low = LOBYTE(ExtraData[1].vtbl); /*0x423dff*/
  else
    vtbl_low = 1; /*0x423e05*/
  v5 = mask | vtbl_low; /*0x423e0a*/
  Action = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x423e12*/
  if ( Action ) /*0x423e19*/
  {
    if ( v5 == 1 && !*(_DWORD *)&Action[1].members.type ) /*0x423e38*/
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)Action, 1); /*0x423e42*/
      return; /*0x423e42*/
    }
  }
  else
  {
    if ( v5 == 1 ) /*0x423e1e*/
      return; /*0x423e1e*/
    Action = ExtraDataList_GetOrCreateAction(this); /*0x423e22*/
  }
  if ( Action ) /*0x423e29*/
    LOBYTE(Action[1].vtbl) = v5; /*0x423e2b*/
}
