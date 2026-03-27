int __thiscall sub_74EA30(NiCamera *this)
{
  float v2; // edx
  float *v3; // eax
  float *v4; // ecx
  int (*v5)(void); // eax
  float v7; // [esp+Ch] [ebp-4h]

  sub_749310(this);
  v2 = this->members.WorldToCam[0][2];
  qmemcpy((void *)(*(_DWORD *)(LODWORD(v2) + 0x68) + 0x30), &this->members.super.m_worldTransform, 0x24u);
  v3 = *(float **)(LODWORD(v2) + 0x68);
  v3[0x15] = this->members.super.m_worldTransform.pos.x;
  v3 += 0x15;
  v3[1] = this->members.super.m_worldTransform.pos.y;
  v3[2] = this->members.super.m_worldTransform.pos.z;
  v4 = *(float **)(LODWORD(v2) + 0x68);
  v5 = *(int (**)(void))(*(_DWORD *)v4 + 0x74);
  v7 = fabs(this->members.super.m_worldTransform.scale);
  v4[0x18] = v7;
  return v5();
}
