void __thiscall Actor_CastOnTarget(Actor *this, void *a2, int a3, char a4)
{
  TESPackage *v7; // edi
  TESPackage *v8; // eax
  TESPackage *v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  unsigned __int8 *v12; // edi
  void *v13; // [esp+24h] [ebp+4h]

  v7 = 0;
  v13 = OblivionDynamicCast(
          a2,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &MagicItemForm `RTTI Type Descriptor',
          0);
  v8 = (TESPackage *)FormHeapAlloc(0x3Cu);
  if ( v8 )
    v9 = TESPackage::TESPackage(v8);
  else
    v9 = 0;
  TESPackage_SetType_(v9, 0x19);
  v9->members.packageFlags = v9->members.packageFlags & 0xFFFFFFF9 | 4;
  v10 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v10 )
    v7 = (TESPackage *)TESPackage_LocationData_constr(v10);
  TESPackage_LocationData_SetType(v7, 0);
  TESPackage_LocationData_SetReference(v7, a3);
  TESPackage_LocationData_SetRadius(v7, 0x78);
  TESPackage_SetLocation(v9, (char *)v7);
  if ( v7 )
  {
    TESPackage_LocationData_destr(v7);
    FormHeapFree((unsigned int)v7);
  }
  v11 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v11 )
    v12 = (unsigned __int8 *)TESPackage_TargetData_constr(v11);
  else
    v12 = 0;
  TESPackage_SetTarget(v9, v12);
  if ( v12 )
  {
    TESTexture::ClearComponentReferences(v12);
    FormHeapFree((unsigned int)v12);
  }
  sub_5672A0(v9);
  TESPackage_TargetData_SetType(&v9->members.target->targetType, 1);
  TESPackage_TargetData_SetTargetForm(&v9->members.target->targetType, (int)v13);
  Actor_AddPackage_(this, v9, 1, 1);
  if ( a4 )
    ((void (__thiscall *)(LowProcess *, Actor *, int))this->members.super.process->Unk_61)(
      this->members.super.process,
      this,
      1);
}
