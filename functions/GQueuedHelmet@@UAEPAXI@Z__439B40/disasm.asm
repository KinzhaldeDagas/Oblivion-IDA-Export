0x439B40: push    esi
0x439B41: mov     esi, ecx
0x439B43: call    ??1QueuedHelmet@@UAE@XZ; QueuedHelmet::~QueuedHelmet(void)
0x439B48: test    byte ptr [esp+4+arg_0], 1
0x439B4D: jz      short loc_439B58
0x439B4F: push    esi
0x439B50: call    FormHeapFree
0x439B55: add     esp, 4
0x439B58: mov     eax, esi
0x439B5A: pop     esi
0x439B5B: retn    4
