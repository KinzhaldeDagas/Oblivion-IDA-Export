0x4011E0: mov     ecx, offset stru_B32C00; lpCriticalSection
0x4011E5: mov     byte_B32B00, 0
0x4011EC: mov     byte_B32B01, 0
0x4011F3: call    NiLeaveCriticalSection_0
0x4011F8: cmp     byte ptr [esp+arg_0], 0
0x4011FD: jz      short locret_40120C
0x4011FF: mov     [esp+arg_0], 2
0x401207: jmp     nullsub_returnTrue_0arg
0x40120C: retn
