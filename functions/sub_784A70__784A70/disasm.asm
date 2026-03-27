0x784A70: sub     esp, 8
0x784A73: push    ebx
0x784A74: push    esi
0x784A75: mov     esi, ecx
0x784A77: mov     ebx, [esi+8]
0x784A7A: cmp     [esi+4], ebx
0x784A7D: push    edi
0x784A7E: jbe     short loc_784A85
0x784A80: call    __invalid_parameter_noinfo
0x784A85: mov     edi, [esi+4]
0x784A88: cmp     edi, [esi+8]
0x784A8B: jbe     short loc_784A92
0x784A8D: call    __invalid_parameter_noinfo
0x784A92: push    ebx; Src
0x784A93: push    esi; int
0x784A94: push    edi; Dst
0x784A95: push    esi; int
0x784A96: lea     eax, [esp+24h+var_8]
0x784A9A: push    eax; int
0x784A9B: mov     ecx, esi
0x784A9D: call    sub_439050
0x784AA2: pop     edi
0x784AA3: pop     esi
0x784AA4: pop     ebx
0x784AA5: add     esp, 8
0x784AA8: retn
