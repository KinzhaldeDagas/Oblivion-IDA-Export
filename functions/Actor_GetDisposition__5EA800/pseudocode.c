double __thiscall Actor_GetDisposition(Actor *this, Actor *a2, TESForm *a3)
{
  int v3; // ebp
  Actor *v4; // esi
  int v5; // ebx
  LowProcess *process; // ecx
  BSExtraDataVtbl *Owner; // ebp
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  Actor *v10; // eax
  TESForm *v11; // ebx
  TESForm *v12; // eax
  TESForm *v13; // ebp
  TESForm *v14; // ebp
  int v15; // ebx
  Actor *v16; // ebp
  CombatController *v17; // eax
  int v18; // ebp
  int v19; // ebx
  TESForm *v20; // eax
  Actor *v21; // eax
  double v22; // st7
  double v23; // st7
  int v24; // eax
  TESForm *v25; // ecx
  double result; // st7
  Actor *v27; // ebx
  int v28; // eax
  Actor *v29; // ebp
  Actor *v30; // ebp
  int v31; // ebx
  int v32; // ebx
  TESForm *v33; // eax
  TESForm *v34; // ebp
  TESForm *v35; // ebp
  TESForm *v36; // ebx
  Actor *v37; // ebp
  TESRace *v38; // eax
  int v39; // ebx
  float v40; // ebp
  int v41; // eax
  ActorVtbl *vtbl; // edx
  int v43; // eax
  ActorVtbl *v44; // edx
  double v45; // st7
  Actor *v46; // eax
  ActorVtbl *v47; // edx
  double v48; // st7
  int v49; // eax
  int v50; // eax
  int v51; // [esp-28h] [ebp-54h]
  int v52; // [esp-24h] [ebp-50h]
  int v53; // [esp-20h] [ebp-4Ch]
  int v54; // [esp-1Ch] [ebp-48h]
  int v55; // [esp-18h] [ebp-44h]
  int v56; // [esp-14h] [ebp-40h]
  int v57; // [esp-10h] [ebp-3Ch]
  int v58; // [esp-Ch] [ebp-38h]
  int v59; // [esp-8h] [ebp-34h]
  int v60; // [esp-4h] [ebp-30h]
  int v61; // [esp+0h] [ebp-2Ch]
  float v62; // [esp+4h] [ebp-28h]
  TESRace *RaceIfNPC; // [esp+4h] [ebp-28h]
  int v64; // [esp+8h] [ebp-24h]
  int v65; // [esp+1Ch] [ebp-10h] BYREF
  int ReactionToTarget; // [esp+20h] [ebp-Ch]
  TESForm *v67; // [esp+24h] [ebp-8h]
  int FactionReactionAndRank; // [esp+28h] [ebp-4h]
  int retaddr; // [esp+2Ch] [ebp+0h]
  int v70; // [esp+3Ch] [ebp+10h]

  v4 = a2;
  v5 = 0;
  if ( !a2 )
    return result;
  process = this->members.super.process;
  if ( process )
    v5 = ((int (__thiscall *)(LowProcess *))process->Unk_F3)(process);
  v64 = v3;
  Owner = TESObjectREFR_GetOwner((TESObjectREFR *)this);
  GetBaseForm = this->vtbl->super.super.GetBaseForm;
  v65 = (int)Owner;
  if ( (GetBaseForm((TESObjectREFR *)this)->member.type == kFormType_NPC || !Owner && !v5)
    && this->members.DeadState != 4 )
  {
    goto LABEL_45;
  }
  a2 = 0;
  if ( Owner && LOBYTE(Owner->CompareTo) == 0x23 )
  {
    a2 = (Actor *)Owner;
  }
  else
  {
    if ( !v5 )
      goto LABEL_15;
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x170))(v5) + 4) != 0x23 )
      goto LABEL_15;
    a2 = (Actor *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x170))(v5);
    if ( !a2 )
      goto LABEL_15;
  }
  v10 = (Actor *)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4);
  if ( a2 == v10 )
    return result;
