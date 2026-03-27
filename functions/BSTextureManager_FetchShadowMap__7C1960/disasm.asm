0x7C1960: push    0FFFFFFFFh
0x7C1962: push    offset BSTextureManager_FetchShadowMap_SEH
0x7C1967: mov     eax, large fs:0
0x7C196D: push    eax
0x7C196E: sub     esp, 8
0x7C1971: push    ebp
0x7C1972: push    esi
0x7C1973: push    edi
0x7C1974: mov     eax, ds:0B30AACh
0x7C1979: xor     eax, esp
0x7C197B: push    eax
0x7C197C: lea     eax, [esp+24h+var_C]
0x7C1980: mov     large fs:0, eax
0x7C1986: mov     edi, ecx
0x7C1988: xor     esi, esi
0x7C198A: mov     [esp+24h+var_14], esi
0x7C198E: mov     eax, [edi+2Ch]
0x7C1991: test    eax, eax
0x7C1993: mov     ebp, ds:0A2807Ch
0x7C1999: mov     [esp+24h+var_4], esi
0x7C199D: jbe     short loc_7C19F3
0x7C199F: lea     eax, [esp+24h+var_10]
0x7C19A3: push    eax
0x7C19A4: lea     ecx, [edi+20h]
0x7C19A7: call    sub_7C1740
0x7C19AC: push    eax
0x7C19AD: lea     ecx, [esp+28h+var_14]
0x7C19B1: mov     byte ptr [esp+28h+var_4], 1
0x7C19B6: call    sub_55E2A0
0x7C19BB: mov     eax, [esp+24h+var_10]
0x7C19BF: test    eax, eax
0x7C19C1: mov     byte ptr [esp+24h+var_4], 0
0x7C19C6: jz      short loc_7C19E2
0x7C19C8: mov     esi, eax
0x7C19CA: add     eax, 4
0x7C19CD: push    eax; lpAddend
0x7C19CE: call    ebp ; InterlockedDecrement
0x7C19D0: test    eax, eax
0x7C19D2: jnz     short loc_7C19E2
0x7C19D4: test    esi, esi
0x7C19D6: jz      short loc_7C19E2
0x7C19D8: mov     edx, [esi]
0x7C19DA: mov     eax, [edx]
0x7C19DC: push    1
0x7C19DE: mov     ecx, esi
0x7C19E0: call    eax
0x7C19E2: lea     ecx, [esp+24h+var_14]
0x7C19E6: push    ecx
0x7C19E7: lea     ecx, [edi+30h]
0x7C19EA: call    sub_7C16B0
0x7C19EF: mov     esi, [esp+24h+var_14]
0x7C19F3: test    esi, esi
0x7C19F5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C19FD: jz      short loc_7C1A13
0x7C19FF: lea     edx, [esi+4]
0x7C1A02: push    edx; lpAddend
0x7C1A03: call    ebp ; InterlockedDecrement
0x7C1A05: test    eax, eax
0x7C1A07: jnz     short loc_7C1A13
0x7C1A09: mov     eax, [esi]
0x7C1A0B: mov     edx, [eax]
0x7C1A0D: push    1
0x7C1A0F: mov     ecx, esi
0x7C1A11: call    edx
0x7C1A13: mov     eax, esi
0x7C1A15: mov     ecx, dword ptr [esp+24h+var_C]
0x7C1A19: mov     large fs:0, ecx
0x7C1A20: pop     ecx
0x7C1A21: pop     edi
0x7C1A22: pop     esi
0x7C1A23: pop     ebp
0x7C1A24: add     esp, 14h
0x7C1A27: retn
