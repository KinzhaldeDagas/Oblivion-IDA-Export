char __thiscall sub_753BE0(NiTimeController *this, float applicationTime)
{
  UInt16 flags; // ax
  NiInterpController *m_controller; // esi
  NiInterpController *v5; // ebx
  int v6; // ebp
  NiRTTI *v7; // eax
  char result; // al
  bool v9; // zf
  NiNode *m_pTarget; // [esp+14h] [ebp-4h]

  flags = this->members.flags; /*0x753bef*/
  this->members.m_fLoKeyTime = -flt_A7DEB4; /*0x753bf3*/
  this->members.m_fHiKeyTime = flt_A7DEB4; /*0x753c04*/
  this->members.flags = flags & 0xFFF9 | 4; /*0x753c07*/
  m_controller = this->members.m_pTarget->members.super.super.m_controller; /*0x753c0e*/
  v5 = 0; /*0x753c11*/
  v6 = 0; /*0x753c13*/
  m_pTarget = this->members.m_pTarget; /*0x753c17*/
  if ( m_controller ) /*0x753c1b*/
  {
    while ( 1 ) /*0x753c24*/
    {
      v7 = m_controller->vtbl->super.super.GetType((NiObject *)m_controller); /*0x753c24*/
      if ( v7 ) /*0x753c28*/
        break; /*0x753c28*/
LABEL_5:
      m_controller = (NiInterpController *)m_controller->member.next; /*0x753c3e*/
      if ( !m_controller ) /*0x753c43*/
        goto LABEL_8; /*0x753c43*/
    }
    while ( v7 != &stru_B40BCC ) /*0x753c35*/
    {
      v7 = v7->parent; /*0x753c37*/
      if ( !v7 ) /*0x753c3c*/
        goto LABEL_5; /*0x753c3c*/
    }
    v6 = *(_DWORD *)&m_controller[1].member.flags; /*0x753c47*/
    v5 = m_controller; /*0x753c4a*/
  }
LABEL_8:
  if ( -flt_A7DEB4 != this->members.m_fLastTime ) /*0x753c62*/
  {
    if ( v5 ) /*0x753c66*/
    {
      if ( (v5->member.flags & 6) == 0 && *(float *)(v6 + 0x48) < applicationTime - this->members.m_fLastTime ) /*0x753c7d*/
        this->members.m_fLastTime = applicationTime; /*0x753c7f*/
    }
  }
  result = NiTimeController_IsUpdateUnchanged(this, applicationTime); /*0x753c88*/
  v9 = this->members.m_pTarget == 0; /*0x753c8f*/
  this->members.m_fHiKeyTime = 0.0; /*0x753c93*/
  this->members.m_fLoKeyTime = 0.0; /*0x753c96*/
  if ( !v9 && !result ) /*0x753c9d*/
    return ((char (__stdcall *)(float))m_pTarget->vtbl->Unk_26)(this->members.cachedScaledTime); /*0x753cb2*/
  return result; /*0x753cb4*/
}
