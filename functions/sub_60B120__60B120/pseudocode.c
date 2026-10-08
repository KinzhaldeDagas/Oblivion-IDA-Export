// Resolve a non-Actor TESObjectREFR impact from world position/normal and the contacted Havok collision object. Builds state-1 attachment data, ray-resolves material/subshape, applies retained AMMO enchantment, poison, then bow enchantment through the shooter's MagicCaster, restores prior caster state, emits hit events, applies impulse, and selects attached or free-impact state.
void __thiscall ArrowProjectile_HandleReferenceImpact(
        ArrowProjectile *this,
        const NiPoint3 *impactPosition,
        const NiPoint3 *impactNormal,
        TESObjectREFR *struckReference,
        void *collisionObject)
{
  ArrowProjectile_CollisionData *v6; // eax
  float *v7; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v9; // eax
  char *LinearVelocityPtr; // eax
  __int128 v11; // xmm0
  double v12; // st6
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  double speed; // st7
  int v15; // eax
  NiTransform *v16; // eax
  float *v17; // ecx
  NiNode *(__thiscall *v18)(TESObjectREFR *); // edx
  int v19; // eax
  TESChildCELL *v20; // esi
  Actor *shooter; // ecx
  Actor *v22; // edi
  int v23; // eax
  TESForm *v24; // eax
  Atmosphere *v25; // eax
  NiAVObject *v26; // eax
  ArrowProjectile_CollisionData *unk05C; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  int v29; // eax
  int *v30; // eax
  int v31; // eax
  float *v32; // esi
  int v33; // eax
  __m128 *v34; // eax
  float v35; // edi
  int v36; // eax
  ArrowProjectile_CollisionData *v37; // eax
  double v38; // st7
  double v39; // st5
  double v40; // st6
  double v41; // st7
  const char *v42; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  UInt32 v44; // eax
  float *v45; // eax
  Actor *v46; // ecx
  int v47; // eax
  MagicCaster *p_magicCaster; // ecx
  EnchantmentItem *arrowEnch; // eax
  void (__thiscall **p_SetCastingTarget)(MagicCaster *, MagicTarget *); // edi
  int v51; // eax
  TESForm *v52; // eax
  AlchemyItem *poison; // edx
  void (__thiscall **v54)(MagicCaster *, MagicTarget *); // edi
  int v55; // eax
  TESForm *v56; // eax
  EnchantmentItem *bowEnch; // edx
  void (__thiscall **v58)(MagicCaster *, MagicTarget *); // edi
  int v59; // eax
  TESForm *v60; // eax
  TESChildCELL *v61; // edi
  TESObjectCELL *v62; // eax
  int v63; // eax
  _DWORD *v64; // ecx
  NiTransform *p_m_worldTransform; // edi
  NiTransform *v66; // eax
  int v67; // eax
  float x; // esi
  float y; // eax
  float z; // edx
  float v71; // [esp+0h] [ebp-260h]
  int v72; // [esp+4h] [ebp-25Ch]
  float *a2; // [esp+24h] [ebp-23Ch]
  float *a2a; // [esp+24h] [ebp-23Ch]
  signed int a2b; // [esp+24h] [ebp-23Ch]
  int v76; // [esp+2Ch] [ebp-234h]
  int v77; // [esp+30h] [ebp-230h]
  int v78; // [esp+34h] [ebp-22Ch]
  int v79; // [esp+38h] [ebp-228h]
  int v80; // [esp+3Ch] [ebp-224h]
  int v81; // [esp+40h] [ebp-220h]
  int v82; // [esp+44h] [ebp-21Ch]
  float v83; // [esp+48h] [ebp-218h]
  float v84; // [esp+48h] [ebp-218h]
  float v85; // [esp+48h] [ebp-218h]
  float collisionObjectb; // [esp+4Ch] [ebp-214h]
  _DWORD *collisionObjecta; // [esp+4Ch] [ebp-214h]
  float v88; // [esp+50h] [ebp-210h]
  NiAVObject *v89; // [esp+50h] [ebp-210h]
  float v90; // [esp+54h] [ebp-20Ch]
  void *v91; // [esp+54h] [ebp-20Ch]
  MagicTarget *v92; // [esp+54h] [ebp-20Ch]
  NiPoint3 a3; // [esp+58h] [ebp-208h] BYREF
  float v94; // [esp+64h] [ebp-1FCh]
  TESChildCELL *v95; // [esp+68h] [ebp-1F8h]
  int v96; // [esp+6Ch] [ebp-1F4h]
  const NiPoint3 *v97; // [esp+70h] [ebp-1F0h]
  NiPoint3 a4; // [esp+74h] [ebp-1ECh] BYREF
  int v99; // [esp+80h] [ebp-1E0h] BYREF
  NiTransform normalZ; // [esp+84h] [ebp-1DCh] BYREF
  unsigned int v101; // [esp+C0h] [ebp-1A0h]
  float v102; // [esp+C4h] [ebp-19Ch]
  __m128 v103; // [esp+D0h] [ebp-190h] BYREF
  __m128 v104; // [esp+E0h] [ebp-180h] BYREF
  int v105; // [esp+F0h] [ebp-170h]
  int v106; // [esp+F4h] [ebp-16Ch]
  __m128 v107[4]; // [esp+100h] [ebp-160h] BYREF
  __m128 v108[3]; // [esp+140h] [ebp-120h] BYREF
  __m128 v109; // [esp+170h] [ebp-F0h] BYREF
  __m128 v110[4]; // [esp+180h] [ebp-E0h] BYREF
  __m128 v111[4]; // [esp+1C0h] [ebp-A0h] BYREF
  __m128 v112[4]; // [esp+200h] [ebp-60h] BYREF
  unsigned int v113; // [esp+25Ch] [ebp-4h]
  NiPoint3 v114; // 0:^10.12
  NiPoint3 v115; // 0:^1C.12

  v97 = impactNormal; /*0x60b174*/
  v95 = (TESChildCELL *)struckReference; /*0x60b178*/
  v6 = (ArrowProjectile_CollisionData *)FormHeapAlloc(0x54u); /*0x60b180*/
  this->unk05C = v6; /*0x60b185*/
  LODWORD(v6->unk00[0]) = 1;                    // Resolved non-Actor TESObjectREFR impact initializes collision record state 1. /*0x60b188*/
  this->unk05C->unk2C[0] = 0.0; /*0x60b193*/
  this->unk05C->ninode = 0; /*0x60b199*/
  *(NiPoint3 *)&this->unk05C->unk00[4] = *impactNormal; /*0x60b1a1*/
  *(NiPoint3 *)&this->unk05C->unk00[1] = *impactPosition; /*0x60b1b8*/
  qmemcpy(&this->unk05C->unk2C[1], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x60b1da*/
  v7 = &this->unk05C->unk00[7]; /*0x60b1e5*/
  *v7 = g_zeroNiPoint3.x; /*0x60b1e8*/
  v7[1] = g_zeroNiPoint3.y; /*0x60b1f0*/
  v7[2] = g_zeroNiPoint3.z; /*0x60b1fe*/
  if ( MobileObject_GetCharProxy(&this->super) ) /*0x60b201*/
  {
    CharProxy = MobileObject_GetCharProxy(&this->super); /*0x60b210*/
    if ( CharProxy && (v9 = *((char **)CharProxy + 2)) != 0 ) /*0x60b21e*/
      LinearVelocityPtr = bhkWorldObject_GetLinearVelocityPtr(v9); /*0x60b222*/
    else
      LinearVelocityPtr = (char *)&OB_ShaderConstantStorage_010201A0[0x1870B]; /*0x60b229*/
    v11 = *(_OWORD *)LinearVelocityPtr; /*0x60b22e*/
    normalZ.rot.data[2][1] = *(float *)LinearVelocityPtr; /*0x60b231*/
    v12 = flt_A7DEB4; /*0x60b23b*/
    *(_OWORD *)&normalZ.rot.data[1][0] = v11; /*0x60b241*/
    if ( -v12 == normalZ.rot.data[2][1] ) /*0x60b24f*/
    {
      if ( this->super.vtbl->super.GetNiNode(this) ) /*0x60b25f*/
      {
        GetNiNode = this->super.vtbl->super.GetNiNode; /*0x60b272*/
        speed = this->speed; /*0x60b278*/
        v88 = speed * stru_B258DC.x; /*0x60b286*/
        v94 = speed * stru_B258DC.y; /*0x60b292*/
        collisionObjectb = speed * stru_B258DC.z; /*0x60b29c*/
        a3.x = v88; /*0x60b2a4*/
        a3.y = v94; /*0x60b2ac*/
        a3.z = collisionObjectb; /*0x60b2b4*/
        v15 = (int)GetNiNode((TESObjectREFR *)this); /*0x60b2b8*/
        v16 = sub_7101F0((NiTransform *)(v15 + 0x64), &normalZ, &a3); /*0x60b2c7*/
        v17 = &this->unk05C->unk00[7]; /*0x60b2d1*/
        *v17 = v16->rot.data[0][0]; /*0x60b2d4*/
        v17[1] = v16->rot.data[0][1]; /*0x60b2d9*/
        v17[2] = v16->rot.data[0][2]; /*0x60b2df*/
      }
    }
    else
    {
      HavokVector_ToWorldVector(&this->unk05C->unk00[7], (__m128 *)normalZ.rot.data[1]); /*0x60b2f0*/
    }
  }
  v18 = this->super.vtbl->super.GetNiNode; /*0x60b2fa*/
  this->unk060 = 1; /*0x60b302*/
  collisionObjecta = 0; /*0x60b309*/
  v19 = (int)v18((TESObjectREFR *)this); /*0x60b311*/
  v20 = v95;                                    // RealArenaTraining fidelity pass: ESI is loaded from the hit-ref argument/local used for both arrow event paths. /*0x60b313*/
  v89 = (NiAVObject *)v19; /*0x60b319*/
  if ( v95 && v19 ) /*0x60b325*/
  {
    shooter = this->shooter; /*0x60b32b*/
    if ( shooter ) /*0x60b330*/
    {
      if ( shooter->vtbl->GetCombatController(shooter) ) /*0x60b33a*/
      {
        v22 = this->shooter; /*0x60b348*/
        a2 = (float *)(*((int (__thiscall **)(TESChildCELL *))v20->vtbl + 0x5D))(v20); /*0x60b351*/
        v23 = (int)v22->vtbl->GetCombatController(v22); /*0x60b35c*/
        sub_618120(v23, (char)v22, a2, 0.0); /*0x60b360*/
      }
    }
    this->unk05C->ninode = (NiNode *)v20; /*0x60b368*/
    a2a = &this->unk05C->ninode->members.super.m_localTransform.rot.data[1][2]; /*0x60b37b*/
    v24 = this->super.vtbl->super.GetBaseForm(this); /*0x60b384*/
    Script_AddEventToExtraScript(v24, a2a, 0x100);// RealArenaTraining fidelity pass: first arrow Script_AddEventToExtraScript in sub_60B120; EBX is ArrowProjectile and ESI remains hit ref. /*0x60b387*/
    if ( collisionObject ) /*0x60b395*/
    {
      v25 = (Atmosphere *)sub_47FA60(*((int **)collisionObject + 2)); /*0x60b39b*/
      if ( v25 ) /*0x60b3a5*/
      {
        v26 = Shared_GetPointerAtOffset08(v25); /*0x60b3a9*/
        if ( v26 ) /*0x60b3b0*/
        {
          LODWORD(this->unk05C->unk2C[0]) = v26; /*0x60b3b5*/
          collisionObjecta = collisionObject; /*0x60b3b8*/
        }
      }
    }
    unk05C = this->unk05C; /*0x60b3bc*/
    if ( !LODWORD(unk05C->unk2C[0]) ) /*0x60b3bf*/
    {
      LODWORD(unk05C->unk2C[0]) = (TESChildCELL)v20[0xF].vtbl; /*0x60b3c8*/
      BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive((NiAVObject *)LODWORD(this->unk05C->unk2C[0])); /*0x60b3d2*/
      if ( !BhkCollisionObjectRecursive ) /*0x60b3de*/
      {
LABEL_33:
        FormHeapFree((unsigned int)this->unk05C); /*0x60b545*/
        this->unk05C = 0; /*0x60b551*/
        this->unk060 = 0; /*0x60b554*/
        return; /*0x60b557*/
      }
      collisionObjecta = (_DWORD *)BhkCollisionObjectRecursive[4]; /*0x60b3e3*/
    }
    if ( collisionObjecta && (v29 = collisionObjecta[2]) != 0 && (v30 = (int *)(v29 + 0x14)) != 0 && (v31 = *v30) != 0 ) /*0x60b3ff*/
      v32 = *(float **)(v31 + 8); /*0x60b401*/
    else
      v32 = 0; /*0x60b41d*/
    if ( collisionObjecta ) /*0x60b421*/
      v33 = collisionObjecta[2]; /*0x60b423*/
    else
      v33 = 0; /*0x60b428*/
    v34 = *(__m128 **)(v33 + 0x50); /*0x60b42a*/
    v107[0] = v34[1]; /*0x60b431*/
    v107[1] = v34[2]; /*0x60b43d*/
    v107[2] = v34[3]; /*0x60b449*/
    v107[3] = v34[4]; /*0x60b465*/
    sub_5398E0((int)v111, (float *)&v89->members.m_worldTransform); /*0x60b46d*/
    sub_8B1FF0(v110, v107, v111); /*0x60b48c*/
    v102 = 1.0; /*0x60b493*/
    normalZ.rot.data[1][0] = 0.0; /*0x60b4a1*/
    normalZ.rot.data[1][1] = flt_A6F3E0; /*0x60b4b4*/
    v105 = 0; /*0x60b4c0*/
    v106 = 0; /*0x60b4c7*/
    normalZ.rot.data[1][2] = 0.0; /*0x60b4ce*/
    v101 = 0xFFFFFFFF; /*0x60b4d2*/
    normalZ.rot.data[2][0] = 0.0; /*0x60b4dd*/
    normalZ.rot.data[2][1] = 0.0; /*0x60b4e1*/
    normalZ.rot.data[2][2] = flt_A6F3DC; /*0x60b4eb*/
    normalZ.pos.x = 0.0; /*0x60b4f2*/
    normalZ.pos.y = 0.0; /*0x60b4f9*/
    hkTransform_TransformPosition(&v103, v110, (__m128 *)normalZ.rot.data[1]); /*0x60b500*/
    hkTransform_TransformPosition(&v104, v110, (__m128 *)&normalZ.rot.data[2][1]); /*0x60b519*/
    sub_6077F0(v32, (int)&v103, (int)&normalZ.pos.z); /*0x60b530*/
    if ( v102 >= 1.0 ) /*0x60b543*/
      goto LABEL_33; /*0x60b543*/
    v35 = v32[4]; /*0x60b564*/
    v94 = v35; /*0x60b567*/
    if ( v101 != 0xFFFFFFFF ) /*0x60b56b*/
    {
      v36 = (*(int (__thiscall **)(float *))(*(_DWORD *)v32 + 0x88))(v32); /*0x60b577*/
      if ( v36 ) /*0x60b57b*/
      {
        v94 = COERCE_FLOAT((*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v36 + 0x9C))(v36, v101)); /*0x60b591*/
        v35 = v94; /*0x60b595*/
      }
      else
      {
        PrintError("The arrow raycast has returned a sub-shape key, but the shape was unable to find a shape collection"); /*0x60b59e*/
      }
    }
    v37 = this->unk05C; /*0x60b5a6*/
    v38 = v37->unk00[8]; /*0x60b5a9*/
    v37 = (ArrowProjectile_CollisionData *)((char *)v37 + 0x1C); /*0x60b5ac*/
    v39 = v37->unk00[0] * v37->unk00[0]; /*0x60b5bc*/
    v40 = v37->unk00[2] * v37->unk00[2]; /*0x60b5c0*/
    v83 = v38 * v38 + v39 + v40; /*0x60b5c4*/
    v84 = sqrt(v83); /*0x60b5d1*/
    sub_609D50( /*0x60b606*/
      this,
      v39,
      v84,
      v84,
      LODWORD(impactPosition->x),
      LODWORD(impactPosition->y),
      LODWORD(impactPosition->z),
      (int)collisionObjecta,
      SLOBYTE(v35));
    v90 = -this->unk088; /*0x60b617*/
    v85 = -this->unk08C; /*0x60b623*/
    *(float *)&v96 = -this->unk090; /*0x60b62f*/
    a3.x = v90; /*0x60b637*/
    a3.y = v85; /*0x60b63f*/
    a3.z = *(float *)&v96; /*0x60b647*/
    Vector3_NormalizeInPlace(&a3.x); /*0x60b64b*/
    a3.x = a3.x + v97->x; /*0x60b660*/
    a3.y = v97->y + a3.y; /*0x60b66b*/
    a3.z = v97->z + a3.z; /*0x60b676*/
    v41 = Vector3_NormalizeInPlace(&a3.x); /*0x60b67a*/
    v42 = (const char *)ImpactMaterial_GetHitParticlePath(SLODWORD(v35)); /*0x60b687*/
    if ( v42 ) /*0x60b68e*/
    {
      Shared_GetDwordAtOffset40(this); /*0x60b696*/
      a2b = sub_4C9BE0((TESObjectREFR *)this); /*0x60b6a6*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x60b6a9*/
      *(float *)&v96 = COERCE_FLOAT(sub_441800(DwordAtOffset40, a2b, 3u)); /*0x60b6b7*/
      v91 = (void *)FormHeapAlloc(0x20u); /*0x60b6c3*/
      v113 = 0; /*0x60b6c9*/
      if ( v91 ) /*0x60b6d4*/
      {
        v41 = flt_A31E2C; /*0x60b6e8*/
        v115 = *impactPosition; /*0x60b6ee*/
        v114 = a3; /*0x60b706*/
        v72 = v96; /*0x60b714*/
        v71 = flt_A31E2C; /*0x60b71b*/
        v44 = Shared_GetDwordAtOffset40(this); /*0x60b71e*/
        v45 = BSTempEffectParticle_Constructor( /*0x60b728*/
                v91,
                v44,
                v71,
                v72,
                v42,
                v114.x,
                v114.y,
                SLODWORD(v114.z),
                v115.x,
                LODWORD(v115.y),
                (const char *)LODWORD(v115.z),
                1.0,
                0);
      }
      else
      {
        v45 = 0; /*0x60b72f*/
      }
      v113 = 0xFFFFFFFF; /*0x60b737*/
      ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v45); /*0x60b742*/
    }
    v46 = this->shooter;                        // Temporarily save shooter MagicCaster active item and target before applying projectile-retained effects; both are restored after AMMO enchantment, poison, and bow enchantment processing. /*0x60b747*/
    if ( v46 ) /*0x60b74c*/
    {
      *(float *)&v47 = COERCE_FLOAT((int)v46->members.magicCaster.vtbl->GetActiveMagicItem(&v46->members.magicCaster)); /*0x60b75b*/
      p_magicCaster = &this->shooter->members.magicCaster; /*0x60b760*/
      v96 = v47; /*0x60b763*/
      v92 = (MagicTarget *)((int (__thiscall *)(MagicCaster *))p_magicCaster->vtbl->GetCastingTarget)(p_magicCaster); /*0x60b76e*/
      arrowEnch = this->arrowEnch;              // Apply ArrowProjectile+0x7C AMMO EnchantmentItem retained from the AMMO base form. /*0x60b772*/
      if ( arrowEnch ) /*0x60b777*/
      {
        this->shooter->members.magicCaster.vtbl->SetActiveMagicItem( /*0x60b789*/
          &this->shooter->members.magicCaster,
          (EnchantmentItem *)((char *)arrowEnch + 0x18));
        p_SetCastingTarget = &this->shooter->members.magicCaster.vtbl->SetCastingTarget; /*0x60b79d*/
        v51 = (*((int (__thiscall **)(TESChildCELL *))v95->vtbl + 0x49))(v95); /*0x60b7a0*/
        (*p_SetCastingTarget)(&this->shooter->members.magicCaster, (MagicTarget *)v51); /*0x60b7ab*/
        v52 = this->super.vtbl->super.GetBaseForm(this); /*0x60b7b7*/
        MagicCaster_UseActiveMagicItem( /*0x60b7c0*/
          &this->shooter->members.magicCaster.vtbl,
          v39,
          v41,
          v40,
          (int)v52,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          SLODWORD(v85),
          (int)collisionObjecta,
          (int)v89,
          (int)v92);                            // Non-Actor reference impact invokes shooter MagicCaster with projectile-held AMMO enchantment.
      }
      poison = this->poison;                    // Apply ArrowProjectile+0x84 AlchemyItem poison retained from the equipped weapon; poison was already removed from that weapon at release. /*0x60b7c5*/
      if ( poison ) /*0x60b7cd*/
      {
        this->shooter->members.magicCaster.vtbl->SetActiveMagicItem( /*0x60b7de*/
          &this->shooter->members.magicCaster,
          (AlchemyItem *)((char *)poison + 0x24));
        v54 = &this->shooter->members.magicCaster.vtbl->SetCastingTarget; /*0x60b7f2*/
        v55 = (*((int (__thiscall **)(TESChildCELL *))v95->vtbl + 0x49))(v95); /*0x60b7f5*/
        (*v54)(&this->shooter->members.magicCaster, (MagicTarget *)v55); /*0x60b800*/
        v56 = this->super.vtbl->super.GetBaseForm(this); /*0x60b80c*/
        MagicCaster_UseActiveMagicItem( /*0x60b815*/
          &this->shooter->members.magicCaster.vtbl,
          v39,
          v41,
          v40,
          (int)v56,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          SLODWORD(v85),
          (int)collisionObjecta,
          (int)v89,
          (int)v92);                            // Non-Actor reference impact invokes shooter MagicCaster with projectile-held poison.
      }
      bowEnch = this->bowEnch;                  // Apply ArrowProjectile+0x80 bow EnchantmentItem retained only after successful release-time charge payment. /*0x60b81a*/
      if ( bowEnch ) /*0x60b822*/
      {
        this->shooter->members.magicCaster.vtbl->SetActiveMagicItem( /*0x60b833*/
          &this->shooter->members.magicCaster,
          (EnchantmentItem *)((char *)bowEnch + 0x18));
        v58 = &this->shooter->members.magicCaster.vtbl->SetCastingTarget; /*0x60b847*/
        v59 = (*((int (__thiscall **)(TESChildCELL *))v95->vtbl + 0x49))(v95); /*0x60b84a*/
        (*v58)(&this->shooter->members.magicCaster, (MagicTarget *)v59);// Non-Actor reference impact invokes shooter MagicCaster with projectile-held bow enchantment. /*0x60b855*/
        v60 = this->super.vtbl->super.GetBaseForm(this); /*0x60b861*/
        MagicCaster_UseActiveMagicItem( /*0x60b86a*/
          &this->shooter->members.magicCaster.vtbl,
          v39,
          v41,
          v40,
          (int)v60,
          v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          SLODWORD(v85),
          (int)collisionObjecta,
          (int)v89,
          (int)v92);
      }
      this->shooter->members.magicCaster.vtbl->SetActiveMagicItem(&this->shooter->members.magicCaster, (MagicItem *)v96); /*0x60b87f*/
      this->shooter->members.magicCaster.vtbl->SetCastingTarget(&this->shooter->members.magicCaster, v92); /*0x60b892*/
    }
    v61 = v95;                                  // RealArenaTraining fidelity pass: EDI is reloaded from the same hit-ref local before the static object event. /*0x60b894*/
    v62 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v95); /*0x60b89a*/
    if ( v62 && (sub_4440C0(v62), v63) ) /*0x60b8ac*/
      v64 = *(_DWORD **)(v63 + 0x24); /*0x60b8ae*/
    else
      v64 = 0; /*0x60b8b3*/
    if ( v64 ) /*0x60b8b7*/
    {
      if ( sub_536AE0(v64, (int)v61) ) /*0x60b8ba*/
      {
        if ( v61 != (TESChildCELL *)0xFFFFFFBC ) /*0x60b8c8*/
          Script_AddEventToExtraScript(v61, &v61[0x11], 0x10000000);// RealArenaTraining fidelity pass: second arrow event in the same collision function; EBX is the same ArrowProjectile and EDI is the same hit ref, so plugin suppresses duplicate training by arrow+target identity rather than time. /*0x60b8d1*/
      }
    }
    if ( this->arrowEnch ) /*0x60b8d9*/
      this->unk060 = 3; /*0x60b8df*/
    p_m_worldTransform = &v89->members.m_worldTransform; /*0x60b8f3*/
    v66 = sub_7101F0(&v89->members.m_worldTransform, &normalZ, &stru_B258DC); /*0x60b8f9*/
    ArrowProjectile_ApplyImpactImpulseToCollision( /*0x60b92f*/
      this,
      impactPosition->x,
      impactPosition->y,
      impactPosition->z,
      v66->rot.data[0][0],
      v66->rot.data[0][1],
      v66->rot.data[0][2],
      collisionObjecta);
    switch ( LODWORD(v94) ) /*0x60b944*/
    {
      case 0: /*0x60b944*/
      case 3: /*0x60b944*/
      case 5: /*0x60b944*/
      case 0xA: /*0x60b944*/
      case 0xB: /*0x60b944*/
      case 0xD: /*0x60b944*/
      case 0xF: /*0x60b944*/
      case 0x12: /*0x60b944*/
      case 0x14: /*0x60b944*/
      case 0x19: /*0x60b944*/
      case 0x1A: /*0x60b944*/
      case 0x1C: /*0x60b944*/
      case 0x1E: /*0x60b944*/
        goto LABEL_66;
      default:
        v67 = *sub_497340(collisionObjecta, &v99) & 0x3F; /*0x60b965*/
        if ( v67 && (v67 <= 3 || v67 > 6) ) /*0x60b976*/
        {
          a4.x = 0.0; /*0x60b982*/
          a4.y = v102 * dbl_A687B0 - dbl_A3F428; /*0x60b9a1*/
          a4.z = 0.0; /*0x60b9a5*/
          a4.y = a4.y + dbl_A2F910; /*0x60b9b3*/
          NiTransform_TransformPoint(p_m_worldTransform, &a3.x, &a4); /*0x60b9b7*/
          x = a3.x; /*0x60b9bc*/
          TESObjectREFR_SetPosition((TESObjectREFR *)this, a3.x, a3.y, a3.z); /*0x60b9d7*/
          y = a3.y; /*0x60b9e2*/
          z = a3.z; /*0x60b9e6*/
          v89->members.m_localTransform.pos.x = x; /*0x60b9ec*/
          v89->members.m_localTransform.pos.y = y; /*0x60b9f0*/
          v89->members.m_localTransform.pos.z = z; /*0x60b9f6*/
          NiAVObject_UpdateNiAVObject(v89, 0.0, 0); /*0x60b9f9*/
          sub_5398E0((int)v112, (float *)p_m_worldTransform); /*0x60ba07*/
          sub_8B1FF0(v108, v107, v112); /*0x60ba26*/
          HavokVector_ToWorldVector(&this->unk05C->unk00[1], &v109); /*0x60ba3a*/
          sub_607740((int)&this->unk05C->unk2C[1], v108); /*0x60ba4e*/
        }
        else
        {
LABEL_66:
          ArrowProjectile_SetFreeImpactState3(&this->super, (int)impactPosition, (int)v97); /*0x60ba58*/
        }
        break; /*0x60ba56*/
    }
  }
}
