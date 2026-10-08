// Convert to free-impact state 3 without changing TESObjectREFR.baseForm or attaching source-WEAP identity.
NiNode *__thiscall ArrowProjectile_SetFreeImpactState3(MobileObject *this, int a2, int a3)
{
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  NiNode *result; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  float *v10; // eax
  bhkCharacterProxy *CharProxy; // eax
  char *v12; // eax
  __m128 *LinearVelocityPtr; // eax
  __m128 v14; // xmm0
  double v15; // st6
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  double v17; // st5
  int v18; // eax
  NiTransform *v19; // eax
  _DWORD *v20; // ecx
  float v21; // [esp+10h] [ebp-30h] BYREF
  __m128 v22; // [esp+20h] [ebp-20h] BYREF

  v4 = *((_DWORD **)this + 0x17); /*0x608db8*/
  if ( v4 ) /*0x608dc0*/
  {
    if ( NiPoint3__NotEqual((float *)a3, &g_zeroNiPoint3) ) /*0x608dcc*/
    {
      v4[4] = *(_DWORD *)a3; /*0x608dd7*/
      v4[5] = *(_DWORD *)(a3 + 4); /*0x608ddd*/
      v4[6] = *(_DWORD *)(a3 + 8); /*0x608de3*/
    }
    if ( NiPoint3__NotEqual((float *)a2, &g_zeroNiPoint3) ) /*0x608df0*/
    {
      v5 = (_DWORD *)(*((_DWORD *)this + 0x17) + 4); /*0x608dfe*/
      *v5 = *(_DWORD *)a2; /*0x608e01*/
      v5[1] = *(_DWORD *)(a2 + 4); /*0x608e06*/
      v5[2] = *(_DWORD *)(a2 + 8); /*0x608e0c*/
    }
    **((_DWORD **)this + 0x17) = 3;             // Convert an existing collision record to state 3 using supplied world impact point/normal; target reference is not required. /*0x608e12*/
    result = *((NiNode **)this + 0x17); /*0x608e18*/
    result->members.super.m_kWorldBound.Center.z = 0.0; /*0x608e1b*/
  }
  else
  {
    v7 = (_DWORD *)FormHeapAlloc(0x54u); /*0x608e38*/
    *((_DWORD *)this + 0x17) = v7; /*0x608e3d*/
    *v7 = 3;                                    // Create state 3 record for a free/unattached impact, storing point, normal, transform and velocity. /*0x608e40*/
    *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x2C) = 0; /*0x608e49*/
    *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x28) = 0; /*0x608e52*/
    v8 = *((_DWORD **)this + 0x17); /*0x608e57*/
    v8[4] = *(_DWORD *)a3; /*0x608e5a*/
    v8[5] = *(_DWORD *)(a3 + 4); /*0x608e60*/
    v8[6] = *(_DWORD *)(a3 + 8); /*0x608e66*/
    v9 = *((_DWORD **)this + 0x17); /*0x608e71*/
    v9[1] = *(_DWORD *)a2; /*0x608e74*/
    v9[2] = *(_DWORD *)(a2 + 4); /*0x608e7a*/
    v9[3] = *(_DWORD *)(a2 + 8); /*0x608e83*/
    qmemcpy((void *)(*((_DWORD *)this + 0x17) + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x608e96*/
    v10 = (float *)(*((_DWORD *)this + 0x17) + 0x1C); /*0x608ea1*/
    *v10 = g_zeroNiPoint3; /*0x608ea4*/
    v10[1] = *(&g_zeroNiPoint3 + 1); /*0x608eac*/
    v10[2] = MEMORY[0xB3F9B0][0]; /*0x608eba*/
    result = (NiNode *)MobileObject_GetCharProxy(this); /*0x608ebd*/
    if ( result ) /*0x608ec4*/
    {
      CharProxy = MobileObject_GetCharProxy(this); /*0x608ecc*/
      if ( CharProxy && (v12 = *((char **)CharProxy + 2)) != 0 ) /*0x608eda*/
        LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v12); /*0x608ede*/
      else
        LinearVelocityPtr = (__m128 *)&OB_ShaderConstantStorage_010201A0[0x1870B]; /*0x608ee5*/
      v14 = *LinearVelocityPtr; /*0x608eea*/
      v21 = LinearVelocityPtr->m128_f32[0]; /*0x608eed*/
      v15 = flt_A7DEB4; /*0x608ef7*/
      v22 = v14; /*0x608efd*/
      if ( -v15 == v21 ) /*0x608f0b*/
      {
        result = this->vtbl->super.GetNiNode(this); /*0x608f17*/
        if ( result ) /*0x608f1b*/
        {
          GetNiNode = this->vtbl->super.GetNiNode; /*0x608f26*/
          v17 = *((float *)this + 0x1B); /*0x608f38*/
          v22.m128_f32[0] = *(float *)&stru_B258DC * v17; /*0x608f3e*/
          v22.m128_f32[1] = *(float *)&MEMORY[0xB258E0] * v17; /*0x608f4a*/
          v22.m128_f32[2] = v17 * *((float *)&MEMORY[0xB258E0] + 1); /*0x608f54*/
          v18 = (int)GetNiNode((TESObjectREFR *)this); /*0x608f58*/
          v19 = sub_7101F0((NiTransform *)(v18 + 0x64), (NiTransform *)&v21, (NiPoint3 *)&v22); /*0x608f67*/
          v20 = (_DWORD *)(*((_DWORD *)this + 0x17) + 0x1C); /*0x608f71*/
          *v20 = LODWORD(v19->rot.data[0][0]); /*0x608f74*/
          v20[1] = LODWORD(v19->rot.data[0][1]); /*0x608f79*/
          result = (NiNode *)LODWORD(v19->rot.data[0][2]); /*0x608f7c*/
          v20[2] = result; /*0x608f7f*/
        }
      }
      else
      {
        result = (NiNode *)HavokVector_ToWorldVector((float *)(*((_DWORD *)this + 0x17) + 0x1C), &v22); /*0x608f90*/
      }
    }
    *((_DWORD *)this + 0x18) = 1;               // Creating free-impact collision data sets ArrowProjectile lifecycle +0x60 to state 1 (pending collision-state resolution). CollisionData discriminator is independently set to 3. /*0x608f9e*/
  }
  return result; /*0x608e22*/
}
