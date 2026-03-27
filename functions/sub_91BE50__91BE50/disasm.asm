0x91BE50: push    ebx
0x91BE51: mov     ebx, [esp+4+arg_0]
0x91BE55: mov     eax, [ebx+14h]
0x91BE58: test    eax, eax
0x91BE5A: push    edi
0x91BE5B: mov     edi, ecx
0x91BE5D: jz      loc_91BEE9
0x91BE63: mov     ecx, [edi+0Ch]
0x91BE66: xor     eax, eax
0x91BE68: test    ecx, ecx
0x91BE6A: push    esi
0x91BE6B: mov     esi, [ebx+8]
0x91BE6E: jle     short loc_91BEE8
0x91BE70: mov     edx, [edi+8]
0x91BE73: push    ebp
0x91BE74: mov     ebp, [edx]
0x91BE76: cmp     [ebp+0], esi
0x91BE79: jz      short loc_91BE8A
0x91BE7B: inc     eax
0x91BE7C: add     edx, 4
0x91BE7F: cmp     eax, ecx
0x91BE81: jl      short loc_91BE74
0x91BE83: pop     ebp
0x91BE84: pop     esi
0x91BE85: pop     edi
0x91BE86: pop     ebx
0x91BE87: retn    4
0x91BE8A: test    eax, eax
0x91BE8C: jl      short loc_91BEE7
0x91BE8E: mov     ecx, [edi+8]
0x91BE91: mov     esi, [ecx+eax*4]
0x91BE94: push    ebx
0x91BE95: call    sub_91BA70
0x91BE9A: mov     ecx, [edi-10h]
0x91BE9D: mov     edx, [ecx]
0x91BE9F: mov     ebx, eax
0x91BEA1: mov     eax, ds:0BA8438h
0x91BEA6: add     esp, 4
0x91BEA9: push    eax
0x91BEAA: push    ebx
0x91BEAB: call    dword ptr [edx+10h]
0x91BEAE: mov     ecx, [esi+8]
0x91BEB1: xor     eax, eax
0x91BEB3: test    ecx, ecx
0x91BEB5: jle     short loc_91BEE7
0x91BEB7: mov     edx, [esi+4]
0x91BEBA: lea     ebx, [ebx+0]
0x91BEC0: cmp     [edx], ebx
0x91BEC2: jz      short loc_91BED3
0x91BEC4: inc     eax
0x91BEC5: add     edx, 4
0x91BEC8: cmp     eax, ecx
0x91BECA: jl      short loc_91BEC0
0x91BECC: pop     ebp
0x91BECD: pop     esi
0x91BECE: pop     edi
0x91BECF: pop     ebx
0x91BED0: retn    4
0x91BED3: test    eax, eax
0x91BED5: jl      short loc_91BEE7
0x91BED7: mov     ecx, [esi+8]
0x91BEDA: dec     ecx
0x91BEDB: mov     [esi+8], ecx
0x91BEDE: mov     esi, [esi+4]
0x91BEE1: mov     ecx, [esi+ecx*4]
0x91BEE4: mov     [esi+eax*4], ecx
0x91BEE7: pop     ebp
0x91BEE8: pop     esi
0x91BEE9: pop     edi
0x91BEEA: pop     ebx
0x91BEEB: retn    4
