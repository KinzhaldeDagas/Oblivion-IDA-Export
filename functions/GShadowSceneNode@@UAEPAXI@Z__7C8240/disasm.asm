0x7C8240: push    esi
0x7C8241: mov     esi, ecx
0x7C8243: call    ??1ShadowSceneNode@@UAE@XZ; ShadowSceneNode::~ShadowSceneNode(void)
0x7C8248: test    byte ptr [esp+4+arg_0], 1
0x7C824D: jz      short loc_7C8258
0x7C824F: push    esi
0x7C8250: call    FormHeapFree
0x7C8255: add     esp, 4
0x7C8258: mov     eax, esi
0x7C825A: pop     esi
0x7C825B: retn    4
