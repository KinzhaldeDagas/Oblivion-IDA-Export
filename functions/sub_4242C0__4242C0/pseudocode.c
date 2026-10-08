void __thiscall ExtraDataList_SetCellMusicType(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CellMusicType); /*0x4242e6*/
  if ( a2 ) /*0x4242f1*/
  {
    if ( ExtraData ) /*0x424317*/
    {
      LOBYTE(ExtraData[1].vtbl) = a2; /*0x424363*/
    }
    else
    {
      v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x42431b*/
      if ( v4 ) /*0x424331*/
        v5 = (BSExtraData *)ExtraCellMusicType_Constructor(v4, a2); /*0x424336*/
      else
        v5 = 0; /*0x42433d*/
      BaseExtraList_AddExtra(this, v5); /*0x42434a*/
    }
  }
  else if ( ExtraData ) /*0x4242f5*/
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4242fc*/
  }
}
