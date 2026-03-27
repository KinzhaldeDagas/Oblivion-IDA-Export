void __thiscall ExtraDataList_SetCell3D(ExtraDataList *this, UInt32 a2)
{
  ExtraCell3D *ExtraData; // eax
  ExtraCell3D *v4; // esi
  ExtraCell3D *v5; // eax
  ExtraCell3D *v6; // eax
  UInt32 unk001; // edi

  ExtraData = (ExtraCell3D *)BaseExtraList_GetExtraData(this, kExtraData_Cell3D);
  v4 = ExtraData;
  if ( a2 )
  {
    if ( !ExtraData )
    {
      v5 = (ExtraCell3D *)FormHeapAlloc(0x10u);
      if ( v5 )
        v6 = BSExtraData::ExtraCell3D(v5);
      else
        v6 = 0;
      v4 = v6;
      BaseExtraList_AddExtra(this, (BSExtraData *)v6);
    }
  }
  else
  {
    if ( !ExtraData )
      return;
    if ( !ExtraData->unk001 )
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
      return;
    }
  }
  unk001 = v4->unk001;
  if ( unk001 != a2 )
  {
    if ( unk001 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(unk001 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))unk001)(unk001, 1);
    }
    v4->unk001 = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
}
