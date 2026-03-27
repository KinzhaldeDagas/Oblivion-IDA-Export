0x4E5A10: push    esi
0x4E5A11: mov     esi, ecx
0x4E5A13: mov     ecx, [esi+24h]
0x4E5A16: xor     eax, eax
0x4E5A18: test    ecx, ecx
0x4E5A1A: jz      short loc_4E5A38
0x4E5A1C: push    edi
0x4E5A1D: movzx   edi, word ptr [ecx+0Ah]
0x4E5A21: push    eax; Seed
0x4E5A22: call    GetRandomLargeInteger?
0x4E5A27: add     esp, 4
0x4E5A2A: xor     edx, edx
0x4E5A2C: div     edi
0x4E5A2E: mov     eax, [esi+24h]
0x4E5A31: mov     ecx, [eax+4]
0x4E5A34: pop     edi
0x4E5A35: mov     eax, [ecx+edx*4]
0x4E5A38: pop     esi
0x4E5A39: retn
