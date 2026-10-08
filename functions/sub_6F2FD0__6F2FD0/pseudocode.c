unsigned int __thiscall sub_6F2FD0(_DWORD *this, unsigned int a2)
{
  OB_CBranchChildRef_010201A0 v3; // [esp-Ch] [ebp-18h]

  *(float *)&v3.parentVertexIndex = 0.0; /*0x6f2fe6*/
  v3.percentBetweenParentVertices = 0.0; /*0x6f2ff0*/
  *(float *)&v3.childBranch = 0.0; /*0x6f2ff7*/
  return sub_6F29D0(this, a2, v3); /*0x6f3004*/
}
