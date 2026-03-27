NiAVObject *__thiscall NiAVObject::NiAVObject(NiAVObject *this)
{
  float v2; // edx
  volatile LONG *m_spCollision; // edi

  NiObjectNET::NiObjectNET((NiObjectNET *)this);
  this->vtbl = (NiAVObjectVtbl *)&NiAVObject::`vftable';
  this->members.m_propertyList.numItems = 0;
  this->members.m_propertyList.start = 0;
  this->members.m_propertyList.end = 0;
  this->members.m_propertyList.vtlb = &NiTPointerList<NiPointer<NiProperty>>::`vftable';
  this->members.m_spCollision = 0;
  this->members.m_parent = 0;
  this->members.m_flags = 0;
  sub_718A50((float *)&this->members.m_localTransform);
  sub_718A50((float *)&this->members.m_worldTransform);
  this->members.m_kWorldBound.Center.x = Vector3_InitValue_;
  this->members.m_kWorldBound.Center.y = *(&Vector3_InitValue_ + 1);
  v2 = dword_B3F9B0;
  this->members.m_kWorldBound.Radius = 0.0;
  this->members.m_kWorldBound.Center.z = v2;
  this->members.m_flags = this->members.m_flags & 0xFFE1 | 0xE;
  m_spCollision = (volatile LONG *)this->members.m_spCollision;
  if ( m_spCollision )
  {
    if ( !InterlockedDecrement(m_spCollision + 1) )
      (**(void (__thiscall ***)(void *, int))m_spCollision)((void *)m_spCollision, 1);
    this->members.m_spCollision = 0;
  }
  return this;
}
