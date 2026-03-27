0x5E1BB0: push    ebx
0x5E1BB1: push    esi
0x5E1BB2: mov     esi, ecx
0x5E1BB4: mov     eax, [esi]
0x5E1BB6: mov     edx, [eax+170h]
0x5E1BBC: push    edi
0x5E1BBD: xor     ebx, ebx
0x5E1BBF: call    edx
0x5E1BC1: mov     edi, eax
0x5E1BC3: test    edi, edi
0x5E1BC5: jz      short loc_5E1BD9
0x5E1BC7: mov     eax, [esi]
0x5E1BC9: mov     edx, [eax+190h]
0x5E1BCF: mov     ecx, esi
0x5E1BD1: call    edx
0x5E1BD3: test    al, al
0x5E1BD5: jz      short loc_5E1BD9
0x5E1BD7: mov     ebx, edi
0x5E1BD9: mov     eax, [ebx+24h]
0x5E1BDC: mov     edx, [eax+38h]
0x5E1BDF: lea     ecx, [ebx+24h]
0x5E1BE2: pop     edi
0x5E1BE3: pop     esi
0x5E1BE4: pop     ebx
0x5E1BE5: jmp     edx
