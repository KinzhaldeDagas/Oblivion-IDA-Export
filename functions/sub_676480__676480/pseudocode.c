Actor *__thiscall sub_676480(int this, TESObjectREFR *a2)
{
  Actor *vtbl; // esi
  Actor *v3; // ebp
  TESForm *ActorBaseForm; // eax
  TESForm *v6; // [esp-Ch] [ebp-18h]
  Actor *v7; // [esp+8h] [ebp-4h]

  vtbl = 0;
  v7 = 0;
  v3 = sub_7616D0((ActorList *)(this + 0x68));
  if ( !v3 )
    return 0;
  while ( v3->vtbl && !vtbl )
  {
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v3->vtbl->super.super.super.super.InitializeComponent + 0x64))(v3->vtbl) )
      vtbl = (Actor *)v3->vtbl;
    if ( vtbl )
    {
      if ( TESOBjectREFR_IsOwnedBy(a2, (TESObjectREFR *)vtbl, 1) )
      {
        v6 = a2->vtbl->GetBaseForm(a2);
        ActorBaseForm = Actor_GetActorBaseForm(vtbl, 0);
        if ( TESAIForm_OffersServiceForItem(&ActorBaseForm[4].member.flags, (int)v6) )
          v7 = vtbl;
      }
    }
    v3 = *(Actor **)&v3->members.super.super.super.type;
    if ( !v3 )
      return v7;
    vtbl = v7;
  }
  return vtbl;
}
