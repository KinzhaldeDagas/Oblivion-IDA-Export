// ContainerExtraData_GetArmorWeight authority. After locating a worn instance, the native accumulation multiplies item weight by EntryData::countDelta; sidecar armor-weight corrections must mirror countDelta rather than counting worn ExtraDataList nodes.
double __thiscall ContainerExtraData_GetArmorWeight(float *this, int *a2)
{
  int **v2; // ebx
  int *v3; // ebp
  int v4; // esi
  _BYTE *v5; // edi
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  double v8; // st7
  float WeightForForm_Fast; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]
  float *v12; // [esp+8h] [ebp-4h]

  v12 = this; /*0x488289*/
  if ( kTerrainLODQuadRayDirectionZ == *(this + 3) ) /*0x488295*/
  {
    v2 = *(int ***)this; /*0x48829e*/
    v11 = 0.0; /*0x4882a0*/
    if ( *(_DWORD *)this ) /*0x48829e*/
    {
      while ( 1 ) /*0x4882b0*/
      {
        v3 = *v2; /*0x4882b0*/
        if ( !*v2 ) /*0x4882b4*/
          goto LABEL_23; /*0x4882b4*/
        v4 = *v3; /*0x4882ba*/
        v5 = (_BYTE *)v3[2]; /*0x4882bf*/
        if ( *v3 ) /*0x4882ba*/
          break; /*0x4882ba*/
LABEL_22:
        v2 = (int **)v2[1]; /*0x4883a2*/
        this = v12; /*0x4883a7*/
        if ( !v2 ) /*0x4883ab*/
          goto LABEL_23; /*0x4883ab*/
      }
      while ( 1 ) /*0x4882d0*/
      {
        if ( !*(_DWORD *)v4 ) /*0x4882d4*/
          goto LABEL_22; /*0x4882d4*/
        if ( ExtraDataList_HasWorn(*(_BYTE **)v4, 0) ) /*0x4882dc*/
          break; /*0x4882dc*/
        v4 = *(_DWORD *)(v4 + 4); /*0x4882e5*/
        if ( !v4 ) /*0x4882ea*/
          goto LABEL_22; /*0x4882ea*/
      }
      if ( v5[4] == 0x22 ) /*0x4882f5*/
        goto LABEL_22; /*0x4882f5*/
      WeightForForm_Fast = TESWeightForm_GetWeightForForm_Fast((int)v5); /*0x488301*/
      if ( v5[4] == 0x14 ) /*0x48830c*/
      {
        v6 = OblivionDynamicCast( /*0x488321*/
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
               &TESObjectARMO `RTTI Type Descriptor',
               0);
        v7 = v6; /*0x488326*/
        if ( v6 ) /*0x48832d*/
        {
          if ( TESObjectARMO_ISHeavyArmor(v6) != 1 ) /*0x488338*/
          {
            if ( TESObjectARMO_ISHeavyArmor(v7) || Actor_GetSkillMasteryLevel(a2, (int)v2, (int)v5, 0x1B) < 3 ) /*0x488383*/
              goto LABEL_21; /*0x488383*/
            v8 = g_GameSettingStringPointers_B36CD8[0x204]; /*0x488385*/
            goto LABEL_20; /*0x488385*/
          }
          if ( Actor_GetSkillMasteryLevel(a2, (int)v2, (int)v5, 0x12) == 3 ) /*0x48834a*/
          {
            v8 = g_GameSettingStringPointers_B36CD8[0x200]; /*0x48834c*/
LABEL_20:
            WeightForForm_Fast = v8 * WeightForForm_Fast; /*0x48838b*/
            goto LABEL_21; /*0x48838f*/
          }
          if ( Actor_GetSkillMasteryLevel(a2, (int)v2, (int)v5, 0x12) == 4 ) /*0x488360*/
          {
            v8 = g_GameSettingStringPointers_B36CD8[0x202]; /*0x488362*/
            goto LABEL_20; /*0x488368*/
          }
        }
      }
LABEL_21:
      v11 = (double)v3[1] * WeightForForm_Fast + v11; /*0x488393*/
      goto LABEL_22; /*0x48839e*/
    }
LABEL_23:
    *(this + 3) = v11; /*0x4883b4*/
  }
  return *(this + 3); /*0x4883bf*/
}
