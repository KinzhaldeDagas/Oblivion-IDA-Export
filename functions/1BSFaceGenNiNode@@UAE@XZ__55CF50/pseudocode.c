void __thiscall BSFaceGenNiNode::~BSFaceGenNiNode(BSFaceGenNiNode *this)
{
  int v2; // edi

  *(_DWORD *)this = &BSFaceGenNiNode::`vftable';
  *((_DWORD *)this + 0x45) = 0;
  v2 = *((_DWORD *)this + 0x37);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  NiBSPNode::~NiBSPNode(this);
}
