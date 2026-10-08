void __thiscall BSFaceGenNiNode::~BSFaceGenNiNode(BSFaceGenNiNode *this)
{
  int v2; // edi

  *(_DWORD *)this = &BSFaceGenNiNode::`vftable'; /*0x55cf79*/
  *((_DWORD *)this + 0x45) = 0; /*0x55cf7f*/
  v2 = *((_DWORD *)this + 0x37); /*0x55cf89*/
  if ( v2 ) /*0x55cf99*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x55cf9f*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x55cfb5*/
  }
  NiBSPNode::~NiBSPNode(this); /*0x55cfc1*/
}
