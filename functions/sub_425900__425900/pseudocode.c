void __thiscall sub_425900(ExtraDataList *this, int a2, TESObjectREFR *a3)
{
  BSExtraData *ExtraData; // eax
  TESObjectCELL *vtbl; // edi
  BSExtraData *v6; // eax

  if ( a3 ) /*0x42590a*/
  {
    if ( a3->vtbl->IsActor(a3) ) /*0x425916*/
    {
      ExtraData = BaseExtraList_GetExtraData(this, kExtraData_PersistentCell); /*0x425920*/
      if ( ExtraData ) /*0x425927*/
      {
        vtbl = (TESObjectCELL *)ExtraData[1].vtbl; /*0x42592a*/
        if ( vtbl ) /*0x42592f*/
        {
          if ( Shared_GetDwordAtOffset40(a3) ) /*0x425933*/
          {
            v6 = BaseExtraList_GetExtraData(this, kExtraData_PersistentCell); /*0x425940*/
            if ( v6 ) /*0x425947*/
              BaseExtraList_RemoveExtraByPtr(this, (int)v6, 1); /*0x42594e*/
            TESObjectCELL_RemoveReference(vtbl, a3); /*0x425956*/
          }
        }
      }
    }
  }
}
