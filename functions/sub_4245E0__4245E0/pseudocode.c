void __thiscall sub_4245E0(ExtraDataList *this, char *a2)
{
  BSExtraData *ExtraData; // eax
  char *v4; // eax
  char *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EditorID);
  if ( a2 )
  {
    if ( ExtraData )
    {
      BSStringT_Set((BSStringT *)&ExtraData[1], a2, 0);
    }
    else
    {
      v4 = (char *)FormHeapAlloc(0x14u);
      if ( v4 )
        v5 = sub_424510(v4, a2);
      else
        v5 = 0;
      BaseExtraList_AddExtra(this, (BSExtraData *)v5);
    }
  }
  else if ( ExtraData )
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
}
