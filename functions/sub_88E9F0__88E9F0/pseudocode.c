NiAVObject *__thiscall sub_88E9F0(Atmosphere *this)
{
  NiAVObject *v2; // esi
  NiAVObject *v3; // eax
  float *v4; // eax
  float *v5; // esi
  NiAVObject *result; // eax
  float v7[9]; // [esp+Ch] [ebp-6Ch] BYREF
  float v8[9]; // [esp+30h] [ebp-48h] BYREF
  float v9[9]; // [esp+54h] [ebp-24h] BYREF

  if ( this->unk10 )
    sub_88EDC0((int)this);
  qmemcpy(v7, (char *)this + 0x28, sizeof(v7));
  v2 = sub_452A60(this);
  v3 = sub_452A60(this);
  v4 = NiMAtrix33_Multiply(
         (float *)&v3->members.m_parent->members.super.m_worldTransform,
         v9,
         (float *)&v2->members.m_localTransform);
  v5 = NiMAtrix33_Multiply(v4, v8, v7);
  result = sub_452A60(this);
  qmemcpy(&result->members.m_worldTransform, v5, 0x24u);
  return result;
}
