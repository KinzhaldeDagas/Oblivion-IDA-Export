void *__thiscall GetBSAnimGroupSequenceM(ActorAnimData *this, char a2)
{
  unsigned int v3; // edx
  NiInterpController *m_controller; // edi
  _DWORD *m_uiRefCount; // ecx
  void *result; // eax

  if ( a2 == (char)0xFF || (v3 = a2, (NiInterpController *)a2 >= this->RootNode->members.super.super.m_controller) )
  {
    m_controller = this->RootNode->members.super.super.m_controller;
    v3 = GetRandomLargeInteger_(0) % (unsigned int)m_controller;
  }
  m_uiRefCount = (_DWORD *)this->RootNode->members.super.super.super.m_uiRefCount;
  if ( !m_uiRefCount )
    return 0;
  while ( 1 )
  {
    result = (void *)m_uiRefCount[2];
    if ( !v3-- )
      break;
    m_uiRefCount = (_DWORD *)*m_uiRefCount;
    if ( !m_uiRefCount )
      return 0;
  }
  return result;
}
