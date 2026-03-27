0x4A0270: push    esi
0x4A0271: mov     esi, ecx
0x4A0273: mov     dword ptr [esi], offset ??_7BSFadeNode@@6B@; const BSFadeNode::`vftable'
0x4A0279: call    ??1NiBSPNode@@UAE@XZ; NiBSPNode::~NiBSPNode(void)
0x4A027E: test    byte ptr [esp+4+arg_0], 1
0x4A0283: jz      short loc_4A028E
0x4A0285: push    esi
0x4A0286: call    FormHeapFree
0x4A028B: add     esp, 4
0x4A028E: mov     eax, esi
0x4A0290: pop     esi
0x4A0291: retn    4
