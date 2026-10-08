// positive sp value has been detected, the output may be wrong!
void __userpurge TESPackage_SetTarget_::ClearTargetData(int a1@<esi>, int a2)
{
  unsigned int v2; // edi

  v2 = *(_DWORD *)(a1 + 0x28); /*0x565f3f*/
  if ( v2 ) /*0x565f44*/
  {
    Shared_NoOpVirtual_60D0A0(*(void **)(a1 + 0x28)); /*0x565f48*/
    FormHeapFree(v2); /*0x565f4e*/
  }
  *(_DWORD *)(a1 + 0x28) = 0; /*0x565f56*/
}
