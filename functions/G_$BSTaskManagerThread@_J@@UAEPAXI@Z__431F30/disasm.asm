0x431F30: push    esi
0x431F31: mov     esi, ecx
0x431F33: call    ??1?$BSTaskManagerThread@_J@@UAE@XZ; BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>(void)
0x431F38: test    [esp+4+arg_0], 1
0x431F3D: jz      short loc_431F48
0x431F3F: push    esi
0x431F40: call    FormHeapFree
0x431F45: add     esp, 4
0x431F48: mov     eax, esi
0x431F4A: pop     esi
0x431F4B: retn    4
