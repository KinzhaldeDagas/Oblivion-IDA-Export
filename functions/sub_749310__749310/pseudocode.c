void __thiscall sub_749310(NiCamera *this)
{
  NiAVObject_UpdateWorldTransform((NiAVObject *)this); /*0x749313*/
  if ( LOBYTE(this->members.WorldToCam[1][1]) ) /*0x749318*/
  {
    this->members.super.m_worldTransform.pos.x = g_zeroNiPoint3.x; /*0x749326*/
    this->members.super.m_worldTransform.pos.y = g_zeroNiPoint3.y; /*0x749332*/
    this->members.super.m_worldTransform.pos.z = g_zeroNiPoint3.z; /*0x74933f*/
    qmemcpy(&this->members.super.m_worldTransform, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x749352*/
  }
}
