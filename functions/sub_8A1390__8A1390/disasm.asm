0x8A1390: push    edi
0x8A1391: mov     edi, ecx
0x8A1393: test    edi, edi
0x8A1395: jz      short loc_8A13DE
0x8A1397: mov     ecx, [edi+8]
0x8A139A: test    ecx, ecx
0x8A139C: jz      short loc_8A13DE
0x8A139E: mov     eax, [ecx]
0x8A13A0: mov     edx, [eax+1Ch]
0x8A13A3: push    esi
0x8A13A4: call    edx
0x8A13A6: mov     esi, eax
0x8A13A8: test    esi, esi
0x8A13AA: jz      short loc_8A13DD
0x8A13AC: push    ebx
0x8A13AD: mov     ebx, ds:0A28078h
0x8A13B3: mov     eax, [edi+8]
0x8A13B6: sub     esi, 1
0x8A13B9: test    eax, eax
0x8A13BB: jz      short loc_8A13CC
0x8A13BD: mov     eax, [eax+10h]
0x8A13C0: mov     eax, [eax+esi*8]
0x8A13C3: test    eax, eax
0x8A13C5: jz      short loc_8A13CC
0x8A13C7: mov     eax, [eax+8]
0x8A13CA: jmp     short loc_8A13CE
0x8A13CC: xor     eax, eax
0x8A13CE: test    eax, eax
0x8A13D0: jz      short loc_8A13D8
0x8A13D2: add     eax, 4
0x8A13D5: push    eax; lpAddend
0x8A13D6: call    ebx ; InterlockedIncrement
0x8A13D8: test    esi, esi
0x8A13DA: jnz     short loc_8A13B3
0x8A13DC: pop     ebx
0x8A13DD: pop     esi
0x8A13DE: pop     edi
0x8A13DF: retn
