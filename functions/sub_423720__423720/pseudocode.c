// Verified XGLB mutator: update the stored TESGlobal* when nonnull; remove the extra when null; otherwise allocate a 16-byte ExtraGlobal payload. During plugin load the stored dword is a FormID temporarily; ExtraDataList_ResolveLoadedFormIDs rebases, looks it up, RTTI-checks TESGlobal, and removes missing/wrong-type entries.
void __thiscall ExtraDataList_SetGlobal(ExtraDataList *this, TESGlobal *global)
{
  BSExtraData *ExtraData; // eax
  ExtraGlobal *v4; // eax
  ExtraGlobal *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Global); /*0x423746*/
  if ( ExtraData ) /*0x42374d*/
  {
    if ( global ) /*0x423755*/
      ExtraData[1].vtbl = (BSExtraDataVtbl *)global; /*0x423775*/
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x42375c*/
  }
  else if ( global ) /*0x423792*/
  {
    v4 = (ExtraGlobal *)FormHeapAlloc(0x10u); /*0x423796*/
    if ( v4 ) /*0x4237ac*/
      v5 = ExtraGlobal_ctor(v4, global); /*0x4237b1*/
    else
      v5 = 0; /*0x4237b8*/
    BaseExtraList_AddExtra(this, &v5->super); /*0x4237c5*/
  }
}
