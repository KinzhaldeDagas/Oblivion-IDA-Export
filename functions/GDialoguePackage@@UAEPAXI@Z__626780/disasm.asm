0x626780: push    esi
0x626781: mov     esi, ecx
0x626783: call    ??1DialoguePackage@@UAE@XZ; DialoguePackage::~DialoguePackage(void)
0x626788: test    byte ptr [esp+4+arg_0], 1
0x62678D: jz      short loc_626798
0x62678F: push    esi
0x626790: call    FormHeapFree
0x626795: add     esp, 4
0x626798: mov     eax, esi
0x62679A: pop     esi
0x62679B: retn    4
