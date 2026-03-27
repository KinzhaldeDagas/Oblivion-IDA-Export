0x6DE1E0: push    ebp
0x6DE1E1: mov     ebp, [esp+4+a2]
0x6DE1E5: push    edi
0x6DE1E6: push    ebp; a2
0x6DE1E7: mov     edi, ecx
0x6DE1E9: call    sub_700670
0x6DE1EE: test    al, al
0x6DE1F0: jnz     short loc_6DE1F9
0x6DE1F2: pop     edi
0x6DE1F3: xor     al, al
0x6DE1F5: pop     ebp
0x6DE1F6: retn    4
0x6DE1F9: mov     eax, [edi+8]
0x6DE1FC: cmp     eax, [ebp+8]
0x6DE1FF: jnz     short loc_6DE1F2
0x6DE201: mov     ecx, [edi+0Ch]
0x6DE204: cmp     ecx, [ebp+0Ch]
0x6DE207: jnz     short loc_6DE1F2
0x6DE209: mov     dl, [edi+14h]
0x6DE20C: cmp     dl, [ebp+14h]
0x6DE20F: jnz     short loc_6DE1F2
0x6DE211: push    ebx
0x6DE212: push    esi
0x6DE213: xor     esi, esi
0x6DE215: test    eax, eax
0x6DE217: jbe     short loc_6DE256
0x6DE219: xor     ebx, ebx
0x6DE21B: jmp     short loc_6DE220
0x6DE21D: align 10h
0x6DE220: cmp     esi, [ebp+8]
0x6DE223: jnb     short loc_6DE22C
0x6DE225: mov     edx, [ebp+10h]
0x6DE228: add     edx, ebx
0x6DE22A: jmp     short loc_6DE22E
0x6DE22C: xor     edx, edx
0x6DE22E: cmp     esi, eax
0x6DE230: jnb     short loc_6DE239
0x6DE232: mov     ecx, [edi+10h]
0x6DE235: add     ecx, ebx
0x6DE237: jmp     short loc_6DE23B
0x6DE239: xor     ecx, ecx
0x6DE23B: mov     eax, [edi+0Ch]
0x6DE23E: push    eax
0x6DE23F: push    edx
0x6DE240: call    sub_6DE110
0x6DE245: test    al, al
0x6DE247: jz      short loc_6DE25F
0x6DE249: mov     eax, [edi+8]
0x6DE24C: add     esi, 1
0x6DE24F: add     ebx, 0Ch
0x6DE252: cmp     esi, eax
0x6DE254: jb      short loc_6DE220
0x6DE256: pop     esi
0x6DE257: pop     ebx
0x6DE258: pop     edi
0x6DE259: mov     al, 1
0x6DE25B: pop     ebp
0x6DE25C: retn    4
0x6DE25F: pop     esi
0x6DE260: pop     ebx
0x6DE261: pop     edi
0x6DE262: xor     al, al
0x6DE264: pop     ebp
0x6DE265: retn    4
