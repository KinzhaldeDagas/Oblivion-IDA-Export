// Creates or resets projectile collision state 4, records the optional target reference, initializes transform/velocity fields from the character proxy or node transform, and marks collision resolution active.
void __thiscall ArrowProjectile_BeginCollisionResolution(ArrowProjectile *this, TESObjectREFR *target)
{
  ArrowProjectile_CollisionData *unk05C; // eax
  ArrowProjectile_CollisionData *v4; // eax
  ArrowProjectile_CollisionData *v5; // eax
  ArrowProjectile_CollisionData *v6; // eax
  float *v7; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v9; // eax
  __m128 *LinearVelocityPtr; // eax
  __m128 v11; // xmm0
  double v12; // st6
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  double speed; // st5
  int v15; // eax
  NiTransform *v16; // eax
  float *v17; // ecx
  float v18; // [esp+10h] [ebp-30h] BYREF
  __m128 v19; // [esp+20h] [ebp-20h] BYREF

  unk05C = this->unk05C; /*0x6079b7*/
  if ( unk05C ) /*0x6079be*/
  {
    LODWORD(unk05C->unk00[0]) = 4; /*0x6079c0*/
  }
  else
  {
    v4 = (ArrowProjectile_CollisionData *)FormHeapAlloc(0x54u); /*0x6079cd*/
    this->unk05C = v4; /*0x6079d2*/
    LODWORD(v4->unk00[0]) = 4;                  // Create state 4 fallback/settling record. Optional target reference may be stored at +0x28; this state is also used when active flight decays without a normal embed. /*0x6079d5*/
    this->unk05C->unk2C[0] = 0.0; /*0x6079e1*/
    this->unk05C->ninode = (NiNode *)target; /*0x6079eb*/
    v5 = this->unk05C; /*0x6079ee*/
    v5->unk00[4] = g_zeroNiPoint3.x; /*0x6079f7*/
    v5->unk00[5] = g_zeroNiPoint3.y; /*0x607a00*/
    v5->unk00[6] = g_zeroNiPoint3.z; /*0x607a09*/
    v6 = this->unk05C; /*0x607a15*/
    v6->unk00[1] = g_zeroNiPoint3.x; /*0x607a18*/
    v6->unk00[2] = g_zeroNiPoint3.y; /*0x607a21*/
    v6->unk00[3] = g_zeroNiPoint3.z; /*0x607a2d*/
    qmemcpy(&this->unk05C->unk2C[1], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x607a40*/
    v7 = &this->unk05C->unk00[7]; /*0x607a4b*/
    *v7 = g_zeroNiPoint3.x; /*0x607a4e*/
    v7[1] = g_zeroNiPoint3.y; /*0x607a56*/
    v7[2] = g_zeroNiPoint3.z; /*0x607a5f*/
    if ( MobileObject_GetCharProxy(&this->super) ) /*0x607a67*/
    {
      CharProxy = MobileObject_GetCharProxy(&this->super); /*0x607a76*/
      if ( CharProxy && (v9 = *((char **)CharProxy + 2)) != 0 ) /*0x607a84*/
        LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v9); /*0x607a88*/
      else
        LinearVelocityPtr = (__m128 *)&OB_ShaderConstantStorage_010201A0[0x1870B]; /*0x607a8f*/
      v11 = *LinearVelocityPtr; /*0x607a94*/
      v18 = LinearVelocityPtr->m128_f32[0]; /*0x607a97*/
      v12 = flt_A7DEB4; /*0x607aa1*/
      v19 = v11; /*0x607aa7*/
      if ( -v12 == v18 ) /*0x607ab5*/
      {
        if ( this->super.vtbl->super.GetNiNode(this) ) /*0x607ac1*/
        {
          GetNiNode = this->super.vtbl->super.GetNiNode; /*0x607ad0*/
          speed = this->speed; /*0x607ae2*/
          v19.m128_f32[0] = stru_B258DC.x * speed; /*0x607ae8*/
          v19.m128_f32[1] = stru_B258DC.y * speed; /*0x607af4*/
          v19.m128_f32[2] = speed * stru_B258DC.z; /*0x607afe*/
          v15 = (int)GetNiNode((TESObjectREFR *)this); /*0x607b02*/
          v16 = sub_7101F0((NiTransform *)(v15 + 0x64), (NiTransform *)&v18, (NiPoint3 *)&v19); /*0x607b11*/
          v17 = &this->unk05C->unk00[7]; /*0x607b1b*/
          *v17 = v16->rot.data[0][0]; /*0x607b1e*/
          v17[1] = v16->rot.data[0][1]; /*0x607b23*/
          v17[2] = v16->rot.data[0][2]; /*0x607b29*/
        }
      }
      else
      {
        HavokVector_ToWorldVector(&this->unk05C->unk00[7], &v19); /*0x607b3a*/
      }
    }
  }
  this->unk060 = 1; /*0x607b48*/
}
