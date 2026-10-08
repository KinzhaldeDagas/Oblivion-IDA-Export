// Verified DMTL load path: allocates a TESTextureList header, derives model path, parses texture-hash entries, and replaces the global cache entry keyed by form ID. Paired Oblivion save handler invokes a writer whose terminal thunk is a no-op.
int __thiscall TESObjectTREE_LoadTextureHashChunk(TESObjectTREE *this, Data *file)
{
  int v3; // eax
  TESTextureList *v4; // edi
  char Str[260]; // [esp+Ch] [ebp-108h] BYREF

  v3 = FormHeapAlloc(8u); /*0x4b3482*/
  if ( v3 ) /*0x4b348c*/
  {
    *(_BYTE *)v3 = 0; /*0x4b348e*/
    *(_DWORD *)(v3 + 4) = 0; /*0x4b3491*/
    v4 = (TESTextureList *)v3; /*0x4b3498*/
  }
  else
  {
    v4 = 0; /*0x4b349c*/
  }
  sub_46D540(Str, (char *)this); /*0x4b34a4*/
  TESModel_ReadAndReplaceTextureHashEntries(v4, file, (TESForm *)this, Str); /*0x4b34b5*/
  return TESObjectTREE_ReplaceTextureHashCache(this, v4); /*0x4b34c2*/
}
