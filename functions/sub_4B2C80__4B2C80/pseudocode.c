// Verified: clears and frees all TESTextureList values in the global form-ID cache, then clears the map. Called by TES destruction/teardown; exact lifecycle boundary is process-level object teardown.
int __cdecl TESObjectTREE_ClearTextureHashCache()
{
  int v0; // eax
  _DWORD *buckets; // edx
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  TESTextureList *v4; // edi
  unsigned int v5; // eax

  v0 = 0; /*0x4b2c86*/
  if ( g_TESObjectTREETextureHashCache.bucketCount ) /*0x4b2c80*/
  {
    buckets = g_TESObjectTREETextureHashCache.buckets; /*0x4b2c8c*/
    while ( !buckets[v0] ) /*0x4b2c96*/
    {
      if ( ++v0 >= g_TESObjectTREETextureHashCache.bucketCount ) /*0x4b2c9d*/
        goto LABEL_5; /*0x4b2c9d*/
    }
    v2 = (_DWORD *)buckets[v0]; /*0x4b2cbd*/
  }
  else
  {
LABEL_5:
    v2 = 0; /*0x4b2c9f*/
  }
  v3 = v2; /*0x4b2ca4*/
  while ( v3 ) /*0x4b2ca6*/
  {
    v4 = (TESTextureList *)v3[2]; /*0x4b2cb4*/
    if ( *v3 ) /*0x4b2cb0*/
    {
      v3 = (_DWORD *)*v3; /*0x4b2cb9*/
    }
    else
    {
      v5 = (*((int (__thiscall **)(struct NiTPointerMap_uint_TESTextureList_ptr *, _DWORD))g_TESObjectTREETextureHashCache.vftable /*0x4b2cdc*/
            + 1))(
             &g_TESObjectTREETextureHashCache,
             v3[1])
         + 1;
      if ( v5 >= g_TESObjectTREETextureHashCache.bucketCount ) /*0x4b2ce1*/
      {
LABEL_13:
        v3 = 0; /*0x4b2cfe*/
      }
      else
      {
        while ( 1 ) /*0x4b2cf0*/
        {
          v3 = *((_DWORD **)g_TESObjectTREETextureHashCache.buckets + v5); /*0x4b2cf0*/
          if ( v3 ) /*0x4b2cf5*/
            break; /*0x4b2cf5*/
          if ( ++v5 >= g_TESObjectTREETextureHashCache.bucketCount ) /*0x4b2cfc*/
            goto LABEL_13; /*0x4b2cfc*/
        }
      }
    }
    if ( v4 ) /*0x4b2d02*/
    {
      TESTextureList_Clear(v4); /*0x4b2d06*/
      FormHeapFree((unsigned int)v4); /*0x4b2d0c*/
    }
  }
  return NiTMap_Clear(&g_TESObjectTREETextureHashCache);
}
