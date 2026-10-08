// ArrowProjectile shot constructor. ammoEntry is mandatory and unconditionally dereferenced; weaponEntry is optional internally although Actor_ProcessAction requires both. Native damage combines WEAP+AMMO contributions. Poison consumption and enchantment-charge reduction occur before process/node/cell construction with no rollback. On completion it has cell-attached the projectile and incremented g_liveArrowProjectileCount, returns placement this, and still has not performed inventory depletion or ActorProcessManager insertion. External ThrowingWeapon contrast after this native result: supplying source-WEAP damage in both proxy AMMO and real WEAP entries creates a double contribution, and destroying the projectile does not restore consumed poison or charge.
ArrowProjectile *__thiscall ArrowProjectile_ConstructFromShot(
        ArrowProjectile *this,
        Actor *shooter,
        float originX,
        float originY,
        float originZ,
        float yawZ,
        float pitchX,
        float attackStrength,
        EntryData *ammoEntry,
        EntryData *weaponEntry)
{
  TESForm *ammoFormFromEntry; // eax
  double v12; // st6
  double v13; // st4
  AlchemyItem *Poison; // eax
  _BYTE *v15; // eax
  char v16; // cl
  ExtraContainerChanges_Data *ContainerChanges; // eax
  EnchantmentItem *arrowEnch; // eax
  EffectSetting *FXEffect; // eax
  TESEffectShader *enchantEffect; // edi
  MagicShaderHitEffect *v21; // eax
  MagicShaderHitEffect *v22; // edi
  void (__thiscall *Destructor)(NiRefObject *, bool); // eax
  HighProcess *v24; // eax
  HighProcess *v25; // eax
  ExtraDataList *DwordAtOffset40; // eax
  NiObjectNET *NiNode; // eax
  bhkCharacterProxy *CharProxy; // eax
  _OWORD *v29; // eax
  TESObjectCELL *v30; // eax
  int v31; // ecx
  int v32; // eax
  bool v33; // cc
  ExtraDataList *data; // [esp+38h] [ebp-68h]
  EnchantmentItem *v36; // [esp+54h] [ebp-4Ch]
  float a4a; // [esp+58h] [ebp-48h]
  float a4b; // [esp+58h] [ebp-48h]
  double a4c; // [esp+58h] [ebp-48h]
  float a4; // [esp+58h] [ebp-48h]
  float a4d; // [esp+58h] [ebp-48h]
  double a4e; // [esp+58h] [ebp-48h]
  TESForm *baseForm; // [esp+64h] [ebp-3Ch]
  float Charge; // [esp+68h] [ebp-38h]
  hkVector4 v45; // [esp+70h] [ebp-30h] BYREF
  int v46; // [esp+9Ch] [ebp-4h]

  MobilObject_constr((TESObjectREFR *)this); /*0x60c98a*/
  this->super.vtbl = (MobileObjectVtbl *)&ArrowProjectile::`vftable'{for `ArrowProjectile'}; /*0x60c999*/
  this->super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&ArrowProjectile::`vftable'{for `TESChildCell'}; /*0x60c99f*/
  ammoFormFromEntry = ammoEntry->type; /*0x60c9a6*/
  this->unk064 = 1.0; /*0x60c9a9*/
  this->unk05C = 0; /*0x60c9ac*/
  this->unk060 = 0; /*0x60c9af*/
  a4a = *(float *)&ammoFormFromEntry[5].member.type; /*0x60c9b5*/
  baseForm = ammoFormFromEntry; /*0x60c9b9*/
  v12 = g_GameSettingStringPointers_B36CD8[0xDA]; /*0x60c9bd*/
  v46 = 0; /*0x60c9c3*/
  a4b = v12 * a4a; /*0x60c9cb*/
  this->speed = a4b; /*0x60c9d3*/
  v13 = (1.0 - attackStrength) * g_GameSettingStringPointers_B36CD8[0xEE]; /*0x60c9df*/
  this->shooter = shooter; /*0x60c9e5*/
  this->speed = a4b * (attackStrength + v13); /*0x60c9ec*/
  this->unk074 = 1.0; /*0x60c9ef*/
  this->elapsedTime = 0.0; /*0x60c9f4*/
  this->unk088 = g_zeroNiPoint3.x; /*0x60c9fc*/
  this->unk08C = g_zeroNiPoint3.y; /*0x60ca08*/
  this->unk090 = g_zeroNiPoint3.z; /*0x60ca13*/
  LOBYTE(this->unk094) = 0; /*0x60ca19*/
  this->unk098 = 0; /*0x60ca1f*/
  BYTE1(this->unk094) = 0; /*0x60ca25*/
  BYTE2(this->unk094) = 0; /*0x60ca2b*/
  HIBYTE(this->unk094) = 0; /*0x60ca31*/
  if ( weaponEntry ) /*0x60ca37*/
  {
    if ( shooter ) /*0x60ca3f*/
    {
      a4c = EquippedWeaponData_GetDamage(weaponEntry, shooter, 1.0); /*0x60ca51*/
      *(float *)&a4c = EquippedWeaponData_GetDamage(ammoEntry, shooter, 1.0) + a4c; /*0x60ca6b*/
      this->unk070 = *(float *)&a4c * attackStrength; /*0x60ca76*/
      Poison = EquippedEntryData_GetPoison(weaponEntry); /*0x60ca79*/
      this->poison = Poison; /*0x60ca80*/
      if ( Poison ) /*0x60ca86*/
        EquippedEntryData_ConsumePoison(weaponEntry); /*0x60ca8a*/
      this->arrowEnch = (EnchantmentItem *)baseForm[3].member.modlist.data; /*0x60caa2*/
      v15 = OblivionDynamicCast( /*0x60caab*/
              weaponEntry->type,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectWEAP `RTTI Type Descriptor',
              0);
      if ( v15 ) /*0x60cab7*/
        v16 = v15[0x9C] & 1; /*0x60cabf*/
      else
        v16 = 0; /*0x60cac4*/
      BYTE2(this->unk094) = v16; /*0x60cac8*/
      this->bowEnch = 0; /*0x60cace*/
      if ( v15 ) /*0x60cad4*/
        v36 = *((EnchantmentItem **)v15 + 0x19); /*0x60cad9*/
      else
        v36 = 0; /*0x60cadf*/
      if ( v36 ) /*0x60cae7*/
      {
        Charge = EquippedEntryData_GetCharge(weaponEntry); /*0x60caf4*/
        a4 = ((double (__thiscall *)(char *, Actor *))**((_DWORD **)v36 + 9))((char *)v36 + 0x24, shooter); /*0x60cb07*/
        if ( a4 <= (double)Charge ) /*0x60cb1a*/
        {
          data = (ExtraDataList *)weaponEntry->extendData->node.data; /*0x60cb20*/
          ContainerChanges = ExtraDataList_GetContainerChanges(&shooter->members.super.super.baseExtraList); /*0x60cb24*/
          a4d = Charge - a4; /*0x60cb35*/
          EquippedEntryData_SetCharge(weaponEntry, a4d, ContainerChanges, data); /*0x60cb40*/
          if ( shooter->members.super.process ) /*0x60cb45*/
          {
            a4e = EquippedEntryData_GetCharge(weaponEntry); /*0x60cb52*/
            if ( ((double (__thiscall *)(char *, Actor *))**((_DWORD **)v36 + 9))((char *)v36 + 0x24, shooter) > a4e ) /*0x60cb6e*/
              ((void (__thiscall *)(LowProcess *, Actor *, int, _DWORD, _DWORD))shooter->members.super.process->Unk_10A)( /*0x60cb82*/
                shooter->members.super.process,
                shooter,
                1,
                0,
                0);
          }
          this->bowEnch = v36; /*0x60cb88*/
        }
        BYTE2(this->unk094) = 1; /*0x60cb8e*/
      }
      arrowEnch = this->arrowEnch; /*0x60cb95*/
      if ( arrowEnch || (arrowEnch = this->bowEnch) != 0 ) /*0x60cba4*/
      {
        FXEffect = MagicItem_GetFXEffect((char *)arrowEnch + 0x18, 0); /*0x60cbab*/
        if ( FXEffect ) /*0x60cbb2*/
        {
          enchantEffect = FXEffect->enchantEffect; /*0x60cbb4*/
          if ( enchantEffect ) /*0x60cbb9*/
          {
            v21 = (MagicShaderHitEffect *)FormHeapAlloc(0x4Cu);// Allocate the projectile magic-hit-effect object (0x4C bytes). This allocation is not handled as a recoverable constructor failure. /*0x60cbbd*/
            LOBYTE(v46) = 1; /*0x60cbcb*/
            if ( v21 ) /*0x60cbd0*/
              v22 = MagicShaderHitEffect_constr_args2( /*0x60cbe5*/
                      v21,
                      (TESObjectREFR *)this,
                      enchantEffect,
                      kTerrainLODQuadRayDirectionZ);
            else
              v22 = 0; /*0x60cbe9*/
            Destructor = v22->super.super.vtable[1].super.super.Destructor;// Fatal OOM path: the magic-hit-effect allocation result is dereferenced immediately; null does not propagate as a constructor failure return. /*0x60cbed*/
            LOBYTE(v46) = 0; /*0x60cbf2*/
            if ( ((unsigned __int8 (__thiscall *)(MagicShaderHitEffect *))Destructor)(v22) ) /*0x60cbf7*/
              ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v22->super.super); /*0x60cc03*/
            else
              v22->super.super.vtable->super.super.Destructor((NiRefObject *)v22, 1); /*0x60cc12*/
          }
        }
      }
    }
  }
  TESObjectREFR_SetPosition((TESObjectREFR *)this, originX, originY, originZ); /*0x60cc30*/
  v24 = (HighProcess *)FormHeapAlloc(0x2ECu);   // Allocate a HighProcess for the new projectile. On allocation failure native code stores a null process and continues local construction; there is no error return. /*0x60cc3a*/
  LOBYTE(v46) = 2; /*0x60cc48*/
  if ( v24 ) /*0x60cc4d*/
    v25 = HighProcess::HighProcess(v24); /*0x60cc51*/
  else
    v25 = 0;                                    // HighProcess allocation failed: store null at MobileObject+0x58 and continue. If construction completes, Actor_GetProcessLevel returns -1 and requested level-0 manager insertion is silently rejected. /*0x60cc58*/
  LOBYTE(v46) = 0; /*0x60cc63*/
  this->super.process = v25; /*0x60cc68*/
  TESObjectREFR_SetRotationZ((TESObjectREFR *)this, yawZ); /*0x60cc6b*/
  TESObjectREFR_SetRotationX((TESObjectREFR *)this, pitchX); /*0x60cc79*/
  TESObjectREFR_SetRotationY((TESObjectREFR *)this, 0.0); /*0x60cc86*/
  if ( shooter ) /*0x60cc8d*/
  {
    DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(shooter); /*0x60cc91*/
    MobileObject_ChangeCell((TESObjectREFR *)this, DwordAtOffset40); /*0x60cc99*/
  }
  TESObjectREFR_SetBaseForm((TESObjectREFR *)this, baseForm);// Hard recovery boundary: set ArrowProjectile.baseForm to ammoEntry->type. weaponEntry contributes damage/enchantment/poison/flags only and its WEAP form is not retained by the projectile. /*0x60cca5*/
  NiNode = (NiObjectNET *)MobileObject_GenerateNiNode(&this->super); /*0x60ccac*/
  if ( NiNode ) /*0x60ccb3*/
    NiObjectNET_SetName(NiNode, "Arrow"); /*0x60ccbc*/
  ArrowProjectile_InitializeNodeLocalTransformAndCollision(this);// Initialize the generated projectile root's local transform and collision filter, then ensure recursive alpha properties. This call does not perform a local-to-world transform update. /*0x60ccc3*/
  ArrowProjectile_EnsureCharacterProxy(this, shooter, attackStrength); /*0x60ccd2*/
  v45.x = -flt_A7DEB4; /*0x60cce1*/
  v45.y = 0.0; /*0x60cce7*/
  v45.z = 0.0; /*0x60cceb*/
  v45.w = 0.0; /*0x60ccef*/
  CharProxy = MobileObject_GetCharProxy(&this->super); /*0x60ccf3*/
  if ( CharProxy ) /*0x60ccfa*/
  {
    v29 = *((_OWORD **)CharProxy + 2); /*0x60ccfc*/
    if ( v29 ) /*0x60cd01*/
      sub_8AC0B0(v29, &v45); /*0x60cd0a*/
  }
  v30 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x60cd12*/
  TESObjectCELL_AddReference(v30, (TESObjectREFR *)this); /*0x60cd19*/
  ArrowProjectile_CheckPlayerLaunchObstruction(this); /*0x60cd20*/
  v31 = LODWORD(g_GameSettingStringPointers_B36CD8[0xFE]); /*0x60cd2a*/
  v32 = g_liveArrowProjectileCount + 1; /*0x60cd30*/
  v33 = v32 <= SLODWORD(g_GameSettingStringPointers_B36CD8[0xFE]); /*0x60cd33*/
  g_liveArrowProjectileCount = v32; /*0x60cd35*/
  if ( !v33 ) /*0x60cd3a*/
    ArrowProjectile_PruneOldestSettled(v31, 0); /*0x60cd3f*/
  return this; /*0x60cd49*/
}
