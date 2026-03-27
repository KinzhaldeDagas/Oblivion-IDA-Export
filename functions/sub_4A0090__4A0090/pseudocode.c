int __thiscall sub_4A0090(char **this, _DWORD **a2)
{
  NiNode *v3; // eax
  int v4; // esi
  double v5; // st7

  v3 = (NiNode *)FormHeapAlloc(0xE8u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiNode::NiNode(v3, 0);
    *(float *)(v4 + 0xE4) = flt_A2FE7C;
    *(_DWORD *)v4 = &BSClearZNode::`vftable';
    v5 = flt_A3F888;
    *(_BYTE *)(v4 + 0xDD) = 0;
    *(float *)(v4 + 0xE0) = v5;
    *(_BYTE *)(v4 + 0xDC) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_70AC60(this, v4, a2);
  return v4;
}
