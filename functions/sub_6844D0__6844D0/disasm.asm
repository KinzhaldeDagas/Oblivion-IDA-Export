0x6844D0: mov     ecx, ds:0B3C08Ch
0x6844D6: mov     eax, ds:0B3C090h
0x6844DB: jmp     short loc_6844E0
0x6844DD: align 10h
0x6844E0: test    eax, eax
0x6844E2: jnz     short loc_6844E8
0x6844E4: test    ecx, ecx
0x6844E6: jz      short locret_684520
0x6844E8: push    ecx
0x6844E9: call    FormHeapFree
0x6844EE: mov     eax, ds:0B3C090h
0x6844F3: add     esp, 4
0x6844F6: test    eax, eax
0x6844F8: jz      short loc_684516
0x6844FA: mov     ecx, [eax+4]
0x6844FD: mov     ds:0B3C090h, ecx
0x684503: mov     edx, [eax]
0x684505: push    eax
0x684506: mov     ds:0B3C08Ch, edx
0x68450C: call    FormHeapFree
0x684511: add     esp, 4
0x684514: jmp     short sub_6844D0
0x684516: xor     ecx, ecx
0x684518: mov     ds:0B3C08Ch, ecx
0x68451E: jmp     short loc_6844E0
0x684520: retn
