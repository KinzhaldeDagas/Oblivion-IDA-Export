// 3DTheft pass 166 crash decode: returns clamped SInt32 in EAX. Hybrid ABI uses ECX=this, entry [ESP+4]=with Actor, entry [ESP+8]=withBase TESForm; every exit is RET 4, so caller must discard the residual withBase dword.
int __usercall Actor_GetDisposition@<eax>(Actor *actor@<ecx>, Actor *with@<^0.4>, TESForm *withBase@<^4.4>)
{
  int v3; // ebp
  Actor *v4; // esi
  int v5; // ebx
  LowProcess *process; // ecx
  TESForm *Owner; // ebp
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  Actor *v11; // eax
  TESForm *v12; // ebx
  TESForm *v13; // eax
  TESForm *v14; // ebp
  TESForm *v15; // ebp
  int v16; // ebx
  Actor *v17; // ebp
  CombatController *v18; // eax
  int v19; // ebp
  int v20; // ebx
  TESForm *v21; // eax
  Actor *v22; // eax
  double v23; // st7
  double v24; // st7
  int v25; // eax
  TESForm *v26; // ecx
  int v27; // eax
  Actor *v28; // ebx
  int v29; // eax
  Actor *v30; // ebp
  Actor *v31; // ebp
  int v32; // ebx
  int v33; // ebx
  TESForm *v34; // eax
  TESForm *v35; // ebp
  TESForm *v36; // ebp
  TESForm *v37; // ebx
  Actor *v38; // ebp
  TESRace *v39; // eax
  int FactionReactionAndRank; // ebx
  float v41; // ebp
  int v42; // eax
  ActorVtbl *vtbl; // edx
  int v44; // eax
  ActorVtbl *v45; // edx
  double v46; // st7
  Actor *v47; // eax
  ActorVtbl *v48; // edx
  double v49; // st7
  int v50; // eax
  int v51; // eax
  int v52; // [esp-28h] [ebp-54h]
  int v53; // [esp-24h] [ebp-50h]
  int v54; // [esp-20h] [ebp-4Ch]
  int v55; // [esp-1Ch] [ebp-48h]
  int v56; // [esp-18h] [ebp-44h]
  int v57; // [esp-14h] [ebp-40h]
  int v58; // [esp-10h] [ebp-3Ch]
  int v59; // [esp-Ch] [ebp-38h]
  int v60; // [esp-8h] [ebp-34h]
  int v61; // [esp-4h] [ebp-30h]
  int v62; // [esp+0h] [ebp-2Ch]
  float v63; // [esp+4h] [ebp-28h]
  TESRace *RaceIfNPC; // [esp+4h] [ebp-28h]
  int v65; // [esp+8h] [ebp-24h]
  int v66; // [esp+18h] [ebp-14h]
  int v67; // [esp+1Ch] [ebp-10h] BYREF
  int ReactionToTarget; // [esp+20h] [ebp-Ch]
  TESForm *v69; // [esp+24h] [ebp-8h]
  int v70; // [esp+28h] [ebp-4h]
  int retaddr; // [esp+2Ch] [ebp+0h]
  int v72; // [esp+3Ch] [ebp+10h]

  v4 = with;                                    // Decoded fixed stack input: with Actor* at entry ESP+4. /*0x5ea805*/
  v5 = 0; /*0x5ea809*/
  v66 = 0; /*0x5ea810*/
  if ( !with ) /*0x5ea814*/
    return 0;                                   // Hybrid ABI exit: RET 4 consumes only with; caller still owns withBase. /*0x5ea81e*/
  process = actor->members.super.process; /*0x5ea821*/
  if ( process ) /*0x5ea826*/
    v5 = ((int (__thiscall *)(LowProcess *))process->Unk_F3)(process); /*0x5ea832*/
  v65 = v3; /*0x5ea834*/
  Owner = TESObjectREFR_GetOwner((TESObjectREFR *)actor); /*0x5ea83c*/
  GetBaseForm = actor->vtbl->super.super.GetBaseForm; /*0x5ea840*/
  v67 = (int)Owner; /*0x5ea848*/
  if ( (GetBaseForm((TESObjectREFR *)actor)->member.type == kFormType_NPC || !Owner && !v5) /*0x5ea863*/
    && actor->members.DeadState != 4 )
  {
LABEL_46:
    if ( Owner && Owner->member.type == kFormType_NPC && Owner == v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4) ) /*0x5eaaac*/
      return 0x64; /*0x5eaaac*/
LABEL_50:
    v28 = (Actor *)((int (__thiscall *)(Actor *))v4->vtbl->super.super.GetTemplateForm)(v4); /*0x5eaabd*/
    v29 = (int)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4); /*0x5eaad5*/
    v30 = (Actor *)v29; /*0x5eaad9*/
    if ( !v28 ) /*0x5eaadb*/
    {
      if ( v29 ) /*0x5eaadf*/
      {
        if ( v4->vtbl->super.super.IsActor((TESObjectREFR *)v4) ) /*0x5eaaeb*/
          v28 = v30; /*0x5eaaf1*/
      }
    }
    with = v28; /*0x5eaaf5*/
    if ( v28 ) /*0x5eaaf9*/
    {
      if ( !v28->members.super.super.parentCell && !v28->members.super.super.niNode ) /*0x5eab01*/
      {
        v31 = 0; /*0x5eab11*/
        v32 = (int)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4); /*0x5eab15*/
        if ( v32 ) /*0x5eab19*/
        {
          if ( v4->vtbl->super.super.IsActor((TESObjectREFR *)v4) ) /*0x5eab25*/
            v31 = (Actor *)v32; /*0x5eab2b*/
        }
        with = v31; /*0x5eab2d*/
      }
    }
    v33 = ((int (__thiscall *)(Actor *))actor->vtbl->super.super.GetTemplateForm)(actor); /*0x5eab3f*/
    v34 = actor->vtbl->super.super.GetBaseForm(actor); /*0x5eab49*/
    v35 = v34; /*0x5eab4d*/
    if ( v33 ) /*0x5eab4f*/
      goto LABEL_86; /*0x5eab4f*/
    if ( v34 ) /*0x5eab53*/
    {
      if ( actor->vtbl->super.super.IsActor((TESObjectREFR *)actor) ) /*0x5eab5f*/
        v33 = (int)v35; /*0x5eab65*/
    }
    if ( v33 ) /*0x5eab69*/
    {
LABEL_86:
      if ( !*(_DWORD *)(v33 + 0x40) && !*(_DWORD *)(v33 + 0x3C) ) /*0x5eab71*/
      {
        v36 = 0; /*0x5eab81*/
        v37 = actor->vtbl->super.super.GetBaseForm(actor); /*0x5eab85*/
        if ( v37 ) /*0x5eab89*/
        {
          if ( actor->vtbl->super.super.IsActor((TESObjectREFR *)actor) ) /*0x5eab95*/
            v36 = v37; /*0x5eab9b*/
        }
        v33 = (int)v36; /*0x5eab9d*/
      }
    }
    v38 = with; /*0x5eab9f*/
    if ( !with || !v33 ) /*0x5eabad*/
      return v66; /*0x5eabad*/
    ReactionToTarget = 0; /*0x5eabb5*/
    if ( Actor::GetRaceIfNPC(actor) ) /*0x5eabbd*/
    {
      if ( Actor::GetRaceIfNPC(v4) ) /*0x5eabc8*/
      {
        RaceIfNPC = Actor::GetRaceIfNPC(v4); /*0x5eabd8*/
        v39 = Actor::GetRaceIfNPC(actor); /*0x5eabdb*/
        ReactionToTarget = TESReactionForm_GetReactionToTarget(&v39->reaction.vtbl, (int)RaceIfNPC); /*0x5eabea*/
      }
    }
    with = (Actor *)0xFFFFFFFF; /*0x5eabf7*/
    FactionReactionAndRank = TESActorBaseData_GetFactionReactionAndRank(v33 + 0x24, v38, &with, v65); /*0x5eac06*/
    LODWORD(v41) = (unsigned __int8)Actor_IsWeaponOut(v4); /*0x5eac0f*/
    v42 = v4->vtbl->GetInfamy(v4); /*0x5eac1a*/
    vtbl = v4->vtbl; /*0x5eac1c*/
    v70 = v42; /*0x5eac1e*/
    v44 = vtbl->GetFame(v4); /*0x5eac2a*/
    v45 = actor->vtbl; /*0x5eac2c*/
    v69 = (TESForm *)v44; /*0x5eac2e*/
    v46 = ((double (__thiscall *)(Actor *, Actor *))v45->Unk_DE)(actor, v4); /*0x5eac3b*/
    v47 = (Actor *)Double_To_SInt32(v46); /*0x5eac3d*/
    v48 = actor->vtbl; /*0x5eac42*/
    with = v47; /*0x5eac44*/
    LOBYTE(withBase) = v48->super.super.GetBaseForm((TESObjectREFR *)actor)->member.type == kFormType_Creature; /*0x5eac5d*/
    v63 = v41; /*0x5eac73*/
    v62 = v72; /*0x5eac74*/
    v61 = FactionReactionAndRank; /*0x5eac75*/
    v60 = retaddr; /*0x5eac76*/
    v49 = ((double (__thiscall *)(Actor *))v4->vtbl->Unk_94)(v4); /*0x5eac7f*/
    v50 = Double_To_SInt32(v49); /*0x5eac81*/
    v26 = v69; /*0x5eac86*/
    v59 = v50; /*0x5eac8a*/
    v58 = v70; /*0x5eac8f*/
    goto LABEL_78; /*0x5eac8f*/
  }
  with = 0; /*0x5ea86b*/
  if ( Owner && Owner->member.type == kFormType_NPC ) /*0x5ea879*/
  {
    with = (Actor *)Owner; /*0x5ea87b*/
  }
  else
  {
    if ( !v5 ) /*0x5ea883*/
      goto LABEL_16; /*0x5ea883*/
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x170))(v5) + 4) != 0x23 ) /*0x5ea895*/
      goto LABEL_16; /*0x5ea895*/
    with = (Actor *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x170))(v5); /*0x5ea8a5*/
    if ( !with ) /*0x5ea8a9*/
      goto LABEL_16; /*0x5ea8a9*/
  }
  v11 = (Actor *)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4); /*0x5ea8b5*/
  if ( with == v11 ) /*0x5ea8bb*/
    return 0x64;                                // Hybrid ABI exit: RET 4 consumes only with; caller still owns withBase. /*0x5eaaba*/
