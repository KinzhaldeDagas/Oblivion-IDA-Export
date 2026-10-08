// Verified initial terrain-quad map setup: discovers available NIFs, marks each corresponding quad Unloaded (5), stores its map-derived world origin, and sets the grid-cell width used by distance checks.
int __thiscall TESWorldSpaceTerrainLODQuadMap_Initialize(TESWorldSpaceTerrainLODQuadMap *this)
{
  unsigned int bucketCount; // ecx
  __int16 v4; // bp
  unsigned int v5; // eax
  void **buckets; // edx
  MEF_U32PointerMapEntry32 *v7; // eax
  int v8; // eax
  int v9; // edx
  void *valueOut; // [esp+4h] [ebp-18h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-14h] BYREF
  unsigned int keyOut; // [esp+Ch] [ebp-10h] BYREF
  float v13; // [esp+10h] [ebp-Ch]
  float v14; // [esp+14h] [ebp-8h]

  if ( this->itemCount ) /*0x4ebc06*/
    return 0; /*0x4ebc0c*/
  unk_B3608F = OB_RendererGlobalState_010201A0[0x1DE] != 0; /*0x4ebc1f*/
  TESWorldSpaceTerrainLODQuadMap_DiscoverAvailableNIFs(this); /*0x4ebc24*/
  bucketCount = this->bucketCount; /*0x4ebc29*/
  v4 = 0; /*0x4ebc2c*/
  v5 = 0; /*0x4ebc2e*/
  if ( bucketCount ) /*0x4ebc32*/
  {
    buckets = this->buckets; /*0x4ebc37*/
    while ( !*buckets ) /*0x4ebc42*/
    {
      ++v5; /*0x4ebc48*/
      ++buckets; /*0x4ebc4b*/
      if ( v5 >= bucketCount ) /*0x4ebc50*/
        goto LABEL_7; /*0x4ebc50*/
    }
    v7 = (MEF_U32PointerMapEntry32 *)this->buckets[v5]; /*0x4ebceb*/
  }
  else
  {
LABEL_7:
    v7 = 0; /*0x4ebc52*/
  }
  position = v7; /*0x4ebc56*/
  while ( position ) /*0x4ebc5a*/
  {
    valueOut = 0; /*0x4ebc76*/
    NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)this, &position, &keyOut, &valueOut); /*0x4ebc7e*/
    if ( valueOut ) /*0x4ebc89*/
    {
      v8 = *(_DWORD *)valueOut; /*0x4ebc8b*/
      if ( *(_DWORD *)valueOut ) /*0x4ebc8b*/
      {
        if ( *(_DWORD *)(v8 + 0x14) ) /*0x4ebc91*/
        {
          v9 = *((__int16 *)valueOut + 4) << 0x11; /*0x4ebc9f*/
          valueOut = (void *)(*((__int16 *)valueOut + 5) << 0x11); /*0x4ebcad*/
          *(_DWORD *)(v8 + 8) = 5; /*0x4ebcb1*/
          ++v4; /*0x4ebcb4*/
          v13 = (float)v9; /*0x4ebcb7*/
          v14 = (float)(int)valueOut; /*0x4ebcbf*/
          *(float *)(v8 + 0x18) = v13; /*0x4ebcc7*/
          *(float *)(v8 + 0x1C) = v14; /*0x4ebcce*/
          *(float *)(v8 + 0x44) = kTerrainLODQuadWorldSize; /*0x4ebcd7*/
        }
      }
    }
  }
  return v4; /*0x4ebc0e*/
}
