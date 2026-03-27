0x6FEB40: push    esi
0x6FEB41: mov     esi, ecx
0x6FEB43: call    ??1BSPSysArrayEmitter@@UAE@XZ; BSPSysArrayEmitter::~BSPSysArrayEmitter(void)
0x6FEB48: test    byte ptr [esp+4+arg_0], 1
0x6FEB4D: jz      short loc_6FEB58
0x6FEB4F: push    esi
0x6FEB50: call    FormHeapFree
0x6FEB55: add     esp, 4
0x6FEB58: mov     eax, esi
0x6FEB5A: pop     esi
0x6FEB5B: retn    4
