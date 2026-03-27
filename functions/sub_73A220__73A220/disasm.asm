0x73A220: push    0FFFFFFFFh
0x73A222: push    offset SEH_73A220
0x73A227: mov     eax, large fs:0
0x73A22D: push    eax
0x73A22E: sub     esp, 8
0x73A231: push    ebx
0x73A232: push    ebp
0x73A233: push    esi
0x73A234: push    edi
0x73A235: mov     eax, ds:0B30AACh
0x73A23A: xor     eax, esp
0x73A23C: push    eax
0x73A23D: lea     eax, [esp+28h+var_C]
0x73A241: mov     large fs:0, eax
0x73A247: mov     ebp, ecx
0x73A249: mov     eax, [esp+28h+arg_4]
0x73A24D: mov     edi, [esp+28h+arg_0]
0x73A251: push    eax
0x73A252: push    edi
0x73A253: call    sub_70D050
0x73A258: movzx   edx, word ptr [ebp+12Eh]
0x73A25F: lea     ecx, [edi+124h]
0x73A265: push    edx
0x73A266: call    sub_6C4510
0x73A26B: movzx   eax, word ptr [ebp+132h]
0x73A272: xor     ebx, ebx
0x73A274: mov     [edi+132h], ax
0x73A27B: cmp     [ebp+12Eh], bx
0x73A282: jbe     loc_73A353
0x73A288: jmp     short loc_73A290
0x73A28A: align 10h
0x73A290: mov     eax, [ebp+128h]
0x73A296: mov     esi, [eax+ebx*4]
0x73A299: test    esi, esi
0x73A29B: lea     eax, [eax+ebx*4]
0x73A29E: mov     [esp+28h+var_10], esi
0x73A2A2: jz      short loc_73A2AE
0x73A2A4: lea     ecx, [esi+4]
0x73A2A7: push    ecx; lpAddend
0x73A2A8: call    dword ptr ds:0A28078h
0x73A2AE: xor     eax, eax
0x73A2B0: cmp     esi, eax
0x73A2B2: mov     [esp+28h+var_4], eax
0x73A2B6: jz      loc_73A413
0x73A2BC: mov     edx, [esi]
0x73A2BE: mov     eax, [esp+28h+arg_4]
0x73A2C2: mov     edx, [edx+18h]
0x73A2C5: push    eax
0x73A2C6: mov     ecx, esi
0x73A2C8: call    edx
0x73A2CA: mov     edi, eax
0x73A2CC: test    edi, edi
0x73A2CE: mov     [esp+28h+var_14], edi
0x73A2D2: jz      short loc_73A2DE
0x73A2D4: lea     eax, [edi+4]
0x73A2D7: push    eax; lpAddend
0x73A2D8: call    dword ptr ds:0A28078h
0x73A2DE: lea     ecx, [esp+28h+var_14]
0x73A2E2: push    ecx
0x73A2E3: mov     ecx, [esp+2Ch+arg_0]
0x73A2E7: push    ebx
0x73A2E8: add     ecx, 124h
0x73A2EE: mov     byte ptr [esp+30h+var_4], 1
0x73A2F3: call    sub_739810
0x73A2F8: test    edi, edi
0x73A2FA: mov     byte ptr [esp+28h+var_4], 0
0x73A2FF: jz      short loc_73A319
0x73A301: lea     edx, [edi+4]
0x73A304: push    edx; lpAddend
0x73A305: call    dword ptr ds:0A2807Ch
0x73A30B: test    eax, eax
0x73A30D: jnz     short loc_73A319
0x73A30F: mov     eax, [edi]
0x73A311: mov     edx, [eax]
0x73A313: push    1
0x73A315: mov     ecx, edi
0x73A317: call    edx
0x73A319: mov     edi, [esp+28h+arg_0]
0x73A31D: test    esi, esi
0x73A31F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x73A327: jz      short loc_73A341
0x73A329: lea     ecx, [esi+4]
0x73A32C: push    ecx; lpAddend
0x73A32D: call    dword ptr ds:0A2807Ch
0x73A333: test    eax, eax
0x73A335: jnz     short loc_73A341
0x73A337: mov     edx, [esi]
0x73A339: mov     eax, [edx]
0x73A33B: push    1
0x73A33D: mov     ecx, esi
0x73A33F: call    eax
0x73A341: movzx   ecx, word ptr [ebp+12Eh]
0x73A348: add     ebx, 1
0x73A34B: cmp     ebx, ecx
0x73A34D: jb      loc_73A290
0x73A353: movzx   edx, word ptr [ebp+13Eh]
0x73A35A: lea     ecx, [edi+134h]
0x73A360: push    edx
0x73A361: mov     [esp+2Ch+arg_0], ecx
0x73A365: call    sub_6C4510
0x73A36A: movzx   eax, word ptr [ebp+142h]
0x73A371: xor     ebx, ebx
0x73A373: mov     [edi+142h], ax
0x73A37A: cmp     [ebp+13Eh], bx
0x73A381: jbe     loc_73A484
0x73A387: jmp     short loc_73A390
0x73A389: align 10h
0x73A390: mov     eax, [ebp+138h]
0x73A396: mov     esi, [eax+ebx*4]
0x73A399: test    esi, esi
0x73A39B: lea     eax, [eax+ebx*4]
0x73A39E: mov     [esp+28h+var_10], esi
0x73A3A2: jz      short loc_73A3AE
0x73A3A4: lea     ecx, [esi+4]
0x73A3A7: push    ecx; lpAddend
0x73A3A8: call    dword ptr ds:0A28078h
0x73A3AE: test    esi, esi
0x73A3B0: mov     [esp+28h+var_4], 3
0x73A3B8: jz      short loc_73A432
0x73A3BA: mov     edx, [esi]
0x73A3BC: mov     eax, [esp+28h+arg_4]
0x73A3C0: mov     edx, [edx+18h]
0x73A3C3: push    eax
0x73A3C4: mov     ecx, esi
0x73A3C6: call    edx
0x73A3C8: mov     edi, eax
0x73A3CA: test    edi, edi
0x73A3CC: mov     [esp+28h+var_14], edi
0x73A3D0: jz      short loc_73A3DC
0x73A3D2: lea     eax, [edi+4]
0x73A3D5: push    eax; lpAddend
0x73A3D6: call    dword ptr ds:0A28078h
0x73A3DC: lea     ecx, [esp+28h+var_14]
0x73A3E0: push    ecx
0x73A3E1: mov     ecx, [esp+2Ch+arg_0]
0x73A3E5: push    ebx
0x73A3E6: mov     byte ptr [esp+30h+var_4], 4
0x73A3EB: call    sub_7395A0
0x73A3F0: test    edi, edi
0x73A3F2: mov     byte ptr [esp+28h+var_4], 3
0x73A3F7: jz      short loc_73A44E
0x73A3F9: lea     edx, [edi+4]
0x73A3FC: push    edx; lpAddend
0x73A3FD: call    dword ptr ds:0A2807Ch
0x73A403: test    eax, eax
0x73A405: jnz     short loc_73A44E
0x73A407: mov     eax, [edi]
0x73A409: mov     edx, [eax]
0x73A40B: push    1
0x73A40D: mov     ecx, edi
0x73A40F: call    edx
0x73A411: jmp     short loc_73A44E
0x73A413: mov     [esp+28h+var_14], eax
0x73A417: lea     eax, [esp+28h+var_14]
0x73A41B: push    eax
0x73A41C: push    ebx
0x73A41D: lea     ecx, [edi+124h]
0x73A423: mov     byte ptr [esp+30h+var_4], 2
0x73A428: call    sub_739810
0x73A42D: jmp     loc_73A31D
0x73A432: mov     [esp+28h+var_14], 0
0x73A43A: mov     ecx, [esp+28h+arg_0]
0x73A43E: lea     eax, [esp+28h+var_14]
0x73A442: push    eax
0x73A443: push    ebx
0x73A444: mov     byte ptr [esp+30h+var_4], 5
0x73A449: call    sub_7395A0
0x73A44E: test    esi, esi
0x73A450: mov     [esp+28h+var_4], 0FFFFFFFFh
0x73A458: jz      short loc_73A472
0x73A45A: lea     ecx, [esi+4]
0x73A45D: push    ecx; lpAddend
0x73A45E: call    dword ptr ds:0A2807Ch
0x73A464: test    eax, eax
0x73A466: jnz     short loc_73A472
0x73A468: mov     edx, [esi]
0x73A46A: mov     eax, [edx]
0x73A46C: push    1
0x73A46E: mov     ecx, esi
0x73A470: call    eax
0x73A472: movzx   ecx, word ptr [ebp+13Eh]
0x73A479: add     ebx, 1
0x73A47C: cmp     ebx, ecx
0x73A47E: jb      loc_73A390
0x73A484: mov     ecx, [esp+28h+var_C]
0x73A488: mov     large fs:0, ecx
0x73A48F: pop     ecx
0x73A490: pop     edi
0x73A491: pop     esi
0x73A492: pop     ebp
0x73A493: pop     ebx
0x73A494: add     esp, 14h
0x73A497: retn    8
