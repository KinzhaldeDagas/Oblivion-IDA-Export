NiRTTI *__thiscall AddMultiple(ActorAnimData *this, volatile LONG *a2)
{
  NiNode *RootNode; // esi
  NiRTTI *result; // eax
  char *m_pcName; // ecx

  InterlockedIncrement(a2 + 1);
  RootNode = this->RootNode;
  result = RootNode->vtbl->super.super.GetType((NiObject *)RootNode);
  result[1].name = (const char *)a2;
  result->name = 0;
  result->parent = (NiRTTI *)RootNode->members.super.super.m_pcName;
  m_pcName = (char *)RootNode->members.super.super.m_pcName;
  if ( m_pcName )
  {
    *(_DWORD *)m_pcName = result;
    ++RootNode->members.super.super.m_controller;
  }
  else
  {
    ++RootNode->members.super.super.m_controller;
    RootNode->members.super.super.super.m_uiRefCount = (UInt32)result;
  }
  RootNode->members.super.super.m_pcName = (const char *)result;
  return result;
}
