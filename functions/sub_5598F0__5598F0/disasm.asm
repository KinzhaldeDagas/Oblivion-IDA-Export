0x5598F0: sub     esp, 8
0x5598F3: push    ebx
0x5598F4: push    esi
0x5598F5: mov     esi, ecx
0x5598F7: mov     ebx, [esi+8]
0x5598FA: cmp     [esi+4], ebx
0x5598FD: push    edi
0x5598FE: jbe     short loc_559905
0x559900: call    __invalid_parameter_noinfo
0x559905: mov     edi, [esi+4]
0x559908: cmp     edi, [esi+8]
0x55990B: jbe     short loc_559912
0x55990D: call    __invalid_parameter_noinfo
0x559912: push    ebx
0x559913: push    esi
0x559914: push    edi
0x559915: push    esi
0x559916: lea     eax, [esp+24h+var_8]
0x55991A: push    eax
0x55991B: mov     ecx, esi
0x55991D: call    sub_559240
0x559922: pop     edi
0x559923: pop     esi
0x559924: pop     ebx
0x559925: add     esp, 8
0x559928: retn
