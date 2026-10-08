void __thiscall Actor_CastOnTouch(Actor *this, void *a2, int a3)
{
  TESPackage *v4; // edi
  TESPackage *v5; // eax
  TESPackage *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  unsigned __int8 *v9; // edi
  void *v10; // [esp+24h] [ebp+4h]

  v4 = 0; /*0x5f589a*/
  v10 = OblivionDynamicCast( /*0x5f58b0*/
          a2,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &MagicItemForm `RTTI Type Descriptor',
          0);
  v5 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f58b4*/
  if ( v5 ) /*0x5f58c6*/
    v6 = TESPackage::TESPackage(v5); /*0x5f58cf*/
  else
    v6 = 0; /*0x5f58d3*/
  TESPackage_SetType_(v6, 0x1A); /*0x5f58e1*/
  v6->members.packageFlags |= 6u; /*0x5f58e6*/
  v7 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f58ec*/
  if ( v7 ) /*0x5f5902*/
    v4 = (TESPackage *)TESPackage_LocationData_constr(v7); /*0x5f590b*/
  TESPackage_LocationData_SetType(v4, 0); /*0x5f5919*/
  TESPackage_LocationData_SetRadius(v4, 0); /*0x5f5922*/
  TESPackage_LocationData_SetReference(v4, a3); /*0x5f592e*/
  TESPackage_SetLocation(v6, (char *)v4); /*0x5f5936*/
  if ( v4 ) /*0x5f593d*/
  {
    TESPackage_LocationData_destr(v4); /*0x5f5941*/
    FormHeapFree((unsigned int)v4); /*0x5f5947*/
  }
  v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f5951*/
  if ( v8 ) /*0x5f5967*/
    v9 = (unsigned __int8 *)TESPackage_TargetData_constr(v8); /*0x5f5970*/
  else
    v9 = 0; /*0x5f5974*/
  TESPackage_SetTarget(v6, v9); /*0x5f5981*/
  if ( v9 ) /*0x5f5988*/
  {
    Shared_NoOpVirtual_60D0A0(v9); /*0x5f598c*/
    FormHeapFree((unsigned int)v9); /*0x5f5992*/
  }
  sub_5672A0(v6); /*0x5f599c*/
  TESPackage_TargetData_SetType(&v6->members.target->targetType, 1); /*0x5f59a6*/
  TESPackage_TargetData_SetTargetForm(&v6->members.target->targetType, (int)v10); /*0x5f59b3*/
  Actor_AddPackage_(this, v6, 1, 1); /*0x5f59bf*/
}
