void __thiscall sub_4241E0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v4; // esi
  _BYTE *v5; // eax
  BSExtraData *v6; // eax
  BSExtraDataVtbl *vtbl; // ecx

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RegionList);
  v4 = ExtraData;
  if ( a2 )
  {
    if ( ExtraData )
    {
      vtbl = ExtraData[1].vtbl;
      if ( vtbl )
      {
        if ( vtbl != a2 )
          (*(void (__thiscall **)(BSExtraDataVtbl *, int))vtbl->Destructor)(vtbl, 1);
      }
      v4[1].vtbl = a2;
    }
    else
    {
      v5 = (_BYTE *)FormHeapAlloc(0x10u);
      if ( v5 )
        v6 = (BSExtraData *)sub_41D940(v5, (int)a2);
      else
        v6 = 0;
      BaseExtraList_AddExtra(this, v6);
    }
  }
  else if ( ExtraData )
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
}
