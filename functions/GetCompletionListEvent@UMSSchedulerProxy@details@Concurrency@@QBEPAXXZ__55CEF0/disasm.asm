0x55CEF0: mov     eax, [ecx+0DCh]; Verified linker-folded shared accessor: returns the dword/pointer at this+0xDC. It appears in multiple class vtables; BSTreeNode vtable slot +0x9C uses it specifically to return BSTreeNode.treeModel.
0x55CEF6: retn
