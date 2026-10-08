// Handle collision-filter layer/category 1 without a TESObjectREFR target. Builds state-2 world placement data from impact position/normal, records material effects, and applies all retained projectile magic items through the shooter with a null casting target.
void __thiscall ArrowProjectile_HandleCollisionLayer1Impact(
        ArrowProjectile *this,
        const NiPoint3 *impactPosition,
        const NiPoint3 *impactNormal)
{
  ArrowProjectile_CollisionData *v4; // eax
  float unk08C; // ecx
  float unk090; // edx
  double v7; // st7
  double v8; // st6
  double v9; // rt0
  double v10; // st6
  ArrowProjectile_CollisionData *unk05C; // eax
  float x; // edx
  double v13; // st7
  float *v14; // eax
  float y; // ecx
  double z; // st7
  double v17; // st7
  float *v18; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v20; // eax
  float *LinearVelocityPtr; // eax
  __m128 v22; // xmm0
  double v23; // st6
  MobileObjectVtbl *vtbl; // edx
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  int v26; // eax
  NiTransform *v27; // eax
  float *v28; // ecx
  int v29; // edi
  float *unk00; // eax
  double v31; // st5
  double v32; // st6
  double v33; // st7
  Actor *shooter; // ecx
  CombatController *v35; // eax
  Actor *v36; // ecx
  EnchantmentItem *arrowEnch; // eax
  TESForm *v38; // eax
  AlchemyItem *poison; // edx
  TESForm *v40; // eax
  EnchantmentItem *bowEnch; // edx
  TESForm *v42; // eax
  int v43; // [esp+18h] [ebp-50h]
  int v44; // [esp+1Ch] [ebp-4Ch]
  int v45; // [esp+20h] [ebp-48h]
  int v46; // [esp+24h] [ebp-44h]
  int v47; // [esp+28h] [ebp-40h]
  int v48; // [esp+2Ch] [ebp-3Ch]
  float v49; // [esp+30h] [ebp-38h]
  int v50; // [esp+30h] [ebp-38h]
  NiPoint3 v51; // [esp+34h] [ebp-34h] BYREF
  int v52; // [esp+40h] [ebp-28h]
  float speed; // [esp+44h] [ebp-24h]
  __m128 v54; // [esp+48h] [ebp-20h] BYREF

  v4 = (ArrowProjectile_CollisionData *)FormHeapAlloc(0x54u); /*0x60bae2*/
  unk08C = this->unk08C; /*0x60bae7*/
  unk090 = this->unk090; /*0x60baed*/
  this->unk05C = v4; /*0x60baf3*/
  v54.m128_i32[0] = LODWORD(this->unk088); /*0x60bafc*/
  *(unsigned __int64 *)((char *)v54.m128_u64 + 4) = __PAIR64__(LODWORD(unk090), LODWORD(unk08C)); /*0x60bb05*/
  NiPoint3_NormalizeApproximateInPlace(v54.m128_f32); /*0x60bb0d*/
  v7 = v54.m128_f32[0]; /*0x60bb12*/
  v8 = dbl_A2F920; /*0x60bb19*/
  LODWORD(this->unk05C->unk00[0]) = 2;          // Collision-filter layer/category 1 impact initializes state 2 with no target reference/node. /*0x60bb1f*/
  v9 = v8; /*0x60bb2a*/
  this->unk05C->unk2C[0] = 0.0; /*0x60bb2e*/
  v54.m128_f32[0] = v7 * v8; /*0x60bb31*/
  v10 = v54.m128_f32[1]; /*0x60bb38*/
  this->unk05C->ninode = 0; /*0x60bb3c*/
  unk05C = this->unk05C; /*0x60bb41*/
  x = impactNormal->x; /*0x60bb47*/
  v54.m128_f32[1] = v10 * v9; /*0x60bb49*/
  unk05C->unk00[4] = x; /*0x60bb4d*/
  v13 = v9 * v54.m128_f32[2]; /*0x60bb53*/
  unk05C->unk00[5] = impactNormal->y; /*0x60bb57*/
  unk05C->unk00[6] = impactNormal->z; /*0x60bb5d*/
  v54.m128_f32[2] = v13; /*0x60bb60*/
  v14 = &this->unk05C->unk00[1]; /*0x60bb70*/
  v51.x = impactPosition->x + v54.m128_f32[0]; /*0x60bb76*/
  v51.y = impactPosition->y + v54.m128_f32[1]; /*0x60bb85*/
  y = v51.y; /*0x60bb89*/
  z = impactPosition->z; /*0x60bb8d*/
  *v14 = v51.x; /*0x60bb90*/
  v17 = z + v54.m128_f32[2]; /*0x60bb92*/
  v14[1] = y; /*0x60bb96*/
  v51.z = v17; /*0x60bba3*/
  v14[2] = v51.z; /*0x60bbab*/
  qmemcpy(&this->unk05C->unk2C[1], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x60bbb4*/
  v18 = &this->unk05C->unk00[7]; /*0x60bbbf*/
  *v18 = g_zeroNiPoint3.x; /*0x60bbc2*/
  v18[1] = g_zeroNiPoint3.y; /*0x60bbca*/
  v18[2] = g_zeroNiPoint3.z; /*0x60bbd3*/
  if ( MobileObject_GetCharProxy(&this->super) ) /*0x60bbd8*/
  {
    CharProxy = MobileObject_GetCharProxy(&this->super); /*0x60bbe7*/
    if ( CharProxy && (v20 = *((char **)CharProxy + 2)) != 0 ) /*0x60bbf5*/
      LinearVelocityPtr = (float *)bhkWorldObject_GetLinearVelocityPtr(v20); /*0x60bbf9*/
    else
      LinearVelocityPtr = &OB_ShaderConstantStorage_010201A0[0x1870B]; /*0x60bc00*/
    v22 = *(__m128 *)LinearVelocityPtr; /*0x60bc05*/
    v51.x = *LinearVelocityPtr; /*0x60bc08*/
    v23 = flt_A7DEB4; /*0x60bc12*/
    v54 = v22; /*0x60bc18*/
    if ( -v23 == v51.x ) /*0x60bc26*/
    {
      if ( this->super.vtbl->super.GetNiNode(this) ) /*0x60bc32*/
      {
        vtbl = this->super.vtbl; /*0x60bc3b*/
        speed = this->speed; /*0x60bc3d*/
        GetNiNode = vtbl->super.GetNiNode; /*0x60bc41*/
        v51.x = stru_B258DC.x * speed; /*0x60bc59*/
        v51.y = stru_B258DC.y * speed; /*0x60bc65*/
        v51.z = speed * stru_B258DC.z; /*0x60bc6f*/
        v26 = (int)GetNiNode((TESObjectREFR *)this); /*0x60bc73*/
        v27 = sub_7101F0((NiTransform *)(v26 + 0x64), (NiTransform *)&v54, &v51); /*0x60bc82*/
        v28 = &this->unk05C->unk00[7]; /*0x60bc8c*/
        *v28 = v27->rot.data[0][0]; /*0x60bc8f*/
        v28[1] = v27->rot.data[0][1]; /*0x60bc94*/
        v28[2] = v27->rot.data[0][2]; /*0x60bc9a*/
      }
    }
    else
    {
      HavokVector_ToWorldVector(&this->unk05C->unk00[7], &v54); /*0x60bcab*/
    }
  }
  v29 = sub_440AC0(MEMORY[0xB333A0], &impactPosition->x); /*0x60bcc3*/
  switch ( v29 ) /*0x60bcd1*/
  {
    case 0: /*0x60bcd1*/
    case 3: /*0x60bcd1*/
    case 5: /*0x60bcd1*/
    case 0xA: /*0x60bcd1*/
    case 0xB: /*0x60bcd1*/
    case 0xD: /*0x60bcd1*/
    case 0xF: /*0x60bcd1*/
    case 0x12: /*0x60bcd1*/
    case 0x14: /*0x60bcd1*/
    case 0x19: /*0x60bcd1*/
    case 0x1A: /*0x60bcd1*/
    case 0x1C: /*0x60bcd1*/
    case 0x1E: /*0x60bcd1*/
      ArrowProjectile_SetFreeImpactState3(&this->super, (int)impactPosition, (int)impactNormal); /*0x60bcdf*/
      break; /*0x60bcdf*/
    default:
      break;
  }
  unk00 = this->unk05C->unk00; /*0x60bce4*/
  this->unk060 = 1; /*0x60bce7*/
  v31 = unk00[7] * unk00[7]; /*0x60bd14*/
  v32 = unk00[9] * unk00[9]; /*0x60bd1e*/
  v49 = unk00[8] * unk00[8] + v31 + v32; /*0x60bd22*/
  *(float *)&v50 = sqrt(v49); /*0x60bd2f*/
  v33 = *(float *)&v50; /*0x60bd33*/
  sub_609D50( /*0x60bd3d*/
    this,
    v31,
    *(float *)&v50,
    *(float *)&v50,
    LODWORD(impactPosition->x),
    LODWORD(impactPosition->y),
    LODWORD(impactPosition->z),
    0,
    v29);
  shooter = this->shooter; /*0x60bd42*/
  if ( shooter ) /*0x60bd47*/
  {
    if ( shooter->vtbl->GetCombatController(shooter) ) /*0x60bd51*/
    {
      v35 = this->shooter->vtbl->GetCombatController(this->shooter); /*0x60bd65*/
      sub_618120((int)v35, v29, &impactPosition->x, 0.0); /*0x60bd69*/
    }
  }
  v36 = this->shooter; /*0x60bd6e*/
  if ( v36 ) /*0x60bd73*/
  {
    arrowEnch = this->arrowEnch;                // Layer-1 impact AMMO enchantment path: ArrowProjectile+0x7C, applied through shooter MagicCaster with no reference target. /*0x60bd79*/
    if ( arrowEnch ) /*0x60bd7e*/
    {
      v36->members.magicCaster.vtbl->SetActiveMagicItem( /*0x60bd8d*/
        &v36->members.magicCaster,
        (EnchantmentItem *)((char *)arrowEnch + 0x18));
      this->shooter->members.magicCaster.vtbl->SetCastingTarget(&this->shooter->members.magicCaster, 0); /*0x60bd9d*/
      v38 = this->super.vtbl->super.GetBaseForm(this); /*0x60bda9*/
      MagicCaster_UseActiveMagicItem( /*0x60bdb2*/
        &this->shooter->members.magicCaster.vtbl,
        v31,
        v33,
        v32,
        (int)v38,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v50,
        SLODWORD(v51.x),
        SLODWORD(v51.y),
        SLODWORD(v51.z),
        v52);                                   // Collision-layer-1 impact applies projectile-held AMMO enchantment through shooter MagicCaster.
    }
    poison = this->poison;                      // Layer-1 impact poison path: ArrowProjectile+0x84, applied through shooter MagicCaster with no reference target. /*0x60bdb7*/
    if ( poison ) /*0x60bdbf*/
    {
      this->shooter->members.magicCaster.vtbl->SetActiveMagicItem( /*0x60bdd0*/
        &this->shooter->members.magicCaster,
        (AlchemyItem *)((char *)poison + 0x24));
      this->shooter->members.magicCaster.vtbl->SetCastingTarget(&this->shooter->members.magicCaster, 0); /*0x60bddf*/
      v40 = this->super.vtbl->super.GetBaseForm(this); /*0x60bdeb*/
      MagicCaster_UseActiveMagicItem( /*0x60bdf4*/
        &this->shooter->members.magicCaster.vtbl,
        v31,
        v33,
        v32,
        (int)v40,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v50,
        SLODWORD(v51.x),
        SLODWORD(v51.y),
        SLODWORD(v51.z),
        v52);                                   // Collision-layer-1 impact applies projectile-held poison through shooter MagicCaster.
    }
    bowEnch = this->bowEnch;                    // Layer-1 impact bow enchantment path: ArrowProjectile+0x80, applied through shooter MagicCaster with no reference target. /*0x60bdf9*/
    if ( bowEnch ) /*0x60be01*/
    {
      this->shooter->members.magicCaster.vtbl->SetActiveMagicItem( /*0x60be12*/
        &this->shooter->members.magicCaster,
        (EnchantmentItem *)((char *)bowEnch + 0x18));
      this->shooter->members.magicCaster.vtbl->SetCastingTarget(&this->shooter->members.magicCaster, 0); /*0x60be21*/
      v42 = this->super.vtbl->super.GetBaseForm(this); /*0x60be2d*/
      MagicCaster_UseActiveMagicItem( /*0x60be36*/
        &this->shooter->members.magicCaster.vtbl,
        v31,
        v33,
        v32,
        (int)v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v50,
        SLODWORD(v51.x),
        SLODWORD(v51.y),
        SLODWORD(v51.z),
        v52);                                   // Collision-layer-1 impact applies projectile-held bow enchantment through shooter MagicCaster.
    }
  }
  if ( this->arrowEnch ) /*0x60be3b*/
    this->unk060 = 3; /*0x60be41*/
}
