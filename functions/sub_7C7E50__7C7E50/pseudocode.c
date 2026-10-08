// Remove full-list lights, free list nodes, reset partition anchors, and reset the active list.
void __thiscall ShadowSceneNode_TeardownLightLists(_DWORD *this)
{
  _DWORD *v2; // esi
  LONG v3; // eax

  v2 = (_DWORD *)*(this + 0x3A); /*0x7c7e54*/
  while ( v2 ) /*0x7c7e5c*/
  {
    v3 = v2[2]; /*0x7c7e63*/
    v2 = (_DWORD *)*v2; /*0x7c7e67*/
    if ( v3 ) /*0x7c7e69*/
      ShadowSceneNode_RemoveFullLight((int **)this, v3); /*0x7c7e6e*/
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0x39)); /*0x7c7e7d*/
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(this + 0x3D)); /*0x7c7e88*/
  *(this + 0x42) = 0; /*0x7c7e8d*/
  *(this + 0x43) = 0; /*0x7c7e97*/
  ShadowSceneNode_ResetActiveLightList(this); /*0x7c7ea5*/
}
