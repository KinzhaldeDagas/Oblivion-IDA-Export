0x72E170: fldz
0x72E172: mov     eax, [esp+arg_0]
0x72E176: fstp    dword ptr [eax+8]
0x72E179: mov     [esp+arg_0], eax
0x72E17D: add     ecx, 0Ch
0x72E180: jmp     NiTListNodePool_Release; Return one 12-byte NiTList node to Oblivion's synchronized global node pool. The caller must already have handled or cleared node+0x08 payload ownership.
