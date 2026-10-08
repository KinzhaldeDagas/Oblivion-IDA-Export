void __thiscall sub_424440(ExtraDataList *this, BSExtraDataVtbl *arg0, Ni2DBuffer *a2, _DWORD *a4)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v6; // esi
  ExtraCellCanopyShadowMask *v7; // eax
  BSExtraData *v8; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CellCanopyShadowMask); /*0x424467*/
  v6 = ExtraData; /*0x424472*/
  if ( arg0 ) /*0x424474*/
  {
    if ( ExtraData ) /*0x42449b*/
    {
      ExtraData[1].vtbl = arg0; /*0x4244e0*/
      NiSmartPointer_Set__((Ni2DBuffer **)&ExtraData[1].members, a2); /*0x4244e3*/
    }
    else
    {
      v7 = (ExtraCellCanopyShadowMask *)FormHeapAlloc(0x1Cu); /*0x42449f*/
      if ( v7 ) /*0x4244b1*/
        v8 = (BSExtraData *)ExtraCellCanopyShadowMask::ExtraCellCanopyShadowMask(v7, (int)arg0, (int)a2); /*0x4244bb*/
      else
        v8 = 0; /*0x4244c2*/
      v6 = v8; /*0x4244cf*/
      BaseExtraList_AddExtra(this, v8); /*0x4244d1*/
    }
    *a4 = (char *)v6 + 0x14; /*0x4244ef*/
  }
  else if ( ExtraData ) /*0x424478*/
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x42447f*/
  }
}
