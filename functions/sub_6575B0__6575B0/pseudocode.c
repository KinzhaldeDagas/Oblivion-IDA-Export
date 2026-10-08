// Verified (Oblivion): the same method is present in HighProcess and MiddleHighProcess vtable groups. It refreshes per-target enchantment shader state and the PlayerCharacter cache; the exact shared subobject interface name remains Candidate.
void __thiscall Process_UpdateWeaponEnchantmentShader(
        void *processOrCaster,
        TESObjectREFR *targetReference,
        bool arg3,
        bool arg4,
        bool arg5)
{
  int v6; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int v8; // eax
  int FormEnchantment; // edi
  EntryData *v10; // eax
  EffectSetting *FXEffect; // eax
  TESEffectShader *enchantEffect; // eax
  int v13; // eax
  int v14; // eax
  MagicShaderHitEffect *v15; // edi
  TESEffectShader *v16; // eax
  MagicShaderHitEffect *v17; // edi
  int v18; // eax
  _DWORD *unk5E0; // esi
  TESEffectShader *v20; // edi
  MagicShaderHitEffect *v21; // eax
  MagicShaderHitEffect *v22; // eax
  float elapsedSeconds; // [esp+20h] [ebp-2Ch]
  double Charge; // [esp+38h] [ebp-14h]
  bool arg4a; // [esp+58h] [ebp+Ch]

  *((_BYTE *)processOrCaster + 0x160) = 0; /*0x6575e2*/
  if ( arg4 ) /*0x6575e9*/
  {
    v6 = ActorProcessManager_FindTargetNonWeaponShaderHitEffect((int *)&qword_B3BB2C[0x75], (int)targetReference);// Verified (Oblivion): weapon-enchantment refresh first queries the manager for an existing non-weapon shader candidate on this target and reinitializes the returned object before handling the weapon-enchantment-specific instance. /*0x6575f1*/
    if ( v6 ) /*0x6575f8*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x68))(v6); /*0x657601*/
  }
  if ( arg3 ) /*0x657608*/
  {
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)processOrCaster + 0x420))(processOrCaster, 0); /*0x65761a*/
    vtbl = targetReference[1].vtbl; /*0x65761c*/
    if ( vtbl ) /*0x657621*/
    {
      if ( (*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3B))(vtbl, 1) ) /*0x657631*/
      {
        if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))targetReference[1].vtbl->super.super.InitializeComponent /*0x657646*/
               + 0x4F))(targetReference[1].vtbl) )
        {
          v8 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)processOrCaster + 0xEC))(processOrCaster, 1); /*0x657658*/
          FormEnchantment = TESEnchantableForm_GetFormEnchantment(*(void **)(v8 + 8)); /*0x657663*/
          if ( FormEnchantment ) /*0x65766a*/
          {
            v10 = (EntryData *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))targetReference[1].vtbl->super.super.InitializeComponent /*0x657679*/
                                + 0x3B))(
                                 targetReference[1].vtbl,
                                 1);
            Charge = EquippedEntryData_GetCharge(v10); /*0x657682*/
            if ( ((double (__thiscall *)(int, TESObjectREFR *))**(_DWORD **)(FormEnchantment + 0x24))( /*0x65769a*/
                   FormEnchantment + 0x24,
                   targetReference) <= Charge )
            {
              FXEffect = MagicItem_GetFXEffect((void *)(FormEnchantment + 0x18), 0); /*0x6576a1*/
              if ( FXEffect ) /*0x6576a8*/
              {
                enchantEffect = FXEffect->enchantEffect; /*0x6576aa*/
                if ( enchantEffect ) /*0x6576af*/
                  (*(void (__thiscall **)(void *, TESEffectShader *))(*(_DWORD *)processOrCaster + 0x420))( /*0x6576bc*/
                    processOrCaster,
                    enchantEffect);
              }
            }
          }
        }
      }
    }
    arg4a = 0; /*0x6576c8*/
    v13 = (*(int (__thiscall **)(void *))(*(_DWORD *)processOrCaster + 0x41C))(processOrCaster); /*0x6576cd*/
    v14 = ActorProcessManager_FindWeaponEnchantmentShader((int *)&qword_B3BB2C[0x75], (int)targetReference, v13);// Verified (Oblivion): weapon-enchantment refresh first asks ActorProcessManager_FindWeaponEnchantmentShader for an active matching effect. Existing effects are reinitialized; otherwise a new effect is created, flagged bWeaponEnchantment_28, and registered. /*0x6576d6*/
    if ( v14 ) /*0x6576dd*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 0x68))(v14); /*0x6576e6*/
    }
    else if ( (*(int (__thiscall **)(void *))(*(_DWORD *)processOrCaster + 0x41C))(processOrCaster) ) /*0x6576f7*/
    {
      v15 = (MagicShaderHitEffect *)FormHeapAlloc(0x4Cu); /*0x657704*/
      if ( v15 ) /*0x657717*/
      {
        elapsedSeconds = kTerrainLODQuadRayDirectionZ; /*0x65772a*/
        v16 = (TESEffectShader *)(*(int (__thiscall **)(void *))(*(_DWORD *)processOrCaster + 0x41C))(processOrCaster); /*0x65772d*/
        v17 = MagicShaderHitEffect_constr_args2(v15, targetReference, v16, elapsedSeconds); /*0x657738*/
      }
      else
      {
        v17 = 0; /*0x65773c*/
      }
      v17->bWeaponEnchantment_28 = 1;           // Verified (Oblivion): sets bWeaponEnchantment_28 immediately after constructing the shader from the equipped item's enchantment shader (EffectSetting.enchantEffect). /*0x65774c*/
      if ( arg5 ) /*0x657750*/
        v17->elapsedVisualSeconds_38 = flt_A2FE7C; /*0x657758*/
      if ( ((unsigned __int8 (__thiscall *)(MagicShaderHitEffect *))v17->super.super.vtable[1].super.super.Destructor)(v17) ) /*0x657762*/
      {
        ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v17->super.super); /*0x65776e*/
        if ( !arg5 ) /*0x657775*/
          arg4a = 1; /*0x657777*/
      }
    }
    if ( targetReference == (TESObjectREFR *)reference && reference->inventoryPC ) /*0x65778b*/
    {
      v18 = (*(int (__thiscall **)(void *))(*(_DWORD *)processOrCaster + 0x41C))(processOrCaster); /*0x6577a1*/
      unk5E0 = (_DWORD *)reference->unk5E0; /*0x6577a9*/
      v20 = (TESEffectShader *)v18; /*0x6577af*/
      if ( v18 ) /*0x6577b3*/
      {
        if ( unk5E0 ) /*0x6577bb*/
        {
          if ( unk5E0[0xD] == v18 ) /*0x6577c0*/
          {
LABEL_35:
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*unk5E0 + 0x68))(unk5E0) ) /*0x657834*/
            {
              (*(void (__thiscall **)(_DWORD *, int))*unk5E0)(unk5E0, 1); /*0x657842*/
              reference->unk5E0 = 0; /*0x65784a*/
            }
            return; /*0x65784a*/
          }
          (*(void (__thiscall **)(_DWORD *, int))*unk5E0)(unk5E0, 1); /*0x6577ca*/
        }
        v21 = (MagicShaderHitEffect *)FormHeapAlloc(0x4Cu); /*0x6577ce*/
        if ( v21 ) /*0x6577e4*/
          v22 = MagicShaderHitEffect_constr_args2(v21, (TESObjectREFR *)reference, v20, kTerrainLODQuadRayDirectionZ); /*0x6577fa*/
        else
          v22 = 0; /*0x657801*/
        v22->bWeaponEnchantment_28 = 1;         // Verified (Oblivion): sets bWeaponEnchantment_28 on the player's cached weapon-enchantment shader before storing it in PlayerCharacter::unk5E0. /*0x657808*/
        unk5E0 = &v22->super.super.vtable; /*0x65781a*/
        reference->unk5E0 = (UInt32)v22; /*0x65781c*/
        if ( !arg4a ) /*0x657822*/
          v22->elapsedVisualSeconds_38 = flt_A2FE7C; /*0x65782a*/
        goto LABEL_35; /*0x65782a*/
      }
      if ( unk5E0 ) /*0x657868*/
      {
        (*(void (__thiscall **)(_DWORD *, int))*unk5E0)(unk5E0, 1); /*0x657872*/
        reference->unk5E0 = 0; /*0x657879*/
      }
    }
  }
}
