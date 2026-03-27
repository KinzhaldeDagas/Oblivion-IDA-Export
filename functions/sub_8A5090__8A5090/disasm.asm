0x8A5090: mov     edx, ecx
0x8A5092: mov     eax, [edx+14h]
0x8A5095: test    eax, eax
0x8A5097: js      short locret_8A50D2
0x8A5099: mov     ecx, ds:0BA9DE4h
0x8A509F: push    esi
0x8A50A0: mov     esi, large fs:2Ch
0x8A50A7: mov     ecx, [esi+ecx*4]
0x8A50AA: mov     ecx, [ecx+19Ch]
0x8A50B0: test    ecx, ecx
0x8A50B2: pop     esi
0x8A50B3: jnz     short loc_8A50BB
0x8A50B5: mov     ecx, ds:0BA7D9Ch
0x8A50BB: mov     edx, [edx+0Ch]
0x8A50BE: and     eax, 3FFFFFFFh
0x8A50C3: add     eax, eax
0x8A50C5: add     eax, eax
0x8A50C7: push    14h
0x8A50C9: add     eax, eax
0x8A50CB: push    eax
0x8A50CC: push    edx
0x8A50CD: call    sub_8A75D0
0x8A50D2: retn
