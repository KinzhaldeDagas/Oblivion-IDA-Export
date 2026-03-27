bool __thiscall Actor_AddPackage_(Actor *this, TESPackage *a2, char a3, char a4)
{
  TESPackage *process; // eax
  int v5; // ebx
  int v6; // edi
  TESPackage *v7; // ebp
  int type; // eax
  UInt8 v10; // al
  LowProcess *v11; // ecx
  LowProcess_vtbl *v12; // edi
  int v13; // eax
  Creature *v14; // eax
  TESPackage *editorPackage; // ecx
  TESPackage *v16; // edi
  ActorAnimData *v17; // eax
  UInt8 v18; // al
  Creature *v19; // eax
  int v21; // [esp+10h] [ebp-8h]
  float v22; // [esp+28h] [ebp+10h]

  v7 = a2;
  if ( this->members.super.process )
  {
    process = this->members.super.process->GetCurrentPackage(this->members.super.process);
    if ( process )
    {
      if ( process->members.type == 0x12 )
      {
        process = (TESPackage *)this->members.super.process;
        if ( (TESPackage *)process->members.super.flags != a2 )
          sub_5EAE70(this, v5, v6, v21);
      }
    }
    if ( this->members.super.process )
    {
      ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_64)(
        this->members.super.process,
        this);
      if ( !this->vtbl->GetMountedHorse(this) )
      {
        type = a2->members.type;
        if ( (_BYTE)type != kProcedure_DISMOUNT_HORSE && (_BYTE)type != kProcedure_WARN )
        {
          if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) )
          {
            v10 = a2->members.type;
            if ( v10 != 0xF && v10 != 0x12
              || (process = (TESPackage *)this->vtbl->super.super.GetSleepState((TESObjectREFR *)this),
                  process != (TESPackage *)kSitSleep_Sitting) )
            {
              LOBYTE(process) = ((int (__thiscall *)(Actor *))this->vtbl->AddPackageWakeUp)(this);
            }
            if ( a3 )
            {
              if ( a4 )
              {
                LOBYTE(process) = a2->members.type;
                if ( (_BYTE)process != 0x13 && (_BYTE)process != 0x12 && (_BYTE)process != 0x11 )
                {
                  process = (TESPackage *)ExtraDataList::GetExtraPackage(&this->members.super.super.baseExtraList);
                  if ( a2 != process )
                    LOBYTE(process) = ((int (__thiscall *)(TESPackage *, int))a2->__vftable->super.Destroy)(a2, 1);
                }
              }
              return (char)process;
            }
          }
        }
      }
      if ( a2 )
      {
        if ( a4 )
          sub_566830((unsigned int *)a2, 1);
      }
      if ( a3 )
      {
        if ( this->vtbl->GetMountedHorse(this) )
        {
          if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) != 4 )
          {
            v18 = a2->members.type;
            if ( v18 != 0x16 && v18 != 0x17 )
            {
              v19 = this->vtbl->GetMountedHorse(this);
              ((void (__thiscall *)(Creature *, _DWORD))v19->__vftable->Unk_E3)(v19, 0);
              ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_E1)(this, 0);
            }
          }
        }
        this->members.super.process->SetCurrentPackage(this->members.super.process, a2);
        this->members.super.process->SetCurrentPackProcedure(this->members.super.process, kProcedure_TRAVEL);
        this->vtbl->super.super.super.MarkAsModified((TESForm *)this, 0x80000);
        goto LABEL_57;
      }
      if ( ((double (__thiscall *)(LowProcess *))this->members.super.process->Unk_56)(this->members.super.process) > *(float *)&SrcStr )
      {
        v11 = this->members.super.process;
        v12 = v11->__vftable;
        v22 = ((double (*)(void))v11->Unk_56)() * dbl_A3D360;
        ((void (__thiscall *)(LowProcess *, _DWORD))v12->Unk_57)(this->members.super.process, LODWORD(v22));
        ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_64)(
          this->members.super.process,
          this);
      }
      if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_5C)(this->members.super.process) )
      {
        v13 = *(char *)(((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_5C)(this->members.super.process)
                      + 0x20);
        if ( v13 < 0x15 || v13 > 0x17 )
        {
          if ( sub_5E1030(this) )
          {
            v14 = this->vtbl->GetMountedHorse(this);
            ((void (__thiscall *)(Creature *, _DWORD))v14->__vftable->Unk_E3)(v14, 0);
            ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_E1)(this, 0);
          }
          this->members.super.process->SetCurrentPackage(this->members.super.process, 0);
        }
      }
      editorPackage = this->members.super.process->editorPackage;
      if ( editorPackage && (a2->members.type == 1 || editorPackage->members.type != 1) && sub_5660A0(editorPackage) )
      {
        if ( a2->members.type == 1 )
        {
          v16 = this->members.super.process->editorPackage;
          if ( v16 == (TESPackage *)ExtraDataList::GetExtraPackage(&this->members.super.super.baseExtraList) )
          {
            a2->__vftable->super.Destroy((TESForm *)a2, 1);
            v7 = this->members.super.process->editorPackage;
            goto LABEL_46;
          }
          if ( !v16 )
            goto LABEL_46;
        }
        else
        {
          v16 = this->members.super.process->editorPackage;
          if ( v16 == (TESPackage *)ExtraDataList::GetExtraPackage(&this->members.super.super.baseExtraList) || !v16 )
            goto LABEL_46;
        }
        v16->__vftable->super.Destroy((TESForm *)v16, 1);
      }
LABEL_46:
      this->members.super.process->editorPackage = v7;
      this->members.super.process->editorPackProcedure = kProcedure_TRAVEL;
      sub_5E8DE0(this, v7);
      if ( this->vtbl->super.super.GetAnimData(this) )
      {
        if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None
          || this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sleeping
          || this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sitting )
        {
          v17 = this->vtbl->super.super.GetAnimData(this);
          sub_475440(v17, 1, 0);
        }
      }
LABEL_57:
      this->members.super.process->SetUnk02C(this->members.super.process, 0);
      LOBYTE(process) = sub_5E7BE0();
    }
  }
  return (char)process;
}
