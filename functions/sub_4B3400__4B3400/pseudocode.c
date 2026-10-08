// Verified: replaces global TESTextureList cache value keyed by this form's FormID; clears/frees prior value before storing new parsed list.
int __thiscall TESObjectTREE_ReplaceTextureHashCache(TESObjectTREE *this, TESTextureList *newList)
{
  int v3; // eax
  TESTextureList *v4; // edi
  TESTextureList *v6; // [esp+4h] [ebp-4h] BYREF

  v3 = *((_DWORD *)this + 3); /*0x4b3404*/
  v6 = 0; /*0x4b3412*/
  if ( NiTMap_GetAt(&g_TESObjectTREETextureHashCache, v3, &v6) ) /*0x4b341a*/
  {
    v4 = v6; /*0x4b3424*/
    if ( v6 ) /*0x4b342a*/
    {
      TESTextureList_Clear(v6); /*0x4b342e*/
      FormHeapFree((unsigned int)v4); /*0x4b3434*/
    }
  }
  return NiTMap_SetAt(&g_TESObjectTREETextureHashCache, *((_DWORD *)this + 3), (int)newList); /*0x4b3450*/
}
