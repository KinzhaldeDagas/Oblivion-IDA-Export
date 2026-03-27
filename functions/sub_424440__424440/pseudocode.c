void __thiscall sub_424440(ExtraDataList *this, BSExtraDataVtbl *arg0, Ni2DBuffer *a2, _DWORD *a4)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v6; // esi
  ExtraCellCanopyShadowMask *v7; // eax
  BSExtraData *v8; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CellCanopyShadowMask);
  v6 = ExtraData;
  if ( arg0 )
  {
    if ( ExtraData )
    {
      ExtraData[1].vtbl = arg0;
      NiSmartPointer_Set__((Ni2DBuffer **)&ExtraData[1].members, a2);
    }
    else
    {
      v7 = (ExtraCellCanopyShadowMask *)FormHeapAlloc(0x1Cu);
      if ( v7 )
        v8 = (BSExtraData *)ExtraCellCanopyShadowMask::ExtraCellCanopyShadowMask(v7, (int)arg0, (int)a2);
      else
        v8 = 0;
      v6 = v8;
      BaseExtraList_AddExtra(this, v8);
    }
    *a4 = (char *)v6 + 0x14;
  }
  else if ( ExtraData )
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
}
