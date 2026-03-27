NiNode *__thiscall sub_70C120(NiCamera *this)
{
  NiNode *result; // eax
  const void *p_m_localTransform; // esi
  void *m_spCollision; // ecx
  NiTransform v5; // [esp+Ch] [ebp-34h] BYREF

  result = this->members.super.m_parent;
  if ( result )
  {
    result = (NiNode *)sub_53D7A0(&result->members.super.m_worldTransform, &v5, &this->members.super.m_localTransform);
    p_m_localTransform = result;
  }
  else
  {
    p_m_localTransform = &this->members.super.m_localTransform;
  }
  qmemcpy(&this->members.super.m_worldTransform, p_m_localTransform, sizeof(this->members.super.m_worldTransform));
  m_spCollision = this->members.super.m_spCollision;
  if ( m_spCollision )
    return (*(NiNode *(__thiscall **)(void *))(*(_DWORD *)m_spCollision + 0x50))(m_spCollision);
  return result;
}
