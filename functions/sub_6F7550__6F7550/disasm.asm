0x6F7550: push    esi
0x6F7551: mov     esi, ecx
0x6F7553: mov     ecx, [esi+4Ch]
0x6F7556: test    ecx, ecx
0x6F7558: push    edi
0x6F7559: jz      short loc_6F75CA
0x6F755B: mov     edx, [esp+8+arg_0]
0x6F755F: test    edx, edx
0x6F7561: mov     edi, [esp+8+arg_4]
0x6F7565: jnz     short loc_6F7572
0x6F7567: test    edi, edi
0x6F7569: jnz     short loc_6F7572
0x6F756B: mov     eax, 4
0x6F7570: jmp     short loc_6F7574
0x6F7572: xor     eax, eax
0x6F7574: push    edi; int
0x6F7575: push    eax; int
0x6F7576: push    edx; int
0x6F7577: push    ecx; File
0x6F7578: call    unknown_libname_62
0x6F757D: add     esp, 10h
0x6F7580: test    eax, eax
0x6F7582: jnz     short loc_6F75CA
0x6F7584: mov     edi, [esi+4Ch]
0x6F7587: mov     ecx, esi
0x6F7589: mov     byte ptr [esi+48h], 1
0x6F758D: mov     [esi+41h], al
0x6F7590: call    sub_6F6F40
0x6F7595: test    edi, edi
0x6F7597: jz      short loc_6F75B1
0x6F7599: lea     eax, [edi+8]
0x6F759C: mov     [esi+10h], eax
0x6F759F: mov     [esi+14h], eax
0x6F75A2: lea     eax, [edi+4]
0x6F75A5: mov     [esi+20h], edi
0x6F75A8: mov     [esi+24h], edi
0x6F75AB: mov     [esi+30h], eax
0x6F75AE: mov     [esi+34h], eax
0x6F75B1: mov     [esi+4Ch], edi
0x6F75B4: mov     eax, ds:0B3F16Ch
0x6F75B9: mov     [esi+44h], eax
0x6F75BC: pop     edi
0x6F75BD: mov     dword ptr [esi+3Ch], 0
0x6F75C4: mov     eax, esi
0x6F75C6: pop     esi
0x6F75C7: retn    8
0x6F75CA: pop     edi
0x6F75CB: xor     eax, eax
0x6F75CD: pop     esi
0x6F75CE: retn    8
