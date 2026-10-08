void __thiscall SoulTrapEffect_Remove(ActiveEffect *a1)
{
  ActiveEffect *v1; // edi
  MagicCaster *v2; // ecx
  Actor *ParentActor; // ebx
  MagicTarget *v4; // ecx
  Actor *v5; // eax
  Actor *v6; // esi
  MagicTarget *v7; // eax
  Actor *v8; // ebp
  UInt32 SoulLevel; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  NiNode *v12; // ebp
  BSTempEffectParticle *v13; // ebx
  TESModel *p_model; // edi
  TESObjectCELL *v15; // eax
  BSTempEffectParticle *v16; // esi
  MagicTarget *target; // ecx
  Actor *TargetActor; // edi
  MagicCaster *caster; // ecx
  Actor *casterActor; // esi
  const char *v22; // [esp+Ch] [ebp-64h]
  signed int v23; // [esp+28h] [ebp-48h]
  bool IsPlayer; // [esp+47h] [ebp-29h]
  float v25; // [esp+48h] [ebp-28h]
  float v26; // [esp+48h] [ebp-28h]
  float v27; // [esp+48h] [ebp-28h]
  float v28; // [esp+48h] [ebp-28h]
  float v29; // [esp+4Ch] [ebp-24h]
  float v30; // [esp+50h] [ebp-20h]
  float *v31; // 0:^1C.4

  target = a1->members.target; /*0x6a5053*/
  if ( target ) /*0x6a505a*/
    TargetActor = MagicTarget_GetParentActor(target); /*0x6a5061*/
  else
    TargetActor = 0; /*0x6a5065*/
  caster = a1->members.caster; /*0x6a5067*/
  if ( caster ) /*0x6a506c*/
    casterActor = MagicCaster_GetParentActor(caster); /*0x6a5073*/
  else
    casterActor = 0; /*0x6a5077*/
  if ( TargetActor /*0x6a50ae*/
    && TargetActor->vtbl->super.super.IsDead((TESObjectREFR *)TargetActor, 0)
    && casterActor
    && !casterActor->vtbl->super.super.IsDead((TESObjectREFR *)casterActor, 0)
    && !Actor::IsEssential(TargetActor) )
  {
    v1 = a1; /*0x6a4e17*/
    v2 = a1->members.caster; /*0x6a4e19*/
    if ( v2 ) /*0x6a4e1e*/
      ParentActor = MagicCaster_GetParentActor(v2); /*0x6a4e25*/
    else
      ParentActor = 0; /*0x6a4e29*/
    v4 = v1->members.target; /*0x6a4e2b*/
    if ( v4 ) /*0x6a4e30*/
    {
      v5 = MagicTarget_GetParentActor(v4); /*0x6a4e32*/
      v6 = v5; /*0x6a4e37*/
      if ( v5 ) /*0x6a4e3b*/
      {
        if ( Actor_IsCreature(v5) ) /*0x6a4e3f*/
        {
          v7 = v1->members.target; /*0x6a4e48*/
          if ( v7 ) /*0x6a4e4d*/
          {
            v8 = (Actor *)&v7[0xFFFFFFF3];      // //Again get Actor /*0x6a4e4f*/
LABEL_23:
            if ( ParentActor ) /*0x6a4e5a*/
              IsPlayer = Actor_IsPlayer((TESObjectREFR *)ParentActor); /*0x6a4e63*/
            else
              IsPlayer = 0; /*0x6a4e69*/
            if ( v8 ) /*0x6a4e70*/
              SoulLevel = Actor::GetSoulLevel(v8); /*0x6a4e74*/
            else
              SoulLevel = 0; /*0x6a4e7b*/
            if ( v6 ) /*0x6a4e7f*/
            {
              if ( ParentActor ) /*0x6a4e87*/
              {
                if ( !v8 || (int)SoulLevel > 0 ) /*0x6a4e93*/
                {
                  ContainerChanges = ExtraDataList_GetContainerChanges(&ParentActor->members.super.super.baseExtraList); /*0x6a4e9c*/
                  if ( ExtraContainerChanges::AddActorSoulData(ContainerChanges, v6) ) /*0x6a4ea4*/
                  {
                    if ( IsPlayer ) /*0x6a4eb2*/
                    {
                      GameUI_QueueMessage(MEMORY[0xB38DF0].value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x6a4ec8*/
                      sub_57DE50(0x20); /*0x6a4ecf*/
                      ++reference->miscStats[0xA]; /*0x6a4edc*/
                    }
                  }
                  if ( v8 ) /*0x6a4ee5*/
                    sub_625090(v8, 0); /*0x6a4eeb*/
                  if ( v1->members.effectItem->setting->model.vtbl->GetModelPath(&v1->members.effectItem->setting->model) ) /*0x6a4eff*/
                  {
                    v25 = -v6->vtbl->super.GetZRotation((MobileObject *)v6); /*0x6a4f17*/
                    v26 = cos(v25); /*0x6a4f24*/
                    v29 = v26; /*0x6a4f34*/
                    v27 = -v6->vtbl->super.GetZRotation((MobileObject *)v6); /*0x6a4f3e*/
                    v28 = sin(v27); /*0x6a4f4b*/
                    Shared_GetDwordAtOffset40(v6); /*0x6a4f69*/
                    v23 = sub_4C9BE0((TESObjectREFR *)v6); /*0x6a4f79*/
                    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v6); /*0x6a4f7c*/
                    v12 = (NiNode *)sub_441800(DwordAtOffset40, v23, 3u); /*0x6a4f8a*/
                    v13 = (BSTempEffectParticle *)FormHeapAlloc(0x20u); /*0x6a4f91*/
                    if ( v13 ) /*0x6a4fa4*/
                    {
                      p_model = &v1->members.effectItem->setting->model; /*0x6a4fb6*/
                      *(NiPoint3 *)&v31 = *(NiPoint3 *)v6->vtbl->super.super.GetPos((TESObjectREFR *)v6); /*0x6a4fca*/
                      v22 = p_model->vtbl->GetModelPath(p_model); /*0x6a4ffc*/
                      v15 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v6); /*0x6a5004*/
                      v30 = -v28; /*0x6a4f57*/
                      v16 = BSTempEffectParticle_Constructor( /*0x6a5011*/
                              v13,
                              v15,
                              1.0,
                              v12,
                              v22,
                              v30,
                              v29,
                              0.0,
                              *(float *)&v31,
                              *((float *)&v31 + 1),
                              *((float *)&v31 + 2),
                              1.0,
                              0);
                    }
                    else
                    {
                      v16 = 0; /*0x6a5015*/
                    }
                    PlaySpecialIdleOnControllerManager(v16, "SpecialIdle_Soultrap");// Soultrap removal path starts SpecialIdle_Soultrap on the effect object's controller manager through sub_570C00. /*0x6a5026*/
                    ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v16->base); /*0x6a5031*/
                  }
                }
              }
            }
            return; /*0x6a5031*/
          }
        }
      }
    }
    else
    {
      v6 = 0; /*0x6a4e54*/
    }
    v8 = 0; /*0x6a4e56*/
    goto LABEL_23; /*0x6a4e56*/
  }
}
