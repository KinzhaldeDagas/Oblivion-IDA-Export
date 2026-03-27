0x9003C0: push    esi
0x9003C1: mov     esi, ecx
0x9003C3: mov     eax, [esi+8]
0x9003C6: test    eax, eax
0x9003C8: jz      short loc_9003F3
0x9003CA: mov     eax, [esi+10h]
0x9003CD: push    edi
0x9003CE: xor     edi, edi
0x9003D0: test    eax, eax
0x9003D2: jle     short loc_9003F2
0x9003D4: mov     eax, [esi+0Ch]
0x9003D7: movzx   eax, word ptr [eax+edi*2]
0x9003DB: cmp     ax, 0FFFFh
0x9003DF: jz      short loc_9003EA
0x9003E1: mov     ecx, [esi+8]
0x9003E4: mov     edx, [ecx]
0x9003E6: push    eax
0x9003E7: call    dword ptr [edx+10h]
0x9003EA: mov     eax, [esi+10h]
0x9003ED: inc     edi
0x9003EE: cmp     edi, eax
0x9003F0: jl      short loc_9003D4
0x9003F2: pop     edi
0x9003F3: mov     eax, [esi]
0x9003F5: push    1
0x9003F7: mov     ecx, esi
0x9003F9: call    dword ptr [eax]
0x9003FB: pop     esi
0x9003FC: retn
