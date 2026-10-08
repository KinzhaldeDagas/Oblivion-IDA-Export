int __thiscall sub_723EF0(char **this, int a2, _DWORD **a3)
{
  int result; // eax

  OB_NiNode_CopyMembersForClone(this, (NiGeometry *)a2, a3); /*0x723efe*/
  *(_WORD *)(a2 + 0xDC) = *((_WORD *)this + 0x6E); /*0x723f0a*/
  *(_DWORD *)(a2 + 0xE0) = *(this + 0x38); /*0x723f17*/
  return result; /*0x723f1d*/
}
