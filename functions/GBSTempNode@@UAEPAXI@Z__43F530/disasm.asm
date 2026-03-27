0x43F530: push    esi
0x43F531: mov     esi, ecx
0x43F533: mov     dword ptr [esi], offset ??_7BSTempNode@@6B@; const BSTempNode::`vftable'
0x43F539: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x43F53E: test    byte ptr [esp+4+arg_0], 1
0x43F543: jz      short loc_43F54E
0x43F545: push    esi
0x43F546: call    FormHeapFree
0x43F54B: add     esp, 4
0x43F54E: mov     eax, esi
0x43F550: pop     esi
0x43F551: retn    4
