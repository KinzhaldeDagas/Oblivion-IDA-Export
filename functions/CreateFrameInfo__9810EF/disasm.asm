0x9810EF: mov     eax, [esp+arg_4]
0x9810F3: push    esi
0x9810F4: mov     esi, [esp+4+arg_0]
0x9810F8: mov     [esi], eax
0x9810FA: call    __getptd
0x9810FF: mov     eax, [eax+98h]
0x981105: mov     [esi+4], eax
0x981108: call    __getptd
0x98110D: mov     [eax+98h], esi
0x981113: mov     eax, esi
0x981115: pop     esi
0x981116: retn
