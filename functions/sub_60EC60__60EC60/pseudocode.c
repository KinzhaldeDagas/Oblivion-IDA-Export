void __thiscall sub_60EC60(Actor *this, Actor *a2, int a3, int a4, int a5)
{
  TESPackage *v6; // ebx
  TESPackage *CurrentPackage; // eax
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

  if ( !this->vtbl->IsInCombat(this, 1) /*0x60ecb7*/
    && (!Actor::GetCurrentPackage(this) || (Actor::GetCurrentPackage(this)->members.packageFlags & 0x1000) == 0) )
  {
    v6 = 0; /*0x60ecc8*/
    this->members.super.process->SetCurrentPackage(this->members.super.process, 0); /*0x60eccb*/
    this->members.super.process->Unk_126(this->members.super.process); /*0x60ecd8*/
    editorPackage = this->members.super.process->editorPackage; /*0x60ece0*/
    if ( Actor::GetCurrentPackage(this) ) /*0x60ece6*/
    {
      CurrentPackage = Actor::GetCurrentPackage(this); /*0x60ecf1*/
      if ( TESPackage::IsTemporaryOverrideType(CurrentPackage) ) /*0x60ecf8*/
        this->vtbl->CleanupCurrentPackage(this); /*0x60ed0b*/
    }
    v8 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x60ed0f*/
    if ( v8 ) /*0x60ed21*/
      v9 = TESPackage::TESPackage(v8); /*0x60ed2a*/
    else
      v9 = 0; /*0x60ed2e*/
    TESPackage_SetType_(v9, 0x1B); /*0x60ed3b*/
    v9->members.packageFlags |= 6u; /*0x60ed40*/
    v10 = (_DWORD *)FormHeapAlloc(0xCu); /*0x60ed46*/
    if ( v10 ) /*0x60ed5c*/
      v6 = (TESPackage *)TESPackage_LocationData_constr(v10); /*0x60ed65*/
    TESPackage_LocationData_SetType(v6, 0); /*0x60ed6f*/
    TESPackage_LocationData_SetReference(v6, (int)this); /*0x60ed77*/
    TESPackage_SetLocation(v9, (char *)v6); /*0x60ed7f*/
    if ( v6 ) /*0x60ed86*/
    {
      TESPackage_LocationData_destr(v6); /*0x60ed8a*/
      FormHeapFree((unsigned int)v6); /*0x60ed90*/
    }
    v11 = (_DWORD *)FormHeapAlloc(0xCu); /*0x60ed9a*/
    if ( v11 ) /*0x60edb0*/
      v12 = (unsigned __int8 *)TESPackage_TargetData_constr(v11); /*0x60edb9*/
    else
      v12 = 0; /*0x60edbd*/
    TESPackage_SetTarget(v9, v12); /*0x60edc6*/
    if ( v12 ) /*0x60edcd*/
    {
      Shared_NoOpVirtual_60D0A0(v12); /*0x60edd1*/
      FormHeapFree((unsigned int)v12); /*0x60edd7*/
    }
    p_targetType = &v9->members.target->targetType; /*0x60eddf*/
    v9->members.procedureArrayIndex = 0x1F; /*0x60ede4*/
    TESPackage_TargetData_SetType(p_targetType, 0); /*0x60edeb*/
    TeSPackage_TargetData_SetTargetREFR(&v9->members.target->targetType, (int)a2); /*0x60edf8*/
    TESAIForm_SetServiceFlags(&v9->members.target->targetType, 0); /*0x60ee02*/
    if ( editorPackage ) /*0x60ee0d*/
    {
      if ( (editorPackage->members.packageFlags & 0x100000) != 0 ) /*0x60ee18*/
        v9->members.packageFlags |= 0x100000u; /*0x60ee1a*/
      else
        v9->members.packageFlags &= ~0x100000u; /*0x60ee23*/
      if ( (editorPackage->members.packageFlags & 0x200000) != 0 ) /*0x60ee32*/
        v9->members.packageFlags |= 0x200000u; /*0x60ee34*/
      else
        v9->members.packageFlags &= ~0x200000u; /*0x60ee3d*/
    }
    this->members.super.process->Unk_08(this->members.super.process); /*0x60ee4c*/
    process = this->members.super.process; /*0x60ee4e*/
    if ( process->editorPackage ) /*0x60ee51*/
    {
      v15 = this->members.super.process; /*0x60ee5f*/
      v18 = ((int (*)(void))process->GetUnk01C)(); /*0x60ee67*/
      v17 = v15->Unk_2F(v15); /*0x60ee74*/
      v16 = (BSExtraData *)v15->GetUnk02C(v15); /*0x60ee7e*/
      sub_4268B0(&this->members.super.super.baseExtraList, v15->editorPackage, v15->editorPackProcedure, v16, v17, v18); /*0x60ee8e*/
    }
    ((void (__thiscall *)(LowProcess *, int, int, int))this->members.super.process->Unk_F9)( /*0x60eead*/
      this->members.super.process,
      a3,
      a5,
      a4);
    Actor_AddPackage_(this, v9, 0, 1); /*0x60eeb6*/
    sub_5F8000(a2); /*0x60eebf*/
  }
}
