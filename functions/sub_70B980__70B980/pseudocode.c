//
// Verified thiscall one NiCloningProcess stack arg, ret4. Allocates DC and constructs70B780 with ushort source+B6 child-array extent, then CopyMembers70AC60. CopyMembers registers parent before recursively calling each nonnull child's virtual+18. Plugin frond group currently inherits this factory and loses private destructor/metadata behavior in clones.
// [2026-10-03 implemented frond clone correction] Plugin private group vtable overrides+18: allocateDC, native constructor70B780(source ushort+B6), private vtable installed before native70AC60 CopyMembers. Child clone overrides participate during recursion. Group+38 wrapper only calls70BA00 when destination mapping exists. Child/group allocation failure can still produce a partial clone via native copying; deep allocation failures/exceptions require runtime acceptance.
void *__thiscall OB_NiNode_CreateClone(void *this, void *cloningProcess)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xDCu); /*0x70b9aa*/
  v4 = 0; /*0x70b9b6*/
  if ( v3 ) /*0x70b9be*/
    v4 = NiNode::NiNode(v3, *((_WORD *)this + 0x5B)); /*0x70b9cf*/
  OB_NiNode_CopyMembersForClone(this, v4, cloningProcess); /*0x70b9e1*/
  return v4; /*0x70b9e8*/
}
