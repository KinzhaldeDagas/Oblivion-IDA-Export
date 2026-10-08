void __thiscall sub_4245E0(ExtraDataList *this, char *a2)
{
  BSExtraData *ExtraData; // eax
  char *v4; // eax
  char *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EditorID); /*0x424606*/
  if ( a2 ) /*0x424611*/
  {
    if ( ExtraData ) /*0x424637*/
    {
      BSStringT_Set((BSStringT *)&ExtraData[1], a2, 0); /*0x424689*/
    }
    else
    {
      v4 = (char *)FormHeapAlloc(0x14u); /*0x42463b*/
      if ( v4 ) /*0x424651*/
        v5 = sub_424510(v4, a2); /*0x424656*/
      else
        v5 = 0; /*0x42465d*/
      BaseExtraList_AddExtra(this, (BSExtraData *)v5); /*0x42466a*/
    }
  }
  else if ( ExtraData ) /*0x424615*/
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x42461c*/
  }
}
