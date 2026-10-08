//
// GPU static-world lifecycle audit 2026-09-27: AddObject calls SetParentAndDetachFromOld before inserting the child into the new parent array. Invalidate both supplied parent and child dependency keys before Original; a pre-call parent pointer alone does not prove post-call ownership.
//
// [2026-10-03 frond LOD replacement] Plugin replacement registers a newly constructed NiTriShape before this insertion so native destruction can always retire it. Replacement remains app-culled while old child is removed; array-reference ownership remains native. Registry has no fixed ring eviction. Portable transaction checks do not constitute live scene graph validation.
// local variable allocation has failed, the output may be wrong!
void __thiscall NiNode::AddObject(NiNode *this, NiAVObject *child, char firstAvailableSlot)
{
  void (__stdcall *v4)(volatile LONG *); // ebp
  bool v5; // zf
  unsigned int end; // ebp
  unsigned int capacity; // ecx
  unsigned __int16 *p_children; // ebx
  LONG (__stdcall *v9)(volatile LONG *); // ebx
  NiAVObjectMembr *p_members; // [esp-4h] [ebp-24h]

  if ( child ) /*0x70af2c*/
  {
    v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x70af32*/
    InterlockedIncrement((volatile LONG *)&child->members); /*0x70af3c*/
    NiAVObject_SetParentAndDetachFromOld(child, this); /*0x70af41*/
    v5 = firstAvailableSlot == 0; /*0x70af46*/
    p_members = &child->members; /*0x70af4b*/
    *(_DWORD *)&firstAvailableSlot = child; /*0x70af4c*/
    if ( v5 ) /*0x70af50*/
    {
      v4((volatile LONG *)p_members); /*0x70af6e*/
      end = this->members.children.end; /*0x70af70*/
      capacity = this->members.children.capacity; /*0x70af77*/
      p_children = (unsigned __int16 *)&this->members.children; /*0x70af7e*/
      if ( end >= capacity ) /*0x70af8e*/
        sub_523B10(p_children, end + p_children[7]); /*0x70af99*/
      sub_4B34E0(p_children, end, (LONG *)&firstAvailableSlot); /*0x70afa6*/
    }
    else
    {
      v4((volatile LONG *)p_members); /*0x70af52*/
      NiTArray_AddItem((int)&this->members.children, (LONG *)&firstAvailableSlot); /*0x70af67*/
    }
    v9 = InterlockedDecrement; /*0x70afab*/
    if ( !InterlockedDecrement((volatile LONG *)&child->members) ) /*0x70afba*/
      child->vtbl->super.super.Destructor((NiRefObject *)child, 1); /*0x70afc8*/
    if ( !v9((volatile LONG *)&child->members) ) /*0x70afcb*/
      child->vtbl->super.super.Destructor((NiRefObject *)child, 1); /*0x70afd9*/
  }
}
