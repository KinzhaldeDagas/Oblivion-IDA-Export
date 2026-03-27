void __thiscall sub_5F7CF0(Actor *this, TESObjectREFR *a2, char a3)
{
  TESPackage *v5; // edi
  TESPackage *v6; // eax
  TESPackage *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  unsigned __int8 *v10; // edi
  _DWORD *v11; // eax
  LowProcess *process; // edi
  BSExtraData *v13; // eax
  char v14; // [esp-8h] [ebp-28h]
  char v15; // [esp-4h] [ebp-24h]

  if ( !this->vtbl->IsInCombat(this, 1) )
  {
    if ( a3 )
    {
      v5 = 0;
      this->members.unk0CC = 0;
      v6 = (TESPackage *)FormHeapAlloc(0x3Cu);
      if ( v6 )
        v7 = TESPackage::TESPackage(v6);
      else
        v7 = 0;
      TESPackage_SetType_(v7, 0x20);
      v7->members.packageFlags = v7->members.packageFlags & 0xFFFFFFF9 | 4;
      v8 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v8 )
        v5 = (TESPackage *)TESPackage_LocationData_constr(v8);
      TESPackage_LocationData_SetType(v5, 0);
      TESPackage_LocationData_SetReference(v5, (int)this);
      TESPackage_SetLocation(v7, (char *)v5);
      if ( v5 )
      {
        TESPackage_LocationData_destr(v5);
        FormHeapFree((unsigned int)v5);
      }
      if ( a2 )
      {
        v9 = (_DWORD *)FormHeapAlloc(0xCu);
        if ( v9 )
          v10 = (unsigned __int8 *)TESPackage_TargetData_constr(v9);
        else
          v10 = 0;
        TESPackage_SetTarget(v7, v10);
        TESPackage_TargetData_SetType(&v7->members.target->targetType, 0);
        TeSPackage_TargetData_SetTargetREFR(&v7->members.target->targetType, (int)a2);
        if ( v10 )
        {
          TESTexture::ClearComponentReferences(v10);
          FormHeapFree((unsigned int)v10);
        }
      }
      sub_5672A0(v7);
      v11 = &this->members.super.process->__vftable;
      if ( v11[2] )
      {
        process = this->members.super.process;
        v15 = (*(int (**)(void))(*v11 + 0x390))();
        v14 = process->Unk_2F(process);
        v13 = (BSExtraData *)process->GetUnk02C(process);
        sub_4268B0(
          &this->members.super.super.baseExtraList,
          process->editorPackage,
          process->editorPackProcedure,
          v13,
          v14,
          v15);
      }
      Actor_AddPackage_(this, v7, 0, 1);
    }
    else if ( a2 )
    {
      this->members.unk0CC = a2;
    }
    else
    {
      this->members.unk0CC = (TESObjectREFR *)this;
    }
  }
}
