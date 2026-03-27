0x6EDA70: push    esi
0x6EDA71: push    edi
0x6EDA72: mov     edi, [esp+8+arg_0]
0x6EDA76: mov     esi, ecx
0x6EDA78: cmp     edi, [esi+14h]
0x6EDA7B: jbe     short loc_6EDA82
0x6EDA7D: call    __invalid_parameter_noinfo
0x6EDA82: cmp     dword ptr [esi+18h], 10h
0x6EDA86: jb      short loc_6EDA93
0x6EDA88: mov     esi, [esi+4]
0x6EDA8B: lea     eax, [esi+edi]
0x6EDA8E: pop     edi
0x6EDA8F: pop     esi
0x6EDA90: retn    4
0x6EDA93: lea     eax, [esi+edi+4]
0x6EDA97: pop     edi
0x6EDA98: pop     esi
0x6EDA99: retn    4
