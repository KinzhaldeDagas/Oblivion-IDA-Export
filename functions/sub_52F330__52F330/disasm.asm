0x52F330: push    ecx
0x52F331: push    ebp
0x52F332: lea     ebp, [ecx+28h]
0x52F335: mov     eax, ebp
0x52F337: xor     edx, edx
0x52F339: test    eax, eax
0x52F33B: jz      short loc_52F34F
0x52F33D: lea     ecx, [ecx+0]
0x52F340: cmp     dword ptr [eax], 0
0x52F343: jz      short loc_52F348
0x52F345: add     edx, 1
0x52F348: mov     eax, [eax+4]
0x52F34B: test    eax, eax
0x52F34D: jnz     short loc_52F340
0x52F34F: lea     eax, [edx-1]
0x52F352: test    eax, eax
0x52F354: jle     short loc_52F3B0
0x52F356: push    ebx
0x52F357: push    esi
0x52F358: mov     [esp+10h+var_4], eax
0x52F35C: push    edi
0x52F35D: lea     ecx, [ecx+0]
0x52F360: mov     eax, ebp
0x52F362: test    eax, eax
0x52F364: jz      short loc_52F3A6
0x52F366: mov     edi, [eax]
0x52F368: test    edi, edi
0x52F36A: jz      short loc_52F3A6
0x52F36C: mov     esi, [eax+4]
0x52F36F: test    esi, esi
0x52F371: jz      short loc_52F39F
0x52F373: mov     edx, [esi]
0x52F375: test    edx, edx
0x52F377: jz      short loc_52F39F
0x52F379: mov     ecx, [edi]
0x52F37B: test    ecx, ecx
0x52F37D: jz      short loc_52F385
0x52F37F: movzx   ebx, byte ptr [ecx+3Dh]
0x52F383: jmp     short loc_52F388
0x52F385: or      ebx, 0FFFFFFFFh
0x52F388: mov     ecx, [edx]
0x52F38A: test    ecx, ecx
0x52F38C: jz      short loc_52F394
0x52F38E: movzx   ecx, byte ptr [ecx+3Dh]
0x52F392: jmp     short loc_52F397
0x52F394: or      ecx, 0FFFFFFFFh
0x52F397: cmp     ecx, ebx
0x52F399: jle     short loc_52F39F
0x52F39B: mov     [eax], edx
0x52F39D: mov     [esi], edi
0x52F39F: mov     eax, [eax+4]
0x52F3A2: test    eax, eax
0x52F3A4: jnz     short loc_52F366
0x52F3A6: sub     [esp+14h+var_4], 1
0x52F3AB: jnz     short loc_52F360
0x52F3AD: pop     edi
0x52F3AE: pop     esi
0x52F3AF: pop     ebx
0x52F3B0: mov     al, 1
0x52F3B2: pop     ebp
0x52F3B3: pop     ecx
0x52F3B4: retn
