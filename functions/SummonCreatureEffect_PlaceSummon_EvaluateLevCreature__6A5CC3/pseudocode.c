int __userpurge SummonCreatureEffect_PlaceSummon_::EvaluateLevCreature@<eax>(
        Actor *a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        TESContainer a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax
  void *NthForm; // eax
  void *v13; // ebx

  TESContainer_constr(&a8);
  a11 = 0;
  LOWORD(v11) = Actor_GetLevel(a1);
  TESLeveledList_CalcLeveledForm((_BYTE *)(a2 + 0x24), v11, (int)&a8);
  NthForm = (void *)TESContainer_GetNthForm(&a8, 0);
  v13 = OblivionDynamicCast(
          NthForm,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
  a11 = 0xFFFFFFFF;
  TESContainer_destr(&a8);
  return SummonCreatureEffect_PlaceSummon_::ValidateBaseObject(
           (int)v13,
           a3,
           a4,
           a5,
           a6,
           a7,
           (int)a8.vtbl,
           *(int *)&a8.type,
           (int)a8.list.data,
           (int)a8.list.next,
           a9,
           a10,
           a11);
}
