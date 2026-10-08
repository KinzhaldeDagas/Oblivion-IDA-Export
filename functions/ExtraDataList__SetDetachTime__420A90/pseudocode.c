// Sets ExtraDetachTime; a zero value removes type 0x10, otherwise updates or creates it.
void __thiscall ExtraDataList_SetDetachTime(ExtraDataList *this, unsigned int detachTime)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  if ( detachTime ) /*0x420abc*/
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_DetachTime); /*0x420abe*/
    if ( ExtraData ) /*0x420ac5*/
    {
      ExtraData[1].vtbl = (BSExtraDataVtbl *)detachTime; /*0x420ac7*/
    }
    else
    {
      v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x420ae0*/
      if ( v4 ) /*0x420af6*/
        v5 = (BSExtraData *)ExtraDetachTime_constr(v4); /*0x420afa*/
      else
        v5 = 0; /*0x420b01*/
      v5[1].vtbl = (BSExtraDataVtbl *)detachTime; /*0x420b0e*/
      BaseExtraList_AddExtra(this, v5); /*0x420b11*/
    }
  }
  else
  {
    BaseExtraList_RemoveExtraByType(this, 0x10u); /*0x420b2a*/
  }
}
