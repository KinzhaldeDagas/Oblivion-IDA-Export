// 3DTheft: xrefs ignore this function's return value; use current package/process state after call, not AL/EAX, as the package assignment result.
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

  v7 = a2; /*0x5f1591*/
  if ( this->members.super.process ) /*0x5f1598*/
  {
    process = this->members.super.process->GetCurrentPackage(this->members.super.process); /*0x5f15ad*/
    if ( process ) /*0x5f15b1*/
    {
      if ( process->members.type == 0x12 ) /*0x5f15b7*/
      {
        process = (TESPackage *)this->members.super.process; /*0x5f15b9*/
        if ( (TESPackage *)process->members.super.flags != a2 ) /*0x5f15bf*/
          sub_5EAE70(this, v5, v6, v21); /*0x5f15c3*/
      }
    }
    if ( this->members.super.process ) /*0x5f15c8*/
    {
      ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_64)( /*0x5f15df*/
        this->members.super.process,
        this);
      if ( !this->vtbl->GetMountedHorse(this) ) /*0x5f15eb*/
      {
        type = a2->members.type; /*0x5f15f9*/
        if ( (_BYTE)type != kProcedure_DISMOUNT_HORSE && (_BYTE)type != kProcedure_WARN ) /*0x5f1606*/
        {
          if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) ) /*0x5f1616*/
          {
            v10 = a2->members.type; /*0x5f161c*/
            if ( v10 != 0xF && v10 != 0x12 /*0x5f1636*/
              || (process = (TESPackage *)this->vtbl->super.super.GetSleepState((TESObjectREFR *)this),
                  process != (TESPackage *)kSitSleep_Sitting) )
            {
              LOBYTE(process) = ((int (__thiscall *)(Actor *))this->vtbl->AddPackageWakeUp)(this); /*0x5f1642*/
            }
            if ( a3 ) /*0x5f1646*/
            {
              if ( a4 ) /*0x5f164d*/
              {
                LOBYTE(process) = a2->members.type; /*0x5f1653*/
                if ( (_BYTE)process != 0x13 && (_BYTE)process != 0x12 && (_BYTE)process != 0x11 ) /*0x5f1668*/
                {
                  process = (TESPackage *)ExtraDataList::GetExtraPackage(&this->members.super.super.baseExtraList); /*0x5f1671*/
                  if ( a2 != process ) /*0x5f1678*/
                    LOBYTE(process) = ((int (__thiscall *)(TESPackage *, int))a2->__vftable->super.Destroy)(a2, 1); /*0x5f1688*/
                }
              }
              return (char)process; /*0x5f168d*/
            }
          }
        }
      }
      if ( a2 ) /*0x5f1692*/
      {
        if ( a4 ) /*0x5f1699*/
          sub_566830((unsigned int *)a2, 1);    // 3DTheft decode: Actor_AddPackage_ performs the dynamic-marker helper when markDynamic/a4 is true; callers should let this path mark runtime packages instead of forcing packageFlags 0x800 manually. /*0x5f169f*/
      }
      if ( a3 ) /*0x5f16a6*/
      {
        if ( this->vtbl->GetMountedHorse(this) ) /*0x5f1875*/
        {
          if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) != 4 ) /*0x5f188b*/
          {
            v18 = a2->members.type; /*0x5f188d*/
            if ( v18 != 0x16 && v18 != 0x17 ) /*0x5f1896*/
            {
              v19 = this->vtbl->GetMountedHorse(this); /*0x5f18a2*/
              ((void (__thiscall *)(Creature *, _DWORD))v19->__vftable->Unk_E3)(v19, 0); /*0x5f18b0*/
              ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_E1)(this, 0); /*0x5f18be*/
            }
          }
        }
        this->members.super.process->SetCurrentPackage(this->members.super.process, a2); /*0x5f18cc*/
        this->members.super.process->SetCurrentPackProcedure(this->members.super.process, kProcedure_TRAVEL);// 3DTheft decode: current-package handoff resets currentPackProcedure to slot 0; SetCurrentPackProcedure clamps slots, not eProcedure enum values. /*0x5f18db*/
        this->vtbl->super.super.super.MarkAsModified((TESForm *)this, 0x80000); /*0x5f18e9*/
        goto LABEL_57; /*0x5f18e9*/
      }
      if ( ((double (__thiscall *)(LowProcess *))this->members.super.process->Unk_56)(this->members.super.process) > *(float *)&SrcStr ) /*0x5f16c5*/
      {
        v11 = this->members.super.process; /*0x5f16c7*/
        v12 = v11->__vftable; /*0x5f16d2*/
        v22 = ((double (*)(void))v11->Unk_56)() * dbl_A3D360; /*0x5f16e6*/
        ((void (__thiscall *)(LowProcess *, _DWORD))v12->Unk_57)(this->members.super.process, LODWORD(v22)); /*0x5f16f1*/
        ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_64)( /*0x5f16ff*/
          this->members.super.process,
          this);
      }
      if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_5C)(this->members.super.process) ) /*0x5f170c*/
      {
        v13 = *(char *)(((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_5C)(this->members.super.process) /*0x5f171f*/
                      + 0x20);
        if ( v13 < 0x15 || v13 > 0x17 ) /*0x5f172b*/
        {
          if ( sub_5E1030(this) ) /*0x5f172f*/
          {
            v14 = this->vtbl->GetMountedHorse(this); /*0x5f1742*/
            ((void (__thiscall *)(Creature *, _DWORD))v14->__vftable->Unk_E3)(v14, 0); /*0x5f1750*/
            ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_E1)(this, 0); /*0x5f175e*/
          }
          this->members.super.process->SetCurrentPackage(this->members.super.process, 0); /*0x5f176d*/
        }
      }
      editorPackage = this->members.super.process->editorPackage; /*0x5f1772*/
      if ( editorPackage /*0x5f1785*/
        && (a2->members.type == 1 || editorPackage->members.type != 1)
        && TESPackage_IsRuntimePackage(editorPackage) )
      {
        if ( a2->members.type == 1 ) /*0x5f1792*/
        {
          v16 = this->members.super.process->editorPackage; /*0x5f1797*/
          if ( v16 == (TESPackage *)ExtraDataList::GetExtraPackage(&this->members.super.super.baseExtraList) ) /*0x5f17a4*/
          {
            a2->__vftable->super.Destroy((TESForm *)a2, 1); /*0x5f17c1*/
            v7 = this->members.super.process->editorPackage; /*0x5f17c6*/
            goto LABEL_46; /*0x5f17c9*/
          }
          if ( !v16 ) /*0x5f17a8*/
            goto LABEL_46; /*0x5f17a8*/
        }
        else
        {
          v16 = this->members.super.process->editorPackage; /*0x5f17ce*/
          if ( v16 == (TESPackage *)ExtraDataList::GetExtraPackage(&this->members.super.super.baseExtraList) || !v16 ) /*0x5f17df*/
            goto LABEL_46; /*0x5f17df*/
        }
        v16->__vftable->super.Destroy((TESForm *)v16, 1); /*0x5f17ea*/
      }
