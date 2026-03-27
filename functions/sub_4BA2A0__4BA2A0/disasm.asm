0x4BA2A0: push    esi
0x4BA2A1: mov     esi, ecx
0x4BA2A3: push    edi
0x4BA2A4: movzx   edi, word ptr [esi+52h]
0x4BA2A8: test    edi, edi
0x4BA2AA: jnz     short loc_4BA2B1
0x4BA2AC: pop     edi
0x4BA2AD: xor     eax, eax
0x4BA2AF: pop     esi
0x4BA2B0: retn
0x4BA2B1: push    0; Seed
0x4BA2B3: call    GetRandomLargeInteger?
0x4BA2B8: xor     edx, edx
0x4BA2BA: div     edi
0x4BA2BC: mov     eax, [esi+4Ch]
0x4BA2BF: add     esp, 4
0x4BA2C2: pop     edi
0x4BA2C3: pop     esi
0x4BA2C4: mov     eax, [eax+edx*4]
0x4BA2C7: retn
