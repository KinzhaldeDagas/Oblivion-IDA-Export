int __userpurge SummonCreatureEffect_PlaceSummon_::EvaluateLevCreature@<eax>(
        Actor *a1@<ebp>,
        int a2@<edi>,
        _DWORD *a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        int a6,
        int a7,
        int a8,
        int a9,
        TESContainer a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // eax
  void *NthForm; // eax
  void *v15; // ebx

  TESContainer_constr(&a10); /*0x6a5cc7*/
  a13 = 0; /*0x6a5cd5*/
  LOWORD(v13) = Actor_GetLevel(a1); /*0x6a5cdd*/
  TESLeveledList_CalcLeveledForm((_BYTE *)(a2 + 0x24), v13, 1); /*0x6a5ce6*/
  NthForm = (void *)TESContainer_GetNthForm(&a9, 0); /*0x6a5cff*/
  v15 = OblivionDynamicCast( /*0x6a5d11*/
          NthForm,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
  a12 = 0xFFFFFFFF; /*0x6a5d13*/
  TESContainer_destr(&a9); /*0x6a5d1b*/
  return SummonCreatureEffect_PlaceSummon_::ValidateBaseObject(
           (int)v15,
           a3,
           (TESObjectREFR *)a1,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           *(BSStringT *)&a10.vtbl,
           (int)a10.list.data,
           (int)a10.list.next,
           a11,
           a12,
           a13);
}
