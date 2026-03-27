BSExtraDataVtbl *__thiscall sub_41FBC0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *vtbl; // ecx
  ExtraTresPassPackage *v7; // eax
  BSExtraData *v8; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_TresPassPackage);
  v4 = ExtraData;
  if ( ExtraData )
  {
    vtbl = ExtraData[1].vtbl;
    if ( vtbl )
      (*((void (__thiscall **)(BSExtraDataVtbl *, int))vtbl->Destructor + 4))(vtbl, 1);
    v4[1].vtbl = a2;
    return a2;
  }
  else
  {
    v7 = (ExtraTresPassPackage *)FormHeapAlloc(0x10u);
    if ( v7 )
      v8 = (BSExtraData *)ExtraTresPassPackage::ExtraTresPassPackage(v7, (int)a2);
    else
      v8 = 0;
    return (BSExtraDataVtbl *)BaseExtraList_AddExtra(this, v8);
  }
}
