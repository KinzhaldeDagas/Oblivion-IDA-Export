double __thiscall ContainerExtraData_GetArmorWeight(float *this, int *a2)
{
  int v2; // ebx
  int *v3; // ebp
  int v4; // esi
  _BYTE *v5; // edi
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  double v8; // st7
  float WeightForForm_Fast; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]
  float *v12; // [esp+8h] [ebp-4h]

  v12 = this;
  if ( flt_A30634 == *(this + 3) )
  {
    v2 = *(_DWORD *)this;
    v11 = 0.0;
    if ( *(_DWORD *)this )
    {
      while ( 1 )
      {
        v3 = *(int **)v2;
        if ( !*(_DWORD *)v2 )
          goto LABEL_23;
        v4 = *v3;
        v5 = (_BYTE *)v3[2];
        if ( *v3 )
          break;
LABEL_22:
        v2 = *(_DWORD *)(v2 + 4);
        this = v12;
        if ( !v2 )
          goto LABEL_23;
      }
      while ( 1 )
      {
        if ( !*(_DWORD *)v4 )
          goto LABEL_22;
        if ( ExtraDataList_HasWorn(*(_BYTE **)v4, 0) )
          break;
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_22;
      }
      if ( v5[4] == 0x22 )
        goto LABEL_22;
      WeightForForm_Fast = TESWeightForm_GetWeightForForm_Fast((int)v5);
      if ( v5[4] == 0x14 )
      {
        v6 = OblivionDynamicCast(
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
               &TESObjectARMO `RTTI Type Descriptor',
               0);
        v7 = v6;
        if ( v6 )
        {
          if ( TESObjectARMO_ISHeavyArmor(v6) != 1 )
          {
            if ( TESObjectARMO_ISHeavyArmor(v7) || (int)Actor_GetSkillMasteryLevel(0x1B) < 3 )
              goto LABEL_21;
            v8 = fPerkLightArmorExpertSpeedMult;
            goto LABEL_20;
          }
          if ( Actor_GetSkillMasteryLevel(0x12) == 3 )
          {
            v8 = fPerkHeavyArmorExpertSpeedMult;
LABEL_20:
            WeightForForm_Fast = v8 * WeightForForm_Fast;
            goto LABEL_21;
          }
          if ( Actor_GetSkillMasteryLevel(0x12) == 4 )
          {
            v8 = fPerkHeavyArmorMasterSpeedMult;
            goto LABEL_20;
          }
        }
      }
LABEL_21:
      v11 = (double)v3[1] * WeightForForm_Fast + v11;
      goto LABEL_22;
    }
LABEL_23:
    *(this + 3) = v11;
  }
  return *(this + 3);
}
