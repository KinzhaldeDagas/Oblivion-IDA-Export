0x98A2F5: mov     eax, 0BAADF00Dh
0x98A2FA: mov     [esi], eax
0x98A2FC: mov     [esi+4], eax
0x98A2FF: push    esi; Memory
0x98A300: call    _free
0x98A305: pop     ecx
0x98A306: call    __SEH_epilog4
0x98A30B: retn
