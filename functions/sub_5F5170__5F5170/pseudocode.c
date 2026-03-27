int __thiscall sub_5F5170(Actor *this, char a2, int a3)
{
  TESPackage *v5; // eax
  TESPackage *v6; // ebx
  TESPackage *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  unsigned __int8 *v10; // ebx
  unsigned __int8 *p_targetType; // ecx
  TargetData *target; // ecx
  _DWORD *v13; // ecx
  LowProcess *process; // ebx
  BSExtraData *v15; // eax
  char v17; // [esp-8h] [ebp-2Ch]
  char v18; // [esp-4h] [ebp-28h]

  v5 = (TESPackage *)FormHeapAlloc(0x3Cu);
  v6 = 0;
  if ( v5 )
    v7 = TESPackage::TESPackage(v5);
  else
    v7 = 0;
  TESPackage_SetType_(v7, 0);
  v7->members.packageFlags &= 0xFFFFFFF9;
  v8 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v8 )
    v6 = (TESPackage *)TESPackage_LocationData_constr(v8);
  TESPackage_LocationData_SetType(v6, 0);
  TESPackage_LocationData_SetReference(v6, (int)this);
  TESPackage_SetLocation(v7, (char *)v6);
  if ( v6 )
  {
    TESPackage_LocationData_destr(v6);
    FormHeapFree((unsigned int)v6);
  }
  v9 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v9 )
    v10 = (unsigned __int8 *)TESPackage_TargetData_constr(v9);
  else
    v10 = 0;
  TESPackage_SetTarget(v7, v10);
  p_targetType = &v7->members.target->targetType;
  v7->members.procedureArrayIndex = 3;
  TESPackage_TargetData_SetType(p_targetType, 2);
  TESAIForm_SetServiceFlags(&v7->members.target->targetType, a3);
  if ( v10 )
  {
    TESTexture::ClearComponentReferences(v10);
    FormHeapFree((unsigned int)v10);
  }
  target = v7->members.target;
  if ( a2 )
    TESPackage_TargetData_SetTargetFormID(target, 0xE);
  else
    TESPackage_TargetData_SetTargetFormID(target, 0xD);
  this->members.super.process->Unk_08(this->members.super.process);
  v13 = &this->members.super.process->__vftable;
  if ( v13[2] )
  {
    process = this->members.super.process;
    v18 = (*(int (**)(void))(*v13 + 0x390))();
    v17 = process->Unk_2F(process);
    v15 = (BSExtraData *)process->GetUnk02C(process);
    sub_4268B0(
      &this->members.super.super.baseExtraList,
      process->editorPackage,
      process->editorPackProcedure,
      v15,
      v17,
      v18);
  }
  Actor_AddPackage_(this, v7, 1, 1);
  return ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_29)(this->members.super.process);
}
