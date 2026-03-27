char __thiscall sub_5E9D40(TESObjectREFR *this, Actor *a2)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // ebp
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  char v8; // al
  int v9; // edi
  char v10; // al
  int v11; // edi
  char v12; // al
  bool v13; // zf
  char v14; // [esp+Bh] [ebp-1h]

  v14 = 0;
  if ( !a2->members.super.process )
    return 0;
  if ( !Actor_IsNPC((Actor *)this) )
  {
    if ( !Actor_IsNPC(a2) || TESOBjectREFR_IsOwnedBy(this, (TESObjectREFR *)a2, 1) )
      return 1;
    v13 = a2 == (Actor *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x3D0))(*((_DWORD *)this + 0x16));
    goto LABEL_23;
  }
  if ( !Actor_IsNPC(a2) )
  {
    if ( TESOBjectREFR_IsOwnedBy((TESObjectREFR *)a2, this, 1) )
      return 1;
    v13 = this == (TESObjectREFR *)((int (__thiscall *)(LowProcess *))a2->members.super.process->Unk_F3)(a2->members.super.process);
LABEL_23:
    if ( !v13 )
      return v14;
    return 1;
  }
  v4 = 0;
  v5 = (int)this->vtbl->GetBaseForm(this);
  if ( v5 )
  {
    if ( this->vtbl->IsActor(this) )
      v4 = v5;
  }
  TESActorBaseData_AllFactionsAreEvil((_DWORD *)(v4 + 0x24));
  v6 = 0;
  GetBaseForm = a2->vtbl->super.super.GetBaseForm;
  if ( !v8 )
  {
    v11 = (int)GetBaseForm((TESObjectREFR *)a2);
    if ( v11 )
    {
      if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) )
        v6 = v11;
    }
    TESActorBaseData_AllFactionsAreEvil((_DWORD *)(v6 + 0x24));
    v13 = v12 == 0;
    goto LABEL_23;
  }
  v9 = (int)GetBaseForm((TESObjectREFR *)a2);
  if ( v9 )
  {
    if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) )
      v6 = v9;
  }
  TESActorBaseData_AllFactionsAreEvil((_DWORD *)(v6 + 0x24));
  if ( v10 )
    return 1;
  return v14;
}
