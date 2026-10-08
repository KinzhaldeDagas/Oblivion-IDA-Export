int __thiscall sub_74EA30(NiCamera *this)
{
  float v2; // edx
  float *v3; // eax
  float *v4; // ecx
  int (*v5)(void); // eax
  float v7; // [esp+Ch] [ebp-4h]

  sub_749310(this); /*0x74ea36*/
  v2 = this->members.WorldToCam[0][2]; /*0x74ea3b*/
  qmemcpy((void *)(*(_DWORD *)(LODWORD(v2) + 0x68) + 0x30), &this->members.super.m_worldTransform, 0x24u); /*0x74ea4f*/
  v3 = *(float **)(LODWORD(v2) + 0x68); /*0x74ea51*/
  v3[0x15] = this->members.super.m_worldTransform.pos.x; /*0x74ea5a*/
  v3 += 0x15; /*0x74ea63*/
  v3[1] = this->members.super.m_worldTransform.pos.y; /*0x74ea66*/
  v3[2] = this->members.super.m_worldTransform.pos.z; /*0x74ea6f*/
  v4 = *(float **)(LODWORD(v2) + 0x68); /*0x74ea72*/
  v5 = *(int (**)(void))(*(_DWORD *)v4 + 0x74); /*0x74ea7d*/
  v7 = fabs(this->members.super.m_worldTransform.scale); /*0x74ea82*/
  v4[0x18] = v7; /*0x74ea8c*/
  return v5(); /*0x74ea8f*/
}
