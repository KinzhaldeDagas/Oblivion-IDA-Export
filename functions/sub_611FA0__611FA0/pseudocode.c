double __thiscall sub_611FA0(int this)
{
  ExtraDataList *****ContainerChanges; // ebp
  int v3; // ebx
  _DWORD *EquippedInstance; // eax
  unsigned int v5; // esi
  void *v6; // edi
  void *v7; // eax
  int v8; // edx
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // eax
  double result; // st7
  float v14; // [esp+8h] [ebp-8h]

  v14 = 0.0;
  OblivionDynamicCast(
    (void *)this,
    0,
    (struct _s_RTTICompleteObjectLocator *)&Character `RTTI Type Descriptor',
    &TESContainer `RTTI Type Descriptor',
    0);
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
  if ( ContainerChanges )
  {
    v3 = 0;
    while ( 1 )
    {
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, v3, 0);
      v5 = (unsigned int)EquippedInstance;
      if ( EquippedInstance )
        break;
LABEL_15:
      if ( ++v3 >= 0x10 )
        goto LABEL_16;
    }
    if ( v3 == 8 || v3 == 7 || v3 == 6 )
    {
      if ( OblivionDynamicCast(
             (void *)EquippedInstance[2],
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectCLOT `RTTI Type Descriptor',
             0) )
      {
        sub_4842E0(v5);
        v10 = (double)v12 * flt_B37B98 + fClothingJewelryBase;
        goto LABEL_13;
      }
    }
    else
    {
      v6 = OblivionDynamicCast(
             (void *)EquippedInstance[2],
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectARMO `RTTI Type Descriptor',
             0);
      v7 = OblivionDynamicCast(
             *(void **)(v5 + 8),
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectCLOT `RTTI Type Descriptor',
             0);
      if ( v6 )
      {
        sub_4842E0(v5);
        v10 = (double)v9 * flt_B37BB0 + flt_B37BB8;
LABEL_13:
        v14 = v10 + v14;
        goto LABEL_14;
      }
      if ( v7 )
      {
        sub_4842E0(v5);
        v10 = (double)v11 * flt_B37BA8 + flt_B37BA0;
        goto LABEL_13;
      }
    }
LABEL_14:
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)v5, v8);
    FormHeapFree(v5);
    goto LABEL_15;
  }
LABEL_16:
  result = v14;
  if ( v14 > fCostant_100 )
    return flt_A2FE7C;
  return result;
}
