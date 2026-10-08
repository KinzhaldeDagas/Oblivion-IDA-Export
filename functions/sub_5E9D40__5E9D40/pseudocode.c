char __thiscall sub_5E9D40(TESObjectREFR *this, Actor *a2)
{
  TESForm *v4; // ebx
  TESForm *v5; // ebp
  int v6; // ebp
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  char v8; // al
  int v9; // edi
  char v10; // al
  int v11; // edi
  char v12; // al
  bool v13; // zf
  char v14; // [esp+Bh] [ebp-1h]

  v14 = 0; /*0x5e9d4d*/
  if ( !a2->members.super.process ) /*0x5e9d46*/
    return 0; /*0x5e9d59*/
  if ( !Actor_IsNPC((Actor *)this) ) /*0x5e9d66*/
  {
    if ( !Actor_IsNPC(a2) || TESObjectREFR_IsOwnedBy(this, (TESObjectREFR *)a2, 1) ) /*0x5e9e46*/
      return 1; /*0x5e9e4d*/
    v13 = a2 == (Actor *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x3D0))(*((_DWORD *)this + 0x16)); /*0x5e9e5c*/
    goto LABEL_23; /*0x5e9e5c*/
  }
  if ( !Actor_IsNPC(a2) ) /*0x5e9d73*/
  {
    if ( TESObjectREFR_IsOwnedBy((TESObjectREFR *)a2, this, 1) ) /*0x5e9e1e*/
      return 1; /*0x5e9e25*/
    v13 = this == (TESObjectREFR *)((int (__thiscall *)(LowProcess *))a2->members.super.process->Unk_F3)(a2->members.super.process); /*0x5e9e34*/
LABEL_23:
    if ( !v13 ) /*0x5e9e5e*/
      return v14; /*0x5e9e5e*/
    return 1; /*0x5e9e60*/
  }
  v4 = 0; /*0x5e9d84*/
  v5 = this->vtbl->GetBaseForm(this); /*0x5e9d88*/
  if ( v5 ) /*0x5e9d8c*/
  {
    if ( this->vtbl->IsActor(this) ) /*0x5e9d98*/
      v4 = v5; /*0x5e9d9e*/
  }
  TESActorBaseData_AllFactionsAreEvil(&v4[1].member.refID); /*0x5e9da3*/
  v6 = 0; /*0x5e9da8*/
  GetBaseForm = a2->vtbl->super.super.GetBaseForm; /*0x5e9dae*/
  if ( !v8 ) /*0x5e9db7*/
  {
    v11 = (int)GetBaseForm((TESObjectREFR *)a2); /*0x5e9df5*/
    if ( v11 ) /*0x5e9df9*/
    {
      if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) ) /*0x5e9e05*/
        v6 = v11; /*0x5e9e0b*/
    }
    TESActorBaseData_AllFactionsAreEvil((_DWORD *)(v6 + 0x24)); /*0x5e9e10*/
    v13 = v12 == 0; /*0x5e9e15*/
    goto LABEL_23; /*0x5e9e17*/
  }
  v9 = (int)GetBaseForm((TESObjectREFR *)a2); /*0x5e9dbb*/
  if ( v9 ) /*0x5e9dbf*/
  {
    if ( a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) ) /*0x5e9dcb*/
      v6 = v9; /*0x5e9dd1*/
  }
  TESActorBaseData_AllFactionsAreEvil((_DWORD *)(v6 + 0x24)); /*0x5e9dd6*/
  if ( v10 ) /*0x5e9ddd*/
    return 1; /*0x5e9df0*/
  return v14; /*0x5e9d54*/
}
