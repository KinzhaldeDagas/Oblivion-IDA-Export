0x439860: push    esi
0x439861: mov     esi, ecx
0x439863: call    ??1QueuedTreeBillboard@@UAE@XZ; QueuedTreeBillboard::~QueuedTreeBillboard(void)
0x439868: test    byte ptr [esp+4+arg_0], 1
0x43986D: jz      short loc_439878
0x43986F: push    esi
0x439870: call    FormHeapFree
0x439875: add     esp, 4
0x439878: mov     eax, esi
0x43987A: pop     esi
0x43987B: retn    4
