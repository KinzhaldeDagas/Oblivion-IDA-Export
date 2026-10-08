// Verified linker-folded shared accessor: returns the dword/pointer at this+0xDC. It appears in multiple class vtables; BSTreeNode vtable slot +0x9C uses it specifically to return BSTreeNode.treeModel.
void *__thiscall Shared_GetDwordAtOffsetDC(void *this)
{
  return *((void **)this + 0x37); /*0x55cef6*/
}
