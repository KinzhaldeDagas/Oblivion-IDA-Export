void __thiscall sub_423EB0(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x423eb6*/
  if ( ExtraData ) /*0x423ec1*/
  {
    if ( LOBYTE(ExtraData[1].vtbl) == 1 && !a2 ) /*0x423ee2*/
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x423ee9*/
      return; /*0x423ee9*/
    }
  }
  else
  {
    if ( !a2 ) /*0x423ec5*/
      return; /*0x423ec5*/
    ExtraData = ExtraDataList_GetOrCreateAction(this); /*0x423ec9*/
  }
  if ( ExtraData ) /*0x423ed0*/
    *(_DWORD *)&ExtraData[1].members.type = a2; /*0x423ed2*/
}
