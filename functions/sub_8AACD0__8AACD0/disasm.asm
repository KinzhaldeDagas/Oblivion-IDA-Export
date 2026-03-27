0x8AACD0: push    ecx
0x8AACD1: push    ebp
0x8AACD2: mov     ebp, [esp+8+arg_0]
0x8AACD6: push    esi
0x8AACD7: push    edi
0x8AACD8: push    ebp
0x8AACD9: mov     edi, ecx
0x8AACDB: call    sub_716050
0x8AACE0: mov     eax, [edi+50h]
0x8AACE3: push    1
0x8AACE5: lea     ecx, [esp+14h+var_4]
0x8AACE9: push    ecx
0x8AACEA: mov     [esp+18h+arg_0], eax
0x8AACEE: mov     eax, [ebp+220h]
0x8AACF4: push    4
0x8AACF6: lea     edx, [esp+1Ch+arg_0]
0x8AACFA: push    edx
0x8AACFB: push    eax
0x8AACFC: mov     eax, [eax+8]
0x8AACFF: mov     [esp+24h+var_4], 4
0x8AAD07: call    eax
0x8AAD09: xor     esi, esi
0x8AAD0B: add     esp, 14h
0x8AAD0E: cmp     [esp+10h+arg_0], esi
0x8AAD12: jbe     short loc_8AAD53
0x8AAD14: push    ebx
0x8AAD15: xor     ebx, ebx
0x8AAD17: jmp     short loc_8AAD20
0x8AAD19: align 10h
0x8AAD20: mov     edx, [edi+44h]
0x8AAD23: mov     eax, [ebp+220h]
0x8AAD29: push    1
0x8AAD2B: lea     ecx, [esp+18h+var_4]
0x8AAD2F: push    ecx
0x8AAD30: push    0Ch
0x8AAD32: add     edx, ebx
0x8AAD34: push    edx
0x8AAD35: push    eax
0x8AAD36: mov     eax, [eax+8]
0x8AAD39: mov     [esp+28h+var_4], 0Ch
0x8AAD41: call    eax
0x8AAD43: add     esi, 1
0x8AAD46: add     esp, 14h
0x8AAD49: add     ebx, 0Ch
0x8AAD4C: cmp     esi, [esp+14h+arg_0]
0x8AAD50: jb      short loc_8AAD20
0x8AAD52: pop     ebx
0x8AAD53: pop     edi
0x8AAD54: pop     esi
0x8AAD55: pop     ebp
0x8AAD56: pop     ecx
0x8AAD57: retn    4
