int __userpurge EffectItemList_LoadItem_::GetEffectSetting@<eax>(
        void *ecx0@<ecx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        BSStringT a7,
        BSStringT a8,
        int a9,
        int a10,
        int a11,
        int a12,
        Data *a13,
        const char *a14)
{
  int v15; // edi

  a6 = 0xFFFFFFFF; /*0x4154e5*/
  TESFile_GetChunkData4(a13, (char *)&a6); /*0x4154e9*/
  v15 = EffectSettingCollection_LookupByCode(a6); /*0x4154f8*/
  if ( v15 ) /*0x415501*/
    return EffectItemList_LoadItem_::InitNewEffectItem( /*0x415502*/
             0,
             v15,
             ecx0,
             0xFFFFFFFF,
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
             a14);
  else
    return EffectItemList_LoadItem_::BadEffectSetting( /*0x415501*/
             0,
             ecx0,
             a2,
             a3,
             a4,
             a5,
             a6,
             (int)a7.m_data,
             *(int *)&a7.m_dataLen,
             (int)a8.m_data,
             *(int *)&a8.m_dataLen,
             a9,
             a10,
             a11,
             a12,
             (int)a13,
             a14);
}
