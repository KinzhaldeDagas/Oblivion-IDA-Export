0x43A8D0: push    esi
0x43A8D1: mov     esi, ecx
0x43A8D3: call    ??1QueuedDistantLOD@@UAE@XZ; QueuedDistantLOD::~QueuedDistantLOD(void)
0x43A8D8: test    byte ptr [esp+4+arg_0], 1
0x43A8DD: jz      short loc_43A8E8
0x43A8DF: push    esi
0x43A8E0: call    FormHeapFree
0x43A8E5: add     esp, 4
0x43A8E8: mov     eax, esi
0x43A8EA: pop     esi
0x43A8EB: retn    4
