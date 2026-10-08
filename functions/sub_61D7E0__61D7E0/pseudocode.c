void __usercall sub_61D7E0(
        int a1@<ecx>,
        char a2@<dil>,
        double a3@<st2>,
        double a4@<st0>,
        double a5@<st1>,
        double a6@<st3>)
{
  int *EffectiveCombatStyle; // eax
  int v8; // eax
  ActorAnimData *v9; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  bool v11; // al
  int v12; // ecx
  char v13; // al
  double v14; // st4
  bool v15; // zf
  float v16; // [esp+4h] [ebp-8h]
  float v17; // [esp+4h] [ebp-8h]
  float v18; // [esp+4h] [ebp-8h]
  float v19; // [esp+8h] [ebp-4h]
  float v20; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x70) == 8 ) /*0x61d7ea*/
  {
    EffectiveCombatStyle = Actor_GetEffectiveCombatStyle(*(void **)(a1 + 0x3C)); /*0x61d7f3*/
    (*(void (__thiscall **)(int *))(*EffectiveCombatStyle + 0x154))(EffectiveCombatStyle); /*0x61d802*/
    v16 = a6; /*0x61d804*/
    if ( v16 <= 0.0 || (v8 = *(_DWORD *)(a1 + 0x6C), v8 != 0xE) && v8 != 0x10 ) /*0x61d824*/
    {
      v9 = (ActorAnimData *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x164))( /*0x61d837*/
                              *(_DWORD *)(a1 + 0x3C),
                              a4,
                              a5,
                              a3);
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v9, 1); /*0x61d83b*/
      v11 = AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value); /*0x61d841*/
      v12 = *(_DWORD *)(a1 + 0x8C); /*0x61d846*/
      if ( v12 ) /*0x61d853*/
      {
        if ( *(float *)(a1 + 0x108) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0x104) && !v11 ) /*0x61d877*/
        {
          if ( v16 <= 0.0 /*0x61d8b4*/
            || v12 == *(_DWORD *)(a1 + 0x94)
            || v12 == *(_DWORD *)(a1 + 0x98)
            || v12 == *(_DWORD *)(a1 + 0x9C)
            || v16 <= CombatController_GetCachedTargetSurfaceDistance(a1, a2) )
          {
            v13 = CombatController_TryUseMagicItem(a1, a3, a5, a4, *(int **)(a1 + 0x8C), 0); /*0x61d8ca*/
            *(_BYTE *)(a1 + 0x1AD) = 0; /*0x61d8d1*/
            if ( !v13 ) /*0x61d8d8*/
              return; /*0x61d8d8*/
          }
          else
          {
            *(_BYTE *)(a1 + 0x1AD) = 1; /*0x61d8b6*/
          }
          v17 = *(float *)(a1 + 0x44); /*0x61d8e6*/
          v19 = *GameSetting_GetSafeFloatPointer(&unk_B37288); /*0x61d8f6*/
          *(float *)(a1 + 0x134) = v17; /*0x61d8fe*/
          *(float *)(a1 + 0x138) = v19; /*0x61d908*/
          *(float *)(a1 + 0x13C) = kTerrainLODQuadRayDirectionZ; /*0x61d914*/
          v20 = *(float *)(a1 + 0x44); /*0x61d91d*/
          v18 = *GameSetting_GetSafeFloatPointer(unk_B372E8); /*0x61d92d*/
          *(float *)(a1 + 0x104) = v20; /*0x61d935*/
          *(float *)(a1 + 0x108) = v18; /*0x61d93f*/
          v14 = kTerrainLODQuadRayDirectionZ; /*0x61d945*/
          *(float *)(a1 + 0x10C) = kTerrainLODQuadRayDirectionZ; /*0x61d94b*/
          v15 = *(_DWORD *)(a1 + 0x70) == 0xD; /*0x61d951*/
          *(_DWORD *)(a1 + 0x8C) = 0; /*0x61d954*/
          if ( v15 ) /*0x61d95e*/
            goto LABEL_22; /*0x61d95e*/
          goto LABEL_21; /*0x61d95e*/
        }
      }
      else if ( !v11 /*0x61d983*/
             && !(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C) + 0x30))(*(_DWORD *)(a1 + 0x3C) + 0x5C) )
      {
        if ( *(_DWORD *)(a1 + 0x70) == 0xD ) /*0x61d991*/
        {
LABEL_22:
          *(_DWORD *)(a1 + 0x70) = 0xD; /*0x61d99f*/
          sub_619920(a1, 0); /*0x61d9a6*/
          return; /*0x61d9a6*/
        }
        v14 = kTerrainLODQuadRayDirectionZ; /*0x61d993*/
LABEL_21:
        *(float *)(a1 + 0x188) = v14; /*0x61d999*/
        goto LABEL_22; /*0x61d999*/
      }
    }
  }
}
