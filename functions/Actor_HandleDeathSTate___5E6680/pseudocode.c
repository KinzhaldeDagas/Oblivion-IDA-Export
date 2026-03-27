void __thiscall Actor_HandleDeathSTate____(Actor *this, UInt32 newDeadState)
{
  UInt32 v2; // ebp
  TESActorBase *v4; // ebx
  TESActorBase *v5; // edi
  LowProcess *process; // ecx
  int v7; // eax
  ExtraDataList *****ContainerChanges; // eax
  LowProcess *v9; // ecx
  LowProcess *v10; // edi

  v2 = newDeadState;
  if ( !byte_B14E98 )
    goto LABEL_9;
  v4 = 0;
  v5 = (TESActorBase *)this->vtbl->super.super.GetBaseForm((TESObjectREFR *)this);
  if ( v5 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v4 = v5;
  }
  if ( (v4->super.actorBaseData.flags & 2) != 0 && (newDeadState == 2 || newDeadState == 1) )
  {
    v2 = 6;
  }
  else
  {
LABEL_9:
    if ( newDeadState == 2 )
    {
      process = this->members.super.process;
      if ( process )
      {
        v7 = process->Unk_39(process, (UInt32)this);
        if ( v7 )
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 0x9C))(v7, 1, 1);
      }
      ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList);
      if ( ContainerChanges )
        sub_4876C0(ContainerChanges, (int)this);
    }
    else if ( !newDeadState )
    {
      goto LABEL_21;
    }
  }
  v9 = this->members.super.process;
  if ( v9 )
  {
    if ( !v9->GetProcessLevel(v9) )
    {
      v10 = this->members.super.process;
      if ( ((int (__thiscall *)(LowProcess *))v10->Unk_11E)(v10) == 3
        || ((int (__thiscall *)(LowProcess *))v10->Unk_11E)(v10) == 4 )
      {
        sub_628630((#239 *)v10, this, 0);
      }
    }
  }
LABEL_21:
  if ( this->members.DeadState != v2 )
    this->vtbl->super.super.super.MarkAsModified((TESForm *)this, 0x40);
  this->members.DeadState = v2;
}
