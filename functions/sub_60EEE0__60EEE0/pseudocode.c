// OFE ambient vs explicit boundary: non-player target calls Conversation constructor 6B7420 at 60EFA2 with startingTopic unchanged. Null is the native automatic HELLO root. Player target does not build this ambient chain; keep player Greeting and Rumors adapters separate.
bool __thiscall Actor::StartConversationPackage(
        Actor *this,
        Actor *target,
        bool incrementProcedure,
        TESTopic *startingTopic)
{
  TESPackage *editorPackage; // ebx
  ConversationView *v7; // eax
  ConversationView *v8; // eax
  LowProcess *process; // ecx
  LowProcess *v10; // edi
  LowProcess *v11; // ebx
  BSExtraData *v12; // eax
  DialoguePackageRuntimeView *v13; // eax
  DialoguePackageRuntimeView *v14; // edi
  _DWORD *v15; // eax
  TESPackage *v16; // ebx
  _DWORD *v17; // eax
  unsigned __int8 *v18; // ebx
  unsigned __int8 *p_targetType; // ecx
  int v20; // eax
  TargetData *v21; // ecx
  char v23; // [esp-8h] [ebp-30h]
  char v24; // [esp-4h] [ebp-2Ch]
  TESPackage *v25; // [esp+18h] [ebp-10h]
  Actor *targeta; // [esp+2Ch] [ebp+4h]

  if ( Actor::GetProcessLevel(this) ) /*0x60ef09*/
    return 0; /*0x60ef09*/
  if ( Actor::GetProcessLevel(target) ) /*0x60ef1c*/
    return 0;                                   // The target is dereferenced by Actor::GetProcessLevel before the later null check at 0x60EF3B. A null target is not safely rejected; scheduler callers always provide a candidate Actor. /*0x60ef1c*/
  editorPackage = this->members.super.process->editorPackage; /*0x60ef2c*/
  v25 = editorPackage; /*0x60ef33*/
  targeta = 0; /*0x60ef37*/
  if ( !target ) /*0x60ef3b*/
    return 0;                                   // Late null-target test. It cannot protect the preceding GetProcessLevel(target) dereference and documents only the native nonnull invariant. /*0x60ef3b*/
  if ( target->vtbl->super.super.GetSleepState((TESObjectREFR *)target) /*0x60ef74*/
    && target->vtbl->super.super.GetSleepState((TESObjectREFR *)target) != kSitSleep_Sitting
    && target->vtbl->super.super.GetSleepState((TESObjectREFR *)target) != kSitSleep_Sleeping )
  {
    return 0;                                   // StartConversationPackage itself accepts target SitSleep states None (0), Sitting (4), or Sleeping (9), rejecting transitional SittingIn/Out and SleepingIn/Out states. The ambient schedulers prefilter Sleeping, so random NPC conversations only reach this call with None/Sitting targets. /*0x60ef74*/
  }
  if ( target != (Actor *)reference )           // When target is the player, no NPC Conversation chain is allocated and the FirstItem gate is skipped. Both ambient random-conversation scans reject the player earlier, so this branch belongs to direct/scripted dialogue initiation. /*0x60ef80*/
  {
    v7 = (ConversationView *)FormHeapAlloc(0x10u);// Allocate the 0x10-byte Conversation container for non-player dialogue. Allocation failure leaves targeta null; the later Conversation::FirstItem call dereferences it, so this is an unchecked OOM invariant rather than a clean false return. /*0x60ef84*/
    if ( v7 ) /*0x60ef96*/
      v8 = Conversation::Conversation(v7, this, (TESObjectREFR *)target, startingTopic, 0); /*0x60efa2*/
    else
      v8 = 0; /*0x60efa9*/
    targeta = (Actor *)v8; /*0x60efb3*/
  }
  Actor::StopDialoguePlayback(this);            // Side effects occur before validating that the generated NPC Conversation has an item: clears initiator interaction/current package state and removes invisibility. /*0x60efb9*/
  ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_D0)(this, 0); /*0x60efc9*/
  this->members.super.process->SetCurrentPackage(this->members.super.process, 0); /*0x60efd7*/
  if ( this->vtbl->GetActorValue(this, kActorVal_Invisibility) > 0 ) /*0x60efe9*/
    MagicTarget_RemoveActiveEffectsByCode(&this->members.magicTarget, 0x49564E49u, 0); /*0x60eff4*/
  if ( target != (Actor *)reference && !Conversation::FirstItem((ConversationView *)targeta) )// Empty but successfully allocated Conversation: return false after initiator playback/package/invisibility side effects and leak the container. A null allocation would crash inside FirstItem instead. /*0x60f005*/
    return 0; /*0x60f237*/
  process = this->members.super.process; /*0x60f012*/
  if ( process->editorPackage ) /*0x60f015*/
  {
    v10 = this->members.super.process; /*0x60f022*/
    v11 = v10; /*0x60f024*/
    v24 = ((int (*)(void))process->GetUnk01C)(); /*0x60f02a*/
    v23 = v10->Unk_2F(v10); /*0x60f037*/
    v12 = (BSExtraData *)v11->GetUnk02C(v11); /*0x60f040*/
    sub_4268B0(&this->members.super.super.baseExtraList, v11->editorPackage, v11->editorPackProcedure, v12, v23, v24); /*0x60f050*/
    editorPackage = v25; /*0x60f055*/
  }
  this->members.super.process->Unk_126(this->members.super.process); /*0x60f064*/
  ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_123)( /*0x60f072*/
    this->members.super.process,
    target);
  target->members.super.process->Unk_126(target->members.super.process); /*0x60f07f*/
  ((void (__thiscall *)(LowProcess *, Actor *))target->members.super.process->Unk_123)( /*0x60f08d*/
    target->members.super.process,
    this);
  v13 = (DialoguePackageRuntimeView *)FormHeapAlloc(0x64u);// Allocate the shared 0x64-byte DialoguePackage after synchronizing both participants' process state. /*0x60f091*/
  if ( v13 ) /*0x60f0a7*/
    v14 = DialoguePackage::DialoguePackage(v13, (ConversationView *)targeta, this, target); /*0x60f0b7*/
  else
    v14 = 0;                                    // Unchecked DialoguePackage allocation failure produces null v14; the following startingTopic write dereferences it. Normal runtime assumes FormHeapAlloc succeeds. /*0x60f0bb*/
  v14->startingTopic = startingTopic; /*0x60f0cb*/
  if ( editorPackage ) /*0x60f0ce*/
  {
    sub_60E470(v14, (editorPackage->members.packageFlags & 0x1000) != 0); /*0x60f0de*/
    sub_60E490(v14, (editorPackage->members.packageFlags & 0x800000) != 0); /*0x60f0f2*/
    sub_60E4D0(v14, (editorPackage->members.packageFlags & 0x100000) != 0); /*0x60f106*/
    sub_60E4B0(v14, (editorPackage->members.packageFlags & 0x200000) != 0); /*0x60f119*/
  }
  TESPackage_SetType_(&v14->super, 0x12);       // Sets the dynamic ambient conversation package to kPackageType_Dialogue (18 / 0x12), matching the authoritative TESPackageNames table. /*0x60f122*/
  v14->super.members.packageFlags |= 6u; /*0x60f127*/
  v15 = (_DWORD *)FormHeapAlloc(0xCu); /*0x60f12d*/
  if ( v15 ) /*0x60f143*/
    v16 = (TESPackage *)TESPackage_LocationData_constr(v15); /*0x60f14c*/
  else
    v16 = 0; /*0x60f150*/
  TESPackage_LocationData_SetType(v16, 0); /*0x60f15e*/
  TESPackage_LocationData_SetReference(v16, (int)target); /*0x60f166*/
  TESPackage_SetLocation(v14, (char *)v16); /*0x60f16e*/
  if ( v16 ) /*0x60f175*/
  {
    TESPackage_LocationData_destr(v16); /*0x60f179*/
    FormHeapFree((unsigned int)v16); /*0x60f17f*/
  }
  v17 = (_DWORD *)FormHeapAlloc(0xCu); /*0x60f189*/
  if ( v17 ) /*0x60f19f*/
    v18 = (unsigned __int8 *)TESPackage_TargetData_constr(v17); /*0x60f1a8*/
  else
    v18 = 0; /*0x60f1ac*/
  TESPackage_SetTarget(v14, v18); /*0x60f1b9*/
  if ( v18 ) /*0x60f1c0*/
  {
    Shared_NoOpVirtual_60D0A0(v18); /*0x60f1c4*/
    FormHeapFree((unsigned int)v18); /*0x60f1ca*/
  }
  p_targetType = &v14->super.members.target->targetType; /*0x60f1d2*/
  v14->super.members.procedureArrayIndex = 0xA; /*0x60f1d7*/
  TESPackage_TargetData_SetType(p_targetType, 0); /*0x60f1de*/
  TeSPackage_TargetData_SetTargetREFR(&v14->super.members.target->targetType, (int)target); /*0x60f1e7*/
  v20 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process); /*0x60f1f7*/
  v21 = v14->super.members.target; /*0x60f1fc*/
  if ( v20 == 4 ) /*0x60f1ff*/
    TESAIForm_SetServiceFlags(v21, 0xC8); /*0x60f206*/
  else
    TESAIForm_SetServiceFlags(v21, 0x5A); /*0x60f20a*/
  this->members.super.process->Unk_08(this->members.super.process); /*0x60f217*/
  Actor_AddPackage_(this, &v14->super, 0, 1);   // Installs the newly allocated dynamic DialoguePackage as the initiator process's editorPackage (setCurrent=false, markDynamic=true). StartConversationPackage cleared currentPackage earlier; it does not directly SetCurrentPackage to the dialogue package here. /*0x60f220*/
  if ( incrementProcedure ) /*0x60f22a*/
    ++this->members.super.process->editorPackProcedure; /*0x60f22f*/
  return 1; /*0x60f239*/
}
