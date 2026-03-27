NiNode *__thiscall sub_70B980(char **this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xDCu);
  v4 = 0;
  if ( v3 )
    v4 = NiNode::NiNode(v3, *((_WORD *)this + 0x5B));
  sub_70AC60(this, (NiGeometry *)v4, a2);
  return v4;
}
