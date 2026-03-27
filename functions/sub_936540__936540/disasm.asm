0x936540: push    esi
0x936541: mov     esi, eax
0x936543: sar     eax, 4
0x936546: mov     ecx, eax
0x936548: mov     edx, eax
0x93654A: shr     ecx, 1
0x93654C: shr     eax, 2
0x93654F: not     edx
0x936551: not     ecx
0x936553: not     eax
0x936555: and     esi, 0Fh
0x936558: and     edx, 1
0x93655B: and     ecx, 1
0x93655E: and     eax, 1
0x936561: test    esi, esi
0x936563: jnz     short loc_93656A
0x936565: lea     ecx, [ecx+eax*2]
0x936568: jmp     short loc_936579
0x93656A: cmp     esi, 1
0x93656D: jnz     short loc_936575
0x93656F: lea     ecx, [edx+eax*2+4]
0x936573: jmp     short loc_936579
0x936575: lea     ecx, [edx+ecx*2+8]
0x936579: shl     ecx, 1
0x93657B: mov     eax, 1
0x936580: shl     eax, cl
0x936582: mov     ecx, [edi]
0x936584: lea     edx, [eax+eax]
0x936587: test    ecx, edx
0x936589: jnz     short loc_93658F
0x93658B: add     ecx, eax
0x93658D: mov     [edi], ecx
0x93658F: pop     esi
0x936590: retn
