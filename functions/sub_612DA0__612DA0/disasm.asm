0x612DA0: mov     edx, [esp+arg_0]
0x612DA4: xor     eax, eax
0x612DA6: cmp     ds:0B15198h[eax*4], edx
0x612DAD: jz      short loc_612DB7
0x612DAF: add     eax, 1
0x612DB2: cmp     eax, 2
0x612DB5: jl      short loc_612DA6
0x612DB7: cmp     eax, 2
0x612DBA: mov     ecx, [ecx+3Ch]
0x612DBD: mov     ecx, [ecx+58h]
0x612DC0: jge     short locret_612DD0
0x612DC2: mov     edx, [ecx]
0x612DC4: mov     [esp+arg_0], eax
0x612DC8: mov     eax, [edx+17Ch]
0x612DCE: jmp     eax
0x612DD0: retn    4
