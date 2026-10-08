// Returns the parent TESObjectREFR stored in ExtraEnableStateParent type 0x3F.
BSExtraDataVtbl *__thiscall ExtraDataList_GetEnableStateParent(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateParent); /*0x420262*/
  if ( ExtraData ) /*0x420269*/
    return ExtraData[1].vtbl; /*0x42026b*/
  else
    return 0; /*0x42026f*/
}
