// Verified frees every BSSimpleList node and list header stored in TESPathGrid.pointsByCell (+0x44), then clears that NiTPointerMap. Given the key helper's X/Y >> 9 packing, this is a 512-unit spatial bucket map local to this PathGrid, not a one-entry-per-world-cell map.
int __thiscall TESPathGrid_ClearSpatialBucketMap(TESPathGrid *this)
{
  unsigned int bucketCount; // edx
  MEF_U32PointerMapLayout32 *p_pointsByCell; // ebx
  unsigned int v3; // eax
  void **buckets; // esi
  void **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  bucketCount = this->pointsByCell.bucketCount; /*0x4e5280*/
  p_pointsByCell = (MEF_U32PointerMapLayout32 *)&this->pointsByCell; /*0x4e5287*/
  v3 = 0; /*0x4e528a*/
  if ( bucketCount ) /*0x4e528f*/
  {
    buckets = this->pointsByCell.buckets; /*0x4e5291*/
    v5 = buckets; /*0x4e5294*/
    while ( !*v5 ) /*0x4e5299*/
    {
      ++v3; /*0x4e529b*/
      ++v5; /*0x4e529e*/
      if ( v3 >= bucketCount ) /*0x4e52a3*/
        goto LABEL_5; /*0x4e52a3*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)buckets[v3]; /*0x4e5319*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x4e52a5*/
  }
  position = v6; /*0x4e52a9*/
  while ( position ) /*0x4e52ad*/
  {
    valueOut = 0; /*0x4e52c1*/
    NiTMap_U32Pointer_GetNextEntry(p_pointsByCell, &position, &keyOut, &valueOut); /*0x4e52c9*/
    v7 = valueOut; /*0x4e52ce*/
    if ( valueOut ) /*0x4e52d4*/
    {
      if ( *((_DWORD *)valueOut + 1) ) /*0x4e52d6*/
      {
        do /*0x4e52f4*/
        {
          v8 = *(_DWORD *)(v7[1] + 4); /*0x4e52e3*/
          FormHeapFree(v7[1]); /*0x4e52e7*/
          v7[1] = v8; /*0x4e52f1*/
        }
        while ( v8 ); /*0x4e52f4*/
      }
      *v7 = 0; /*0x4e52f7*/
      FormHeapFree((unsigned int)v7); /*0x4e52fd*/
    }
  }
  return NiTMap_Clear(p_pointsByCell); /*0x4e530d*/
}
