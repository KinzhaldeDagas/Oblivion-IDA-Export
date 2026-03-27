0x925A80: push    esi
0x925A81: mov     esi, ecx
0x925A83: mov     edx, [esi+4]
0x925A86: lea     eax, [edx-1]
0x925A89: test    eax, eax
0x925A8B: jl      short loc_925A99
0x925A8D: mov     ecx, [esi]
0x925A8F: nop
0x925A90: cmp     byte ptr [ecx+eax], 0FFh
0x925A94: jz      short loc_925ACC
0x925A96: dec     eax
0x925A97: jns     short loc_925A90
0x925A99: mov     eax, [esi+8]
0x925A9C: and     eax, 3FFFFFFFh
0x925AA1: cmp     edx, eax
0x925AA3: jnz     short loc_925AB0
0x925AA5: push    1
0x925AA7: push    esi
0x925AA8: call    sub_8A6EE0
0x925AAD: add     esp, 8
0x925AB0: mov     edx, [esi+4]
0x925AB3: mov     ecx, [esi]
0x925AB5: mov     al, [esp+4+arg_0]
0x925AB9: mov     [ecx+edx], al
0x925ABC: mov     eax, [esi+4]
0x925ABF: inc     eax
0x925AC0: mov     [esi+4], eax
0x925AC3: mov     esi, eax
0x925AC5: lea     eax, [esi-1]
0x925AC8: pop     esi
0x925AC9: retn    4
0x925ACC: mov     dl, [esp+4+arg_0]
0x925AD0: pop     esi
0x925AD1: mov     [ecx+eax], dl
0x925AD4: retn    4
