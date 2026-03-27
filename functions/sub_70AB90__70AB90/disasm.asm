0x70AB90: push    ebx
0x70AB91: mov     ebx, [esp+4+arg_0]
0x70AB95: push    esi
0x70AB96: push    edi
0x70AB97: push    ebx
0x70AB98: mov     edi, ecx
0x70AB9A: call    sub_707A40
0x70AB9F: mov     esi, [edi+0C0h]
0x70ABA5: test    esi, esi
0x70ABA7: jz      short loc_70ABC8
0x70ABA9: lea     esp, [esp+0]
0x70ABB0: mov     edx, [ebx]
0x70ABB2: mov     edx, [edx+0BCh]
0x70ABB8: lea     eax, [esi+8]
0x70ABBB: mov     eax, [eax]
0x70ABBD: mov     esi, [esi]
0x70ABBF: push    eax
0x70ABC0: mov     ecx, ebx
0x70ABC2: call    edx
0x70ABC4: test    esi, esi
0x70ABC6: jnz     short loc_70ABB0
0x70ABC8: xor     esi, esi
0x70ABCA: cmp     [edi+0B6h], si
0x70ABD1: jbe     short loc_70ABF9
0x70ABD3: mov     eax, [edi+0B0h]
0x70ABD9: mov     ecx, [eax+esi*4]
0x70ABDC: test    ecx, ecx
0x70ABDE: jz      short loc_70ABEB
0x70ABE0: mov     edx, [ecx]
0x70ABE2: mov     eax, [edx+80h]
0x70ABE8: push    ebx
0x70ABE9: call    eax
0x70ABEB: movzx   ecx, word ptr [edi+0B6h]
0x70ABF2: add     esi, 1
0x70ABF5: cmp     esi, ecx
0x70ABF7: jb      short loc_70ABD3
0x70ABF9: pop     edi
0x70ABFA: pop     esi
0x70ABFB: pop     ebx
0x70ABFC: retn    4
