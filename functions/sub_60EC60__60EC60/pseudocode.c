void __thiscall sub_60EC60(Actor *this, Actor *a2, int a3, int a4, int a5)
{
  TESPackage *v6; // ebx
  char *v7; // eax
  TESPackage *v8; // eax
  TESPackage *v9; // edi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  unsigned __int8 *v12; // ebx
  unsigned __int8 *p_targetType; // ecx
  LowProcess *process; // ecx
  LowProcess *v15; // ebx
  BSExtraData *v16; // eax
  char v17; // [esp-8h] [ebp-30h]
  char v18; // [esp-4h] [ebp-2Ch]
  TESPackage *editorPackage; // [esp+14h] [ebp-14h]

  if ( !this->vtbl->IsInCombat(this, 1) && (!sub_5E0380(this) || (sub_5E0380(this)->members.packageFlags & 0x1000) == 0) )
  {
    v6 = 0;
    this->members.super.process->SetCurrentPackage(this->members.super.process, 0);
    this->members.super.process->Unk_126(this->members.super.process);
    editorPackage = this->members.super.process->editorPackage;
    if ( sub_5E0380(this) )
    {
      v7 = (char *)sub_5E0380(this);
      if ( sub_567770(v7) )
        this->vtbl->Unk_C3(this);
    }
    v8 = (TESPackage *)FormHeapAlloc(0x3Cu);
    if ( v8 )
      v9 = TESPackage::TESPackage(v8);
    else
      v9 = 0;
    TESPackage_SetType_(v9, 0x1B);
    v9->members.packageFlags |= 6u;
    v10 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v10 )
      v6 = (TESPackage *)TESPackage_LocationData_constr(v10);
    TESPackage_LocationData_SetType(v6, 0);
    TESPackage_LocationData_SetReference(v6, (int)this);
    TESPackage_SetLocation(v9, (char *)v6);
    if ( v6 )
    {
      TESPackage_LocationData_destr(v6);
      FormHeapFree((unsigned int)v6);
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
    p_targetType = &v9->members.target->targetType;
    v9->members.procedureArrayIndex = 0x1F;
    TESPackage_TargetData_SetType(p_targetType, 0);
    TeSPackage_TargetData_SetTargetREFR(&v9->members.target->targetType, (int)a2);
    TESAIForm_SetServiceFlags(&v9->members.target->targetType, 0);
    if ( editorPackage )
    {
      if ( (editorPackage->members.packageFlags & 0x100000) != 0 )
        v9->members.packageFlags |= 0x100000u;
      else
        v9->members.packageFlags &= ~0x100000u;
      if ( (editorPackage->members.packageFlags & 0x200000) != 0 )
        v9->members.packageFlags |= 0x200000u;
      else
        v9->members.packageFlags &= ~0x200000u;
    }
    this->members.super.process->Unk_08(this->members.super.process);
    process = this->members.super.process;
    if ( process->editorPackage )
    {
      v15 = this->members.super.process;
      v18 = ((int (*)(void))process->GetUnk01C)();
      v17 = v15->Unk_2F(v15);
      v16 = (BSExtraData *)v15->GetUnk02C(v15);
      sub_4268B0(&this->members.super.super.baseExtraList, v15->editorPackage, v15->editorPackProcedure, v16, v17, v18);
    }
    ((void (__thiscall *)(LowProcess *, int, int, int))this->members.super.process->Unk_F9)(
      this->members.super.process,
      a3,
      a5,
      a4);
    Actor_AddPackage_(this, v9, 0, 1);
    sub_5F8000(a2);
  }
}
