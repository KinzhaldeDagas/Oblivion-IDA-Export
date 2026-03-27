int __thiscall sub_46BFD0(TESForm *this)
{
  void *v2; // edi
  void *v3; // ebx
  void *v4; // ebp
  void *v5; // ecx
  int result; // eax
  void *v7; // [esp+10h] [ebp-Ch]
  void *v8; // [esp+14h] [ebp-8h]
  void *v9; // [esp+18h] [ebp-4h]

  v2 = OblivionDynamicCast(
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESUsesForm `RTTI Type Descriptor',
         0);
  v3 = OblivionDynamicCast(
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESValueForm `RTTI Type Descriptor',
         0);
  v4 = OblivionDynamicCast(
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  v7 = OblivionDynamicCast(
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESWeightForm `RTTI Type Descriptor',
         0);
  v8 = OblivionDynamicCast(
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESQualityForm `RTTI Type Descriptor',
         0);
  v9 = OblivionDynamicCast(
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESAttackDamageForm `RTTI Type Descriptor',
         0);
  v5 = OblivionDynamicCast(
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESAttributes `RTTI Type Descriptor',
         0);
  result = v2 != 0;
  if ( v3 )
    result += 4;
  if ( v4 )
    result += 4;
  if ( v7 )
    result += 4;
  if ( v8 )
    result += 4;
  if ( v9 )
    result += 2;
  if ( v5 )
    result += 8;
  return result;
}
