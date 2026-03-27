0x91CA70: push    edi
0x91CA71: mov     edi, ecx
0x91CA73: mov     eax, [edi+1Ch]
0x91CA76: test    eax, eax
0x91CA78: jz      short loc_91CAA3
0x91CA7A: mov     ecx, [eax+60h]
0x91CA7D: push    esi
0x91CA7E: xor     esi, esi
0x91CA80: test    ecx, ecx
0x91CA82: jle     short loc_91CAA2
0x91CA84: push    ebx
0x91CA85: lea     ebx, [edi-8]
0x91CA88: mov     eax, [eax+5Ch]
0x91CA8B: mov     ecx, [eax+esi*4]
0x91CA8E: push    ecx
0x91CA8F: mov     ecx, ebx
0x91CA91: call    sub_91C620
0x91CA96: mov     eax, [edi+1Ch]
0x91CA99: mov     ecx, [eax+60h]
0x91CA9C: inc     esi
0x91CA9D: cmp     esi, ecx
0x91CA9F: jl      short loc_91CA88
0x91CAA1: pop     ebx
0x91CAA2: pop     esi
0x91CAA3: pop     edi
0x91CAA4: retn
