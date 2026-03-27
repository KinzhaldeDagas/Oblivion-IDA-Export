BSExtraData *__thiscall sub_423590(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *vtbl; // edi
  ExtraMapMarker *v6; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_MapMarker);
  v4 = result;
  if ( result )
  {
    if ( !a2 )
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)result, 1);
      return 0;
    }
    vtbl = result[1].vtbl;
    if ( vtbl )
    {
      TESFullName_Initialize((TESForm::ModReferenceList *)result[1].vtbl);
      FormHeapFree((unsigned int)vtbl);
    }
    v4[1].vtbl = a2;
  }
  else
  {
    if ( !a2 )
      return result;
    v6 = (ExtraMapMarker *)FormHeapAlloc(0x10u);
    if ( v6 )
      v4 = (BSExtraData *)ExtraMapMarker::ExtraMapMarker(v6, (int)a2);
    else
      v4 = 0;
    BaseExtraList_AddExtra(this, v4);
  }
  return v4;
}
