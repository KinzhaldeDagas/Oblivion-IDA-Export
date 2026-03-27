int __usercall ContainerExtraData_EvaluateOwnerLeveledItems_::CalculateEffectiveLevel@<eax>(
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
        int a12,
        int a13)
{
  TESObjectREFR *v13; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // ebp
  TESForm *v16; // eax
  char *v17; // eax
  unsigned __int16 Level; // ax
  TESObjectREFR *v19; // ecx
  __int16 v20; // di
  TESContainer *v21; // eax
  char *v22; // eax
  TESActorBaseData *v23; // esi
  int v25; // [esp+14h] [ebp+14h]

  v13 = *(TESObjectREFR **)(a1 + 4);
  if ( v13 )
    Container = TESObjectREFR_GetContainer(v13);
  else
    Container = 0;
  p_list = &Container->list;
  v16 = TESForm_LookupByFormID(7u);
  v17 = (char *)OblivionDynamicCast(
                  v16,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(v17 + 0x24));
  v19 = *(TESObjectREFR **)(a1 + 4);
  v20 = Level;
  v25 = Level;
  if ( v19 )
    v21 = TESObjectREFR_GetContainer(v19);
  else
    v21 = 0;
  v22 = (char *)OblivionDynamicCast(
                  v21,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESContainer `RTTI Type Descriptor',
                  &TESActorBase `RTTI Type Descriptor',
                  0);
  if ( v22 )
  {
    v23 = (TESActorBaseData *)(v22 + 0x24);
    if ( TESActorBaseData_GetLevel((TESActorBaseData *)(v22 + 0x24)) < v20 )
      v25 = (unsigned __int16)TESActorBaseData_GetLevel(v23);
  }
  if ( p_list )
    return ContainerExtraData_EvaluateOwnerLeveledItems_::EvaluateLLLoop(
             a2,
             a3,
             a4,
             a5,
             v25,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13);
  else
    return ContainerExtraData_EvaluateOwnerLeveledItems_::Done(a2, a3, a4, a5, v25, a7, a8, a9, a10, a11, a12);
}
