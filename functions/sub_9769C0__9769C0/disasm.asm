0x9769C0: mov     edx, [esp+arg_0]
0x9769C4: cmp     ecx, edx
0x9769C6: jnz     short loc_9769CD
0x9769C8: xor     eax, eax
0x9769CA: retn    20h ; ' '
0x9769CD: mov     eax, [ecx+8]
0x9769D0: mov     ecx, [ecx+50h]
0x9769D3: push    ebx
0x9769D4: mov     ebx, [esp+4+arg_1C]
0x9769D8: push    esi
0x9769D9: mov     esi, [edx+50h]
0x9769DC: push    edi
0x9769DD: mov     edi, [eax]
0x9769DF: mov     edx, [edx+8]
0x9769E2: push    ebx
0x9769E3: push    esi
0x9769E4: push    ecx
0x9769E5: mov     ecx, [esp+18h+arg_18]
0x9769E9: push    ecx
0x9769EA: mov     ecx, [esp+1Ch+arg_14]
0x9769EE: push    ecx
0x9769EF: mov     ecx, [esp+20h+arg_10]
0x9769F3: push    ecx
0x9769F4: mov     ecx, [esp+24h+arg_C]
0x9769F8: push    ecx
0x9769F9: mov     ecx, [esp+28h+arg_8]
0x9769FD: push    ecx
0x9769FE: mov     ecx, [esp+2Ch+arg_4]
0x976A02: push    ecx
0x976A03: mov     ecx, eax
0x976A05: mov     eax, [edi+0Ch]
0x976A08: push    edx
0x976A09: call    eax
0x976A0B: pop     edi
0x976A0C: pop     esi
0x976A0D: pop     ebx
0x976A0E: retn    20h ; ' '
