0x72D160: push    esi
0x72D161: mov     esi, ecx
0x72D163: call    ??1NiSkinPartition@@UAE@XZ; NiSkinPartition::~NiSkinPartition(void)
0x72D168: test    byte ptr [esp+4+arg_0], 1
0x72D16D: jz      short loc_72D178
0x72D16F: push    esi
0x72D170: call    FormHeapFree
0x72D175: add     esp, 4
0x72D178: mov     eax, esi
0x72D17A: pop     esi
0x72D17B: retn    4
