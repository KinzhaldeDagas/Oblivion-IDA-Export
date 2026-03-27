float *__thiscall sub_5E6A40(Actor *this, float *a2)
{
  NiNode *v3; // edi
  int v5; // edx
  float v6; // ecx
  EntryData *v7; // eax
  double CombatDistance; // st7
  int v9; // esi
  float v10; // edx
  float v11; // ecx
  float v12; // [esp+10h] [ebp-84h]
  float v13[3]; // [esp+14h] [ebp-80h] BYREF
  NiPoint3 v14; // [esp+20h] [ebp-74h] BYREF
  NiTransform v15; // [esp+2Ch] [ebp-68h] BYREF
  NiTransform v16; // [esp+60h] [ebp-34h] BYREF

  v3 = this->vtbl->super.super.GetNiNode(this);
  if ( v3
    && ((v7 = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)) == 0
      ? (CombatDistance = 0.0)
      : (CombatDistance = Calc_GetCombatDistance(*(float *)&v7->type[6].member.flags)),
        (v9 = NiObjectNET_LookupObjectByName(v3, off_B0655C[0])) != 0) )
  {
    sub_718A80((float *)&v3->members.super.m_worldTransform, (float *)&v15);
    sub_53D7A0(&v15, &v16, (NiTransform *)(v9 + 0x64));
    v14.x = 0.0;
    v12 = CombatDistance;
    v14.y = v12;
    v14.z = 0.0;
    sub_53D4B0(&v16, v13, &v14);
    v10 = v13[1];
    *a2 = v13[0];
    v11 = v13[2];
    a2[1] = v10;
    a2[2] = v11;
    return a2;
  }
  else
  {
    v5 = *((_DWORD *)&Vector3_InitValue_ + 1);
    *a2 = Vector3_InitValue_;
    v6 = dword_B3F9B0;
    *((_DWORD *)a2 + 1) = v5;
    a2[2] = v6;
    return a2;
  }
}
