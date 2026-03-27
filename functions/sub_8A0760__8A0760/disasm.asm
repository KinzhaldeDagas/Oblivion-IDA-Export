0x8A0760: push    ebx
0x8A0761: push    esi
0x8A0762: mov     esi, ecx
0x8A0764: mov     eax, [esi]
0x8A0766: mov     edx, [eax+58h]
0x8A0769: push    edi
0x8A076A: xor     bl, bl
0x8A076C: call    edx
0x8A076E: test    eax, eax
0x8A0770: jz      short loc_8A077A
0x8A0772: mov     edi, [eax+2B0h]
0x8A0778: jmp     short loc_8A077C
0x8A077A: xor     edi, edi
0x8A077C: test    edi, edi
0x8A077E: jz      short loc_8A079C
0x8A0780: mov     eax, [esi+8]
0x8A0783: push    eax
0x8A0784: mov     ecx, edi
0x8A0786: call    sub_88B600
0x8A078B: mov     edx, [esi]
0x8A078D: push    0
0x8A078F: mov     bl, al
0x8A0791: mov     eax, [edx+90h]
0x8A0797: push    edi
0x8A0798: mov     ecx, esi
0x8A079A: call    eax
0x8A079C: pop     edi
0x8A079D: pop     esi
0x8A079E: mov     al, bl
0x8A07A0: pop     ebx
0x8A07A1: retn
