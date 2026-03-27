int __userpurge EffectItemList_GetStrongestItem_::LoopContinue@<eax>(
        int a1@<ebp>,
        int a2@<ebx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  int v9; // eax

  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 && v9 != 4 )
    return EffectItemList_GetStrongestItem_::LoopBody(a2, v9 - 4, a3, a4, a5, a6, a7, a8, a9);
  else
    return EffectItemList_GetStrongestItem_::LoopFinish(a3, a4);
}
