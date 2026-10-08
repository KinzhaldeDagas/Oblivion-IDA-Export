// ODismemberment combat decode: returns a local-space weapon/reach point for hit visuals. Uses actor GetNiNode, equipped weapon combat distance, named weapon node lookup, and native transform helpers. Attack tail passes this as one of Actor_HandleHitVisualEffects' vector inputs.
float *__thiscall Actor_GetWeaponTipLocalPointForHit(Actor *this, float *a2)
{
  NiNode *v3; // edi
  float y; // edx
  float z; // ecx
  EntryData *v7; // eax
  double CombatDistance; // st7
  int v9; // esi
  float v10; // edx
  float v11; // ecx
  float v12; // [esp+10h] [ebp-84h]
  float v13[3]; // [esp+14h] [ebp-80h] BYREF
  NiPoint3 v14; // [esp+20h] [ebp-74h] BYREF
  NiTransform parent; // [esp+2Ch] [ebp-68h] BYREF
  NiTransform out; // [esp+60h] [ebp-34h] BYREF

  v3 = this->vtbl->super.super.GetNiNode(this); /*0x5e6a54*/
  if ( v3
    && ((v7 = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)) == 0
      ? (CombatDistance = 0.0)
      : (CombatDistance = Calc_GetCombatDistance(*(float *)&v7->type[6].member.flags)),
        (v9 = NiObjectNET_LookupObjectByName(v3, off_B0655C[0])) != 0) )
  {
    sub_718A80((float *)&v3->members.super.m_worldTransform, &parent); /*0x5e6adc*/
    NiTransform_Compose(&parent, &out, (const NiTransform *)(v9 + 0x64)); /*0x5e6aee*/
    v14.x = 0.0; /*0x5e6af5*/
    v12 = CombatDistance; /*0x5e6ac0*/
    v14.y = v12; /*0x5e6b02*/
    v14.z = 0.0; /*0x5e6b0f*/
    NiTransform_TransformPoint(&out, v13, &v14); /*0x5e6b13*/
    v10 = v13[1]; /*0x5e6b23*/
    *a2 = v13[0]; /*0x5e6b27*/
    v11 = v13[2]; /*0x5e6b29*/
    a2[1] = v10; /*0x5e6b2e*/
    a2[2] = v11; /*0x5e6b31*/
    return a2; /*0x5e6b18*/
  }
  else
  {
    y = g_zeroNiPoint3.y; /*0x5e6a67*/
    *a2 = g_zeroNiPoint3.x; /*0x5e6a6d*/
    z = g_zeroNiPoint3.z; /*0x5e6a6f*/
    a2[1] = y; /*0x5e6a76*/
    a2[2] = z; /*0x5e6a79*/
    return a2; /*0x5e6a5a*/
  }
}
