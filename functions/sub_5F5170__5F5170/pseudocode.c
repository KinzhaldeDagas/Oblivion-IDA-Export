int __thiscall sub_5F5170(Actor *this, char a2, int a3)
{
  TESPackage *v4; // eax
  TESPackage *v5; // ebx
  TESPackage *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  unsigned __int8 *v9; // ebx
  unsigned __int8 *p_targetType; // ecx
  TargetData *target; // ecx
  LowProcess *process; // ecx
  LowProcess *v13; // ebx
  BSExtraData *v14; // eax
  char v16; // [esp-8h] [ebp-2Ch]
  char v17; // [esp-4h] [ebp-28h]

  v4 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f5199*/
  v5 = 0; /*0x5f51a5*/
  if ( v4 ) /*0x5f51ad*/
    v6 = TESPackage::TESPackage(v4); /*0x5f51b6*/
  else
    v6 = 0; /*0x5f51ba*/
  TESPackage_SetType_(v6, 0); /*0x5f51c6*/
  v6->members.packageFlags &= 0xFFFFFFF9; /*0x5f51cb*/
  v7 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f51d1*/
  if ( v7 ) /*0x5f51e7*/
    v5 = (TESPackage *)TESPackage_LocationData_constr(v7); /*0x5f51f0*/
  TESPackage_LocationData_SetType(v5, 0); /*0x5f51fa*/
  TESPackage_LocationData_SetReference(v5, (int)this); /*0x5f5202*/
  TESPackage_SetLocation(v6, (char *)v5); /*0x5f520a*/
  if ( v5 ) /*0x5f5211*/
  {
    TESPackage_LocationData_destr(v5); /*0x5f5215*/
    FormHeapFree((unsigned int)v5); /*0x5f521b*/
  }
  v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f5225*/
  if ( v8 ) /*0x5f523b*/
    v9 = (unsigned __int8 *)TESPackage_TargetData_constr(v8); /*0x5f5244*/
  else
    v9 = 0; /*0x5f5248*/
  TESPackage_SetTarget(v6, v9); /*0x5f5251*/
  p_targetType = &v6->members.target->targetType; /*0x5f5256*/
  v6->members.procedureArrayIndex = 3; /*0x5f525b*/
  TESPackage_TargetData_SetType(p_targetType, 2); /*0x5f5262*/
  TESAIForm_SetServiceFlags(&v6->members.target->targetType, a3); /*0x5f526f*/
  if ( v9 ) /*0x5f5276*/
  {
    Shared_NoOpVirtual_60D0A0(v9); /*0x5f527a*/
    FormHeapFree((unsigned int)v9); /*0x5f5280*/
  }
  target = v6->members.target; /*0x5f528d*/
  if ( a2 ) /*0x5f5290*/
    TESPackage_TargetData_SetTargetFormID(target, 0xE); /*0x5f5298*/
  else
    TESPackage_TargetData_SetTargetFormID(target, 0xD); /*0x5f5294*/
  this->members.super.process->Unk_08(this->members.super.process); /*0x5f52a5*/
  process = this->members.super.process; /*0x5f52a7*/
  if ( process->editorPackage ) /*0x5f52aa*/
  {
    v13 = this->members.super.process; /*0x5f52b8*/
    v17 = ((int (*)(void))process->GetUnk01C)(); /*0x5f52c0*/
    v16 = v13->Unk_2F(v13); /*0x5f52cd*/
    v14 = (BSExtraData *)v13->GetUnk02C(v13); /*0x5f52d7*/
    sub_4268B0(&this->members.super.super.baseExtraList, v13->editorPackage, v13->editorPackProcedure, v14, v16, v17); /*0x5f52e7*/
  }
  Actor_AddPackage_(this, v6, 1, 1); /*0x5f52f3*/
  return ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_29)(this->members.super.process); /*0x5f5307*/
}
