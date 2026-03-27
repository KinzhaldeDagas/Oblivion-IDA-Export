int __userpurge EffectItemList_CopyFrom_::FindLastEntry@<eax>(
        _DWORD *a1@<ebx>,
        int a2@<ebp>,
        _DWORD *edi0@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  if ( edi0 == a1 )
    return EffectItemList_CopyFrom_::UpdateHostileCount((int)a1, a2, edi0, a4, a5, a6, a7, a8);
  if ( *(_DWORD **)(a8 + 8) == a1 )
    return EffectItemList_CopyFrom_::AppendNewEffectItem(a4);
  return EffectItemList_CopyFrom_::FindLastEntry_Loop(a4);
}
