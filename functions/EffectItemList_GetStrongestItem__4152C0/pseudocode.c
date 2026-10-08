// this=EffectItemList; args are rangeFilter (0 self,1 touch,2 target,3 any) and requireArea. Returns effective (flag 0x400000 clear) qualifying item with greatest truncated MagickaCostForCaster(item,null).
int __userpurge EffectItemList_GetStrongestItem@<eax>(
        _DWORD *a1@<ecx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  return EffectItemList_GetStrongestItem_::CheckListEmpty(a1, a2, a3, a4, a5, a6, a7, a8);
}
