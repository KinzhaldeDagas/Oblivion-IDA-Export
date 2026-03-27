int __userpurge SummonCreatureEffect_PlaceSummon_::CastToBoundObj@<eax>(
        int a1@<esi>,
        int a2,
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
  void *v12; // ebx

  v12 = OblivionDynamicCast(
          *(void **)(a1 + 0x38),
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
  return SummonCreatureEffect_PlaceSummon_::ValidateBaseObject(
           (int)v12,
           a1,
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
           a12);
}
