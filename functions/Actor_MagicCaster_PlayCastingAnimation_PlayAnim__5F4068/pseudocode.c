// positive sp value has been detected, the output may be wrong!
void __usercall Actor_MagicCaster_PlayCastingAnimation_::PlayAnim(
        int a1@<ebx>,
        _DWORD *a2@<ebp>,
        int a3@<edi>,
        Actor *a4@<esi>)
{
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  void *v8; // eax
  EffectSetting *FXEffect; // eax
  EffectSetting *v10; // edi
  CombatController *v11; // eax
  _DWORD *v12; // eax
  unsigned int v13; // esi
  int *refID; // [esp-38h] [ebp-38h]
  ActorAnimData *v15; // [esp-1Ch] [ebp-1Ch]
  ActorAnimData *v16; // [esp-14h] [ebp-14h]

  ActorAnimData_PlayAnimGroup(v16, (unsigned int)a2, 1u, 0xFFFFFFFF); /*0x5f4071*/
  ((void (__thiscall *)(Actor *, _DWORD *, int))a4->vtbl->Unk_E9)(a4, a2, 1); /*0x5f4083*/
  NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v15, *(_DWORD *)(0x24 * a1 + 0xB102E8)); /*0x5f4094*/
  if ( NormalizedSequenceSlot ) /*0x5f409b*/
  {
    Actor_SetCurrentActionWithBowVisualCleanup(a4, kActorCurrentAction_Attack, NormalizedSequenceSlot); /*0x5f40a6*/
    v8 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x30))(a3); /*0x5f40b4*/
    FXEffect = MagicItem_GetFXEffect(v8, 0); /*0x5f40b8*/
    v10 = FXEffect; /*0x5f40bd*/
    if ( FXEffect ) /*0x5f40c1*/
    {
      if ( FXEffect->castingSound ) /*0x5f40c7*/
      {
        if ( a4->vtbl->GetCombatController(a4) ) /*0x5f40de*/
        {
          refID = (int *)v10->castingSound->super.member.super.refID; /*0x5f40f1*/
          v11 = a4->vtbl->GetCombatController(a4); /*0x5f40fa*/
          sub_619FA0(v11, refID, 0); /*0x5f40fe*/
          return; /*0x5f4116*/
        }
        if ( v16 == (ActorAnimData *)reference ) /*0x5f4121*/
        {
          sub_663520((LONG)reference, v10->castingSound->super.member.super.refID); /*0x5f412d*/
          return; /*0x5f4145*/
        }
        v12 = (_DWORD *)sub_65AC50(a4, v10->castingSound->super.member.super.refID, 0, 0x102, 1); /*0x5f415b*/
        v13 = (unsigned int)v12; /*0x5f4160*/
        if ( v12 ) /*0x5f4164*/
        {
          sub_6B73E0(v12); /*0x5f4168*/
          FormHeapFree(v13); /*0x5f416e*/
        }
      }
    }
  }
  Actor_MagicCaster_PlayCastingAnimation_::Done(); /*0x5f409b*/
}
