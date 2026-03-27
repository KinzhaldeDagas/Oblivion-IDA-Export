int __thiscall sub_543D30(Sky *this, int a2)
{
  NiNode *v3; // eax
  NiNode *v4; // ebx
  NiNode *nodeSkyRoot; // edi

  v3 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v3 )
    v4 = NiNode::NiNode(v3, 0);
  else
    v4 = 0;
  nodeSkyRoot = this->nodeSkyRoot;
  if ( nodeSkyRoot != v4 )
  {
    if ( nodeSkyRoot )
    {
      if ( !InterlockedDecrement((volatile LONG *)&nodeSkyRoot->members) )
        nodeSkyRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeSkyRoot, 1);
    }
    this->nodeSkyRoot = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)&v4->members);
  }
  this->nodeSkyRoot->members.super.m_flags |= 2u;
  this->nodeSkyRoot->members.super.m_flags |= 0x20u;
  return (*(int (__thiscall **)(int, NiNode *, int))(*(_DWORD *)a2 + 0x84))(a2, this->nodeSkyRoot, 1);
}
