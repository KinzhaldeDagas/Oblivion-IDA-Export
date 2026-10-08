void __thiscall Actor_ApplyHitPhysicsImpulseToTarget(Actor *this, _DWORD *arg0, float a3)
{
  Ni2DBuffer **v4; // ebx
  NiNode *v5; // eax
  float y; // edx
  float z; // edi
  NiTransform *p_m_worldTransform; // edi
  NiPoint3 *v9; // eax
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  NiPoint3 *WeaponTipLocalPointForHit; // eax
  float *v15; // eax
  float v16; // ecx
  float v17; // edx
  float v18; // eax
  double v19; // rt0
  double v20; // rt1
  float v21; // [esp+14h] [ebp-54h] BYREF
  float v22; // [esp+18h] [ebp-50h]
  float v23; // [esp+1Ch] [ebp-4Ch]
  float x; // [esp+20h] [ebp-48h]
  float v25; // [esp+24h] [ebp-44h]
  float v26; // [esp+28h] [ebp-40h]
  float a2; // [esp+2Ch] [ebp-3Ch] BYREF
  float v28; // [esp+30h] [ebp-38h]
  float v29; // [esp+34h] [ebp-34h]
  float v30; // [esp+38h] [ebp-30h]
  float v31[3]; // [esp+3Ch] [ebp-2Ch] BYREF
  __m128 v32; // [esp+48h] [ebp-20h] BYREF

  if ( arg0 ) /*0x5f0efe*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*arg0 + 0x170))(arg0) + 4) != 0x24 /*0x5f0f20*/
      || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*arg0 + 0x278))(arg0) )
    {
      v4 = (Ni2DBuffer **)arg0[0xF]; /*0x5f0f2a*/
      if ( v4 ) /*0x5f0f2f*/
      {
        v5 = this->vtbl->super.super.GetNiNode(this); /*0x5f0f3f*/
        y = g_zeroNiPoint3.y; /*0x5f0f49*/
        z = g_zeroNiPoint3.z; /*0x5f0f4f*/
        x = g_zeroNiPoint3.x; /*0x5f0f55*/
        v25 = y; /*0x5f0f59*/
        v26 = z; /*0x5f0f5d*/
        v21 = x; /*0x5f0f61*/
        v22 = y; /*0x5f0f65*/
        v23 = z; /*0x5f0f69*/
        if ( v5 ) /*0x5f0f6d*/
        {
          p_m_worldTransform = &v5->members.super.m_worldTransform; /*0x5f0f72*/
          v9 = (NiPoint3 *)this->members.super.process->GetUnk20C(this->members.super.process); /*0x5f0f7d*/
          v10 = NiTransform_TransformPoint(p_m_worldTransform, &a2, v9); /*0x5f0f87*/
          v11 = *v10; /*0x5f0f8c*/
          v12 = v10[1]; /*0x5f0f8e*/
          v13 = v10[2]; /*0x5f0f91*/
          x = v11; /*0x5f0f94*/
          v25 = v12; /*0x5f0f9f*/
          v26 = v13; /*0x5f0fa3*/
          WeaponTipLocalPointForHit = (NiPoint3 *)Actor_GetWeaponTipLocalPointForHit(this, &a2); /*0x5f0fa7*/
          v15 = NiTransform_TransformPoint(p_m_worldTransform, v31, WeaponTipLocalPointForHit); /*0x5f0fb4*/
          v16 = *v15; /*0x5f0fb9*/
          v17 = v15[1]; /*0x5f0fbb*/
          v18 = v15[2]; /*0x5f0fbe*/
          v21 = v16; /*0x5f0fc1*/
          v22 = v17; /*0x5f0fc5*/
          v23 = v18; /*0x5f0fc9*/
        }
        a2 = x - v21; /*0x5f0fd5*/
        v21 = a2; /*0x5f0fe1*/
        v28 = v25 - v22; /*0x5f0fed*/
        v22 = v28; /*0x5f0ff9*/
        v29 = v26 - v23; /*0x5f1001*/
        v23 = v29; /*0x5f1009*/
        Vector3_NormalizeInPlace(&v21); /*0x5f100d*/
        v19 = dbl_A30F70; /*0x5f1021*/
        v21 = v21 * v19; /*0x5f1023*/
        v22 = v22 * v19; /*0x5f102d*/
        v23 = v19 * v23; /*0x5f1035*/
        v21 = x + v21; /*0x5f1041*/
        v22 = v22 + v25; /*0x5f104d*/
        v23 = v23 + v26; /*0x5f1059*/
        v30 = Calc_DeathForceFromDamage(a3); /*0x5f1069*/
        sub_8B8700(v4); /*0x5f106d*/
        sub_88D070((NiNode *)v4, 1, 1, 0); /*0x5f1079*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)v4, 0.0, 0); /*0x5f108b*/
        v20 = hkFactor; /*0x5f10a1*/
        v32.m128_f32[0] = v21 * v20; /*0x5f10a3*/
        v32.m128_f32[1] = v22 * v20; /*0x5f10ad*/
        v32.m128_f32[2] = v20 * v23; /*0x5f10b5*/
        sub_5364B0((int)v4, &v32, v30); /*0x5f10c2*/
      }
    }
  }
}
