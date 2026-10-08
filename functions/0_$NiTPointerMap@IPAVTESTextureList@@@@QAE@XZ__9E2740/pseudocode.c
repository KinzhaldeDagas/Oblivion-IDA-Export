// Verified static constructor from RTTI/template symbol: initializes NiTPointerMap<unsigned int, TESTextureList*> with 37 zeroed buckets, sets its template vtable, registers destructor at atexit.
int __cdecl TESObjectTREE_TextureHashCache_ctor()
{
  g_TESObjectTREETextureHashCache.buckets = (void *)FormHeapAlloc(0x94u); /*0x9e276c*/
  _memset((int)g_TESObjectTREETextureHashCache.buckets, 0, 4 * g_TESObjectTREETextureHashCache.bucketCount); /*0x9e2771*/
  g_TESObjectTREETextureHashCache.vftable = &NiTPointerMap<unsigned int,TESTextureList *>::`vftable'; /*0x9e277b*/
  return atexit(TESObjectTREE_TextureHashCache_atexit); /*0x9e278d*/
}