LABEL_16:
  v12 = (TESForm *)((int (__thiscall *)(Actor *))v4->vtbl->super.super.GetTemplateForm)(v4); /*0x5ea8c1*/
  v13 = v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4); /*0x5ea8d9*/
  v14 = v13; /*0x5ea8dd*/
  if ( v12 ) /*0x5ea8df*/
    goto LABEL_87; /*0x5ea8df*/
  if ( v13 ) /*0x5ea8e3*/
  {
    if ( v4->vtbl->super.super.IsActor((TESObjectREFR *)v4) ) /*0x5ea8ef*/
      v12 = v14; /*0x5ea8f5*/
  }
  if ( v12 ) /*0x5ea8f9*/
  {
LABEL_87:
    if ( !v12[2].member.modlist.data && !v12[2].member.refID ) /*0x5ea901*/
    {
      v15 = 0; /*0x5ea911*/
      v16 = (int)v4->vtbl->super.super.GetBaseForm((TESObjectREFR *)v4); /*0x5ea915*/
      if ( v16 ) /*0x5ea919*/
      {
        if ( v4->vtbl->super.super.IsActor((TESObjectREFR *)v4) ) /*0x5ea925*/
          v15 = (TESForm *)v16; /*0x5ea92b*/
      }
      v12 = v15; /*0x5ea92d*/
    }
  }
  v17 = with; /*0x5ea92f*/
  if ( with ) /*0x5ea935*/
  {
    if ( v12 ) /*0x5ea93d*/
    {
      ReactionToTarget = 0; /*0x5ea945*/
      if ( Actor_IsNPC(v4) ) /*0x5ea94d*/
        ReactionToTarget = TESReactionForm_GetReactionToTarget( /*0x5ea96b*/
                             (_DWORD *)(v17->members.unk0E8[0] + 0x40),
                             (int)v12[9].member.modlist.data);
      v67 = 0xFFFFFFFF; /*0x5ea978*/
      v70 = TESActorBaseData_GetFactionReactionAndRank(&v17->members.super.super.rot.y, v12, &v67, v65); /*0x5ea987*/
      v67 = 0; /*0x5ea98b*/
      if ( Actor_IsWeaponOut(v4) ) /*0x5ea993*/
      {
        if ( !v4->vtbl->IsInCombat(v4, 1) /*0x5ea9c5*/
          || (v18 = actor->vtbl->GetCombatController(actor)) != 0 && sub_613670(v18, (int)actor) )
        {
          v67 = 1; /*0x5ea9ce*/
        }
      }
      v19 = v4->vtbl->GetInfamy(v4); /*0x5ea9e0*/
      retaddr = v4->vtbl->GetFame(v4); /*0x5ea9f4*/
      *(float *)&v20 = 0.0; /*0x5ea9fe*/
      v21 = reference->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)reference); /*0x5eaa00*/
      if ( withBase == v21 )                    // Decoded second stack input: withBase TESForm* at entry ESP+8. This input is read even though the function returns with RET 4. /*0x5eaa08*/
        v22 = (Actor *)reference; /*0x5eaa0a*/
      else
        v22 = (Actor *)sub_675220((int)&qword_B3BB2C[0x75], (int)withBase); /*0x5eaa17*/
      if ( v22 ) /*0x5eaa1e*/
      {
        v23 = ((double (__thiscall *)(Actor *, Actor *))v22->vtbl->Unk_DE)(v22, v4); /*0x5eaa2b*/
        *(float *)&v20 = COERCE_FLOAT(Double_To_SInt32(v23)); /*0x5eaa32*/
      }
      Actor_IsCreature(actor); /*0x5eaa36*/
      v63 = *(float *)&v20; /*0x5eaa48*/
      v62 = 0; /*0x5eaa49*/
      v61 = v67; /*0x5eaa4b*/
      v60 = ReactionToTarget; /*0x5eaa50*/
      v24 = ((double (__thiscall *)(Actor *, TESForm *, int))v4->vtbl->Unk_94)(v4, v69, v70); /*0x5eaa5d*/
      v25 = Double_To_SInt32(v24); /*0x5eaa5f*/
      v26 = withBase; /*0x5eaa64*/
      v59 = v25; /*0x5eaa68*/
      v58 = v19; /*0x5eaa69*/
