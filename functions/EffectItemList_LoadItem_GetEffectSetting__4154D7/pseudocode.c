int __userpurge EffectItemList_LoadItem_::GetEffectSetting@<eax>(
        void *ecx0@<ecx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int *a15,
        int a16)
{
  int v17; // edi

  a6 = 0xFFFFFFFF;
  TESFile_GetChunkData4(a15, (int)&a6);
  v17 = EffectSettingCollection_LookupByCode(a6);
  if ( v17 )
    return EffectItemList_LoadItem_::InitNewEffectItem(
             0,
             v17,
             (int)ecx0,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16);
  else
    return EffectItemList_LoadItem_::BadEffectSetting(0, ecx0, a2, a3, a4, a5, a6);
}
