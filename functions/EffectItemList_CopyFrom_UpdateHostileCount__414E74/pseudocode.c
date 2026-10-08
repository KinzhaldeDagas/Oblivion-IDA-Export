int __userpurge EffectItemList_CopyFrom_::UpdateHostileCount@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        _DWORD *edi0@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  if ( EffectItem_IsHostile(edi0) ) /*0x414e76*/
    ++*(_DWORD *)(a8 + 0xC); /*0x414e83*/
  return EffectItemList_CopyFrom_::LoopContinue(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