LABEL_78:
      v57 = (int)v26; /*0x5eac90*/
      v55 = actor->vtbl->GetActorValue(actor, kActorVal_Responsibility); /*0x5eaca1*/
      v53 = v4->vtbl->GetActorValue(v4, kActorVal_Personality); /*0x5eacb0*/
      v51 = actor->vtbl->GetActorValue(actor, kActorVal_Personality); /*0x5eacbb*/
      Calc_Disposition(v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63); /*0x5eacbe*/
      goto LABEL_79; /*0x5eacbe*/
    }
LABEL_45:
    Owner = (TESForm *)v67; /*0x5eaa90*/
    goto LABEL_46; /*0x5eaa90*/
  }
  if ( !v67 ) /*0x5eaa75*/
    goto LABEL_50; /*0x5eaa75*/
  if ( *(_BYTE *)(v67 + 4) != 6 ) /*0x5eaa7b*/
    goto LABEL_45; /*0x5eaa7b*/
  TESActorBaseData_GetFactionReaction_static(v67, v12); /*0x5eaa86*/
LABEL_79:
  v66 = v27; /*0x5eacc6*/
  if ( v27 > 0x64 ) /*0x5eaccd*/
    return 0x64;                                // Hybrid ABI exit: RET 4 consumes only with; caller still owns withBase. /*0x5eace2*/
  if ( v27 < 0 ) /*0x5eace7*/
    return 0; /*0x5eace9*/
  return v66; /*0x5ea816*/
}
