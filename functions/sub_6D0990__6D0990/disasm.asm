0x6D0990: push    esi
0x6D0991: push    edi
0x6D0992: mov     edi, [esp+8+arg_0]
0x6D0996: push    edi
0x6D0997: mov     esi, ecx
0x6D0999: call    sub_6D0540
0x6D099E: test    al, al
0x6D09A0: jnz     short loc_6D09A9
0x6D09A2: pop     edi
0x6D09A3: xor     al, al
0x6D09A5: pop     esi
0x6D09A6: retn    4
0x6D09A9: mov     ecx, [esi+50h]
0x6D09AC: mov     eax, [edi+50h]
0x6D09AF: mov     edx, [ecx]
0x6D09B1: push    eax
0x6D09B2: mov     eax, [edx+2Ch]
0x6D09B5: call    eax
0x6D09B7: test    al, al
0x6D09B9: jz      short loc_6D09A2
0x6D09BB: mov     edx, [esi]
0x6D09BD: mov     eax, [edx+74h]
0x6D09C0: push    ebx
0x6D09C1: push    ebp
0x6D09C2: mov     ecx, esi
0x6D09C4: xor     ebx, ebx
0x6D09C6: call    eax
0x6D09C8: test    ax, ax
0x6D09CB: ja      short loc_6D09E4
0x6D09CD: pop     ebp
0x6D09CE: pop     ebx
0x6D09CF: pop     edi
0x6D09D0: mov     al, 1
0x6D09D2: pop     esi
0x6D09D3: retn    4
0x6D09D6: jmp     short loc_6D09E0
0x6D09D8: align 10h
0x6D09E0: mov     edi, [esp+10h+arg_0]
0x6D09E4: mov     edx, [edi]
0x6D09E6: mov     eax, [edx+80h]
0x6D09EC: push    ebx
0x6D09ED: mov     ecx, edi
0x6D09EF: call    eax
0x6D09F1: mov     edx, [esi]
0x6D09F3: mov     ebp, eax
0x6D09F5: mov     edi, [ebp+0]
0x6D09F8: mov     eax, [edx+80h]
0x6D09FE: push    ebx
0x6D09FF: mov     ecx, esi
0x6D0A01: add     edi, 2Ch ; ','
0x6D0A04: call    eax
0x6D0A06: mov     edx, [edi]
0x6D0A08: push    eax
0x6D0A09: mov     ecx, ebp
0x6D0A0B: call    edx
0x6D0A0D: test    al, al
0x6D0A0F: jz      short loc_6D0A2B
0x6D0A11: mov     eax, [esi]
0x6D0A13: mov     edx, [eax+74h]
0x6D0A16: mov     ecx, esi
0x6D0A18: add     ebx, 1
0x6D0A1B: call    edx
0x6D0A1D: cmp     bx, ax
0x6D0A20: jb      short loc_6D09E0
0x6D0A22: pop     ebp
0x6D0A23: pop     ebx
0x6D0A24: pop     edi
0x6D0A25: mov     al, 1
0x6D0A27: pop     esi
0x6D0A28: retn    4
0x6D0A2B: pop     ebp
0x6D0A2C: pop     ebx
0x6D0A2D: pop     edi
0x6D0A2E: xor     al, al
0x6D0A30: pop     esi
0x6D0A31: retn    4
