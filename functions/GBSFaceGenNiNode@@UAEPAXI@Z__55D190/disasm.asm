0x55D190: push    esi
0x55D191: mov     esi, ecx
0x55D193: call    ??1BSFaceGenNiNode@@UAE@XZ; BSFaceGenNiNode::~BSFaceGenNiNode(void)
0x55D198: test    byte ptr [esp+4+arg_0], 1
0x55D19D: jz      short loc_55D1A8
0x55D19F: push    esi
0x55D1A0: call    FormHeapFree
0x55D1A5: add     esp, 4
0x55D1A8: mov     eax, esi
0x55D1AA: pop     esi
0x55D1AB: retn    4
