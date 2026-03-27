0x728F20: push    esi
0x728F21: push    edi
0x728F22: mov     edi, [esp+8+arg_0]
0x728F26: push    edi
0x728F27: mov     esi, ecx
0x728F29: call    nullsub_returnvVoid_1arg
0x728F2E: cmp     dword ptr [edi+0D8h], 0A030007h
0x728F38: jb      short loc_728F4A
0x728F3A: mov     ecx, edi
0x728F3C: call    sub_7124A0
0x728F41: push    eax; a2
0x728F42: lea     ecx, [esi+34h]; this
0x728F45: call    NiSmartPointer_Set??
0x728F4A: pop     edi
0x728F4B: pop     esi
0x728F4C: retn    4
