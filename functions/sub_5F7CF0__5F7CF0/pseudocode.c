void __thiscall sub_5F7CF0(Actor *this, TESObjectREFR *a2, char a3)
{
  TESPackage *v4; // edi
  TESPackage *v5; // eax
  TESPackage *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  unsigned __int8 *v9; // edi
  LowProcess *process; // eax
  LowProcess *v11; // edi
  BSExtraData *v12; // eax
  char v13; // [esp-8h] [ebp-28h]
  char v14; // [esp-4h] [ebp-24h]

  if ( !this->vtbl->IsInCombat(this, 1) ) /*0x5f7d21*/
  {
    if ( a3 ) /*0x5f7d2f*/
    {
      v4 = 0; /*0x5f7d4f*/
      this->members.unk0CC = 0; /*0x5f7d53*/
      v5 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f7d59*/
      if ( v5 ) /*0x5f7d6b*/
        v6 = TESPackage::TESPackage(v5); /*0x5f7d74*/
      else
        v6 = 0; /*0x5f7d78*/
      TESPackage_SetType_(v6, 0x20); /*0x5f7d85*/
      v6->members.packageFlags = v6->members.packageFlags & 0xFFFFFFF9 | 4; /*0x5f7d95*/
      v7 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f7d98*/
      if ( v7 ) /*0x5f7dae*/
        v4 = (TESPackage *)TESPackage_LocationData_constr(v7); /*0x5f7db7*/
      TESPackage_LocationData_SetType(v4, 0); /*0x5f7dc1*/
      TESPackage_LocationData_SetReference(v4, (int)this); /*0x5f7dc9*/
      TESPackage_SetLocation(v6, (char *)v4); /*0x5f7dd1*/
      if ( v4 ) /*0x5f7dd8*/
      {
        TESPackage_LocationData_destr(v4); /*0x5f7ddc*/
        FormHeapFree((unsigned int)v4); /*0x5f7de2*/
      }
      if ( a2 ) /*0x5f7df0*/
      {
        v8 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f7df4*/
        if ( v8 ) /*0x5f7e0a*/
          v9 = (unsigned __int8 *)TESPackage_TargetData_constr(v8); /*0x5f7e13*/
        else
          v9 = 0; /*0x5f7e17*/
        TESPackage_SetTarget(v6, v9); /*0x5f7e24*/
        TESPackage_TargetData_SetType(&v6->members.target->targetType, 0); /*0x5f7e2e*/
        TeSPackage_TargetData_SetTargetREFR(&v6->members.target->targetType, (int)a2); /*0x5f7e37*/
        if ( v9 ) /*0x5f7e3e*/
        {
          Shared_NoOpVirtual_60D0A0(v9); /*0x5f7e42*/
          FormHeapFree((unsigned int)v9); /*0x5f7e48*/
        }
      }
      sub_5672A0(v6); /*0x5f7e52*/
      process = this->members.super.process; /*0x5f7e57*/
      if ( process->editorPackage ) /*0x5f7e5a*/
      {
        v11 = this->members.super.process; /*0x5f7e62*/
        v14 = ((int (*)(void))process->GetUnk01C)(); /*0x5f7e72*/
        v13 = v11->Unk_2F(v11); /*0x5f7e7f*/
        v12 = (BSExtraData *)v11->GetUnk02C(v11); /*0x5f7e86*/
        sub_4268B0( /*0x5f7e94*/
          &this->members.super.super.baseExtraList,
          v11->editorPackage,
          v11->editorPackProcedure,
          v12,
          v13,
          v14);
      }
      Actor_AddPackage_(this, v6, 0, 1); /*0x5f7ea0*/
    }
    else if ( a2 ) /*0x5f7d37*/
    {
      this->members.unk0CC = a2; /*0x5f7d39*/
    }
    else
    {
      this->members.unk0CC = (TESObjectREFR *)this; /*0x5f7d44*/
    }
  }
}
