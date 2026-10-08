// Enumerate a MagicTarget's active, non-terminated LGHT effects, keep the greatest-magnitude LightEffect, tear down every losing candidate, then create/retain the winner's single transient point light.
void __cdecl MagicTarget_ReconcileStrongestLightEffect(MagicTarget *target)
{
  LightEffect_DecodedLayout *v1; // ebp
  MagicTarget *v2; // ecx
  TESObjectREFR *ParentActor; // esi
  void **p_transientPointLight_38; // edi
  TESObjectLIGH *light; // ebx
  NiLight *v6; // eax
  NiLight *v7; // eax
  int v8; // eax
  _DWORD *v9; // ecx
  double v10; // rt0
  int *SafeFloatPointer; // eax
  int *v12; // eax
  _DWORD *v13; // ecx
  float *v14; // eax
  double v15; // st7
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  int *v17; // eax
  float (__thiscall *GetScale)(TESObjectREFR *); // edx
  double v19; // st7
  float *v20; // ebx
  int *v21; // eax
  float (__thiscall *v22)(TESObjectREFR *); // edx
  double v23; // st7
  int v24; // eax
  void (__thiscall *v25)(_DWORD, void *, int); // eax
  _EXCEPTION_REGISTRATION_RECORD *v26; // esi
  LightEffect_DecodedLayout *v27; // ebx
  EffectNode *v28; // edi
  ActiveEffect *data; // eax
  LightEffect_DecodedLayout *v30; // eax
  LightEffect_DecodedLayout *v31; // esi
  _EXCEPTION_REGISTRATION_RECORD *v32; // esi
  void *v33; // edi
  LightEffect_DecodedLayout *v34; // ecx
  int v35; // ebx
  void *v36; // [esp+8h] [ebp-48h]
  unsigned int v37; // [esp+10h] [ebp-40h]
  _DWORD v38[4]; // [esp+14h] [ebp-3Ch] BYREF
  double ScaledCollisionHeight; // [esp+24h] [ebp-2Ch] BYREF
  double v40; // [esp+2Ch] [ebp-24h] BYREF
  float v41; // [esp+34h] [ebp-1Ch]
  int v42[3]; // [esp+38h] [ebp-18h] BYREF
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp+44h] [ebp-Ch]
  void *v44; // [esp+48h] [ebp-8h]
  int v45; // [esp+4Ch] [ebp-4h]

  if ( target ) /*0x694986*/
  {
    v27 = 0; /*0x694993*/
    v28 = target->vtbl->GetActiveEffectList(target); /*0x694997*/
    if ( v28 ) /*0x69499b*/
    {
      ExceptionList = v26; /*0x6949a1*/
      while ( 1 ) /*0x6949a2*/
      {
        if ( !v28->next && !v28->data ) /*0x6949ab*/
        {
LABEL_15:
          v32 = ExceptionList; /*0x694a10*/
          if ( v27 ) /*0x694a13*/
          {
            v33 = v44; /*0x694a15*/
            v34 = v27; /*0x694a16*/
            v35 = v45;                          // Tail-jump into the native transient-point-light creation block for the selected strongest LightEffect. /*0x694a18*/
            v45 = 0xFFFFFFFF;                   // Shared creation tail for the strongest active LightEffect selected at 0x00694980: create/configure a transient NiPointLight, register it in the native full-light list, attach it to the actor, and store it in extra-data type 0x49. /*0x694600*/
            v44 = &loc_9C5853; /*0x694602*/
            ExceptionList = NtCurrentTeb()->Tib.ExceptionList; /*0x69460d*/
            v38[3] = v35; /*0x694611*/
            v38[1] = v32; /*0x694613*/
            v38[0] = v33; /*0x694614*/
            v37 = (unsigned int)v38 ^ __security_cookie; /*0x69461c*/
            v1 = v34; /*0x694627*/
            v2 = v34->base_00.members.target; /*0x694629*/
            if ( v2 ) /*0x69462e*/
              ParentActor = (TESObjectREFR *)MagicTarget_GetParentActor(v2); /*0x694635*/
            else
              ParentActor = 0; /*0x694639*/
            p_transientPointLight_38 = (void **)&v1->transientPointLight_38; /*0x69463f*/
            if ( !v1->transientPointLight_38 ) /*0x69463b*/
            {
              if ( ParentActor ) /*0x69464a*/
              {                                 // Gate transient magic-light creation by current active count versus the native iMagicLightMaxCount setting.
                if ( !TESObjectREFR_GetSpellEffectLightPayload(ParentActor) /*0x69466a*/
                  && SLODWORD(qword_B3BB2C[0x162]) <= SLODWORD(flt_B37ED0[0x4E]) )
                {
                  light = v1->base_00.members.effectItem->setting->light;// Fetch the TESObjectLIGH assigned to the LGHT magic-effect definition; report an editor-data error when absent. /*0x694676*/
                  if ( light ) /*0x69467b*/
                  {
                    v6 = (NiLight *)FormHeapAlloc(0x114u); /*0x6946a3*/
                    LODWORD(v40) = v6; /*0x6946ab*/
                    v45 = 0; /*0x6946b1*/
                    if ( v6 ) /*0x6946b9*/
                      v7 = sub_4B0BF0(v6); /*0x6946bd*/
                    else
                      v7 = 0; /*0x6946c4*/
                    v45 = 0xFFFFFFFF; /*0x6946c9*/
                    NiSmartPointer_Set__((Ni2DBuffer **)&v1->transientPointLight_38, (Ni2DBuffer *)v7); /*0x6946d1*/
                    v8 = *((_DWORD *)light + 0x1E); /*0x6946d6*/
                    *(float *)&v40 = (float)(unsigned __int8)v8; /*0x6946eb*/
                    *((float *)&v40 + 1) = (float)BYTE1(v8); /*0x6946f9*/
                    LODWORD(ScaledCollisionHeight) = BYTE2(v8); /*0x6946fd*/
                    v9 = *p_transientPointLight_38; /*0x694701*/
                    v41 = (float)BYTE2(v8); /*0x69470c*/
                    v10 = dbl_A3DDD8; /*0x69471c*/
                    *(float *)&v40 = *(float *)&v40 / v10; /*0x69471e*/
                    *((float *)&v40 + 1) = *((float *)&v40 + 1) / v10; /*0x694728*/
                    v41 = v41 / v10; /*0x694730*/
                    sub_482120(v9, &v40); /*0x694734*/
                    *(float *)&ScaledCollisionHeight = v1->base_00.members.magnitude; /*0x694741*/
                    SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B37ED0[0x54]); /*0x694745*/
                    v40 = *(float *)SafeFloatPointer + *(float *)&ScaledCollisionHeight; /*0x694755*/
                    v12 = GameSetting_GetSafeFloatPointer((int *)MEMORY[0xB37DB8]); /*0x694759*/
                    v13 = *p_transientPointLight_38; /*0x694760*/
                    *(float *)&v40 = *(float *)v12 * v40; /*0x69476b*/
                    *((float *)&v40 + 1) = 0.0; /*0x694771*/
                    v41 = 0.0; /*0x694775*/
                    sub_4B0BC0(v13, &v40); /*0x694779*/
                    v14 = (float *)*p_transientPointLight_38; /*0x694784*/
                    *(float *)&ScaledCollisionHeight = *((float *)light + 0x22); /*0x694786*/
                    v15 = *(float *)&ScaledCollisionHeight; /*0x69478a*/
                    ++*((_DWORD *)v14 + 0x2E); /*0x694793*/
                    v14[0x37] = v15; /*0x694799*/
                    ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x6947a1*/
                    if ( ShadowSceneNode ) /*0x6947ab*/
                      ShadowSceneNode_FindOrCreateFullLightForSource(ShadowSceneNode, *p_transientPointLight_38, 1);// Register the transient LightEffect NiPointLight as a native full-list source with trackBackingPosition=true. /*0x6947b3*/
                    v40 = *(float *)(((int (__thiscall *)(TESObjectREFR *, int *))ParentActor->vtbl->Unk_57)( /*0x6947d1*/
                                       ParentActor,
                                       v42)
                                   + 4);
                    v17 = GameSetting_GetSafeFloatPointer((int *)&flt_B37ED0[0x50]); /*0x6947d5*/
                    GetScale = ParentActor->vtbl->GetScale; /*0x6947e2*/
                    v40 = *(float *)v17 + v40; /*0x6947ea*/
                    v19 = ((double (__thiscall *)(TESObjectREFR *, unsigned int))GetScale)(ParentActor, v37); /*0x6947ee*/
                    v20 = (float *)*p_transientPointLight_38; /*0x6947f4*/
                    *(float *)&v40 = v19 * v40; /*0x6947f8*/
                    ScaledCollisionHeight = Actor_GetScaledCollisionHeight(ParentActor); /*0x694806*/
                    v21 = GameSetting_GetSafeFloatPointer((int *)&flt_B37ED0[0x52]); /*0x69480a*/
                    v22 = ParentActor->vtbl->GetScale; /*0x694817*/
                    ScaledCollisionHeight = *(float *)v21 + ScaledCollisionHeight; /*0x69481f*/
                    v23 = ((double (__thiscall *)(TESObjectREFR *))v22)(ParentActor); /*0x694823*/
                    *(float *)&ScaledCollisionHeight = v23 * ScaledCollisionHeight; /*0x69482e*/
                    sub_404CF0(v20, 0.0, *(float *)&v40, *(float *)&ScaledCollisionHeight); /*0x694847*/
                    v24 = (int)ParentActor->vtbl->GetNiNode(ParentActor); /*0x694856*/
                    sub_405070(&ScaledCollisionHeight, v24); /*0x69485d*/
                    v36 = *p_transientPointLight_38; /*0x69486b*/
                    v25 = *(void (__thiscall **)(_DWORD, void *, int))(*(_DWORD *)LODWORD(ScaledCollisionHeight) + 0x84); /*0x69486c*/
                    v45 = 1; /*0x694872*/
                    v25(LODWORD(ScaledCollisionHeight), v36, 1);// Attach the transient point light to an actor-relative scene node after computing native forward/height offsets. /*0x694876*/
                    TESObjectREFR_SetSpellEffectExtraLight(ParentActor, (NiLight *)*p_transientPointLight_38);// Store the same transient point light on the parent actor as spell-effect attached-light extra-data type 0x49. /*0x69487d*/
                    ++LODWORD(qword_B3BB2C[0x162]); /*0x694882*/
                    v45 = 0xFFFFFFFF; /*0x69488c*/
                    NiPointerSlot_Release((NiD3DVertexShader *)&ScaledCollisionHeight); /*0x694894*/
                  }
                  else
                  {
                    PrintError( /*0x694682*/
                      "Light Effect has no Light object associated with it. Use the editor to select a light in the Magic"
                      " Effects window for the Light effect.");
                  }
                }
              }
            }
          }
          return; /*0x69469d*/
        }
        data = v28->data; /*0x6949ad*/
        if ( v28->data && data->members.effectItem->setting->effectCode == 0x5448474C && !data->members.bTerminated )// Exclude terminated ActiveEffect entries from strongest-LightEffect selection. /*0x6949c5*/
        {
          v30 = (LightEffect_DecodedLayout *)OblivionDynamicCast( /*0x6949da*/
                                               data,
                                               0,
                                               (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                                               &LightEffect `RTTI Type Descriptor',
                                               0);
          v31 = v30; /*0x6949e4*/
          if ( !v27 ) /*0x6949e6*/
            goto LABEL_13; /*0x6949e6*/
          if ( v30->base_00.members.magnitude > (double)v27->base_00.members.magnitude )// Compare ActiveEffect magnitude at +0x18; the greater-magnitude LightEffect survives and the other transient light is torn down. /*0x6949f5*/
          {
            LightEffect_TeardownTransientPointLight(v27); /*0x694a02*/
LABEL_13:
            v27 = v31; /*0x694a07*/
            goto LABEL_14; /*0x694a07*/
          }
          LightEffect_TeardownTransientPointLight(v30); /*0x6949f9*/
        }
LABEL_14:
        v28 = v28->next; /*0x694a09*/
        if ( !v28 ) /*0x694a0e*/
          goto LABEL_15; /*0x694a0e*/
      }
    }
  }
}
