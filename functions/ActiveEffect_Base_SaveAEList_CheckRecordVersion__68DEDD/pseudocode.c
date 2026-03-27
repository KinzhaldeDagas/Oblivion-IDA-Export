int __cdecl ActiveEffect_Base_SaveAEList_::CheckRecordVersion(
        int a1,
        int a2,
        int Src,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( sub_45A170() )
    return ActiveEffect_Base_SaveAEList_::OldHeader(a1, a2, Src, a4, a5, a6, a7, a8, a9, a10);
  else
    return ActiveEffect_Base_SaveAEList_::ReserveEffectCount(a1, a2, Src, a4, a5, a6, a7, a8, a9, a10);
}
