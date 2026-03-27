0x90F5C0: push    esi
0x90F5C1: push    edi
0x90F5C2: mov     edi, ecx
0x90F5C4: mov     esi, [edi+124h]
0x90F5CA: dec     esi
0x90F5CB: mov     dword ptr [edi], offset off_A9CAB8
0x90F5D1: js      short loc_90F5E7
0x90F5D3: mov     eax, [edi+120h]
0x90F5D9: mov     ecx, [eax+esi*8]
0x90F5DC: mov     edx, [ecx]
0x90F5DE: lea     eax, [eax+esi*8]
0x90F5E1: call    dword ptr [edx+18h]
0x90F5E4: dec     esi
0x90F5E5: jns     short loc_90F5D3
0x90F5E7: mov     dword ptr [edi+124h], 0
0x90F5F1: mov     eax, [edi+128h]
0x90F5F7: test    eax, eax
0x90F5F9: js      short loc_90F632
0x90F5FB: mov     ecx, ds:0BA9DE4h
0x90F601: mov     edx, large fs:2Ch
0x90F608: mov     ecx, [edx+ecx*4]
0x90F60B: mov     ecx, [ecx+19Ch]
0x90F611: test    ecx, ecx
0x90F613: jnz     short loc_90F61B
0x90F615: mov     ecx, ds:0BA7D9Ch
0x90F61B: mov     edx, [edi+120h]
0x90F621: and     eax, 3FFFFFFFh
0x90F626: push    14h
0x90F628: shl     eax, 3
0x90F62B: push    eax
0x90F62C: push    edx
0x90F62D: call    sub_8A75D0
0x90F632: mov     ecx, edi
0x90F634: pop     edi
0x90F635: pop     esi
0x90F636: jmp     sub_8DE8B0
