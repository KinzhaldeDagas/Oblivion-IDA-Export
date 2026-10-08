NiNode *__thiscall TileMenu_CreateSceneNode(_DWORD *this)
{
  NiNode *v1; // esi
  NiProperty *NiPropertyByID; // eax

  v1 = (NiNode *)TileRect_CreateSceneNode(this); /*0x591c26*/
  NiPropertyByID = NiNode_GetNiPropertyByID(v1, 2); /*0x591c2c*/
  if ( NiPropertyByID ) /*0x591c33*/
  {
    ++NiPropertyByID[3].members.m_controller; /*0x591c37*/
    *(float *)&NiPropertyByID[3].members.m_pcName = 0.0; /*0x591c3b*/
  }
  return v1; /*0x591c40*/
}
