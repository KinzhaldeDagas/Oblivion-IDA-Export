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
  TESObjectCELL *ParentCell; // eax
  int v12; // ebp
  void *v13; // ebx
  TESModel *p_model; // edi
  TESObjectCELL *v15; // eax
  float *v16; // esi
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

  target = a1->members.target;
  if ( target )
    TargetActor = MagicTarget_GetParentActor(target);
  else
    TargetActor = 0;
  caster = a1->members.caster;
  if ( caster )
    casterActor = MagicCaster_GetParentActor(caster);
  else
    casterActor = 0;
  if ( TargetActor
    && TargetActor->vtbl->super.super.IsDead((TESObjectREFR *)TargetActor, 0)
    && casterActor
    && !casterActor->vtbl->super.super.IsDead((TESObjectREFR *)casterActor, 0)
    && !Actor::IsEssential(TargetActor) )
  {
    v1 = a1;
    v2 = a1->members.caster;
    if ( v2 )
      ParentActor = MagicCaster_GetParentActor(v2);
    else
      ParentActor = 0;
    v4 = v1->members.target;
    if ( v4 )
    {
      v5 = MagicTarget_GetParentActor(v4);
      v6 = v5;
      if ( v5 )
      {
        if ( Actor_IsCreature(v5) )
        {
          v7 = v1->members.target;
          if ( v7 )
          {
            v8 = (Actor *)&v7[0xFFFFFFF3];      // //Again get Actor
LABEL_23:
            if ( ParentActor )
              IsPlayer = Actor_IsPlayer((TESObjectREFR *)ParentActor);
            else
              IsPlayer = 0;
            if ( v8 )
              SoulLevel = Actor::GetSoulLevel(v8);
            else
              SoulLevel = 0;
            if ( v6 )
            {
              if ( ParentActor )
              {
                if ( !v8 || (int)SoulLevel > 0 )
                {
                  ContainerChanges = ExtraDataList_GetContainerChanges(&ParentActor->members.super.super.baseExtraList);
                  if ( ExtraContainerChanges::AddActorSoulData(ContainerChanges, v6) )
                  {
                    if ( IsPlayer )
                    {
                      GameUI_QueueMessage((const char *)LODWORD(sSoulCaptured), 0, 1u, flt_A30634);
                      sub_57DE50(0x20);
                      ++TESDataHandler_g_PlayerRef->miscStats[0xA];
                    }
                  }
                  if ( v8 )
                    sub_625090(v8, 0);
                  if ( v1->members.effectItem->setting->model.vtbl->GetModelPath(&v1->members.effectItem->setting->model) )
                  {
                    v25 = -v6->vtbl->super.GetZRotation((MobileObject *)v6);
                    v26 = cos(v25);
                    v29 = v26;
                    v27 = -v6->vtbl->super.GetZRotation((MobileObject *)v6);
                    v28 = sin(v27);
                    TESObjectREFR_GetParentCell((TESObjectREFR *)v6);
                    v23 = sub_4C9BE0((TESObjectREFR *)v6);
                    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v6);
                    v12 = sub_441800(ParentCell, v23, 3u);
                    v13 = (void *)FormHeapAlloc(0x20u);
                    if ( v13 )
                    {
                      p_model = &v1->members.effectItem->setting->model;
                      *(NiPoint3 *)&v31 = *(NiPoint3 *)v6->vtbl->super.super.GetPos((TESObjectREFR *)v6);
                      v22 = p_model->vtbl->GetModelPath(p_model);
                      v15 = TESObjectREFR_GetParentCell((TESObjectREFR *)v6);
                      v30 = -v28;
                      v16 = sub_5713F0(
                              v13,
                              (int)v15,
                              1.0,
                              v12,
                              v22,
                              v30,
                              v29,
                              COERCE_INT(0.0),
                              *(float *)&v31,
                              (UInt32)*(&v31 + 1),
                              (const char *)*(&v31 + 2),
                              1.0,
                              0);
                    }
                    else
                    {
                      v16 = 0;
                    }
                    sub_570C00(v16, "SpecialIdle_Soultrap");
                    sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v16);
                  }
                }
              }
            }
            return;
          }
        }
      }
    }
    else
    {
      v6 = 0;
    }
    v8 = 0;
    goto LABEL_23;
  }
}
