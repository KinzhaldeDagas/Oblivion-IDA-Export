BSFaceGenNiNode *__thiscall sub_55D8C0(char **this, _DWORD **a2)
{
  BSFaceGenNiNode *v3; // eax
  int *v4; // esi

  v3 = (BSFaceGenNiNode *)FormHeapAlloc(0x118u); /*0x55d8ea*/
  v4 = 0; /*0x55d8f6*/
  if ( v3 ) /*0x55d8fe*/
    v4 = (int *)BSFaceGenNiNode::BSFaceGenNiNode(v3); /*0x55d907*/
  sub_55CFE0(this, v4, a2); /*0x55d919*/
  return (BSFaceGenNiNode *)v4; /*0x55d920*/
}
