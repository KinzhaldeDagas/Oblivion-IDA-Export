NiNode *__thiscall sub_7223E0(char **this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xE4u);
  v4 = v3;
  if ( v3 )
  {
    NiNode::NiNode(v3, 0);
    *(float *)&v4[1].members.super.super.super.m_uiRefCount = 0.0;
    v4->vtbl = (NiNodeVtbl *)&NiBillboardNode::`vftable';
    LOWORD(v4[1].vtbl) = 9;
  }
  else
  {
    v4 = 0;
  }
  sub_70AC60(this, (NiGeometry *)v4, a2);
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0x6E);
  return v4;
}
