NiNode *__thiscall sub_591C20(void *this)
{
  NiNode *v1; // esi
  NiProperty *NiPropertyByID; // eax

  v1 = (NiNode *)sub_591DC0(this);
  NiPropertyByID = NiNode_GetNiPropertyByID(v1, 2);
  if ( NiPropertyByID )
  {
    ++NiPropertyByID[3].members.m_controller;
    *(float *)&NiPropertyByID[3].members.m_pcName = 0.0;
  }
  return v1;
}
