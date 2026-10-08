int __userpurge EffectItemList_GetStrongestItem_::CheckRange@<eax>(
        int a1@<ebp>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  if ( a10 == 3 || *(_DWORD *)(a4 + 0x10) == a10 ) /*0x41533c*/
    return EffectItemList_GetStrongestItem_::LoopContinue(a1, a3, a5, a6, a7, a4, a9, a10, a11); /*0x415343*/
  else
    return EffectItemList_GetStrongestItem_::LoopContinue(a1, a2, a5, a6, a7, a8, a9, a10, a11); /*0x41533c*/
}
