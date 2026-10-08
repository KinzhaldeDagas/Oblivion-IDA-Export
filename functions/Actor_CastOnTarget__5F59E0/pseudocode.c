void __thiscall Actor_CastOnTarget(Actor *this, void *a2, int a3, char a4)
{
  TESPackage *v5; // edi
  TESPackage *v6; // eax
  TESPackage *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  unsigned __int8 *v10; // edi
  void *v11; // [esp+24h] [ebp+4h]

  v5 = 0; /*0x5f5a0a*/
  v11 = OblivionDynamicCast( /*0x5f5a20*/
          a2,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &MagicItemForm `RTTI Type Descriptor',
          0);
  v6 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f5a24*/
  if ( v6 ) /*0x5f5a36*/
    v7 = TESPackage::TESPackage(v6); /*0x5f5a3f*/
  else
    v7 = 0; /*0x5f5a43*/
  TESPackage_SetType_(v7, 0x19); /*0x5f5a51*/
  v7->members.packageFlags = v7->members.packageFlags & 0xFFFFFFF9 | 4; /*0x5f5a61*/
  v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f5a64*/
  if ( v8 ) /*0x5f5a7a*/
    v5 = (TESPackage *)TESPackage_LocationData_constr(v8); /*0x5f5a83*/
  TESPackage_LocationData_SetType(v5, 0); /*0x5f5a91*/
  TESPackage_LocationData_SetReference(v5, a3); /*0x5f5a9d*/
  TESPackage_LocationData_SetRadius(v5, 0x78); /*0x5f5aa6*/
  TESPackage_SetLocation(v7, (char *)v5); /*0x5f5aae*/
  if ( v5 ) /*0x5f5ab5*/
  {
    TESPackage_LocationData_destr(v5); /*0x5f5ab9*/
    FormHeapFree((unsigned int)v5); /*0x5f5abf*/
  }
  v9 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f5ac9*/
  if ( v9 ) /*0x5f5adf*/
    v10 = (unsigned __int8 *)TESPackage_TargetData_constr(v9); /*0x5f5ae8*/
  else
    v10 = 0; /*0x5f5aec*/
  TESPackage_SetTarget(v7, v10); /*0x5f5af9*/
  if ( v10 ) /*0x5f5b00*/
  {
    Shared_NoOpVirtual_60D0A0(v10); /*0x5f5b04*/
    FormHeapFree((unsigned int)v10); /*0x5f5b0a*/
  }
  sub_5672A0(v7); /*0x5f5b14*/
  TESPackage_TargetData_SetType(&v7->members.target->targetType, 1); /*0x5f5b1e*/
  TESPackage_TargetData_SetTargetForm(&v7->members.target->targetType, (int)v11); /*0x5f5b2b*/
  Actor_AddPackage_(this, v7, 1, 1); /*0x5f5b37*/
  if ( a4 ) /*0x5f5b41*/
    ((void (__thiscall *)(LowProcess *, Actor *, int))this->members.super.process->Unk_61)( /*0x5f5b51*/
      this->members.super.process,
      this,
      1);
}
