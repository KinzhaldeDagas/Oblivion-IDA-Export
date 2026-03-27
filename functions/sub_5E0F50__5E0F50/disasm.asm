0x5E0F50: push    ebx
0x5E0F51: push    esi
0x5E0F52: mov     esi, ecx
0x5E0F54: mov     eax, [esi]
0x5E0F56: mov     edx, [eax+128h]
0x5E0F5C: push    edi
0x5E0F5D: call    edx
0x5E0F5F: mov     edi, eax
0x5E0F61: mov     eax, [esi]
0x5E0F63: mov     edx, [eax+170h]
0x5E0F69: mov     ecx, esi
0x5E0F6B: call    edx
0x5E0F6D: test    edi, edi
0x5E0F6F: mov     ebx, eax
0x5E0F71: jnz     short loc_5E0F89
0x5E0F73: test    ebx, ebx
0x5E0F75: jz      short loc_5E0F89
0x5E0F77: mov     eax, [esi]
0x5E0F79: mov     edx, [eax+190h]
0x5E0F7F: mov     ecx, esi
0x5E0F81: call    edx
0x5E0F83: test    al, al
0x5E0F85: jz      short loc_5E0F89
0x5E0F87: mov     edi, ebx
0x5E0F89: mov     eax, [edi]
0x5E0F8B: mov     edx, [eax+120h]
0x5E0F91: mov     ecx, edi
0x5E0F93: call    edx
0x5E0F95: test    eax, eax
0x5E0F97: pop     edi
0x5E0F98: pop     esi
0x5E0F99: pop     ebx
0x5E0F9A: jnz     short locret_5E0FA1
0x5E0F9C: jmp     sub_4A98C0
0x5E0FA1: retn
