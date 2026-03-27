char __thiscall sub_60EEE0(Actor *this, Actor *a2, char a3, int a4)
{
  TESPackage *editorPackage; // ebx
  Actor *v10; // eax
  _DWORD *v11; // ecx
  LowProcess *process; // edi
  LowProcess *v13; // ebx
  BSExtraData *v14; // eax
  TESPackage *v15; // eax
  TESPackage *v16; // edi
  _DWORD *v17; // eax
  TESPackage *v18; // ebx
  _DWORD *v19; // eax
  unsigned __int8 *v20; // ebx
  unsigned __int8 *p_targetType; // ecx
  int v22; // eax
  TargetData *target; // ecx
  char v25; // [esp-8h] [ebp-30h]
  char v26; // [esp-4h] [ebp-2Ch]
  TESPackage *v27; // [esp+18h] [ebp-10h]
  Actor *v28; // [esp+2Ch] [ebp+4h]

  if ( Actor::GetProcessLevel(this) )
    return 0;
  if ( Actor::GetProcessLevel(a2) )
    return 0;
  editorPackage = this->members.super.process->editorPackage;
  v27 = editorPackage;
  v28 = 0;
  if ( !a2 )
    return 0;
  if ( a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2)
    && a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2) != kSitSleep_Sitting
    && a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2) != kSitSleep_Sleeping )
  {
    return 0;
  }
  if ( a2 != (Actor *)TESDataHandler_g_PlayerRef )
  {
    if ( FormHeapAlloc(0x10u) )
      v10 = (Actor *)sub_6B7420(this, a2, a4, 0);
    else
      v10 = 0;
    v28 = v10;
  }
  sub_5EF930(this);
  ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_D0)(this, 0);
  this->members.super.process->SetCurrentPackage(this->members.super.process, 0);
  if ( this->vtbl->GetActorValue(this, kActorVal_Invisibility) > 0 )
    sub_6A24B0((int)&this->members.magicTarget, (int)this, 0x49564E49, 0);
  if ( a2 != (Actor *)TESDataHandler_g_PlayerRef && !sub_6B74B0(v28) )
    return 0;
  v11 = &this->members.super.process->__vftable;
  if ( v11[2] )
  {
    process = this->members.super.process;
    v13 = process;
    v26 = (*(int (**)(void))(*v11 + 0x390))();
    v25 = process->Unk_2F(process);
    v14 = (BSExtraData *)v13->GetUnk02C(v13);
    sub_4268B0(&this->members.super.super.baseExtraList, v13->editorPackage, v13->editorPackProcedure, v14, v25, v26);
    editorPackage = v27;
  }
  this->members.super.process->Unk_126(this->members.super.process);
  ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_123)(this->members.super.process, a2);
  a2->members.super.process->Unk_126(a2->members.super.process);
  ((void (__thiscall *)(LowProcess *, Actor *))a2->members.super.process->Unk_123)(a2->members.super.process, this);
  v15 = (TESPackage *)FormHeapAlloc(0x64u);
  if ( v15 )
    v16 = sub_625D80(v15, v28, (TESObjectREFR *)this, (int)a2);
  else
    v16 = 0;
  *(_DWORD *)&v16[1].members.super.type = a4;
  if ( editorPackage )
  {
    sub_60E470(v16, (editorPackage->members.packageFlags & 0x1000) != 0);
    sub_60E490(v16, (editorPackage->members.packageFlags & 0x800000) != 0);
    sub_60E4D0(v16, (editorPackage->members.packageFlags & 0x100000) != 0);
    sub_60E4B0(v16, (editorPackage->members.packageFlags & 0x200000) != 0);
  }
  TESPackage_SetType_(v16, 0x12);
  v16->members.packageFlags |= 6u;
  v17 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v17 )
    v18 = (TESPackage *)TESPackage_LocationData_constr(v17);
  else
    v18 = 0;
  TESPackage_LocationData_SetType(v18, 0);
  TESPackage_LocationData_SetReference(v18, (int)a2);
  TESPackage_SetLocation(v16, (char *)v18);
  if ( v18 )
  {
    TESPackage_LocationData_destr(v18);
    FormHeapFree((unsigned int)v18);
  }
  v19 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v19 )
    v20 = (unsigned __int8 *)TESPackage_TargetData_constr(v19);
  else
    v20 = 0;
  TESPackage_SetTarget(v16, v20);
  if ( v20 )
  {
    TESTexture::ClearComponentReferences(v20);
    FormHeapFree((unsigned int)v20);
  }
  p_targetType = &v16->members.target->targetType;
  v16->members.procedureArrayIndex = 0xA;
  TESPackage_TargetData_SetType(p_targetType, 0);
  TeSPackage_TargetData_SetTargetREFR(&v16->members.target->targetType, (int)a2);
  v22 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process);
  target = v16->members.target;
  if ( v22 == 4 )
    TESAIForm_SetServiceFlags(target, 0xC8);
  else
    TESAIForm_SetServiceFlags(target, 0x5A);
  this->members.super.process->Unk_08(this->members.super.process);
  Actor_AddPackage_(this, v16, 0, 1);
  if ( a3 )
    ++this->members.super.process->editorPackProcedure;
  return 1;
}
