// AnimSequenceMultiple add-sequence method. Inserts a refcounted BSAnimGroupSequence into the multiple-sequence linked list and increments the list count.
NiRTTI *__thiscall AddMultiple(ActorAnimData *this, volatile LONG *a2)
{
  NiNode *RootNode; // esi
  NiRTTI *result; // eax
  char *m_pcName; // ecx

  InterlockedIncrement(a2 + 1); /*0x47193c*/
  RootNode = this->RootNode; /*0x471942*/
  result = RootNode->vtbl->super.super.GetType((NiObject *)RootNode); /*0x47194c*/
  result[1].name = (const char *)a2; /*0x47194e*/
  result->name = 0; /*0x471951*/
  result->parent = (NiRTTI *)RootNode->members.super.super.m_pcName; /*0x47195a*/
  m_pcName = (char *)RootNode->members.super.super.m_pcName; /*0x47195d*/
  if ( m_pcName ) /*0x471962*/
  {
    *(_DWORD *)m_pcName = result; /*0x471964*/
    ++RootNode->members.super.super.m_controller; /*0x471966*/
  }
  else
  {
    ++RootNode->members.super.super.m_controller; /*0x471972*/
    RootNode->members.super.super.super.m_uiRefCount = (UInt32)result; /*0x471977*/
  }
  RootNode->members.super.super.m_pcName = (const char *)result; /*0x47196b*/
  return result; /*0x47196a*/
}
