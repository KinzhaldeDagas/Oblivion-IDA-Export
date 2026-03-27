0x657890: push    esi
0x657891: mov     esi, ecx
0x657893: call    ??1MiddleHighProcess@@UAE@XZ; MiddleHighProcess::~MiddleHighProcess(void)
0x657898: test    byte ptr [esp+4+arg_0], 1
0x65789D: jz      short loc_6578A8
0x65789F: push    esi
0x6578A0: call    FormHeapFree
0x6578A5: add     esp, 4
0x6578A8: mov     eax, esi
0x6578AA: pop     esi
0x6578AB: retn    4
