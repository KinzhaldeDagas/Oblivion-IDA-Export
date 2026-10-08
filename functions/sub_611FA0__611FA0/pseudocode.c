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

  v14 = 0.0; /*0x611fa7*/
  OblivionDynamicCast( /*0x611fbc*/
    (void *)this,
    0,
    (struct _s_RTTICompleteObjectLocator *)&Character `RTTI Type Descriptor',
    &TESContainer `RTTI Type Descriptor',
    0);
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x611fcc*/
  if ( ContainerChanges ) /*0x611fd0*/
  {
    v3 = 0; /*0x611fd8*/
    while ( 1 ) /*0x611fe5*/
    {
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, v3, 0); /*0x611fe5*/
      v5 = (unsigned int)EquippedInstance; /*0x611fea*/
      if ( EquippedInstance ) /*0x611fee*/
        break; /*0x611fee*/
LABEL_15:
      if ( ++v3 >= 0x10 ) /*0x6120cf*/
        goto LABEL_16; /*0x6120cf*/
    }
    if ( v3 == 8 || v3 == 7 || v3 == 6 ) /*0x612001*/
    {
      if ( OblivionDynamicCast( /*0x61208a*/
             (void *)EquippedInstance[2],
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectCLOT `RTTI Type Descriptor',
             0) )
      {
        sub_4842E0((TESForm **)v5); /*0x612098*/
        v10 = (double)v12 * MEMORY[0xB37A58][0x50] + MEMORY[0xB37A58][0x4E]; /*0x6120ab*/
        goto LABEL_13; /*0x6120ab*/
      }
    }
    else
    {
      v6 = OblivionDynamicCast( /*0x612026*/
             (void *)EquippedInstance[2],
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectARMO `RTTI Type Descriptor',
             0);
      v7 = OblivionDynamicCast( /*0x61202e*/
             *(void **)(v5 + 8),
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESObjectCLOT `RTTI Type Descriptor',
             0);
      if ( v6 ) /*0x612038*/
      {
        sub_4842E0((TESForm **)v5); /*0x61203c*/
        v10 = (double)v9 * MEMORY[0xB37A58][0x56] + MEMORY[0xB37A58][0x58]; /*0x61204f*/
LABEL_13:
        v14 = v10 + v14; /*0x6120b1*/
        goto LABEL_14; /*0x6120b5*/
      }
      if ( v7 ) /*0x612059*/
      {
        sub_4842E0((TESForm **)v5); /*0x61205d*/
        v10 = (double)v11 * MEMORY[0xB37A58][0x54] + MEMORY[0xB37A58][0x52]; /*0x612070*/
        goto LABEL_13; /*0x612076*/
      }
    }
LABEL_14:
    ContainerEntryExtraData_DestroyDataTable((unsigned int *)v5, v8); /*0x6120b9*/
    FormHeapFree(v5); /*0x6120c1*/
    goto LABEL_15; /*0x6120c1*/
  }
LABEL_16:
  result = v14; /*0x6120d7*/
  if ( v14 > fCostant_100 ) /*0x6120e8*/
    return flt_A2FE7C; /*0x6120f5*/
  return result; /*0x6120f8*/
}
