NiGeometryData *__thiscall sub_722F40(NiGeometry *this, char a2)
{
  NiInterpController *m_controller; // esi
  __int16 v4; // di
  NiObject *skinData; // eax
  bool v6; // zf
  NiGeometryData *result; // eax

  m_controller = this->member.super.super.m_controller;
  v4 = 0x4000;
  if ( m_controller )
  {
    while ( !m_controller->vtbl->super.Unk_18((NiTimeController *)m_controller) )
    {
      m_controller = (NiInterpController *)m_controller->member.next;
      if ( !m_controller )
        goto LABEL_6;
    }
    v4 = 0x8000;
  }
LABEL_6:
  skinData = this->member.skinData;
  if ( !skinData )
    goto LABEL_14;
  if ( a2 )
  {
    v6 = skinData[1].members.m_uiRefCount == 0;
    goto LABEL_12;
  }
  if ( !skinData[1].members.m_uiRefCount )
  {
LABEL_13:
    v4 = 0x8000;
    goto LABEL_14;
  }
  if ( g_Renderer )
  {
    v6 = (g_Renderer->__vftable->super.GetFlags((NiRenderer *)g_Renderer) & 2) == 0;
LABEL_12:
    if ( v6 )
      goto LABEL_13;
  }
LABEL_14:
  result = this->member.geomData;
  result->member.m_usDirtyFlags = v4 | result->member.m_usDirtyFlags & 0xFFF;
  return result;
}
