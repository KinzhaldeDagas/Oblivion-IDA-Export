char sub_50FCA0()
{
  SceneGraph *v0; // eax
  NiNode *m_uiRefCount; // ecx
  NiProperty *NiPropertyByID; // eax
  char v3; // cl
  const char *v4; // eax

  v0 = g_worldScenegraph;
  byte_B361FE ^= 1u;
  if ( v0->super.children.end > 1u )
    m_uiRefCount = (NiNode *)v0->super.children.data->members.super.super.m_uiRefCount;
  else
    m_uiRefCount = 0;
  NiPropertyByID = NiNode_GetNiPropertyByID(m_uiRefCount, 8);
  v3 = byte_B361FE;
  if ( NiPropertyByID )
  {
    if ( v3 )
      LOWORD(NiPropertyByID[1].vtbl) |= 1u;
    else
      LOWORD(NiPropertyByID[1].vtbl) &= ~1u;
  }
  if ( IsConsoleMode )
  {
    v4 = (const char *)&aOn_0;
    if ( !v3 )
      v4 = (const char *)&aOff;
    Interface_ConsolePrint("Wireframe -> %s", v4);
  }
  return 1;
}
