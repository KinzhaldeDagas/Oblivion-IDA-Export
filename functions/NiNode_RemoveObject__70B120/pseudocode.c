//
//
// [2026-10-03 frond LOD replacement] Verified ECX=node, stack=(out NiPointer storage, child). Finds child, clears child+1C parent, removes array reference, writes a retained child pointer to out, returns out in EAX, RET8. Caller must release the returned reference (decrement and delete only at zero). Fallout NiNode::DetachChild 0x82BE8C10 corroborates reference semantics but its parameter order/ABI differs. Plugin LOD switch attaches a hidden tracked replacement, detaches old child, releases returned reference, then applies visibility; failure rolls back hidden replacement.
NiAVObject **__thiscall NiNode::RemoveObject(NiNode *this, NiAVObject **outChild, NiAVObject *child)
{
  unsigned int v4; // edi
  NiAVObject *v5; // esi
  NiAVObject *v7; // edi

  v4 = 0; /*0x70b14d*/
  if ( this->members.children.end ) /*0x70b14f*/
  {
    while ( 1 ) /*0x70b166*/
    {
      v5 = *((NiAVObject **)&this->members.children.data->vtbl + v4); /*0x70b166*/
      if ( v5 ) /*0x70b172*/
      {
        InterlockedIncrement((volatile LONG *)&v5->members); /*0x70b178*/
        if ( v5 == child ) /*0x70b18a*/
          break; /*0x70b18a*/
      }
      if ( v5 ) /*0x70b196*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x70b19c*/
          v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x70b1ae*/
      }
      if ( ++v4 >= this->members.children.end ) /*0x70b1bc*/
        goto LABEL_8; /*0x70b1bc*/
    }
    v5->members.m_parent = 0; /*0x70b1e6*/
    sub_6D7F60((int)&this->members.children, &child, v4); /*0x70b1e9*/
    if ( child ) /*0x70b1f4*/
    {
      v7 = child; /*0x70b1f6*/
      if ( !InterlockedDecrement((volatile LONG *)&child->members) ) /*0x70b1fc*/
        v7->vtbl->super.super.Destructor((NiRefObject *)v7, 1); /*0x70b212*/
    }
    *outChild = v5; /*0x70b21c*/
    InterlockedIncrement((volatile LONG *)&v5->members); /*0x70b21e*/
    if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x70b22d*/
      v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x70b23f*/
    return outChild; /*0x70b241*/
  }
  else
  {
LABEL_8:
    *outChild = 0; /*0x70b1be*/
    return outChild; /*0x70b1be*/
  }
}
