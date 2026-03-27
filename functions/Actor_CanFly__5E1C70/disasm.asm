0x5E1C70: push    ebx
0x5E1C71: push    esi
0x5E1C72: mov     esi, ecx
0x5E1C74: mov     eax, [esi]
0x5E1C76: mov     edx, [eax+170h]
0x5E1C7C: push    edi
0x5E1C7D: xor     ebx, ebx
0x5E1C7F: call    edx
0x5E1C81: mov     edi, eax
0x5E1C83: test    edi, edi
0x5E1C85: jz      short loc_5E1C99
0x5E1C87: mov     eax, [esi]
0x5E1C89: mov     edx, [eax+190h]
0x5E1C8F: mov     ecx, esi
0x5E1C91: call    edx
0x5E1C93: test    al, al
0x5E1C95: jz      short loc_5E1C99
0x5E1C97: mov     ebx, edi
0x5E1C99: pop     edi
0x5E1C9A: pop     esi
0x5E1C9B: mov     ecx, ebx; this
0x5E1C9D: pop     ebx
0x5E1C9E: jmp     TESActorBase_CanFly
