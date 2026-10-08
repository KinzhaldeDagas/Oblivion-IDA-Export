// Projectile lifecycle/settling state machine never replaces the AMMO base assigned by construction. A later ordinary pickup therefore remains reference-based AMMO recovery.
void __thiscall ArrowProjectile_UpdateFlightAndLifecycle(ArrowProjectile *this, float deltaTime)
{                                               // Retry deferred embedded-collision post-load fixup (+0x94). Wait while a state 0/1 collision target exists but its 3D root (+0x3C) is still absent.
  ArrowProjectile_CollisionData *unk05C; // eax
  NiNode *ninode; // eax
  void (__thiscall *Unk_17)(TESForm *); // edx
  double v6; // st7
  NiAVObject *v7; // ebp
  double v8; // st6
  MobileObjectVtbl *vtbl; // edx
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v11; // eax
  float v12; // ecx
  float v13; // edx
  float v14; // eax
  bhkCharacterProxy *CharProxy; // eax
  MobileObjectVtbl *v16; // edx
  float *(__thiscall *v17)(TESObjectREFR *); // eax
  double v18; // st7
  double v19; // st7
  UInt32 unk060; // eax
  UInt32 v21; // esi
  float *v22; // eax
  float v23; // edx
  float v24; // ecx
  float v25; // edx
  double v26; // st7
  double v27; // st7
  double v28; // st7
  UInt32 v29; // ecx
  ArrowProjectile_CollisionData *v30; // eax
  float v31; // ecx
  NiNode *v32; // ecx
  UInt32 DwordAtOffset40; // esi
  NiNode *v34; // eax
  double v35; // st6
  MobileObjectVtbl *v36; // eax
  UInt32 unk098; // [esp+18h] [ebp-74h]
  double unk090; // [esp+30h] [ebp-5Ch] BYREF
  float v39; // [esp+38h] [ebp-54h]
  float v40; // [esp+3Ch] [ebp-50h] BYREF
  float v41; // [esp+40h] [ebp-4Ch] BYREF
  float v42; // [esp+44h] [ebp-48h]
  float v43; // [esp+48h] [ebp-44h]
  float v44; // [esp+4Ch] [ebp-40h]
  float v45; // [esp+50h] [ebp-3Ch]
  float v46; // [esp+54h] [ebp-38h]
  float v47; // [esp+58h] [ebp-34h]
  float a3[3]; // [esp+5Ch] [ebp-30h] BYREF
  float v49[9]; // [esp+68h] [ebp-24h] BYREF

  if ( LOBYTE(this->unk094) ) /*0x60c177*/
  {
    unk05C = this->unk05C; /*0x60c182*/
    if ( !unk05C /*0x60c19b*/
      || LODWORD(unk05C->unk00[0]) > 1
      || (ninode = unk05C->ninode) == 0
      || LODWORD(ninode->members.super.m_localTransform.rot.data[1][0]) )
    {
      Unk_17 = this->super.vtbl->super.super.Unk_17; /*0x60c1a9*/
      unk098 = this->unk098; /*0x60c1ae*/
      LOBYTE(this->unk094) = 0;                 // Clear +0x94 before invoking the deferred post-load resolver with saved +0x98; resolver may set it again if 3D remains unavailable. /*0x60c1b1*/
      ((void (__thiscall *)(ArrowProjectile *, UInt32, _DWORD))Unk_17)(this, unk098, 0); /*0x60c1b8*/
      sub_45D190(g_TESSaveLoadGame); /*0x60c1c0*/
    }
  }
  v6 = 0.0; /*0x60c1d1*/
  v7 = (NiAVObject *)this->super.vtbl->super.GetNiNode(this); /*0x60c1d7*/
  if ( deltaTime < 0.0 ) /*0x60c1e0*/
    goto LABEL_42; /*0x60c1e0*/
  *(float *)&unk090 = deltaTime + this->elapsedTime; /*0x60c1e9*/
  v8 = *(float *)&unk090; /*0x60c1ed*/
  this->elapsedTime = *(float *)&unk090;        // Accumulate elapsedTime at ArrowProjectile +0x68 on each nonnegative update. /*0x60c1f1*/
  if ( g_GameSettingStringPointers_B36CD8[0xDC] < v8 ) /*0x60c201*/
    this->unk060 = 3;                           // When elapsedTime exceeds fArrowAgeMax (default 90.0 seconds), force lifecycle +0x60 to cleanup/fade state 3. /*0x60c203*/
  if ( (this->super.super.super.flags & 0x20) == 0 ) /*0x60c212*/
  {                                             // Lifecycle state 0 is active flight: integrate speed/orientation through MobileObject movement and collision handling.
    if ( !this->unk060 ) /*0x60c218*/
    {
      v6 = 0.0; /*0x60c22b*/
      if ( MobileObject_GetCharProxy(&this->super) ) /*0x60c226*/
      {
        vtbl = this->super.vtbl; /*0x60c235*/
        a3[0] = 0.0;                            // Build local displacement vector (0, speed*dt, 0); MobileObject_Move rotates it by projectile orientation before controller integration. /*0x60c237*/
        GetPos = vtbl->super.GetPos; /*0x60c23e*/
        a3[1] = this->speed * deltaTime;        // Active flight displacement magnitude for this frame: ArrowProjectile.speed (+0x6C) * deltaTime. /*0x60c24a*/
        a3[2] = 0.0; /*0x60c24e*/
        v11 = GetPos((TESObjectREFR *)this); /*0x60c252*/
        v12 = *v11; /*0x60c254*/
        v13 = v11[1]; /*0x60c256*/
        v14 = v11[2]; /*0x60c259*/
        v45 = v12; /*0x60c25c*/
        v46 = v13; /*0x60c262*/
        v47 = v14; /*0x60c266*/
        CharProxy = MobileObject_GetCharProxy(&this->super); /*0x60c26a*/
        v16 = this->super.vtbl; /*0x60c275*/
        *(float *)&unk090 = *((float *)CharProxy + 0xC6); /*0x60c277*/
        v17 = v16->super.GetPos; /*0x60c27f*/
        *(float *)&unk090 = *(float *)&unk090 * dbl_A372E0; /*0x60c28d*/
        if ( *(float *)&unk090 >= (double)v17((TESObjectREFR *)this)[2] ) /*0x60c2a9*/
        {
          *(float *)&unk090 = (this->unk074 - deltaTime) / this->unk074; /*0x60c2b7*/
          v18 = *(float *)&unk090; /*0x60c2c6*/
          this->speed = this->speed * *(float *)&unk090; /*0x60c2c8*/
          this->unk070 = v18 * this->unk070; /*0x60c2ce*/
          *((float *)MobileObject_GetCharProxy(&this->super) + 0xC9) = *(float *)&unk090; /*0x60c2da*/
          *(float *)&unk090 = this->unk074 - deltaTime; /*0x60c2e7*/
          v19 = *(float *)&unk090; /*0x60c2eb*/
          this->unk074 = *(float *)&unk090; /*0x60c2ef*/
          if ( v19 < kHeadBodyNormalMatchRadius ) /*0x60c2fd*/
          {
            ArrowProjectile_BeginCollisionResolution(this, 0); /*0x60c303*/
            ArrowProjectile_ResolveCollisionState(this); /*0x60c30a*/
          }
        }
        ((void (__thiscall *)(ArrowProjectile *, _DWORD, float *, int))this->super.vtbl->Move)( /*0x60c328*/
          this,
          LODWORD(deltaTime),
          a3,
          0xF);                                 // Integrate local forward displacement through MobileObject_Move using projectile yaw/pitch and collision proxy.
        unk060 = this->unk060; /*0x60c32a*/
        if ( unk060 ) /*0x60c32f*/
        {
          v21 = (unk060 == 3) + 2;              // After collision, choose resolved lifecycle state: pending state 1 advances to settled state 2; cleanup state 3 remains 3. /*0x60c33c*/
          if ( ArrowProjectile_ResolveCollisionState(this) ) /*0x60c340*/
          {
            if ( v7 ) /*0x60c34b*/
              TESObjectREFR_SetPosition( /*0x60c368*/
                (TESObjectREFR *)this,
                v7->members.m_localTransform.pos.x,
                v7->members.m_localTransform.pos.y,
                v7->members.m_localTransform.pos.z);
            this->unk060 = v21;                 // Commit lifecycle transition only after ArrowProjectile_ResolveCollisionState succeeds. /*0x60c36d*/
            return; /*0x60c377*/
          }
        }
        v22 = this->super.vtbl->super.GetPos(this); /*0x60c384*/
        v23 = v22[1]; /*0x60c38a*/
        v42 = *v22; /*0x60c38d*/
        v24 = v22[2]; /*0x60c391*/
        v43 = v23; /*0x60c394*/
        v44 = v24; /*0x60c398*/
        if ( !v7 ) /*0x60c39c*/
          return; /*0x60c39c*/
        v7->members.m_localTransform.pos.x = *v22; /*0x60c3a4*/
        v7->members.m_localTransform.pos.y = v22[1]; /*0x60c3aa*/
        v25 = v22[2]; /*0x60c3ad*/
        qmemcpy(v49, &v7->members.m_localTransform, sizeof(v49)); /*0x60c3bc*/
        v7->members.m_localTransform.pos.z = v25; /*0x60c3c7*/
        sub_711440(v49, &v41, (float *)&unk090, &v40); /*0x60c3d4*/
        *(float *)&unk090 = v42 - v45; /*0x60c3e7*/
        v26 = v43; /*0x60c3ef*/
        this->unk088 = *(float *)&unk090; /*0x60c3f3*/
        *((float *)&unk090 + 1) = v26 - v46; /*0x60c3f9*/
        v27 = v44; /*0x60c401*/
        this->unk08C = *((float *)&unk090 + 1); /*0x60c405*/
        v39 = v27 - v47; /*0x60c40c*/
        this->unk090 = v39; /*0x60c414*/
        unk090 = this->unk090; /*0x60c41d*/
        v28 = NiPoint3_Length(&this->unk088); /*0x60c421*/
        *(float *)&unk090 = unk090 / v28; /*0x60c42b*/
        *(float *)&unk090 = -sub_47D970(*(float *)&unk090); /*0x60c43d*/
        NiMatrix33_SetEulerZXY(v49, v41, *(float *)&unk090, v40); /*0x60c45f*/
        qmemcpy(&v7->members.m_localTransform, v49, 0x24u); /*0x60c470*/
        goto LABEL_42; /*0x60c470*/
      }
    }
    v29 = this->unk060; /*0x60c477*/
    if ( v29 == 2 )                             // Lifecycle state 2 is settled/persistent impact handling. Validate collision target/cell and retain, migrate, or destroy the projectile accordingly. /*0x60c47d*/
    {
      v30 = this->unk05C; /*0x60c483*/
      if ( v30 ) /*0x60c488*/
      {
        v31 = v30->unk00[0]; /*0x60c492*/
        if ( !v7 ) /*0x60c494*/
          return; /*0x60c494*/
        if ( v31 != 0.0 ) /*0x60c49c*/
        {
          if ( LODWORD(v31) != 1 ) /*0x60c50d*/
            goto LABEL_42; /*0x60c50d*/
          v34 = v30->ninode; /*0x60c50f*/
          if ( v34 ) /*0x60c514*/
          {
            if ( LODWORD(v34->members.super.m_localTransform.rot.data[1][0]) ) /*0x60c516*/
              goto LABEL_42; /*0x60c51a*/
          }
LABEL_31:
          ((void (__thiscall *)(ArrowProjectile *, int))this->super.vtbl->super.super.Unk_23)(this, 1); /*0x60c4ea*/
          goto LABEL_42; /*0x60c4f8*/
        }
        TESObjectREFR_SetPosition( /*0x60c4bf*/
          (TESObjectREFR *)this,
          v7->members.m_worldTransform.pos.x,
          v7->members.m_worldTransform.pos.y,
          v7->members.m_worldTransform.pos.z);
        v32 = this->unk05C->ninode; /*0x60c4c7*/
        DwordAtOffset40 = 0; /*0x60c4ca*/
        if ( v32 ) /*0x60c4ce*/
          DwordAtOffset40 = Shared_GetDwordAtOffset40(v32); /*0x60c4d5*/
        if ( DwordAtOffset40 == Shared_GetDwordAtOffset40(this) ) /*0x60c4e0*/
          goto LABEL_42; /*0x60c4e0*/
        if ( !DwordAtOffset40 ) /*0x60c4e8*/
          goto LABEL_31; /*0x60c4e8*/
        sub_6748B0(&qword_B3BB2C[0x75], &this->super); /*0x60c503*/
LABEL_42:
        if ( v7 ) /*0x60c585*/
          NiAVObject_UpdateNiAVObject(v7, deltaTime, 1); /*0x60c593*/
        return; /*0x60c593*/
      }
    }
    if ( v29 != 3 ) /*0x60c52f*/
      goto LABEL_42;                            // Lifecycle state 3 is cleanup/fade. Other lifecycle states fall through to ordinary scene-node update. /*0x60c52f*/
    v41 = this->unk064 - deltaTime / dbl_A30E48;// State-3 fade: subtract deltaTime/3.0 from +0x64 alpha scalar; destroy when it reaches zero, otherwise apply the scalar to projectile 3D. /*0x60c540*/
    v35 = v41; /*0x60c544*/
    this->unk064 = v41; /*0x60c548*/
    if ( v35 <= v6 ) /*0x60c552*/
    {
      v36 = this->super.vtbl; /*0x60c554*/
      this->unk064 = v6; /*0x60c556*/
      ((void (__thiscall *)(ArrowProjectile *, int))v36->super.super.Unk_23)(this, 1); /*0x60c563*/
    }
    if ( v7 ) /*0x60c56b*/
    {
      sub_4A2A90((int)v7, this->unk064); /*0x60c575*/
      goto LABEL_42; /*0x60c575*/
    }
  }
}
