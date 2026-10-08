int __userpurge EffectItem_CopyFrom_::DeleteOldSCITBlock@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        unsigned int a4@<ebx>,
        int _4,
        int a6,
        int a7,
        int a8,
        int a9)
{
  __asm { fstp    st } /*0x414093*/
  FormHeapFree(*(_DWORD *)(a4 + 8)); /*0x414096*/
  *(_DWORD *)(a4 + 8) = a1; /*0x41409c*/
  *(_WORD *)(a4 + 0xE) = a1; /*0x41409f*/
  *(_WORD *)(a4 + 0xC) = a1; /*0x4140a3*/
  FormHeapFree(a4); /*0x4140a7*/
  __asm { fld     ds:kTerrainLODQuadRayDirectionZ } /*0x4140ac*/
  *(_DWORD *)(a3 + 0x18) = a1; /*0x4140b5*/
  return EffectItem_CopyFrom_::CreateNewSCITBlock(a1, a2, a3, _4, a6, a7, a8, a9);
}
