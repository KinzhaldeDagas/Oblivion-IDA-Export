0x741AE0: push    esi
0x741AE1: mov     esi, ecx
0x741AE3: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x741AE8: test    byte ptr [esp+4+arg_0], 1
0x741AED: jz      short loc_741AF8
0x741AEF: push    esi
0x741AF0: call    FormHeapFree
0x741AF5: add     esp, 4
0x741AF8: mov     eax, esi
0x741AFA: pop     esi
0x741AFB: retn    4
