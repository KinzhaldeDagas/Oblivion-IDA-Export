int __userpurge EffectItem_CopyFrom_::CopyParam@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned int v8; // ebx

  v8 = *(_DWORD *)(a3 + 0x18); /*0x414083*/
  *(_DWORD *)(a3 + 0x14) = *(_DWORD *)(a2 + 0x14); /*0x41408b*/
  if ( v8 == a1 ) /*0x41408e*/
    return EffectItem_CopyFrom_::CreateNewSCITBlock(a1, a2, a3, a4, a5, a6, a7, a8); /*0x41408e*/
  else
    return EffectItem_CopyFrom_::DeleteOldSCITBlock(a1, a2, a3, v8, a4, a5, a6, a7, a8); /*0x41408f*/
}
