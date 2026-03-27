void __thiscall sub_5F8170(Actor *this, int a2)
{
  TESPackage *v4; // eax
  TESPackage *v5; // esi
  _DWORD *v6; // eax
  unsigned __int8 *v7; // eax
  _DWORD *v8; // ecx
  LowProcess *process; // ebx
  BSExtraData *v10; // eax
  char v11; // [esp-8h] [ebp-2Ch]
  char v12; // [esp-4h] [ebp-28h]

  if ( (int)this->members.super.process->GetProcessLevel(this->members.super.process) < 2 )
  {
    v4 = (TESPackage *)FormHeapAlloc(0x3Cu);
    if ( v4 )
      v5 = TESPackage::TESPackage(v4);
    else
      v5 = 0;
    TESPackage_SetType_(v5, 0x1F);
    v5->members.packageFlags |= 4u;
    sub_5672A0(v5);
    v6 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v6 )
      v7 = (unsigned __int8 *)TESPackage_TargetData_constr(v6);
    else
      v7 = 0;
    TESPackage_SetTarget(v5, v7);
    TESPackage_TargetData_SetType(&v5->members.target->targetType, 0);
    TeSPackage_TargetData_SetTargetREFR(&v5->members.target->targetType, a2);
    TESAIForm_SetServiceFlags(&v5->members.target->targetType, 0x1F4);
    v8 = &this->members.super.process->__vftable;
    if ( v8[2] )
    {
      process = this->members.super.process;
      v12 = (*(int (**)(void))(*v8 + 0x390))();
      v11 = process->Unk_2F(process);
      v10 = (BSExtraData *)process->GetUnk02C(process);
      sub_4268B0(
        &this->members.super.super.baseExtraList,
        process->editorPackage,
        process->editorPackProcedure,
        v10,
        v11,
        v12);
    }
    Actor_AddPackage_(this, v5, 0, 1);
  }
}
