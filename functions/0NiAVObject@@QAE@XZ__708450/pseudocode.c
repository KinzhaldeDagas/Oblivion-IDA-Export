NiAVObject *__thiscall NiAVObject::NiAVObject(NiAVObject *this)
{
  float z; // edx
  volatile LONG *m_spCollision; // edi

  NiObjectNET::NiObjectNET((NiObjectNET *)this); /*0x70847a*/
  this->vtbl = (NiAVObjectVtbl *)&NiAVObject::`vftable'; /*0x708481*/
  this->members.m_propertyList.numItems = 0; /*0x70848b*/
  this->members.m_propertyList.start = 0; /*0x708491*/
  this->members.m_propertyList.end = 0; /*0x708497*/
  this->members.m_propertyList.vtlb = &NiTPointerList<NiPointer<NiProperty>>::`vftable'; /*0x70849d*/
  this->members.m_spCollision = 0; /*0x7084a7*/
  this->members.m_parent = 0; /*0x7084b5*/
  this->members.m_flags = 0; /*0x7084b8*/
  sub_718A50((float *)&this->members.m_localTransform); /*0x7084bc*/
  sub_718A50((float *)&this->members.m_worldTransform); /*0x7084c4*/
  this->members.m_kWorldBound.Center.x = g_zeroNiPoint3.x; /*0x7084d0*/
  this->members.m_kWorldBound.Center.y = g_zeroNiPoint3.y; /*0x7084d9*/
  z = g_zeroNiPoint3.z; /*0x7084dc*/
  this->members.m_kWorldBound.Radius = 0.0; /*0x7084e2*/
  this->members.m_kWorldBound.Center.z = z; /*0x7084e5*/
  this->members.m_flags = this->members.m_flags & 0xFFE1 | 0xE; /*0x7084f4*/
  m_spCollision = (volatile LONG *)this->members.m_spCollision; /*0x7084f8*/
  if ( m_spCollision ) /*0x708500*/
  {
    if ( !InterlockedDecrement(m_spCollision + 1) ) /*0x708506*/
      (**(void (__thiscall ***)(void *, int))m_spCollision)((void *)m_spCollision, 1); /*0x70851c*/
    this->members.m_spCollision = 0; /*0x70851e*/
  }
  return this; /*0x708526*/
}
