//
// GPU static-world lifecycle audit 2026-09-27: this method writes this object worldTransform (+64) and then invokes collision virtual +50. Its own-object transform event is distinct from ancestor topology dependencies. Do not consider a cached transform refreshed until a completed, writer-excluded snapshot includes subsequent bounds/collision effects.
void __thiscall NiAVObject_UpdateWorldTransform(NiAVObject *this)
{
  NiNode *m_parent; // eax
  NiTransform *p_m_localTransform; // esi
  void *m_spCollision; // ecx
  NiTransform out; // [esp+Ch] [ebp-34h] BYREF

  m_parent = this->members.m_parent; /*0x70c126*/
  if ( m_parent ) /*0x70c12d*/
    p_m_localTransform = NiTransform_Compose( /*0x70c140*/
                           &m_parent->members.super.m_worldTransform,
                           &out,
                           &this->members.m_localTransform);
  else
    p_m_localTransform = &this->members.m_localTransform; /*0x70c144*/
  qmemcpy(&this->members.m_worldTransform, p_m_localTransform, sizeof(this->members.m_worldTransform)); /*0x70c14f*/
  m_spCollision = this->members.m_spCollision; /*0x70c151*/
  if ( m_spCollision ) /*0x70c15c*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)m_spCollision + 0x50))(m_spCollision); /*0x70c166*/
}
