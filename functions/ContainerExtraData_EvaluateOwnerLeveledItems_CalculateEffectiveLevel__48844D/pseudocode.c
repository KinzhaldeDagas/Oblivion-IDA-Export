void __usercall ContainerExtraData_EvaluateOwnerLeveledItems_::CalculateEffectiveLevel(
        int a1@<esi>,
        char a2,
        int a3,
        char a4,
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
  int v24; // [esp+14h] [ebp+14h]

  v13 = *(TESObjectREFR **)(a1 + 4); /*0x48844d*/
  if ( v13 ) /*0x488452*/
    Container = TESObjectREFR_GetContainer(v13); /*0x488454*/
  else
    Container = 0; /*0x48845b*/
  p_list = &Container->list; /*0x48845f*/
  v16 = TESForm_LookupByFormID(7u); /*0x488464*/
  v17 = (char *)OblivionDynamicCast( /*0x488476*/
                  v16,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(v17 + 0x24)); /*0x488481*/
  v19 = *(TESObjectREFR **)(a1 + 4); /*0x488486*/
  v20 = Level; /*0x48848b*/
  v24 = Level; /*0x48848e*/
  if ( v19 ) /*0x488492*/
    v21 = TESObjectREFR_GetContainer(v19); /*0x488494*/
  else
    v21 = 0; /*0x48849b*/
  v22 = (char *)OblivionDynamicCast( /*0x4884ac*/
                  v21,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESContainer `RTTI Type Descriptor',
                  &TESActorBase `RTTI Type Descriptor',
                  0);
  if ( v22 ) /*0x4884b6*/
  {
    v23 = (TESActorBaseData *)(v22 + 0x24); /*0x4884b8*/
    if ( TESActorBaseData_GetLevel((TESActorBaseData *)(v22 + 0x24)) < v20 ) /*0x4884c5*/
      v24 = (unsigned __int16)TESActorBaseData_GetLevel(v23); /*0x4884d1*/
  }
  if ( p_list ) /*0x4884d7*/
    ContainerExtraData_EvaluateOwnerLeveledItems_::EvaluateLLLoop(a2, a3, a4, a5, v24, a7, a8, a9, a10, a11, a12, a13); /*0x4884d8*/
  else
    ContainerExtraData_EvaluateOwnerLeveledItems_::Done(); /*0x4884d7*/
}
