// Remove active-list payloads, free list nodes, and clear partition anchors/counters.
void __thiscall sub_7C7880(_DWORD *this)
{
  _DWORD *v2; // esi
  LONG v3; // eax

  v2 = (_DWORD *)*(this + 0x3E); /*0x7c7884*/
  while ( v2 ) /*0x7c788c*/
  {
    v3 = v2[2]; /*0x7c7893*/
    v2 = (_DWORD *)*v2; /*0x7c7897*/
    if ( v3 ) /*0x7c7899*/
      ShadowSceneNode_RemoveFullLight((int **)this, v3); /*0x7c789e*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0x3D)); /*0x7c78ad*/
  *(this + 0x42) = 0; /*0x7c78b2*/
  *(this + 0x43) = 0; /*0x7c78bc*/
}
