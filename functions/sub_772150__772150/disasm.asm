0x772150: push    esi
0x772151: mov     esi, ecx
0x772153: cmp     byte ptr [esi+5Ah], 0
0x772157: jnz     short loc_772174
0x772159: mov     ecx, ds:0B42758h
0x77215F: mov     eax, [ecx]
0x772161: mov     edx, [esi]
0x772163: mov     eax, [eax+0C8h]
0x772169: push    0
0x77216B: push    0
0x77216D: push    18h
0x77216F: push    edx
0x772170: call    eax
0x772172: pop     esi
0x772173: retn
0x772174: mov     ecx, [esi+10h]
0x772177: mov     eax, ecx
0x772179: and     eax, 0F0000000h
0x77217E: jz      short loc_7721C3
0x772180: cmp     eax, 10000000h
0x772185: jz      short loc_7721AD
0x772187: cmp     eax, 20000000h
0x77218C: jnz     short loc_7721DD
0x77218E: and     ecx, 0FFFFFFFh
0x772194: lea     edx, [esi+18h]
0x772197: push    edx
0x772198: jz      short loc_7721C7
0x77219A: push    ecx
0x77219B: mov     ecx, esi
0x77219D: call    sub_771830
0x7721A2: test    al, al
0x7721A4: jz      short loc_7721DD
0x7721A6: push    offset flt_B42760
0x7721AB: jmp     short loc_7721C7
0x7721AD: and     ecx, 0FFFFFFFh
0x7721B3: mov     edx, [esi+14h]
0x7721B6: jnz     short loc_7721BD
0x7721B8: mov     edx, [edx+18h]
0x7721BB: jmp     short loc_7721C6
0x7721BD: mov     eax, [edx+18h]
0x7721C0: push    eax
0x7721C1: jmp     short loc_77219A
0x7721C3: lea     edx, [esi+18h]
0x7721C6: push    edx
0x7721C7: mov     edx, [esi]
0x7721C9: mov     eax, ds:0B42750h
0x7721CE: mov     ecx, [eax]
0x7721D0: add     edx, 10h
0x7721D3: push    edx
0x7721D4: push    eax
0x7721D5: mov     eax, [ecx+0B0h]
0x7721DB: call    eax
0x7721DD: pop     esi
0x7721DE: retn
