int __userpurge EffectItemList_CopyFrom_::LoopBody@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // esi

  v12 = *(_DWORD *)(a2 + 4);
  if ( v12 == a1 )
    return EffectItemList_CopyFrom_::LoopContinue(a1, a2, a3);
  else
    return EffectItemList_CopyFrom_::CopyEffectItem(a1, a2, v12, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
