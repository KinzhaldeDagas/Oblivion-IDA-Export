void __thiscall TESObjectCELL_SetInteriorClimate(ExtraDataList *this, TESClimate *climate)
{
  BSExtraData *ExtraData; // eax
  ExtraCellClimate *v4; // eax
  ExtraCellClimate *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CellClimate);// Verified: ExtraCellClimate is read/written through ExtraDataList and carries the explicit interior-cell climate; Fallout provides similarly named ExtraDataList::GetClimate/SetClimate, but its flag gate differs from Oblivion. /*0x4243a6*/
  if ( climate ) /*0x4243b1*/
  {
    if ( ExtraData ) /*0x4243d7*/
    {
      ExtraData[1].vtbl = (BSExtraDataVtbl *)climate; /*0x424423*/
    }
    else
    {
      v4 = (ExtraCellClimate *)FormHeapAlloc(0x10u); /*0x4243db*/
      if ( v4 ) /*0x4243f1*/
        v5 = ExtraCellClimate_Constructor(v4, climate); /*0x4243f6*/
      else
        v5 = 0; /*0x4243fd*/
      BaseExtraList_AddExtra(this, &v5->super); /*0x42440a*/
    }
  }
  else if ( ExtraData ) /*0x4243b5*/
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);// Verified: null climate removes existing ExtraCellClimate from the ExtraDataList; non-null climate updates existing +0x0C pointer or allocates a new 16-byte extra. /*0x4243bc*/
  }
}
