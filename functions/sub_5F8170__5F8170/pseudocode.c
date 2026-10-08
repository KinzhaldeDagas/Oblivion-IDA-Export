void __thiscall sub_5F8170(Actor *this, int a2)
{
  TESPackage *v3; // eax
  TESPackage *v4; // esi
  _DWORD *v5; // eax
  unsigned __int8 *v6; // eax
  LowProcess *process; // ecx
  LowProcess *v8; // ebx
  BSExtraData *v9; // eax
  char v10; // [esp-8h] [ebp-2Ch]
  char v11; // [esp-4h] [ebp-28h]

  if ( (int)this->members.super.process->GetProcessLevel(this->members.super.process) < 2 ) /*0x5f81a4*/
  {
    v3 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f81ac*/
    if ( v3 ) /*0x5f81c2*/
      v4 = TESPackage::TESPackage(v3); /*0x5f81cb*/
    else
      v4 = 0; /*0x5f81cf*/
    TESPackage_SetType_(v4, 0x1F); /*0x5f81dc*/
    v4->members.packageFlags |= 4u; /*0x5f81e1*/
    sub_5672A0(v4); /*0x5f81e7*/
    v5 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f81ee*/
    if ( v5 ) /*0x5f8204*/
      v6 = (unsigned __int8 *)TESPackage_TargetData_constr(v5); /*0x5f8208*/
    else
      v6 = 0; /*0x5f820f*/
    TESPackage_SetTarget(v4, v6); /*0x5f8218*/
    TESPackage_TargetData_SetType(&v4->members.target->targetType, 0); /*0x5f8222*/
    TeSPackage_TargetData_SetTargetREFR(&v4->members.target->targetType, a2); /*0x5f822f*/
    TESAIForm_SetServiceFlags(&v4->members.target->targetType, 0x1F4); /*0x5f823c*/
    process = this->members.super.process; /*0x5f8241*/
    if ( process->editorPackage ) /*0x5f8244*/
    {
      v8 = this->members.super.process; /*0x5f8252*/
      v11 = ((int (*)(void))process->GetUnk01C)(); /*0x5f825a*/
      v10 = v8->Unk_2F(v8); /*0x5f8267*/
      v9 = (BSExtraData *)v8->GetUnk02C(v8); /*0x5f8271*/
      sub_4268B0(&this->members.super.super.baseExtraList, v8->editorPackage, v8->editorPackProcedure, v9, v10, v11); /*0x5f8281*/
    }
    Actor_AddPackage_(this, v4, 0, 1); /*0x5f828d*/
  }
}
