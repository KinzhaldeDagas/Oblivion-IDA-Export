0x68B420: push    esi
0x68B421: mov     esi, ecx
0x68B423: call    ??1PathMiddleHigh@@UAE@XZ; PathMiddleHigh::~PathMiddleHigh(void)
0x68B428: test    byte ptr [esp+4+arg_0], 1
0x68B42D: jz      short loc_68B438
0x68B42F: push    esi
0x68B430: call    FormHeapFree
0x68B435: add     esp, 4
0x68B438: mov     eax, esi
0x68B43A: pop     esi
0x68B43B: retn    4
