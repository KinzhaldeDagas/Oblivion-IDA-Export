0x6EBBF0: cmp     byte ptr ds:0B3F944h, 0
0x6EBBF7: push    esi
0x6EBBF8: mov     esi, ecx
0x6EBBFA: jnz     short loc_6EBC0F
0x6EBBFC: mov     eax, [esi+10h]
0x6EBBFF: cmp     dword ptr [eax+4], 1
0x6EBC03: jbe     short loc_6EBC0F
0x6EBC05: mov     ecx, [esi+0Ch]
0x6EBC08: mov     edx, [ecx]
0x6EBC0A: mov     eax, [edx+68h]
0x6EBC0D: call    eax
0x6EBC0F: mov     edx, [esi]
0x6EBC11: mov     eax, [edx+54h]
0x6EBC14: mov     ecx, esi
0x6EBC16: pop     esi
0x6EBC17: jmp     eax
