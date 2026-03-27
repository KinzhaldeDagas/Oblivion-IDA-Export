0x5376C0: push    esi
0x5376C1: mov     esi, ecx
0x5376C3: call    ??1TESTrapListener@@UAE@XZ; TESTrapListener::~TESTrapListener(void)
0x5376C8: test    byte ptr [esp+4+arg_0], 1
0x5376CD: jz      short loc_5376D8
0x5376CF: push    esi
0x5376D0: call    FormHeapFree
0x5376D5: add     esp, 4
0x5376D8: mov     eax, esi
0x5376DA: pop     esi
0x5376DB: retn    4
