0x88F0A0: mov     edx, ecx
0x88F0A2: mov     ecx, [edx+10h]
0x88F0A5: test    ecx, ecx
0x88F0A7: jz      short locret_88F0D1
0x88F0A9: mov     eax, [ecx+8]
0x88F0AC: test    eax, eax
0x88F0AE: jz      short loc_88F0BA
0x88F0B0: add     eax, 14h
0x88F0B3: jz      short loc_88F0BA
0x88F0B5: mov     eax, [eax+1Ch]
0x88F0B8: jmp     short loc_88F0BC
0x88F0BA: xor     eax, eax
0x88F0BC: and     al, 3Fh
0x88F0BE: cmp     al, 8
0x88F0C0: jnz     short locret_88F0D1
0x88F0C2: mov     eax, [edx+20h]
0x88F0C5: test    eax, eax
0x88F0C7: jz      short locret_88F0D1
0x88F0C9: mov     edx, [ecx]
0x88F0CB: push    eax
0x88F0CC: mov     eax, [edx+5Ch]
0x88F0CF: call    eax
0x88F0D1: retn
