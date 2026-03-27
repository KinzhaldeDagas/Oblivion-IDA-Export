0x7ED2A0: sub     esp, 8
0x7ED2A3: push    ebp
0x7ED2A4: mov     ebp, ecx
0x7ED2A6: mov     eax, [ebp+70h]
0x7ED2A9: test    eax, eax
0x7ED2AB: mov     [esp+0Ch+var_8], 0
0x7ED2B3: mov     [ebp+7Ch], eax
0x7ED2B6: jnz     short loc_7ED2BD
0x7ED2B8: pop     ebp
0x7ED2B9: add     esp, 8
0x7ED2BC: retn
0x7ED2BD: push    ebx
0x7ED2BE: push    esi
0x7ED2BF: push    edi
0x7ED2C0: mov     ecx, [eax]
0x7ED2C2: test    ecx, ecx
0x7ED2C4: mov     [ebp+7Ch], ecx
0x7ED2C7: mov     edi, [eax+8]
0x7ED2CA: jz      short loc_7ED301
0x7ED2CC: test    edi, edi
0x7ED2CE: jz      short loc_7ED301
0x7ED2D0: cmp     word ptr [edi+118h], 0FFh
0x7ED2D9: jz      short loc_7ED2FD
0x7ED2DB: lea     edx, [esp+18h+var_4]
0x7ED2DF: push    edx
0x7ED2E0: mov     ecx, edi
0x7ED2E2: call    sub_405AD0
0x7ED2E7: mov     eax, [eax]
0x7ED2E9: or      [esp+18h+var_8], 1
0x7ED2EE: test    byte ptr [eax+18h], 1
0x7ED2F2: jnz     short loc_7ED2FD
0x7ED2F4: cmp     byte ptr [edi+0F4h], 1
0x7ED2FB: jnz     short loc_7ED301
0x7ED2FD: mov     bl, 1
0x7ED2FF: jmp     short loc_7ED303
0x7ED301: xor     bl, bl
0x7ED303: test    byte ptr [esp+18h+var_8], 1
0x7ED308: jz      short loc_7ED333
0x7ED30A: mov     esi, [esp+18h+var_4]
0x7ED30E: and     [esp+18h+var_8], 0FFFFFFFEh
0x7ED313: test    esi, esi
0x7ED315: jz      short loc_7ED333
0x7ED317: lea     ecx, [esi+4]
0x7ED31A: push    ecx; lpAddend
0x7ED31B: call    dword ptr ds:0A2807Ch
0x7ED321: test    eax, eax
0x7ED323: jnz     short loc_7ED333
0x7ED325: test    esi, esi
0x7ED327: jz      short loc_7ED333
0x7ED329: mov     edx, [esi]
0x7ED32B: mov     eax, [edx]
0x7ED32D: push    1
0x7ED32F: mov     ecx, esi
0x7ED331: call    eax
0x7ED333: test    bl, bl
0x7ED335: jz      short loc_7ED33C
0x7ED337: mov     eax, [ebp+7Ch]
0x7ED33A: jmp     short loc_7ED2C0
0x7ED33C: test    edi, edi
0x7ED33E: jz      short loc_7ED371
0x7ED340: cmp     word ptr [edi+118h], 0FFh
0x7ED349: jz      short loc_7ED36D
0x7ED34B: lea     edx, [esp+18h+var_4]
0x7ED34F: push    edx
0x7ED350: mov     ecx, edi
0x7ED352: call    sub_405AD0
0x7ED357: mov     eax, [eax]
0x7ED359: or      [esp+18h+var_8], 2
0x7ED35E: test    byte ptr [eax+18h], 1
0x7ED362: jnz     short loc_7ED36D
0x7ED364: cmp     byte ptr [edi+0F4h], 1
0x7ED36B: jnz     short loc_7ED371
0x7ED36D: mov     bl, 1
0x7ED36F: jmp     short loc_7ED373
0x7ED371: xor     bl, bl
0x7ED373: test    byte ptr [esp+18h+var_8], 2
0x7ED378: jz      short loc_7ED39E
0x7ED37A: mov     esi, [esp+18h+var_4]
0x7ED37E: test    esi, esi
0x7ED380: jz      short loc_7ED39E
0x7ED382: lea     ecx, [esi+4]
0x7ED385: push    ecx; lpAddend
0x7ED386: call    dword ptr ds:0A2807Ch
0x7ED38C: test    eax, eax
0x7ED38E: jnz     short loc_7ED39E
0x7ED390: test    esi, esi
0x7ED392: jz      short loc_7ED39E
0x7ED394: mov     edx, [esi]
0x7ED396: mov     eax, [edx]
0x7ED398: push    1
0x7ED39A: mov     ecx, esi
0x7ED39C: call    eax
0x7ED39E: neg     bl
0x7ED3A0: sbb     ebx, ebx
0x7ED3A2: not     ebx
0x7ED3A4: and     ebx, edi
0x7ED3A6: pop     edi
0x7ED3A7: pop     esi
0x7ED3A8: mov     eax, ebx
0x7ED3AA: pop     ebx
0x7ED3AB: pop     ebp
0x7ED3AC: add     esp, 8
0x7ED3AF: retn
