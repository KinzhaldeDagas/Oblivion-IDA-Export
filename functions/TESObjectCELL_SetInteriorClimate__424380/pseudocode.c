void __thiscall TESObjectCELL_SetInteriorClimate(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CellClimate);
  if ( a2 )
  {
    if ( ExtraData )
    {
      ExtraData[1].vtbl = a2;
    }
    else
    {
      v4 = (_BYTE *)FormHeapAlloc(0x10u);
      if ( v4 )
        v5 = (BSExtraData *)ExtraCellClimate_Constructor(v4, (int)a2);
      else
        v5 = 0;
      BaseExtraList_AddExtra(this, v5);
    }
  }
  else if ( ExtraData )
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
}
