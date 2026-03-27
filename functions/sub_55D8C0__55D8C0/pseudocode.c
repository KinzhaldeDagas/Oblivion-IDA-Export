BSFaceGenNiNode *__thiscall sub_55D8C0(char **this, _DWORD **a2)
{
  BSFaceGenNiNode *v3; // eax
  BSFaceGenNiNode *v4; // esi

  v3 = (BSFaceGenNiNode *)FormHeapAlloc(0x118u);
  v4 = 0;
  if ( v3 )
    v4 = BSFaceGenNiNode::BSFaceGenNiNode(v3);
  sub_55CFE0(this, (int)v4, a2);
  return v4;
}