LABEL_15:
  v11 = (TESForm *)((int (__thiscall *)(Actor *))v4->vtbl->super.super.GetTemplateForm)(v4);
  v12 = v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4);
  v13 = v12;
  if ( v11 )
    goto LABEL_80;
  if ( v12 )
  {
    if ( v4->vtbl->super.super.IsActor((TESObjectREFR *)v4) )
      v11 = v13;
  }
  if ( v11 )
  {
LABEL_80:
    if ( !v11[2].member.modlist.data && !v11[2].member.refID )
    {
      v14 = 0;
      v15 = (int)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4);
      if ( v15 )
      {
        if ( v4->vtbl->super.super.IsActor((TESObjectREFR *)v4) )
          v14 = (TESForm *)v15;
      }
      v11 = v14;
    }
  }
  v16 = a2;
  if ( a2 )
  {
    if ( v11 )
    {
      ReactionToTarget = 0;
      if ( Actor_IsNPC(v4) )
        ReactionToTarget = TESReactionForm_GetReactionToTarget(
                             (_DWORD *)(v16->members.unk0E8[0] + 0x40),
                             (int)v11[9].member.modlist.data);
      v65 = 0xFFFFFFFF;
      FactionReactionAndRank = TESActorBaseData_GetFactionReactionAndRank(
                                 &v16->members.super.super.rot.y,
                                 v11,
                                 &v65,
                                 v64);
      v65 = 0;
      if ( Actor_IsWeaponOut(v4) )
      {
        if ( !v4->vtbl->IsInCombat(v4, 1)
          || (v17 = this->vtbl->GetCombatController(this)) != 0 && sub_613670(v17, (int)this) )
        {
          v65 = 1;
        }
      }
      v18 = v4->vtbl->GetInfamy(v4);
      retaddr = v4->vtbl->GetFame(v4);
      *(float *)&v19 = 0.0;
      v20 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      if ( a3 == v20 )
        v21 = (Actor *)TESDataHandler_g_PlayerRef;
      else
        sub_675220(a3);
      if ( v21 )
      {
        v22 = ((double (__thiscall *)(Actor *, Actor *))v21->vtbl->Unk_DE)(v21, v4);
        *(float *)&v19 = COERCE_FLOAT(Double_To_SInt32(v22));
      }
      Actor_IsCreature(this);
      v62 = *(float *)&v19;
      v61 = 0;
      v60 = v65;
      v59 = ReactionToTarget;
      v23 = ((double (__thiscall *)(Actor *, TESForm *, int))v4->vtbl->Unk_94)(v4, v67, FactionReactionAndRank);
      v24 = Double_To_SInt32(v23);
      v25 = a3;
      v58 = v24;
      v57 = v18;
LABEL_77:
      v56 = (int)v25;
      v54 = this->vtbl->GetActorValue(this, kActorVal_Responsibility);
      v52 = v4->vtbl->GetActorValue(v4, kActorVal_Personality);
      v50 = this->vtbl->GetActorValue(this, kActorVal_Personality);
      return Calc_Disposition(v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62);
    }
    goto LABEL_44;
  }
  if ( v65 )
  {
    if ( *(_BYTE *)(v65 + 4) == 6 )
      return TESActorBaseData_GetFactionReaction_static(v65, v11);
LABEL_44:
    Owner = (BSExtraDataVtbl *)v65;
LABEL_45:
    if ( Owner
      && LOBYTE(Owner->CompareTo) == 0x23
      && Owner == (BSExtraDataVtbl *)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4) )
    {
      return result;
    }
  }
  v27 = (Actor *)((int (__thiscall *)(Actor *))v4->vtbl->super.super.GetTemplateForm)(v4);
  v28 = (int)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4);
  v29 = (Actor *)v28;
  if ( !v27 )
  {
    if ( v28 )
    {
      if ( v4->vtbl->super.super.IsActor((TESObjectREFR *)v4) )
        v27 = v29;
    }
  }
  a2 = v27;
  if ( v27 )
  {
    if ( !v27->members.super.super.parentCell && !v27->members.super.super.niNode )
    {
      v30 = 0;
      v31 = (int)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4);
      if ( v31 )
      {
        if ( v4->vtbl->super.super.IsActor((TESObjectREFR *)v4) )
          v30 = (Actor *)v31;
      }
      a2 = v30;
    }
  }
  v32 = ((int (__thiscall *)(Actor *))this->vtbl->super.super.GetTemplateForm)(this);
  v33 = this->vtbl->super.super.GetBaseForm(this);
  v34 = v33;
  if ( v32 )
    goto LABEL_81;
  if ( v33 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
      v32 = (int)v34;
  }
  if ( v32 )
  {
LABEL_81:
    if ( !*(_DWORD *)(v32 + 0x40) && !*(_DWORD *)(v32 + 0x3C) )
    {
      v35 = 0;
      v36 = this->vtbl->super.super.GetBaseForm(this);
      if ( v36 )
      {
        if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
          v35 = v36;
      }
      v32 = (int)v35;
    }
  }
  v37 = a2;
  if ( a2 && v32 )
  {
    ReactionToTarget = 0;
    if ( Actor::GetRaceIfNPC(this) )
    {
      if ( Actor::GetRaceIfNPC(v4) )
      {
        RaceIfNPC = Actor::GetRaceIfNPC(v4);
        v38 = Actor::GetRaceIfNPC(this);
        ReactionToTarget = TESReactionForm_GetReactionToTarget(&v38->reaction.vtbl, (int)RaceIfNPC);
      }
    }
    a2 = (Actor *)0xFFFFFFFF;
    v39 = TESActorBaseData_GetFactionReactionAndRank(v32 + 0x24, v37, &a2, v64);
    LODWORD(v40) = (unsigned __int8)Actor_IsWeaponOut(v4);
    v41 = v4->vtbl->GetInfamy(v4);
    vtbl = v4->vtbl;
    FactionReactionAndRank = v41;
    v43 = vtbl->GetFame(v4);
    v44 = this->vtbl;
    v67 = (TESForm *)v43;
    v45 = ((double (__thiscall *)(Actor *, Actor *))v44->Unk_DE)(this, v4);
    v46 = (Actor *)Double_To_SInt32(v45);
    v47 = this->vtbl;
    a2 = v46;
    LOBYTE(a3) = v47->super.super.GetBaseForm((TESObjectREFR *)this)->member.type == kFormType_Creature;
    v62 = v40;
    v61 = v70;
    v60 = v39;
    v59 = retaddr;
    v48 = ((double (__thiscall *)(Actor *))v4->vtbl->Unk_94)(v4);
    v49 = Double_To_SInt32(v48);
    v25 = v67;
    v58 = v49;
    v57 = FactionReactionAndRank;
    goto LABEL_77;
  }
  return result;
}
