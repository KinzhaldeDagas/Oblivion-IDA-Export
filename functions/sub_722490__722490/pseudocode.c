int sub_722490()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0xE4u);
  result = 0;
  if ( v0 )
  {
    NiNode::NiNode((NiNode *)v0, 0);
    *(float *)(v0 + 0xE0) = 0.0;
    *(_DWORD *)v0 = &NiBillboardNode::`vftable';
    *(_WORD *)(v0 + 0xDC) = 9;
    return v0;
  }
  return result;
}
