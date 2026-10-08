NiNode *__thiscall sub_4A0090(char **this, _DWORD **cloningProcess)
{
  NiNode *v3; // eax
  float *v4; // esi
  double v5; // st7

  v3 = (NiNode *)FormHeapAlloc(0xE8u); /*0x4a00ba*/
  v4 = (float *)v3; /*0x4a00bf*/
  if ( v3 ) /*0x4a00d2*/
  {
    NiNode::NiNode(v3, 0); /*0x4a00d8*/
    v4[0x39] = flt_A2FE7C; /*0x4a00e3*/
    *(_DWORD *)v4 = &BSClearZNode::`vftable'; /*0x4a00e9*/
    v5 = flt_A3F888; /*0x4a00ef*/
    *((_BYTE *)v4 + 0xDD) = 0; /*0x4a00f5*/
    v4[0x38] = v5; /*0x4a00fc*/
    *((_BYTE *)v4 + 0xDC) = 0; /*0x4a0102*/
  }
  else
  {
    v4 = 0; /*0x4a010b*/
  }
  OB_NiNode_CopyMembersForClone(this, v4, cloningProcess); /*0x4a011d*/
  return (NiNode *)v4; /*0x4a0124*/
}
