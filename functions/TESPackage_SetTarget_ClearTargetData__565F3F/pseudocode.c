// positive sp value has been detected, the output may be wrong!
void __userpurge TESPackage_SetTarget_::ClearTargetData(int a1@<esi>, int a2)
{
  unsigned int v2; // edi

  v2 = *(_DWORD *)(a1 + 0x28);
  if ( v2 )
  {
    TESTexture::ClearComponentReferences(*(void **)(a1 + 0x28));
    FormHeapFree(v2);
  }
  *(_DWORD *)(a1 + 0x28) = 0;
}