LABEL_46:
      this->members.super.process->editorPackage = v7;// 3DTheft decode 2026-05-16: Actor_AddPackage_ editor-package path stores v7 into process->editorPackage and resets editorPackProcedure. AddScriptPackage reaches this with setCurrent=0 markDynamic=0. /*0x5f17ec*/
      this->members.super.process->editorPackProcedure = kProcedure_TRAVEL;// 3DTheft decode: Actor_AddPackage_ editor-package handoff resets editorPackProcedure to slot 0, not TRAVEL semantics specifically; slot 0 maps through the package procedure row. /*0x5f17f8*/
      sub_5E8DE0(this, v7); /*0x5f17ff*/
      if ( this->vtbl->super.super.GetAnimData(this) ) /*0x5f180e*/
      {
        if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None /*0x5f1849*/
          || this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sleeping
          || this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sitting )
        {
          v17 = this->vtbl->super.super.GetAnimData(this); /*0x5f185d*/
          ActorAnimData_CleanupOrPromoteQueuedIdles(v17, 1, 0); /*0x5f1861*/
        }
      }
LABEL_57:
      this->members.super.process->SetUnk02C(this->members.super.process, 0); /*0x5f18eb*/
      LOBYTE(process) = sub_5E7BE0(); /*0x5f18fc*/
    }
  }
  return (char)process; /*0x5f168b*/
}
