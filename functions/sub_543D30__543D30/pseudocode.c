// Allocates a NiNode, stores it as the sky-object root with refcount ownership, sets flags 0x2 and 0x20, and attaches it to the supplied parent through virtual slot +0x84.
int __thiscall SkyObject__CreateRootNodeAndAttach(Sky *this, int a2)
{
  NiNode *v3; // eax
  NiNode *v4; // ebx
  NiNode *nodeSkyRoot; // edi

  v3 = (NiNode *)FormHeapAlloc(0xDCu); /*0x543d5b*/
  if ( v3 ) /*0x543d71*/
    v4 = NiNode::NiNode(v3, 0); /*0x543d7c*/
  else
    v4 = 0; /*0x543d80*/
  nodeSkyRoot = this->nodeSkyRoot; /*0x543d82*/
  if ( nodeSkyRoot != v4 ) /*0x543d8f*/
  {
    if ( nodeSkyRoot ) /*0x543d93*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&nodeSkyRoot->members) ) /*0x543d99*/
        nodeSkyRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeSkyRoot, 1); /*0x543daf*/
    }
    this->nodeSkyRoot = v4; /*0x543db3*/
    if ( v4 ) /*0x543db6*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x543dbc*/
  }
  this->nodeSkyRoot->members.super.m_flags |= 2u; /*0x543dc5*/
  this->nodeSkyRoot->members.super.m_flags |= 0x20u; /*0x543dcd*/
  return (*(int (__thiscall **)(int, NiNode *, int))(*(_DWORD *)a2 + 0x84))(a2, this->nodeSkyRoot, 1); /*0x543de6*/
}
