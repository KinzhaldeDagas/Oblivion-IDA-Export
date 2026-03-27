0x53D8D0: push    esi
0x53D8D1: mov     esi, ecx
0x53D8D3: call    ??1Precipitation@@UAE@XZ; Precipitation::~Precipitation(void)
0x53D8D8: test    byte ptr [esp+4+arg_0], 1
0x53D8DD: jz      short loc_53D8E8
0x53D8DF: push    esi
0x53D8E0: call    FormHeapFree
0x53D8E5: add     esp, 4
0x53D8E8: mov     eax, esi
0x53D8EA: pop     esi
0x53D8EB: retn    4
