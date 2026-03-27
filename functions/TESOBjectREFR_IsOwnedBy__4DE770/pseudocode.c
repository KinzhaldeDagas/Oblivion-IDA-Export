char __thiscall TESOBjectREFR_IsOwnedBy(TESObjectREFR *this, TESObjectREFR *a2, char a3)
{
  char v4; // bl
  TESBoundObject *Owner; // edi
  TESBoundObject *v6; // esi
  TESActorBase *v7; // eax
  TESActorBase *v8; // edx
  TESBoundObject *v9; // ecx
  char v10; // fps^1
  bool v11; // c0
  char v12; // c2
  bool v13; // c3
  BSExtraDataVtbl *v15; // [esp+8h] [ebp-8h]
  void **v16; // [esp+Ch] [ebp-4h]

  v4 = 0;
  if ( !TESObjectREFR_GetOwner(this) )
    return 0;
  Owner = (TESBoundObject *)TESObjectREFR_GetOwner(this);
  v16 = sub_4DB830(this);
  v15 = sub_4DB7D0(this);
  if ( !Owner )
    return 0;
  if ( a2 )
  {
    v4 = 1;
    v6 = (TESBoundObject *)((int (__thiscall *)(TESObjectREFR *))a2->vtbl->GetTemplateForm)(a2);
    if ( !v6 )
      v6 = (TESBoundObject *)a2->vtbl->GetBaseForm(a2);
    v7 = (TESActorBase *)((unsigned __int8)v6->member.super.type - kFormType_NPC);
    v8 = 0;
    if ( (unsigned int)v7 <= 1 )
    {
      v7 = (TESActorBase *)OblivionDynamicCast(
                             v6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESActorBase `RTTI Type Descriptor',
                             0);
      v8 = v7;
    }
    if ( Owner != v6 )
    {
      v9 = 0;
      if ( Owner->member.super.type != kFormType_Faction || (v9 = Owner, !a3) )
      {
        v7 = (TESActorBase *)v15;
        if ( !v15
          || (v11 = *(float *)&v15[4].CompareTo > 0.0,
              v12 = 0,
              v13 = 0.0 == *(float *)&v15[4].CompareTo,
              BYTE1(v7) = v10,
              0.0 == *(float *)&v15[4].CompareTo) )
        {
          v4 = 0;
        }
      }
      if ( v9 )
      {
        if ( v8 )
        {
          LOBYTE(v7) = a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
          if ( TESActorBaseData_GetFactionRank(&v8->super.actorBaseData, (int)v9, (int)v7) < (int)v16 )
            return 0;
        }
      }
    }
  }
  return v4;
}
