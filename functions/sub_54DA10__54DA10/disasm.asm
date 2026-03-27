0x54DA10: push    ebx
0x54DA11: push    esi
0x54DA12: mov     esi, ecx
0x54DA14: mov     ebx, [esi+4]
0x54DA17: cmp     ebx, [esi+8]
0x54DA1A: push    edi
0x54DA1B: mov     edi, [esp+0Ch+arg_0]
0x54DA1F: mov     dword ptr [edi], 0
0x54DA25: jbe     short loc_54DA2C
0x54DA27: call    __invalid_parameter_noinfo
0x54DA2C: mov     [edi], esi
0x54DA2E: mov     [edi+4], ebx
0x54DA31: mov     eax, edi
0x54DA33: pop     edi
0x54DA34: pop     esi
0x54DA35: pop     ebx
0x54DA36: retn    4
