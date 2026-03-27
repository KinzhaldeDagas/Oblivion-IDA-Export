int __usercall EffectItem_CopyFrom_::DeleteOldSCITBlock@<eax>(
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
  __asm { fstp    st }
  FormHeapFree(*(_DWORD *)(a4 + 8));
  *(_DWORD *)(a4 + 8) = a1;
  *(_WORD *)(a4 + 0xE) = a1;
  *(_WORD *)(a4 + 0xC) = a1;
  FormHeapFree(a4);
  __asm { fld     ds:flt_A30634 }
  *(_DWORD *)(a3 + 0x18) = a1;
  return EffectItem_CopyFrom_::CreateNewSCITBlock(a1, a2, a3, _4, a6, a7, a8, a9);
}
