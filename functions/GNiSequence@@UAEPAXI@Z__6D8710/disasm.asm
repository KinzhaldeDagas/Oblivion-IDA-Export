0x6D8710: push    esi
0x6D8711: mov     esi, ecx
0x6D8713: call    ??1NiSequence@@UAE@XZ; NiSequence::~NiSequence(void)
0x6D8718: test    byte ptr [esp+4+arg_0], 1
0x6D871D: jz      short loc_6D8728
0x6D871F: push    esi
0x6D8720: call    FormHeapFree
0x6D8725: add     esp, 4
0x6D8728: mov     eax, esi
0x6D872A: pop     esi
0x6D872B: retn    4
