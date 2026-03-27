int __userpurge SummonCreatureEffect_PlaceSummon_::ValidateBaseObject@<eax>(
        int a1@<ebx>,
        _DWORD *esi0@<esi>,
        TESObjectREFR *a3@<ebp>,
        double a4@<st2>,
        double a5@<st1>,
        int a6,
        int a7,
        int a8,
        int a9,
        BSStringT a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  if ( a1 )
    return SummonCreatureEffect_PlaceSummon_::PlaceRef(a1, a3, esi0, a4, a5, a6);
  else
    return SummonCreatureEffect_PlaceSummon_::Error_BadBaseObject(
             (int)esi0,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
}
