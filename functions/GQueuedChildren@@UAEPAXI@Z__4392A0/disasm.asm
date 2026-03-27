0x4392A0: push    esi
0x4392A1: mov     esi, ecx
0x4392A3: call    ??1QueuedChildren@@UAE@XZ; QueuedChildren::~QueuedChildren(void)
0x4392A8: test    byte ptr [esp+4+arg_0], 1
0x4392AD: jz      short loc_4392B8
0x4392AF: push    esi
0x4392B0: call    FormHeapFree
0x4392B5: add     esp, 4
0x4392B8: mov     eax, esi
0x4392BA: pop     esi
0x4392BB: retn    4
