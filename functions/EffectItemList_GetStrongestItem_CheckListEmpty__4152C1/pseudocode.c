// positive sp value has been detected, the output may be wrong!
int __userpurge EffectItemList_GetStrongestItem_::CheckListEmpty@<eax>(
        _DWORD *a1@<ecx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  if ( a1[2] || a1[1] )
    return EffectItemList_GetStrongestItem_::EffectsLoop(a1, (int)a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return 0;
}
