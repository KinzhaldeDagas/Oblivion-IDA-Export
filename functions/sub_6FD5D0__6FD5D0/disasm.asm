0x6FD5D0: mov     eax, [ecx+40h]
0x6FD5D3: test    eax, eax
0x6FD5D5: push    ebp
0x6FD5D6: jbe     short loc_6FD654
0x6FD5D8: mov     ebp, [esp+4+arg_0]
0x6FD5DC: cmp     [ecx+3Ch], ebp
0x6FD5DF: jz      short loc_6FD654
0x6FD5E1: cmp     ebp, 0FFFFFFFFh
0x6FD5E4: jz      short loc_6FD5EC
0x6FD5E6: jle     short loc_6FD654
0x6FD5E8: cmp     ebp, eax
0x6FD5EA: jnb     short loc_6FD654
0x6FD5EC: push    ebx
0x6FD5ED: push    edi
0x6FD5EE: xor     edi, edi
0x6FD5F0: xor     bl, bl
0x6FD5F2: cmp     [ecx+4Eh], di
0x6FD5F6: jbe     short loc_6FD649
0x6FD5F8: push    esi
0x6FD5F9: lea     esp, [esp+0]
0x6FD600: mov     eax, [ecx+48h]
0x6FD603: mov     esi, [eax+edi*4]
0x6FD606: test    esi, esi
0x6FD608: jz      short loc_6FD63D
0x6FD60A: cmp     edi, ebp
0x6FD60C: jnz     short loc_6FD610
0x6FD60E: mov     bl, 1
0x6FD610: xor     edx, edx
0x6FD612: cmp     [esi+8], edx
0x6FD615: jbe     short loc_6FD63D
0x6FD617: mov     eax, [esi]
0x6FD619: cmp     dword ptr [eax+edx*4], 0
0x6FD61D: lea     eax, [eax+edx*4]
0x6FD620: jz      short loc_6FD635
0x6FD622: test    bl, bl
0x6FD624: mov     eax, [eax]
0x6FD626: jz      short loc_6FD62F
0x6FD628: or      word ptr [eax+18h], 2
0x6FD62D: jmp     short loc_6FD635
0x6FD62F: and     word ptr [eax+18h], 0FFFDh
0x6FD635: add     edx, 1
0x6FD638: cmp     edx, [esi+8]
0x6FD63B: jb      short loc_6FD617
0x6FD63D: movzx   edx, word ptr [ecx+4Eh]
0x6FD641: add     edi, 1
0x6FD644: cmp     edi, edx
0x6FD646: jb      short loc_6FD600
0x6FD648: pop     esi
0x6FD649: pop     edi
0x6FD64A: pop     ebx
0x6FD64B: mov     [ecx+3Ch], ebp
0x6FD64E: mov     al, 1
0x6FD650: pop     ebp
0x6FD651: retn    4
0x6FD654: xor     al, al
0x6FD656: pop     ebp
0x6FD657: retn    4
