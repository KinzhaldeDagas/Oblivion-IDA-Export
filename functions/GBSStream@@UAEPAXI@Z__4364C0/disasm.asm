0x4364C0: push    esi
0x4364C1: mov     esi, ecx
0x4364C3: call    ??1BSStream@@UAE@XZ; BSStream::~BSStream(void)
0x4364C8: test    byte ptr [esp+4+arg_0], 1
0x4364CD: jz      short loc_4364D8
0x4364CF: push    esi
0x4364D0: call    FormHeapFree
0x4364D5: add     esp, 4
0x4364D8: mov     eax, esi
0x4364DA: pop     esi
0x4364DB: retn    4
