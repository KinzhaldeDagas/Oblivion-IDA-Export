int __usercall EffectItem_CopyFrom_::CopyParam@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx

  v8 = *(_DWORD *)(a3 + 0x18);
  *(_DWORD *)(a3 + 0x14) = *(_DWORD *)(a2 + 0x14);
  if ( v8 == a1 )
    return EffectItem_CopyFrom_::CreateNewSCITBlock(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return EffectItem_CopyFrom_::DeleteOldSCITBlock(a1, a2, a3, v8, a4, a5, a6, a7, a8);
}
