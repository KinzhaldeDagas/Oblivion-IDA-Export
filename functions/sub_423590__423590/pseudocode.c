BSExtraData *__thiscall ExtraDataList_SetMapMarkerData(ExtraDataList *this, MapMarkerData *data)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *vtbl; // edi
  ExtraMapMarker *v6; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_MapMarker); /*0x4235b7*/
  v4 = result; /*0x4235c0*/
  if ( result ) /*0x4235c4*/
  {
    if ( !data ) /*0x4235c8*/
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)result, 1); /*0x4235cf*/
      return 0; /*0x4235e8*/
    }
    vtbl = result[1].vtbl; /*0x4235eb*/
    if ( vtbl ) /*0x4235f0*/
    {
      TESFullName_Initialize((TESForm::ModReferenceList *)result[1].vtbl); /*0x4235f4*/
      FormHeapFree((unsigned int)vtbl); /*0x4235fa*/
    }
    v4[1].vtbl = (BSExtraDataVtbl *)data; /*0x423602*/
  }
  else
  {
    if ( !data ) /*0x423609*/
      return result; /*0x423609*/
    v6 = (ExtraMapMarker *)FormHeapAlloc(0x10u); /*0x42360d*/
    if ( v6 ) /*0x423623*/
      v4 = (BSExtraData *)ExtraMapMarker::ExtraMapMarker(v6, (int)data); /*0x42362d*/
    else
      v4 = 0; /*0x423631*/
    BaseExtraList_AddExtra(this, v4); /*0x42363e*/
  }
  return v4; /*0x4235d6*/
}
