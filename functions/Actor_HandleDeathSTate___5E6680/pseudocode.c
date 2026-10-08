void __thiscall Actor_HandleDeathState(Actor *this, UInt32 newDeadState)
{
  UInt32 v2; // ebp
  TESActorBase *v4; // ebx
  TESActorBase *v5; // edi
  LowProcess *process; // ecx
  int v7; // eax
  ExtraDataList *****ContainerChanges; // eax
  LowProcess *v9; // ecx
  LowProcess *v10; // edi

  v2 = newDeadState; /*0x5e6688*/
  if ( !byte_B14E98 ) /*0x5e6680*/
    goto LABEL_9; /*0x5e6680*/
  v4 = 0; /*0x5e669b*/
  v5 = (TESActorBase *)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this); /*0x5e669f*/
  if ( v5 ) /*0x5e66a3*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e66af*/
      v4 = v5; /*0x5e66b5*/
  }
  if ( (v4->super.actorBaseData.flags & 2) != 0 && (newDeadState == 2 || newDeadState == 1) ) /*0x5e66c9*/
  {
    v2 = 6;                                     // BloodOnDeath decode 2026-05-27: essential actors can remap requested death states 1/2 to DeadState 6. Hook logic must inspect final actor->DeadState after the native call. /*0x5e66cb*/
  }
  else
  {                                             // BloodOnDeath decode 2026-05-27: Actor_HandleDeathState treats requested state 2 as a nonzero death-state path with process/container cleanup before writing DeadState. BloodOnDeath should trigger on transition from DeadState 0 to any nonzero final DeadState, not only requested state 1.
LABEL_9:
    if ( newDeadState == 2 ) /*0x5e66d5*/
    {
      process = this->members.super.process; /*0x5e66d7*/
      if ( process ) /*0x5e66dc*/
      {
        v7 = process->Unk_39(process, (UInt32)this); /*0x5e66e7*/
        if ( v7 ) /*0x5e66eb*/
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 0x9C))(v7, 1, 1); /*0x5e66fb*/
      }
      ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList); /*0x5e6700*/
      if ( ContainerChanges ) /*0x5e6707*/
        sub_4876C0(ContainerChanges, (int)this); /*0x5e670c*/
    }
    else if ( !newDeadState ) /*0x5e6715*/
    {
      goto LABEL_21; /*0x5e6715*/
    }
  }
  v9 = this->members.super.process; /*0x5e6717*/
  if ( v9 ) /*0x5e671c*/
  {
    if ( !v9->GetProcessLevel(v9) ) /*0x5e6723*/
    {
      v10 = this->members.super.process; /*0x5e6729*/
      if ( ((int (__thiscall *)(LowProcess *))v10->Unk_11E)(v10) == 3 /*0x5e674c*/
        || ((int (__thiscall *)(LowProcess *))v10->Unk_11E)(v10) == 4 )
      {
        sub_628630((#239 *)v10, this, 0); /*0x5e6753*/
      }
    }
  }
LABEL_21:
  if ( this->members.DeadState != v2 ) /*0x5e675e*/
    this->vtbl->super.super.super.MarkAsModified((TESForm *)this, 0x40); /*0x5e6769*/
  this->members.DeadState = v2;                 // BloodOnDeath decode 2026-05-27: final DeadState write. Death blood hook runs after this callsite target returns and now accepts any 0 -> nonzero transition. /*0x5e676c*/
}
