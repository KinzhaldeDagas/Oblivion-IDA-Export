0x5895E0: push    esi
0x5895E1: push    edi
0x5895E2: mov     edi, [ecx]
0x5895E4: mov     eax, [edi+28h]
0x5895E7: mov     edx, eax
0x5895E9: xor     esi, esi
0x5895EB: test    edx, edx
0x5895ED: jz      short loc_589631
0x5895EF: nop
0x5895F0: cmp     edx, ecx
0x5895F2: jz      short loc_589600
0x5895F4: mov     esi, edx
0x5895F6: mov     edx, [edx+14h]
0x5895F9: test    edx, edx
0x5895FB: jnz     short loc_5895F0
0x5895FD: pop     edi
0x5895FE: pop     esi
0x5895FF: retn
0x589600: test    edx, edx
0x589602: jz      short loc_589631
0x589604: test    esi, esi
0x589606: mov     eax, [edx+14h]
0x589609: jz      short loc_58961E
0x58960B: mov     [esi+14h], eax
0x58960E: push    edx
0x58960F: mov     esi, eax
0x589611: call    FormHeapFree
0x589616: add     esp, 4
0x589619: pop     edi
0x58961A: mov     eax, esi
0x58961C: pop     esi
0x58961D: retn
0x58961E: mov     [edi+28h], eax
0x589621: mov     ecx, [ecx]
0x589623: mov     esi, [ecx+28h]
0x589626: push    edx
0x589627: call    FormHeapFree
0x58962C: add     esp, 4
0x58962F: mov     eax, esi
0x589631: pop     edi
0x589632: pop     esi
0x589633: retn
