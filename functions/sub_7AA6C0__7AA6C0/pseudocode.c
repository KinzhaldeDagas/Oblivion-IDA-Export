int __thiscall sub_7AA6C0(_DWORD *this)
{
  BSTPersistentList_ReleaseFreeNodesToGlobalPool(this); /*0x7aa6c3*/
  *(this + 3) = *(this + 1); /*0x7aa6cb*/
  *(this + 1) = 0; /*0x7aa6d0*/
  *(this + 2) = 0; /*0x7aa6d3*/
  *(this + 4) = 0; /*0x7aa6d6*/
  return 0; /*0x7aa6d9*/
}
