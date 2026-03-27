0x42AEC0: push    esi
0x42AEC1: mov     esi, ecx
0x42AEC3: call    ??1ExtraTresPassPackage@@UAE@XZ; ExtraTresPassPackage::~ExtraTresPassPackage(void)
0x42AEC8: test    byte ptr [esp+4+arg_0], 1
0x42AECD: jz      short loc_42AED8
0x42AECF: push    esi
0x42AED0: call    FormHeapFree
0x42AED5: add     esp, 4
0x42AED8: mov     eax, esi
0x42AEDA: pop     esi
0x42AEDB: retn    4
