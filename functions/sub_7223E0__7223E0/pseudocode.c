NiNode *__thiscall sub_7223E0(char **this, _DWORD **cloningProcess)
{
  NiNode *v3; // eax
  float *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xE4u); /*0x72240a*/
  v4 = (float *)v3; /*0x72240f*/
  if ( v3 ) /*0x722422*/
  {
    NiNode::NiNode(v3, 0); /*0x722428*/
    v4[0x38] = 0.0; /*0x72242f*/
    *(_DWORD *)v4 = &NiBillboardNode::`vftable'; /*0x722435*/
    *((_WORD *)v4 + 0x6E) = 9; /*0x72243b*/
  }
  else
  {
    v4 = 0; /*0x722446*/
  }
  OB_NiNode_CopyMembersForClone(this, v4, cloningProcess); /*0x722458*/
  *((_WORD *)v4 + 0x6E) = *((_WORD *)this + 0x6E); /*0x722464*/
  return (NiNode *)v4; /*0x72246d*/
}
