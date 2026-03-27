0x8CDA30: push    ebx
0x8CDA31: mov     ebx, [esp+4+arg_0]
0x8CDA35: push    esi
0x8CDA36: mov     esi, ecx
0x8CDA38: mov     ecx, [esi+94h]
0x8CDA3E: xor     eax, eax
0x8CDA40: test    ecx, ecx
0x8CDA42: push    edi
0x8CDA43: jle     short loc_8CDA5C
0x8CDA45: mov     edx, [esi+90h]
0x8CDA4B: jmp     short loc_8CDA50
0x8CDA4D: align 10h
0x8CDA50: cmp     [edx], ebx
0x8CDA52: jz      short loc_8CDA94
0x8CDA54: inc     eax
0x8CDA55: add     edx, 4
0x8CDA58: cmp     eax, ecx
0x8CDA5A: jl      short loc_8CDA50
0x8CDA5C: or      edi, 0FFFFFFFFh
0x8CDA5F: push    ecx
0x8CDA60: mov     eax, esp
0x8CDA62: test    edi, edi
0x8CDA64: setnl   cl
0x8CDA67: mov     [eax], cl
0x8CDA69: push    ebx
0x8CDA6A: mov     ecx, esi
0x8CDA6C: call    sub_88D7D0
0x8CDA71: test    edi, edi
0x8CDA73: jl      short loc_8CDA8E
0x8CDA75: mov     eax, [esi+94h]
0x8CDA7B: dec     eax
0x8CDA7C: mov     [esi+94h], eax
0x8CDA82: mov     esi, [esi+90h]
0x8CDA88: mov     edx, [esi+eax*4]
0x8CDA8B: mov     [esi+edi*4], edx
0x8CDA8E: pop     edi
0x8CDA8F: pop     esi
0x8CDA90: pop     ebx
0x8CDA91: retn    4
0x8CDA94: mov     edi, eax
0x8CDA96: jmp     short loc_8CDA5F
