0x439BF0: push    esi
0x439BF1: mov     esi, ecx
0x439BF3: call    ??1QueuedCreature@@UAE@XZ; QueuedCreature::~QueuedCreature(void)
0x439BF8: test    byte ptr [esp+4+arg_0], 1
0x439BFD: jz      short loc_439C08
0x439BFF: push    esi
0x439C00: call    FormHeapFree
0x439C05: add     esp, 4
0x439C08: mov     eax, esi
0x439C0A: pop     esi
0x439C0B: retn    4
