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

  v2 = OblivionDynamicCast( /*0x46bffc*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESUsesForm `RTTI Type Descriptor',
         0);
  v3 = OblivionDynamicCast( /*0x46c012*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESValueForm `RTTI Type Descriptor',
         0);
  v4 = OblivionDynamicCast( /*0x46c028*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  v7 = OblivionDynamicCast( /*0x46c041*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESWeightForm `RTTI Type Descriptor',
         0);
  v8 = OblivionDynamicCast( /*0x46c059*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESQualityForm `RTTI Type Descriptor',
         0);
  v9 = OblivionDynamicCast( /*0x46c071*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESAttackDamageForm `RTTI Type Descriptor',
         0);
  v5 = OblivionDynamicCast( /*0x46c07a*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESAttributes `RTTI Type Descriptor',
         0);
  result = v2 != 0; /*0x46c085*/
  if ( v3 ) /*0x46c08c*/
    result += 4; /*0x46c08e*/
  if ( v4 ) /*0x46c097*/
    result += 4; /*0x46c099*/
  if ( v7 ) /*0x46c0a0*/
    result += 4; /*0x46c0a2*/
  if ( v8 ) /*0x46c0aa*/
    result += 4; /*0x46c0ac*/
  if ( v9 ) /*0x46c0b4*/
    result += 2; /*0x46c0b6*/
  if ( v5 ) /*0x46c0bb*/
    result += 8; /*0x46c0bd*/
  return result; /*0x46c091*/
}
