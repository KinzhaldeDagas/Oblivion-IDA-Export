int __userpurge EffectItemList_CopyFrom_::UpdateHostileCount@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        _DWORD *edi0@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  if ( EffectItem_IsHostile(edi0) )
    ++*(_DWORD *)(a8 + 0xC);
  return EffectItemList_CopyFrom_::LoopContinue(a1, a2, a4);
}
