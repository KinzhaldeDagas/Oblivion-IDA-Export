0x9A1E30: push    esi
0x9A1E31: mov     esi, ecx
0x9A1E33: mov     ecx, [esi+20h]
0x9A1E36: test    ecx, ecx
0x9A1E38: jz      short loc_9A1E4D
0x9A1E3A: mov     eax, [ecx]
0x9A1E3C: mov     edx, [eax]
0x9A1E3E: push    1
0x9A1E40: call    edx
0x9A1E42: mov     eax, [esp+4+arg_0]
0x9A1E46: mov     [esi+20h], eax
0x9A1E49: pop     esi
0x9A1E4A: retn    4
0x9A1E4D: mov     ecx, [esp+4+arg_0]
0x9A1E51: mov     [esi+20h], ecx
0x9A1E54: pop     esi
0x9A1E55: retn    4
