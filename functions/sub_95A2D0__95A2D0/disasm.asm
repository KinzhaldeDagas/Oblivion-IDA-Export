0x95A2D0: fldz
0x95A2D2: push    ebx
0x95A2D3: mov     ebx, [esp+4+arg_0]
0x95A2D7: push    esi
0x95A2D8: mov     esi, ecx
0x95A2DA: mov     dword ptr [esi], 0
0x95A2E0: mov     dword ptr [esi+4], 0
0x95A2E7: fst     dword ptr [esi+34h]
0x95A2EA: fst     dword ptr [esi+38h]
0x95A2ED: push    edi
0x95A2EE: fst     dword ptr [esi+3Ch]
0x95A2F1: fstp    dword ptr [esi+40h]
0x95A2F4: mov     edi, [esi]
0x95A2F6: cmp     edi, ebx
0x95A2F8: jz      short loc_95A32A
0x95A2FA: test    edi, edi
0x95A2FC: jz      short loc_95A31A
0x95A2FE: lea     eax, [edi+4]
0x95A301: push    eax; lpAddend
0x95A302: call    dword ptr ds:0A2807Ch
0x95A308: test    eax, eax
0x95A30A: jnz     short loc_95A31A
0x95A30C: test    edi, edi
0x95A30E: jz      short loc_95A31A
0x95A310: mov     edx, [edi]
0x95A312: mov     eax, [edx]
0x95A314: push    1
0x95A316: mov     ecx, edi
0x95A318: call    eax
0x95A31A: test    ebx, ebx
0x95A31C: mov     [esi], ebx
0x95A31E: jz      short loc_95A32A
0x95A320: add     ebx, 4
0x95A323: push    ebx; lpAddend
0x95A324: call    dword ptr ds:0A28078h
0x95A32A: mov     edi, [esi+4]
0x95A32D: test    edi, edi
0x95A32F: jz      short loc_95A354
0x95A331: lea     ecx, [edi+4]
0x95A334: push    ecx; lpAddend
0x95A335: call    dword ptr ds:0A2807Ch
0x95A33B: test    eax, eax
0x95A33D: jnz     short loc_95A34D
0x95A33F: test    edi, edi
0x95A341: jz      short loc_95A34D
0x95A343: mov     edx, [edi]
0x95A345: mov     eax, [edx]
0x95A347: push    1
0x95A349: mov     ecx, edi
0x95A34B: call    eax
0x95A34D: mov     dword ptr [esi+4], 0
0x95A354: pop     edi
0x95A355: mov     eax, esi
0x95A357: pop     esi
0x95A358: pop     ebx
0x95A359: retn    4
