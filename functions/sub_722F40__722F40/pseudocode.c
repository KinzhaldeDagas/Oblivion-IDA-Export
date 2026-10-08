NiGeometryData *__thiscall sub_722F40(NiGeometry *this, char a2)
{
  NiInterpController *m_controller; // esi
  __int16 v4; // di
  NiObject *skinData; // eax
  bool v6; // zf
  NiGeometryData *result; // eax

  m_controller = this->member.super.super.m_controller; /*0x722f44*/
  v4 = 0x4000; /*0x722f4a*/
  if ( m_controller ) /*0x722f4f*/
  {
    while ( !m_controller->vtbl->super.Unk_18((NiTimeController *)m_controller) ) /*0x722f5c*/
    {
      m_controller = (NiInterpController *)m_controller->member.next; /*0x722f5e*/
      if ( !m_controller ) /*0x722f63*/
        goto LABEL_6; /*0x722f63*/
    }
    v4 = 0x8000; /*0x722f67*/
  }
LABEL_6:
  skinData = this->member.skinData; /*0x722f6c*/
  if ( !skinData ) /*0x722f74*/
    goto LABEL_14; /*0x722f74*/
  if ( a2 ) /*0x722f7b*/
  {
    v6 = skinData[1].members.m_uiRefCount == 0; /*0x722f7d*/
    goto LABEL_12; /*0x722f81*/
  }
  if ( !skinData[1].members.m_uiRefCount ) /*0x722f87*/
  {
LABEL_13:
    v4 = 0x8000; /*0x722f9e*/
    goto LABEL_14; /*0x722f9e*/
  }
  if ( renderer ) /*0x722f89*/
  {
    v6 = (renderer->__vftable->super.GetFlags((NiRenderer *)renderer) & 2) == 0; /*0x722f9a*/
LABEL_12:
    if ( v6 ) /*0x722f9c*/
      goto LABEL_13; /*0x722f9c*/
  }
LABEL_14:
  result = this->member.geomData; /*0x722fa3*/
  result->member.m_usDirtyFlags = v4 | result->member.m_usDirtyFlags & 0xFFF; /*0x722fb7*/
  return result; /*0x722fb5*/
}
