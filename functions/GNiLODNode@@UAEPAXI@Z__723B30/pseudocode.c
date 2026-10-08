NiLODNode *__thiscall NiLODNode::`scalar deleting destructor'(NiLODNode *this, char a2)
{
  NiLODNode::~NiLODNode(this); /*0x723b33*/
  if ( (a2 & 1) != 0 ) /*0x723b3d*/
    FormHeapFree((unsigned int)this); /*0x723b40*/
  return this; /*0x723b4a*/
}
