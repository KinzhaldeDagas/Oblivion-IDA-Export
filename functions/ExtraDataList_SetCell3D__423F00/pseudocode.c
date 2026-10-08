void __thiscall ExtraDataList_SetCell3D(ExtraDataList *this, UInt32 a2)
{
  ExtraCell3D *ExtraData; // eax
  ExtraCell3D *v4; // esi
  ExtraCell3D *v5; // eax
  ExtraCell3D *v6; // eax
  UInt32 unk001; // edi

  ExtraData = (ExtraCell3D *)BaseExtraList_GetExtraData(this, kExtraData_Cell3D); /*0x423f27*/
  v4 = ExtraData; /*0x423f32*/
  if ( a2 ) /*0x423f34*/
  {
    if ( !ExtraData ) /*0x423f64*/
    {
      v5 = (ExtraCell3D *)FormHeapAlloc(0x10u); /*0x423f68*/
      if ( v5 ) /*0x423f7a*/
        v6 = BSExtraData::ExtraCell3D(v5); /*0x423f7e*/
      else
        v6 = 0; /*0x423f85*/
      v4 = v6; /*0x423f92*/
      BaseExtraList_AddExtra(this, (BSExtraData *)v6); /*0x423f94*/
    }
  }
  else
  {
    if ( !ExtraData ) /*0x423f38*/
      return; /*0x423f38*/
    if ( !ExtraData->unk001 ) /*0x423f3e*/
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x423f48*/
      return; /*0x423f5f*/
    }
  }
  unk001 = v4->unk001; /*0x423f99*/
  if ( unk001 != a2 ) /*0x423f9e*/
  {
    if ( unk001 ) /*0x423fa2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(unk001 + 4)) ) /*0x423fa8*/
        (**(void (__thiscall ***)(UInt32, int))unk001)(unk001, 1); /*0x423fbe*/
    }
    v4->unk001 = a2; /*0x423fc2*/
    if ( a2 ) /*0x423fc5*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x423fcb*/
  }
}
