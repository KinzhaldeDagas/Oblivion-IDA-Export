int __userpurge EffectItemList_GetStrongestItem_::CheckArea@<eax>(
        int a1@<ebp>,
        int esi0@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  if ( a9 && EffectItem_GetArea((_DWORD *)esi0) <= 0 )
    return EffectItemList_GetStrongestItem_::LoopContinue(a1, a3, a4);
  else
    return EffectItemList_GetStrongestItem_::CheckRange(a1, esi0, a3, a4, a5, a6, a7, a8);
}
