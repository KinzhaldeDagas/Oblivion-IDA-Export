0x556E30: sub     esp, 8
0x556E33: push    ebx
0x556E34: push    esi
0x556E35: mov     esi, ecx
0x556E37: mov     ebx, [esi+8]
0x556E3A: cmp     [esi+4], ebx
0x556E3D: push    edi
0x556E3E: jbe     short loc_556E45
0x556E40: call    __invalid_parameter_noinfo
0x556E45: mov     edi, [esi+4]
0x556E48: cmp     edi, [esi+8]
0x556E4B: jbe     short loc_556E52
0x556E4D: call    __invalid_parameter_noinfo
0x556E52: push    ebx
0x556E53: push    esi
0x556E54: push    edi
0x556E55: push    esi
0x556E56: lea     eax, [esp+24h+var_8]
0x556E5A: push    eax
0x556E5B: mov     ecx, esi
0x556E5D: call    sub_556D00
0x556E62: pop     edi
0x556E63: pop     esi
0x556E64: pop     ebx
0x556E65: add     esp, 8
0x556E68: retn
