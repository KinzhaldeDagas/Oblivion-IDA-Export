0x5645F0: cmp     word ptr [ecx+0B6h], 2; Verified separate billboard parent getter: returns BSTreeNode child slot 2 as NiBillboardNode* when the child count exceeds two. This is the parent container named Billboard, not the stored geometry field at BSTreeNode+0xE8.
0x5645F8: ja      short loc_5645FD
0x5645FA: xor     eax, eax
0x5645FC: retn
0x5645FD: mov     eax, [ecx+0B0h]
0x564603: mov     eax, [eax+8]
0x564606: retn
