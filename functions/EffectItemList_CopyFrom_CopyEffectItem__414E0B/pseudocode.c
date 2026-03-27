int __userpurge EffectItemList_CopyFrom_::CopyEffectItem@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
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
  _DWORD *v13; // edi

  if ( FormHeapAlloc(0x24u) == a1 )
    return EffectItemList_CopyFrom_::FindLastEntry(a1, a2, 0, a4, a5, a6, a7, a8, a9, a10, a1);
  v13 = (_DWORD *)EffectItem_constrCopy(a3);
  return EffectItemList_CopyFrom_::FindLastEntry(a1, a2, v13, a4, a5, a6, a7, a8, a9, a10, a1);
}
