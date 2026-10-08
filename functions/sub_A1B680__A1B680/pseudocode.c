// Verified atexit thunk calls the typed NiTPointerMap<unsigned int, TESTextureList*>::destructor for g_TESObjectTREETextureHashCache.
void __cdecl TESObjectTREE_TextureHashCache_atexit()
{
  NiTPointerMap<unsigned int,TESTextureList *>::~NiTPointerMap<unsigned int,TESTextureList *>((unsigned int *)&g_TESObjectTREETextureHashCache); /*0xa1b685*/
}
