0x544400: push    esi
0x544401: mov     esi, ecx
0x544403: call    ??1Stars@@UAE@XZ; Stars::~Stars(void)
0x544408: test    byte ptr [esp+4+arg_0], 1
0x54440D: jz      short loc_544418
0x54440F: push    esi
0x544410: call    FormHeapFree
0x544415: add     esp, 4
0x544418: mov     eax, esi
0x54441A: pop     esi
0x54441B: retn    4
