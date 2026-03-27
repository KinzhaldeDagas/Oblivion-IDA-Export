0x7A4C20: sub     esp, 8
0x7A4C23: push    ebx
0x7A4C24: push    esi
0x7A4C25: mov     esi, ecx
0x7A4C27: mov     ebx, [esi+8]
0x7A4C2A: cmp     [esi+4], ebx
0x7A4C2D: push    edi
0x7A4C2E: jbe     short loc_7A4C35
0x7A4C30: call    __invalid_parameter_noinfo
0x7A4C35: mov     edi, [esi+4]
0x7A4C38: cmp     edi, [esi+8]
0x7A4C3B: jbe     short loc_7A4C42
0x7A4C3D: call    __invalid_parameter_noinfo
0x7A4C42: push    ebx
0x7A4C43: push    esi
0x7A4C44: push    edi
0x7A4C45: push    esi
0x7A4C46: lea     eax, [esp+24h+var_8]
0x7A4C4A: push    eax
0x7A4C4B: mov     ecx, esi
0x7A4C4D: call    sub_7A4B80
0x7A4C52: pop     edi
0x7A4C53: pop     esi
0x7A4C54: pop     ebx
0x7A4C55: add     esp, 8
0x7A4C58: retn
