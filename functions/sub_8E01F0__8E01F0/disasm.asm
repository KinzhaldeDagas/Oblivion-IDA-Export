0x8E01F0: push    ebx
0x8E01F1: push    esi
0x8E01F2: push    edi
0x8E01F3: mov     edi, ecx
0x8E01F5: lea     ecx, [edi+70h]
0x8E01F8: call    sub_8F5890
0x8E01FD: lea     esi, [edi+78h]
0x8E0200: mov     ebx, 2
0x8E0205: mov     eax, [esi-14h]
0x8E0208: sub     esi, 14h
0x8E020B: test    eax, eax
0x8E020D: jz      short loc_8E0227
0x8E020F: mov     ecx, ds:0BA7D98h
0x8E0215: mov     edx, [ecx]
0x8E0217: lea     eax, [eax+eax*2]
0x8E021A: push    14h
0x8E021C: shl     eax, 2
0x8E021F: push    eax
0x8E0220: mov     eax, [esi-4]
0x8E0223: push    eax
0x8E0224: call    dword ptr [edx+14h]
0x8E0227: dec     ebx
0x8E0228: jnz     short loc_8E0205
0x8E022A: push    edi; lpCriticalSection
0x8E022B: call    dword ptr ds:0A28068h
0x8E0231: pop     edi
0x8E0232: pop     esi
0x8E0233: pop     ebx
0x8E0234: retn
