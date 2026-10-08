0x712910: mov     eax, [esp+arg_0]
0x712914: mov     word ptr [eax+8], 0
0x71291A: mov     [esp+arg_0], eax
0x71291E: add     ecx, 0Ch
0x712921: jmp     NiTListNodePool_Release; Return one 12-byte NiTList node to Oblivion's synchronized global node pool. The caller must already have handled or cleared node+0x08 payload ownership.
