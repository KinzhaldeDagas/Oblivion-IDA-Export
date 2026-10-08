void __thiscall InvisibilityEffect_RemoveEffect(_DWORD *this)
{
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  #239 *v5; // edi
  double v6; // st6
  int v7; // eax
  unsigned __int16 v8; // cx
  volatile LONG *v9; // edi
  unsigned int v10; // eax
  NiObject *v11; // edi
  int v12; // eax
  NiObject *v13; // eax
  float v14; // [esp+8h] [ebp-2Ch]
  int v15; // [esp+Ch] [ebp-28h]
  float v16; // [esp+10h] [ebp-24h]
  float v17; // [esp+1Ch] [ebp-18h]
  float v18; // [esp+1Ch] [ebp-18h]
  float v19; // [esp+1Ch] [ebp-18h]
  float ChameleonMaxRefraction; // [esp+20h] [ebp-14h]
  float v21; // [esp+24h] [ebp-10h]

  ValueModifierEffect_Remove(this, v15, v16); /*0x694148*/
  v3 = (MagicTarget *)*(this + 8); /*0x69414d*/
  if ( v3 ) /*0x694152*/
  {
    ParentActor = MagicTarget_GetParentActor(v3); /*0x69415d*/
    if ( ParentActor ) /*0x694161*/
    {
      if ( 0.0 == (double)ParentActor->vtbl->GetActorValue(ParentActor, kActorVal_Invisibility) ) /*0x694188*/
      {
        if ( OB_RendererGlobalState_010201A0[0xA5] /*0x6941af*/
          && OB_ShaderPassControl_010201A0[0]
          && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2
          && ParentActor == (Actor *)reference )
        {
          ((void (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->SetTransparency)(ParentActor, 1, 0.0); /*0x6941c1*/
        }
        else
        {
          v5 = (#239 *)OblivionDynamicCast( /*0x6941de*/
                         ParentActor->members.super.process,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                         &HighProcess `RTTI Type Descriptor',
                         0);
          if ( v5 ) /*0x6941e5*/
          {
            if ( (*(int (__thiscall **)(#239 *))(*(_DWORD *)v5 + 0x47C))(v5) != 4 ) /*0x6941f6*/
              sub_628630(v5, ParentActor, 0); /*0x6941fd*/
          }
        }
        ParentActor->vtbl->GetAV_F(ParentActor, kActorVal_Chameleon); /*0x69420e*/
        v17 = 0.0 / fCostant_100; /*0x694216*/
        v6 = v17; /*0x69421a*/
        if ( v17 < dbl_A2FC68 ) /*0x694229*/
          v6 = 0.0; /*0x69422d*/
        v18 = v6; /*0x69422f*/
        if ( v18 <= dbl_A2F928 ) /*0x694242*/
        {
          if ( v18 <= 0.0 ) /*0x69425b*/
            goto LABEL_21; /*0x69425b*/
        }
        else
        {
          v18 = 1.0; /*0x694248*/
        }
        if ( OB_RendererGlobalState_010201A0[0xA5] /*0x694276*/
          && OB_ShaderPassControl_010201A0[0]
          && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 )
        {
          Magic_GetChameleonMinRefraction(); /*0x694278*/
          ChameleonMaxRefraction = Magic_GetChameleonMaxRefraction(); /*0x694286*/
          v19 = 1.0 - v18; /*0x6942a1*/
          v21 = (float)0.0 + (ChameleonMaxRefraction - (float)0.0) * ((v19 - 0.0) / (1.0 - 0.0)); /*0x6942c3*/
          ((void (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->SetTransparency)(ParentActor, 1, LODWORD(v21)); /*0x6942d0*/
LABEL_22:
          v7 = *(_DWORD *)(*(this + 3) + 0x1C); /*0x6942db*/
          v8 = *(_WORD *)(v7 + 0x20); /*0x6942e1*/
          v9 = 0; /*0x6942e5*/
          if ( v8 == 0xFFFF ) /*0x6942ec*/
            v10 = strlen(*(const char **)(v7 + 0x1C)); /*0x6942f1*/
          else
            v10 = v8; /*0x694301*/
          if ( v10 ) /*0x694306*/
          {
            v11 = (NiObject *)FormHeapAlloc(0x38u); /*0x69430f*/
            if ( v11 ) /*0x694322*/
            {
              v14 = kTerrainLODQuadRayDirectionZ; /*0x69433a*/
              v12 = (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x18) + 0x14))(); /*0x69433d*/
              v13 = MagicModelHitEffect_constr_args2(v11, (TESObjectREFR *)ParentActor, v12, v14); /*0x694343*/
            }
            else
            {
              v13 = 0; /*0x69434a*/
            }
            v9 = (volatile LONG *)v13; /*0x694354*/
          }
          if ( (*(unsigned __int8 (__thiscall **)(volatile LONG *))(*v9 + 0x68))(v9) ) /*0x69435d*/
            ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], v9); /*0x694369*/
          else
            (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x694389*/
          return; /*0x694380*/
        }
LABEL_21:
        sub_5EE1B0(ParentActor, 0.0); /*0x6942d4*/
        goto LABEL_22; /*0x6942d6*/
      }
    }
  }
}
