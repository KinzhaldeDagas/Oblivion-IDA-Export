// Set ExtraOriginalReference (type 0x26) to a live TESObjectREFR. This provenance is used for synthetic/reference projections, is excluded by relevant copy paths, and is never interpreted by pickup as a base-form override.
int __thiscall ExtraDataList_SetOriginalReferenceExtra(ExtraDataList *this, TESObjectREFR *originalReference)
{
  BSExtraData *ExtraData; // eax
  ExtraOriginalReference *v4; // eax
  ExtraOriginalReference *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_OriginalReference); /*0x41e736*/
  if ( ExtraData ) /*0x41e741*/
    ExtraData[1].vtbl = (BSExtraDataVtbl *)originalReference; /*0x41e743*/
  v4 = (ExtraOriginalReference *)FormHeapAlloc(0x10u); /*0x41e748*/
  if ( v4 ) /*0x41e75e*/
    v5 = ExtraOriginalReference_ctor(v4, originalReference); /*0x41e763*/
  else
    v5 = 0; /*0x41e76a*/
  return BaseExtraList_AddExtra(this, &v5->base); /*0x41e77c*/
}
