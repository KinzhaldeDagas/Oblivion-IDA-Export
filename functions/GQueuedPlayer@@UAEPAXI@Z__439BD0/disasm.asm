0x439BD0: push    esi
0x439BD1: mov     esi, ecx
0x439BD3: call    ??1QueuedPlayer@@UAE@XZ; QueuedPlayer::~QueuedPlayer(void)
0x439BD8: test    byte ptr [esp+4+arg_0], 1
0x439BDD: jz      short loc_439BE8
0x439BDF: push    esi
0x439BE0: call    FormHeapFree
0x439BE5: add     esp, 4
0x439BE8: mov     eax, esi
0x439BEA: pop     esi
0x439BEB: retn    4
