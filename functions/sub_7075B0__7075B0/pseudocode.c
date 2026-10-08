void __thiscall sub_7075B0(NiAVObject *this, float applicationTime)
{
  NiAVObject_UpdatePropertiesAndControllers(this, applicationTime, (this->members.m_flags & 8) != 0); /*0x7075c8*/
  if ( (this->members.m_flags & 4) != 0 ) /*0x7075d6*/
  {
    this->vtbl->UpdateWorldData(this); /*0x7075df*/
    this->vtbl->UpdateWorldBound(this); /*0x7075e8*/
  }
}
