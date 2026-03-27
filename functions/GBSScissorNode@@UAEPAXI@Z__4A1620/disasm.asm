0x4A1620: push    esi
0x4A1621: mov     esi, ecx
0x4A1623: mov     dword ptr [esi], offset ??_7BSScissorNode@@6B@; const BSScissorNode::`vftable'
0x4A1629: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x4A162E: test    byte ptr [esp+4+arg_0], 1
0x4A1633: jz      short loc_4A163E
0x4A1635: push    esi
0x4A1636: call    FormHeapFree
0x4A163B: add     esp, 4
0x4A163E: mov     eax, esi
0x4A1640: pop     esi
0x4A1641: retn    4
