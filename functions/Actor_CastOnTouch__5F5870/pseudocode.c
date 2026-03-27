void __thiscall Actor_CastOnTouch(Actor *this, void *a2, int a3)
{
  TESPackage *v6; // edi
  TESPackage *v7; // eax
  TESPackage *v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  unsigned __int8 *v11; // edi
  void *v12; // [esp+24h] [ebp+4h]

  v6 = 0;
  v12 = OblivionDynamicCast(
          a2,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &MagicItemForm `RTTI Type Descriptor',
          0);
  v7 = (TESPackage *)FormHeapAlloc(0x3Cu);
  if ( v7 )
    v8 = TESPackage::TESPackage(v7);
  else
    v8 = 0;
  TESPackage_SetType_(v8, 0x1A);
  v8->members.packageFlags |= 6u;
  v9 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v9 )
    v6 = (TESPackage *)TESPackage_LocationData_constr(v9);
  TESPackage_LocationData_SetType(v6, 0);
  TESPackage_LocationData_SetRadius(v6, 0);
  TESPackage_LocationData_SetReference(v6, a3);
  TESPackage_SetLocation(v8, (char *)v6);
  if ( v6 )
  {
    TESPackage_LocationData_destr(v6);
    FormHeapFree((unsigned int)v6);
  }
  v10 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v10 )
    v11 = (unsigned __int8 *)TESPackage_TargetData_constr(v10);
  else
    v11 = 0;
  TESPackage_SetTarget(v8, v11);
  if ( v11 )
  {
    TESTexture::ClearComponentReferences(v11);
    FormHeapFree((unsigned int)v11);
  }
  sub_5672A0(v8);
  TESPackage_TargetData_SetType(&v8->members.target->targetType, 1);
  TESPackage_TargetData_SetTargetForm(&v8->members.target->targetType, (int)v12);
  Actor_AddPackage_(this, v8, 1, 1);
}
