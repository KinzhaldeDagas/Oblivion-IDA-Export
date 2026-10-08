int __userpurge SummonCreatureEffect_PlaceSummon_::CastToBoundObj@<eax>(
        int a1@<esi>,
        TESObjectREFR *a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        int a5,
        int a6,
        int a7,
        int a8,
        BSStringT a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  void *v14; // ebx

  v14 = OblivionDynamicCast( /*0x6a5d3c*/
          *(void **)(a1 + 0x38),
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
  return SummonCreatureEffect_PlaceSummon_::ValidateBaseObject(
           (int)v14,
           (_DWORD *)a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
