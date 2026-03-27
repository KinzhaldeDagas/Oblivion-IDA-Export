NiNode *__thiscall sub_749310(NiCamera *this)
{
  NiNode *result; // eax

  result = sub_70C120(this);
  if ( LOBYTE(this->members.WorldToCam[1][1]) )
  {
    result = (NiNode *)LODWORD(Vector3_InitValue_);
    this->members.super.m_worldTransform.pos.x = Vector3_InitValue_;
    this->members.super.m_worldTransform.pos.y = *(&Vector3_InitValue_ + 1);
    this->members.super.m_worldTransform.pos.z = dword_B3F9B0;
    qmemcpy(&this->members.super.m_worldTransform, &stru_B26AF0[0xA].unk2C, 0x24u);
  }
  return result;
}
