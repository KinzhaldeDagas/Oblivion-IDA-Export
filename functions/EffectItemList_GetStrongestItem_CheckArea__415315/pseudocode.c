int __userpurge EffectItemList_GetStrongestItem_::CheckArea@<eax>(
        int a1@<ebp>,
        _DWORD *esi0@<esi>,
        int a3@<ebx>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  if ( a10 && EffectItem_GetArea(esi0) <= 0 ) /*0x41532e*/
    return EffectItemList_GetStrongestItem_::LoopContinue(a1, a3, a4, a5, a6, a7, a8, a9, a10); /*0x41532e*/
  else
    return EffectItemList_GetStrongestItem_::CheckRange(a1, a4, a5, a6, a7, a8, a9); /*0x41532f*/
}
